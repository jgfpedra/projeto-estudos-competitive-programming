import requests
import os
import random


def write_problems(problems):
    PATH = "text/problems.txt"
    with open(PATH, "a") as f:
        for problem in problems:
            link = problem.get("link") + "\n"
            f.write(link)


def fetch_problems(min_rating, max_rating, count=3, existing_links=None):
    if existing_links is None:
        existing_links = set()

    url = "https://codeforces.com/api/problemset.problems"
    response = requests.get(url)
    data = response.json()
    if data['status'] != 'OK':
        raise Exception("Error fetching problems from Codeforces")

    problems = data['result']['problems']

    # Filter by rating
    filtered = [
        problem for problem in problems
        if min_rating <= problem.get('rating', 0) <= max_rating
    ]

    # Shuffle the list to get random problems
    random.shuffle(filtered)

    selected = []
    for problem in filtered:
        link = f"https://codeforces.com/problemset/problem/{problem['contestId']}/{problem['index']}"
        if link not in existing_links:
            selected.append({
                'name': problem['name'],
                'rating': problem.get('rating', 'N/A'),
                'link': link
            })
        if len(selected) >= count:
            break

    return selected

def read_existing_links(file_path):
    if os.path.exists(file_path):
        with open(file_path, 'r') as file:
            return set(line.strip() for line in file)
    return set()
def append_to_file(file_path, links):
    with open(file_path, 'a') as file:
        for link in links:
            file.write(link + '\n')
def main():
    min_rating = 800
    max_rating = 1200
    count = 3
    file_path = 'text/problems.txt'
    problems = fetch_problems(min_rating, max_rating, count)
    existing_links = read_existing_links(file_path)
    new_problems = []
    new_links = []
    for problem in problems:
        link = problem['link']
        if link not in existing_links:
            new_problems.append(problem)
            new_links.append(link)
    if new_problems:
        append_to_file(file_path, new_links)
        for idx, problem in enumerate(new_problems, start=1):
            print(f"Problem {idx}:")
            print(f"  Name: {problem['name']}")
            print(f"  Rating: {problem['rating']}")
            print(f"  Link: {problem['link']}")
            print()
        write_problems(problems)
    else:
        print("No new problems found.")


if __name__ == "__main__":
    main()
