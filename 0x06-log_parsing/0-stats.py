#!/usr/bin/python3
"""
    This script reads stdin line by line and computes metrics
    Ex:
    75.19.22.171 - [2021-01-27 06:08:07.269753]...
        ... "GET /projects/260 HTTP/1.1" 500 844
"""
import sys


def print_stats(filesize, codeKey):
    """ Method to Print Stats about Status code """
    print("File size: {}".format(filesize))
    for key, val in sorted(codeKey.items()):
        if val != 0:
            print("{}: {}".format(key, val))

if __name__ == "__main__":
    filesize = 0
    countLine = 0
    # Dictionary to save status code counters
    codeKey = {
        200: 0, 301: 0, 400: 0, 401: 0, 403: 0, 404: 0, 405: 0, 500: 0
    }
    try:
        for line in sys.stdin:
            line = line.split()

            # Empty line or new line ("\n")
            if len(line) >= 2:

                if int(line[-2]) in codeKey.keys():  # Check Status code
                    codeKey[int(line[-2])] += 1  # Updating value

                countLine += 1
                filesize += int(line[-1])
                
                if not countLine % 10:
                    print_stats(filesize, codeKey)
        # Print the stats generated without the correct line
        print_stats(filesize, codeKey)
    except KeyboardInterrupt:
        print_stats(filesize, codeKey)
        raise
