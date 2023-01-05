#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<string>> group_anagram(vector<string> &strs)
    {
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++)
        {
            string key = getKey(strs[i]);
            m[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }

private:
    string getKey(string str)
    {
        vector<int> count(26);
        for (int i = 0; i < str.size(); i++)
            count[str[i] - 'a']++;

        string key = "";
        for (int i = 0; i < 26; i++)
            key.append(to_string(count[i] + 'a'));

        return key;
    }
};

int main()
{
    vector<string> inputs{"cat", "tac", "act", "rat", "fat", "aft"};
    Solution x;
    vector<vector<string>> xx = x.group_anagram(inputs);
    for (vector<string> i : xx)
    {
        for (string j : i)
            cout << j << " ";
    }

    return 0;
}
