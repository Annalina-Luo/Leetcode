#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int rearrangeCharacters_map(string s, string target)
    {
        unordered_map<char, int> sCounts, targetCounts;

        int n = s.size(), m = target.size();

        for (int i = 0; i < m; i++)
        {
            targetCounts[target[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (targetCounts.count(s[i]))
            {
                sCounts[s[i]]++;
            }
        }

        int ans = INT_MAX;

        for (auto &c : targetCounts)
        {
            // cout << "key:" << c.first << ", value:" << c.second << endl;
            int totalCount = sCounts[c.first];
            ans = min(ans, totalCount / c.second);
            if (ans == 0)
            {
                return 0;
            }
        }
        return ans;

        // for(auto &m : targetCounts){
        //     char key = *m.key();
        //     int value = *m.value();

        // }
    }

public:
    int rearrangeCharacters_vector(string s, string t)
    {
        vector<int> mp1(26, 0), mp2(26, 0);
        for (char &c : s)
            mp1[c - 'a']++;
        for (char &c : t)
            mp2[c - 'a']++;
        int ans = 105;
        for (char &c : t)
            ans = min(mp1[c - 'a'] / mp2[c - 'a'], ans);
        ;
        return ans;
    }
};

int main()
{
    Solution sol1;
    string s1 = string("ilovecodingonleetcode");
    string target1 = string("code");
    cout << sol1.rearrangeCharacters_map(s1, target1) << endl;
    return 0;
}