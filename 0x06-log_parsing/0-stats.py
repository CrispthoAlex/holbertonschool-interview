#!/usr/bin/python3
"""
    This script reads stdin line by line and computes metrics
    Ex:
    75.19.22.171 - [2021-01-27 06:08:07.269753]...
        ... "GET /projects/260 HTTP/1.1" 500 844
"""
import sys


if __name__ == "__main__":
    filesize = 0
    countLine = 0
    # Dictionary to save status code counters
    codeKey = {
        '200': 0, '301': 0, '400': 0, '401': 0, '403': 0, '404': 0, '405': 0, '500': 0
    }

    def print_stats(filesize, codeKey):
        """ Method to Print Stats about Status code """
        print("File size: {:d}".format(filesize))
        for key in sorted(codeKey.keys()):
            if codeKey[key] != 0:
                print("{}: {:d}".format(key, codeKey[key]))

    try:
        for line in sys.stdin:
            line = line.split()

            # Empty line or new line ("\n")
            if len(line) >= 2:

                if line[-2] in codeKey.keys():  # Check Status code
                    codeKey[line[-2]] += 1  # Updating value

                filesize += int(line[-1])
                countLine += 1

                if not countLine % 10:
                    print_stats(filesize, codeKey)
        # Print the stats generated without the correct line
        print_stats(filesize, codeKey)
    except KeyboardInterrupt:
        print_stats(filesize, codeKey)
        raise
