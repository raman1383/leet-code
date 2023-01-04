#include <bits/stdc++.h>

bool contains_duplicate(int nums[], int n)
{
    std::unordered_set<int> hash_set;
    for (int i = 0; i < n; i++)
    {
        if (hash_set.find(nums[i]) != hash_set.end())
            return true;
        hash_set.insert(nums[i]);
    }
    return false;
}

int arr[] = {10, 5, 3, 4, 6};

int main()
{
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << contains_duplicate(arr, n);
}