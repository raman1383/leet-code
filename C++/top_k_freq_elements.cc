#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> top_k_frequent_elements(std::vector<int> &nums, int k)
{
    int n = nums.size();
    std::unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[nums[i]]++;

    std::vector<std::vector<int>> buckets(n + 1);

    for (auto i = m.begin(); i != m.end(); i++)
        buckets[i->second].push_back(i->first);

    std::vector<int> result;

    for (int i = n; i >= 0; i--)
    {
        if (result.size() >= k)
            break;

        if (!buckets[i].empty())
            result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
    return result;
}

int main(int argc, const char **argv)
{
    return 0;
}