class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101 #統計數字出現次數,因數字1...100,陣列要開101個
        best=0 #最多的數字,出現幾次呢?
        for num in nums: #迴圈,針對每個數字做處理
            T[num]+=1 #這個數字num出現的次數+1
            if T[num]>best:best=T[num] #最多出現的T統計數字是多少
        total=0
        for t in T:
            if t==best:total+=t
        return total