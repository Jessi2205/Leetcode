class Solution:
    def minElement(self, nums: List[int]) -> int:
        n=[]
        for i in nums:
            cnt=0
            while(i>0):
                cnt+=i%10
                i//=10
            n.append(cnt)
        return min(n)