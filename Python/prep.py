import heapq
from collections import deque

arr = [1] * 5

print(arr)  # [1, 1, 1, 1, 1]


arr2 = [1, 2, 3, 4]

print(arr2[-1])  # 4
print(arr2[-2])  # 3

print(arr2[1:3])  # [2,3]
print(arr2[1:4])  # [2,3,4]
arr2.reverse()
print(arr2)

for i, n in enumerate(arr2):
    print(i, n)


for i, ii in zip(arr, arr2):
    print(i, ii)


arr3 = ["alice", "bob", "joe", "doe"]
arr3.sort()
print(arr3)
arr3.sort(key=lambda x: len(x))
print(arr3)


arr4 = [i for i in range(10)]
print(arr4)


# 2D arrays
arr5 = [[0]*4 for i in range(4)]
print(arr5)


print(int("123")+int("123"))  # 246
print(str(123), str(123))  # 123123


print(ord("A"))  # 65
print(ord("a"))  # 97
print(ord("b"))  # 98
print(ord("c"))  # 99


queue = deque()
queue.append(1)
queue.appendleft(2)
print(queue)


# hash sets
mySet = set()
mySet.add(4)
mySet.add(5)
print(4 in mySet)
print(3 in mySet)


# hash Maps (dict)
myMap = {}
myMap["alice"] = 10
myMap2 = {i: 2 * i for i in range(5)}
print(myMap2)


# heap
arr6 = [4, 2, 62, 1, 456, 2, 1, 4]
heapq.heapify(arr6)
print(arr6[0])  # 1


# functions
def outer(a, b):
    c = "c"

    def inner():
        return a+b+c
    return inner()


print(outer("a", "b"))  # abc


def double(arr, val):
    def helper():
        # able to modify arr
        for i, n in enumerate(arr):
            arr[i] *= 2

        # will only double th val inside the helper func
        # val *= 2

        # but this will modify val outside helper func
        nonlocal val
        val *= 2
    helper()
    print(arr, val)


arr, val = [1, 2, 3, 4, 5], 3
print(double(arr, val))
