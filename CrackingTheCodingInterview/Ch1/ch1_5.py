import unittest

def check_change(char1, char2):
    counter = 0
    num = len(char1)
    for i in range(num):
        if char1[i] != char2[i]:
            counter += 1
    if counter >= 2:
        return False
    return True

def check_insert(char1, char2):
    hash = []
    for i in char1:


if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
