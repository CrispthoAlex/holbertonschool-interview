#!/usr/bin/python3
import sys

filesize = 0
countLine = 0
# Status code Counters
c200 = c300 = c301 = c400 = c401 = c403 = c404 = c405 = c500 = 0
# Dictionary to save status code counters
codeKey = { 200:0, 300:0, 301:0, 400:0, 401:0, 403:0, 404:0, 405:0, 500:0 }

for line in sys.stdin:
    line = line.split()
    countLine += 1
    filesize += int(line[8])

    for key, val in codeKey.items():
        if str(key) == line[7]:
            val = val + 1
            codeKey.update({key: val})

    if countLine % 10 == 0:  # or KeyboardInterrupt('CTRL + C')
        print("File size: {}".format(filesize))
        for key, val in codeKey.items():
            print(key, ": ", val)
