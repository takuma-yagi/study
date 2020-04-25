import unittest

def check(char1, char2):
    if len(char1) == len(char2):
        check_change(char1, char2)
    elif len(char1) > len(char2):
        check_insert(char1, char2)
    else:
        check_insert(char2, char1)


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
    if len(char1) - len(char2) == 2:
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


class Test(unittest.TestCase):

    def test_check(self):
        dataT = ('abcde', 'adbec')
        dataF1 = ('abccde', 'abcde')
        dataF2 = ('akasaka', 'sasazuka')

        actual1 = check(dataT[0], dataT[1])
        self.assertTrue(actual)

        actual2 = check(dataF1[0], dataF1[1])
        self.assertFalse(actual)

        actual3 = check(dataF2[0], dataF2[1])
        self.assertFalse(actual)

        
if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
