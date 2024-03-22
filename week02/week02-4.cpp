class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length(); //c++的字串長度
        int one=0; //s裡面,有幾個1呢?等一下會慢慢數出來
        for(int i=0;i<n;i++){ 
            if(s[i]=='1') one+=1;
        }
        string ans; //用來放答案
        for(int i=0;i<one-1;i++) ans +='1'; //有幾個1要放前面
        for(int i=0;i<n-one;i++) ans +='0'; //有幾個0要放中面
        ans+='1'; //最後塞個1
        return ans;
    }
};