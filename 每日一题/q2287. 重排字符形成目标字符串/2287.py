class Solution(object):
    def rearrangeCharacters(self, s, target):
        """
        :type s: str
        :type target: str
        :rtype: int
        """
        count = 0
        i = 0
        j = 0
        while i <= len(s)-len(target):
            if s[i] not in target:
                i += 1
            else:
                # print("The first item in ", i,"is ", s[i], "\n")
                Flag = self.check(i, s, target)
                if Flag:
                    i += len(target)
                    count += 1
                    # print("COUNT:",count,"\n")
                    # print("i is ", i,"\n")
                else:
                    i += 1
        return count

    def check(self, i, s, target):
        n_target = len(target)
        for j in range(n_target):
            if s[i+j] in target:
                target = target.replace(s[i+j], "")
                j += 1
            else:
                return False
        # print("The target from ", i, "is: ", s[i:i+n_target])
        return True


if __name__ == '__main__':
    sol1 = Solution()
    s1 = "ilovecodingonleetcode"
    target1 = "code"
    s2 = "abcba"
    target2 = "abc"
    s3 = "abbaccaddaeea"
    target3 = "aaaaa"

    print(sol1.rearrangeCharacters(s1, target1))
