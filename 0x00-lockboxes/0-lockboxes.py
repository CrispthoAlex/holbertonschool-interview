#!/usr/bin/python3
# Method that determines if all the boxes can be opened


def uniquekeys(boxes, allkeys):
    res = []
    for e in allkeys:
        if e < len(boxes):
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
    # A key with the same number as a box opens that box
    for index, box in enumerate(boxes):
        if index not in allkeys:
            return False
    # There can be more keys
    return len(allkeys) >= len(boxes)
