from collections import defaultdict
import sys

if __name__ == '__main__':
    # Read all inputs from standard input
    input_data = sys.stdin.read().splitlines()
    
    if not input_data:
        exit()
        
    # Parse n and m from the first line
    n, m = map(int, input_data[0].split())
    
    # Use a defaultdict of lists to store indices for each word in Group A
    group_a = defaultdict(list)
    
    # Populate Group A words with their 1-indexed positions
    for i in range(1, n + 1):
        word = input_data[i]
        group_a[word].append(i)
        
    # Process Group B words and print the results
    for j in range(n + 1, n + m + 1):
        word = input_data[j]
        if word in group_a:
            print(*(group_a[word]))
        else:
            print(-1)


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna