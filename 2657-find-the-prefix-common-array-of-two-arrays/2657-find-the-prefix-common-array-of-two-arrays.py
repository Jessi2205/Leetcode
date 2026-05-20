class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        arrA = set()
        arrB = set()
        common = 0
        pca = []

        for i in range(len(A)):
            a = A[i]
            b = B[i]

            arrA.add(a)
            arrB.add(b)

            if a in arrB:
                common+=1
            if b in arrA and a!=b:
                common+=1
            pca.append(common)

        return pca