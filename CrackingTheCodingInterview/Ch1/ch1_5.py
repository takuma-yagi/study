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
    index1 = 0
    index2 = 0
    if len(char1) < len(char2):
        tmp = char1
        char1 = char2
        char2 = tmp
    elif len(char1) - len(char2) == 2:
        return False
    else:
        while index1 < len(char1) && index2 < len(char2):
            if char1[index1] != char2[index2]:
                if index1 != index2:
                    return False
                else:
                    index2 += 1
            index1 += 1
            index2 += 1
        return True

if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
