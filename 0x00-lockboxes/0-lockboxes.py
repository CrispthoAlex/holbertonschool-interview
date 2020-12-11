#!/usr/bin/python3
# Method that determines if all the boxes can be opened


def uniquekeys(boxes, allkeys):
    res = []
    for e in allkeys:
        res += boxes[e]
    return res


def canUnlockAll(boxes):
    pos = 0
    allkeys = list(set(boxes[0]) | {0})
    adding = True

    while adding:
        adding = False
        for j in uniquekeys(boxes, allkeys[pos:]):
            if j not in allkeys:
                allkeys.append(j)
                pos += 1
                adding = True

    # There is one key for one box
    return len(allkeys) == len(boxes)
