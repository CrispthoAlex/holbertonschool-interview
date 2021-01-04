#!/usr/bin/python3
from collections import Counter
# Given a number n, write a method that calculates
# the fewest number of operations needed to result
# in exactly n H characters in the file. 


def minOperations(n):
    # Method to calculate
    # the fewest number of operations needed to result
    # in exactly n H characters in a file
    file  = open("textfile.txt", "w");
    minOper = 0;
    for line in file:
        if n % Counter(line) == 0:
            file.write(line);
            minOper += 1;
        else:
            file.close();
            file  = open("textfile.txt", "a");
            file.write(line);
            minOper += 1;
        if Counter(line) == n:
            break;
        if Counter(line) >= n:
            file.close();        
            return 0;
    file.close();

    return minOper

if __name__ == "__main__":
    minOperations(n)