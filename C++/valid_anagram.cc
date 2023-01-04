#include <bits/stdc++.h>

bool valid_anagram(std::string s, std::string t)
{
    if (s.size() != t.size())
        return false;

    std::unordered_map<char, int> s_map;
    std::unordered_map<char, int> t_map;

    for (int i = 0; i < s.size(); i++)
    {
        s_map[s[i]]++;
        t_map[t[i]]++;
    }

    for (int i = 0; i < s_map.size(); i++)
    {
        if (s_map[i] != t_map[i])
            return false;
    }
    return true;
}

int main()
{
    std::string s{"anagram"}, t{"nagaram"};
    std::string s2{"car"}, t2{"rat"};
    std::cout << valid_anagram(s, t) << std::endl;
    std::cout << valid_anagram(s2, t2) << std::endl;
}