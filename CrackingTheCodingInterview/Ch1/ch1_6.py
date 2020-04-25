import unittest

def compress(char):
    compressed = ""
    count = 0
    for i in range(len(char)):
        count += 1
        if char[i] != char[i + 1]:
            compressed += char[i] + str(count)
            count = 0
    if len(compressed) <= len(str):
        return compressed
    else:
        return str


class Test(unittest.TestCase):

    def test_compress(self):
        data1 = 'aaabbccdd'
        actual1 = compress(data1)
        expected1 = 'a3b2c2d2'


        data2 = 'abcdde'
        actual2 = compress(data2)
        expected2 = 'abcdde'
        self.assertEqual(actual2, expected2)

        

if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)
