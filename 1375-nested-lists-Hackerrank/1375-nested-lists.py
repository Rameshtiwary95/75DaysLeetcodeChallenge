if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])
        
    # Get a sorted list of unique scores
    unique_scores = sorted(list(set([score for name, score in students])))
    
    # The second element (index 1) is the second lowest score
    second_lowest_score = unique_scores[1]
    
    # Filter out students with the second lowest score and sort their names
    runner_ups = sorted([name for name, score in students if score == second_lowest_score])
    
    # Print each name on a new line
    for name in runner_ups:
        print(name)


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna