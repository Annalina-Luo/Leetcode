import math
from collections import Counter


class MySolution(object):
    def rearrangeCharacters(self, s, target):
        """
        :type s: str
        :type target: str
        :rtype: int

        time complexity: O(n^2)
        """
        # create a dic for target to count each item
        d_target = {}
        for i in target:
            if i not in d_target.keys():
                d_target[i] = 1
            else:
                d_target[i] += 1
        print(d_target)

        # create a dic for s to count each item
        d_s = {}
        for i in s:
            if i not in d_s.keys():
                d_s[i] = 1
            else:
                d_s[i] += 1
        print(d_s)

        count = len(s)
        for j in d_target.keys():
            if j not in d_s.keys():
                # the item in target not in s, then return 0 dirctly
                return 0
            else:
                c = d_s[j]/d_target[j]
                if c < count:
                    count = c
        return count


class Py3Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        ans = math.inf
        cnt_s = Counter(s)
        for c, cnt in Counter(target).items():
            ans = min(ans, cnt_s[c] // cnt)
            if ans == 0:
                return 0
        return ans


if __name__ == '__main__':
    sol1 = MySolution()
    sol2 = Py3Solution()
    s1 = "ilovecodingonleetcode"
    target1 = "code"
    s2 = "abcba"
    target2 = "abc"
    s3 = "abbaccaddaeea"
    target3 = "aaaaa"
    s4 = "abc"
    target4 = "abcd"

    print(sol2.rearrangeCharacters(s4, target4))
