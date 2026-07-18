class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        sumEven = 0
        sumOdd = 0
        for i in range(1,n*2):
            if(i%2==0):
                sumEven += i
            else:
                sumOdd += i
        maxi = max(sumOdd,sumEven)
        for i in range(1,maxi+1):
            if sumEven%i==0 and sumOdd%i==0:
                gcd = i
        
        return gcd