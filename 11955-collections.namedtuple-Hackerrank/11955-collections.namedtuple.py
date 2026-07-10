from collections import namedtuple

if __name__ == '__main__':
    # Read total number of students
    num_students = int(input())
    
    # Read the column headers and create the namedtuple factory
    Student = namedtuple('Student', input().split())
    
    # Unpack columns directly into the namedtuple, extract 'MARKS', and average them
    total_marks = sum(int(getattr(Student(*input().split()), 'MARKS')) for _ in range(num_students))
    
    # Print the average formatted to 2 decimal places
    print(f"{total_marks / num_students:.2f}")


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna