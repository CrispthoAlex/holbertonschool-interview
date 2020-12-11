#!/usr/bin/python3
# Method that determines if all the boxes can be opened


def uniquekeys(boxes, allkeys):
    res = []
    # Print the length of allkeys and boxes
    # print("\nLenght of allkeys[pos:]= {}\nAnd allkeys = {}".format(len(allkeys), allkeys))
    # print("Boxes Length = ", len(boxes))
    for k, e in enumerate(allkeys):
        # print("\nk = {}, e = {}".format(k, e))
        # print("\tValue in k = ", boxes[k])
        if e < len(boxes):
            res += boxes[e]
    return res


def canUnlockAll(boxes):
    pos = 0
    allkeys = list(set(boxes[0]) | {0})
    adding = True
    # print("\n\nPrint allkeys ", allkeys)
    while adding:
        adding = False
        for j in uniquekeys(boxes, allkeys[pos:]):
            if j not in allkeys:
                allkeys.append(j)
                pos += 1
                adding = True
    # There is one key for each box or more keys that boxes
    # print([i for i in sorted(allkeys)])
    return len(allkeys) >= len(boxes)
