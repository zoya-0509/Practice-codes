T=int (input())
while (T):
      n=int(input())
      r=0
      s=0
      while (n>0):
            r=n%10
            s=s*10+r
            n=n//10
      print (s)
      
      T=T-1
