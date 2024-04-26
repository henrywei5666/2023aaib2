N=int(input("請輸入N:"))
#以前用for迴圈寫，今天用[函式呼叫函式]來寫
def func(n):
  if n==1:return 1
  return n*func(n-1) #函式呼叫函式，把大問題，改成去問小問題
ans=func(N)
print(ans)