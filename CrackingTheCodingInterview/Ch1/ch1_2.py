import unittest

def perm_check(str1, str2):
    if len(str1) != len(str2):
        return False

    hash_str1 = [0 for i in range(128)]
    hash_str2 = [0 for i in range(128)]
    for s in str1:
        val = ord(s)
        hash_str1[val] += 1
    for s in str2:
        val = ord(s)
        hash_str2[val] += 1
    return hash_str1 == hash_str2



class Test(unittest.TestCase):

    def test_perm_check(self):
        dataT = ['abcde', 'adcbe']
        dataF = ['aabcde', 'abbdce']

        actual = perm_check(dataT[0], dataT[1])
        self.assertTrue(actual)

        actual = perm_check(dataF[0], dataF[1])
        self.assertFalse(actual)


if __name__ == "__main__":
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
