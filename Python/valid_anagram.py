def validAnagram(s: str, t: str) -> bool:
    if(len(s) != len(t)):
        return False

    countS, countT = {}, {}

    for i in range(len(s)):
        countS[s[i]] = 1 + countS.get(s[i], 0)
        countT[t[i]] = 1 + countT.get(t[i], 0)
    return countT == countS


s = "anagram"
t = "naagram"

s2 = "rat"
t2 = "cat"

print(validAnagram(s, t))
print(validAnagram(s2, t2))