#!/usr/bin/python3
"""
    Method that determines if a given data set represents a valid
    UTF-8 encoding.
"""


def validUTF8(data):
    """
        Checks if a data set represents a valid UTF-8 encoding.
        @data: data set to valid UTF-8 encoding
    """
    # Clean byte of anything beyond 8 least significant bits
    clearByte = [initByte & 0b11111111 for initByte in data]

    # byte type
    byte = bytes(clearByte)

    try:
        byte.decode()
    except UnicodeDecodeError:
        # Decoding fails
        return False

    return True
