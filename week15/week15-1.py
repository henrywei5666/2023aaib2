class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={} 
        for num in nums: #每個數字輪一次
            if num in table:  #出現過的話次數+1
                table[num]+=1
            else:   #第一次出現
                table[num]=1
        ans=0
        for num in table: #把table裡全部的數字輪一次
            if  table[num]==2: #如果數字剛好出現2次
                ans=ans^num #把答案，照題目要求 XOR 混起來
        return ans