from itertools import groupby

if __name__ == '__main__':
    # Read the input string
    s = input().strip()
    
    # Group consecutive elements
    # key: the character itself
    # group: an iterator containing the consecutive occurrences
    compressed = [(len(list(group)), int(key)) for key, group in groupby(s)]
    
    # Print the results separated by spaces
    print(*(compressed))


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna