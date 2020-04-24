import unittest


def IsPerm(char):

    if len(char) % 2 == 0:
        count = len(char) // 2
    else:
        count = (len(char) - 1) // 2

    for i in range(count):
        pointer_head = char[i]
        pointer_tail = char[-(i + 1)]
        if pointer_head != pointer_tail:
            return False
    return True



class Test(unittest.TestCase):

    def test_IsPerm(self):
        dataT = ['akasaka', 'abccba']
        dataF = ['roppongi', 'abcabc']

        for t in dataT:
            actual = IsPerm(t)
            self.assertTrue(actual)

        for t in dataF:
            actual = IsPerm(t)
            self.assertFalse(actual)

if __name__ == '__main__':
    unittest.main(argv=['first-arg-is-ignored'], exit=False)


#javaと同じ書き方！
def Isperm(phrase):
    table = [ord(i) for i in phrase]
    return foundodd(table)

def foundodd(table):
    odd = False
    for i in table:
        if i % 2 == 0:
            if odd:
                return False
            odd = True
        return True
