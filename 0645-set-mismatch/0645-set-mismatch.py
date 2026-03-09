class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        s = set()
        dup = -1

        for i in nums:
            if i in s:
                dup = i
            s.add(i)
        for i in range(1,n+1):
            if i not in s:
                miss = i
                break
        return [dup, miss]