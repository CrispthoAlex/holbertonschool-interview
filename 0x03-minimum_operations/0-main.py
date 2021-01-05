#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 1
print("Min number of operations to reach {} characters: {}".format(
        n, minOperations(n)))

n = 4
print("Min number of operations to reach {} characters: {}".format(
        n, minOperations(n)))

n = 12
print("Min number of operations to reach {} characters: {}".format(
        n, minOperations(n)))

n = 23
print("Min number of operations to reach {} characters: {}".format(
        n, minOperations(n)))

"""
Output:

Min number of operations to reach 1 characters: 0
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
Min number of operations to reach 23 characters: 23
"""
