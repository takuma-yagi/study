import unittest

#Suppose ASCII

def IsUnique(string):
    if len(string) > 128:
        return False

    seen = [False for i in range(128)]
    for s in string:
        val = ord(s)
        if seen[val]:
            return False
        seen[val] = True

    return True


class Test(unittest.TestCase):

    def test_IsUnique(self):
        dataT = 'abcd'
        dataF = '9dff09'

        actual = unique(dataT)
        self.assertTrue(actual)

        actual = unique(dataF)
        self.assertFalse(actual)

if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)

""
Case when new data structure is unavailable
""
