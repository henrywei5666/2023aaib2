class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        n=len(s)
        one = 0 #s裡面有幾個1呢?等一下慢慢數出來
        for c in s: #針對字串s乙的每個字母c,逐一檢查
            if c=='1':one+=1 #如果是1的話 one 就+1
        return '1'*(one-1)+'0'*(n-one)+'1'