class TopTenUsingIter:

    def __init__(self):
        self.num = 1
    
    def __iter__(self):
        return self

    def __next__(self):

        if self.num <= 10:
            val = self.num
            self.num += 1

            return val
        else:
            raise StopIteration

value = TopTenUsingIter()
print(value.__next__()) # or
print(next(value))

for i in value:
    print(i)

# nums = [3,5,7,8]

# for i in range(4):
#     print(nums[i])

# for i in nums: # it internally calls the iterator function
#     print(i)

# it = iter(nums)
# print(it)

# print(it.__next__())  # or
# print(next(it))