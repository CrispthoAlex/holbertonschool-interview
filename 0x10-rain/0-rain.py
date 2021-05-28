#!/usr/bin/python3
"""
Given a list of non-negative integers representing walls of width 1.
"""


def rain(walls):
    """ Return the Integer indicating total amount of rainwater retained"""
    if (len(walls) <= 2):
        return(0)

    waterQty = 0

    for i in range(1, len(walls) - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])

        right = walls[i]
        for k in range(i + 1, len(walls)):
            right = max(right, walls[k])

        waterQty += min(left, right) - walls[i]

    return waterQty
