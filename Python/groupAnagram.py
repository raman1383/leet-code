import collections


def groupAnagram(strs: list[str]) -> list[list[str]]:
    ans = collections.defaultdict(list)

    for s in strs:
        count = [0]*26
        for c in s:
            count[ord(c) - ord("a")] += 1
        ans[tuple(count)].append(s)
    return ans.values


input = ["cat", "tac", "act", "rat", "fat", "aft"]
print(groupAnagram(input))
