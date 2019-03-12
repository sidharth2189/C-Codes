## Given a list of integers, the function below finds consecutive, non-empty subsequence with the highest _sum_.(largest contigious sum)
def max_sum(arr):
    # Variable to keep track of maximum sum of traversed elements at each step
    maximum_sum = -1

    # Variable to compare sum of traversed elements at each step
    current_sum = 0

    # Loop through each element of the sequence
    for index in range(0, len(arr)):
        current_sum = current_sum + arr[index]

        # Compare current sum at each step with maximum value of it so far 
        if (maximum_sum < current_sum):
            maximum_sum = current_sum

        # If current sum is less than zero start afresh from that step
        if (current_sum < 0):
            current_sum = 0

    return maximum_sum

## ----------------------------------------------------------------------------------------------------------------------------------------------------------------

## Function below finds largest contagious sum, give that the input is extended by a second parameter `n` that restricts the maximum length of the subsequence to n.
def max_sum_restricted(arr, n):
    # Variable to keep track of maximum sum of traversed elements at each step
    maximum_sum = -1

    # Variable to shift start point of a subsequence
    start = 0

    # Check if restricted length is less than size of array
    while (n < len(arr)):
        # Variable to compare sum of traversed elements at each step
        current_sum = 0

        # Loop through each element of the sequence
        for index in range(start, n):
            current_sum = current_sum + arr[index]

            # Compare current sum at each step with maximum value of it so far 
            if (maximum_sum < current_sum):
                maximum_sum = current_sum

            # If current sum is less than zero start afresh from that step
            if (current_sum < 0):
                current_sum = 0
                
        # increment start and end points of sequence
        n = n + 1
        start = start + 1

    return maximum_sum

## ----------------------------------------------------------------------------------------------------------------------------------------------------------------

## Input 1

# Read input file
with open('data/input_1.txt', 'r') as f:
    data = f.read()

array = [int(i) for i in data.split()]

# Find largest contagious sum
maximum_sum = max_sum(array)

# Find largest contagious sum subject to restriction in length of sequence
restriction = 2
restricted_maximum_sum = max_sum_restricted(array, restriction)

print('find_subsequence.py data/input_1.txt')
print('---------------------------------------------------------')
print('Largest contagious sum is')
print(maximum_sum)
print('Highest sum while maximum Length of subsequence allowed in data/input_1.txt is restricted to n = 2, is')
print(restricted_maximum_sum)
print('')

## Input 2-------------------------------------------------------------------------------------------------------

# Read input file
with open('data/input_2.txt', 'r') as f:
    data = f.read()

array = [int(i) for i in data.split()]

# Find largest contagious sum
maximum_sum = max_sum(array)

# Find largest contagious sum subject to restriction in length of sequence
restriction = 2
restricted_maximum_sum = max_sum_restricted(array, restriction)

print('find_subsequence.py data/input_2.txt')
print('---------------------------------------------------------')
print('Largest contagious sum is')
print(maximum_sum)
print('Highest sum while maximum Length of subsequence allowed in data/input_2.txt is restricted to n = 2, is')
print(restricted_maximum_sum)
print('')

## Input 3-------------------------------------------------------------------------------------------------------

# Read input file
with open('data/input_3.txt', 'r') as f:
    data = f.read()

array = [int(i) for i in data.split()]

# Find largest contagious sum
maximum_sum = max_sum(array)

# Find largest contagious sum subject to restriction in length of sequence
restriction = 2
restricted_maximum_sum = max_sum_restricted(array, restriction)

print('find_subsequence.py data/input_3.txt')
print('---------------------------------------------------------')
print('Largest contagious sum is')
print(maximum_sum)
print('Highest sum while maximum Length of subsequence allowed in data/input_3.txt is restricted to n = 2, is')
print(restricted_maximum_sum)
