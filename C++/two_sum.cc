#include <bits/stdc++.h>
#include <vector>

std::vector<int> two_sum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> map;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (map.find(diff) != map.end())
        {
            result.push_back(map[i]);
            result.push_back(i);
            break;
        }
        else
        {
            map.insert({map[i], i});
        }
    }
    return result;
}

int main()
{
    std::vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> x{0, 3};
    if (two_sum(nums, 4) == x)
    {
        std::cout << "/* message */" << std::endl;
    }
}