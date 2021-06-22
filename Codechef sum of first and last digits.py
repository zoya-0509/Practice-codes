T=int(input())
while (T>0):
      n=int(input(""))
      s=n%10
      m=0
      while(n>0):
            m=n%10
            n=n//10
      print(m+s)
      T=T-1
      
