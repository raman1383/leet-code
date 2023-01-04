def containsDuplicate(nums: list[int]) -> bool:
    hashSet = set()
    for n in nums:
        if n in hashSet:
            return True
        hashSet.add(n)
    return False


input = [1, 3, 4, 5, 6, 77, 6]
print(containsDuplicate(input))
