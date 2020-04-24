import unittest

def URLify(char):
    lst = list(char.split())
    return '%20'.join(lst)

def replaceSpace(char):
    

class Test(unittest.TestCase):

    def test_URLify(self):
        test_char = 'I am a boy'
        actual = URLify(test_char)
        expected = 'I%20am%20a%20boy'

        self.assertEqual(actual, expected)


if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
