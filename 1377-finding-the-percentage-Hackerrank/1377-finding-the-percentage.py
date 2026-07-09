if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    # 1. Extract the list of scores for the queried student
    query_scores = student_marks[query_name]
    
    # 2. Calculate the average
    average_score = sum(query_scores) / len(query_scores)
    
    # 3. Print formatted to 2 decimal places
    print(f"{average_score:.2f}")


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna