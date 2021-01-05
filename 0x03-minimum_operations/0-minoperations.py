#!/usr/bin/python3
"""
Given a number n, write a method that calculates
the fewest number of operations needed to result
in exactly n H characters in the file.
"""


def minOperations(n):
    """ Method to calculate
    the fewest number of operations needed to result
    in exactly n H characters in a file
    @minOper: Minimun operations needed
    @numChar: Number of characters in the line
    @copyChar: Characters copied to append
    Return: minOper, if it is not possible 0
    """
    minOper = 0
    numChar = copyChar = 1

    if n <= 1:
        return minOper

    for num in range(n):
        if n % numChar == 0:  # Copy All and Paste
            copyChar = numChar  # Copy All
            numChar += copyChar  # Paste
            minOper += 2
        else:  # Only Paste
            numChar += copyChar
            minOper += 1
        if numChar == n:
            break
        if minOper > n:
            return 0
    return minOper
