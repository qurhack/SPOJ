# https://pl.spoj.com/problems/KC022/

from sys import stdin

for line in stdin:
    line = line.split(' ') # make list out of stdin, each element should be divided by space
    nums = [int(num) for num in line] # convert line (list of str) to nums (list of ints)

    OrderIndicator = int(nums[0]) # separate order indicator...
    del nums[0] # ...and remove it from array

    nums = list(dict.fromkeys(nums)) # remove duplicates from nums list
    nums.sort() # sort nums list ascending

    if OrderIndicator > len(nums):
        print("-")
    else:
        print(nums[len(nums)-OrderIndicator])
