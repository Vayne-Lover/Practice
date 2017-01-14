#!/usr/local/bin/python
def compute(a,b):
  x=0
  y=0
  k=len(a)+len(b)
  result=[' ']*k
  for i in range(k):
    if x==len(a):
      result[k-i-1]=b[y]
      y+=1
    elif b[y]<=a[x] :
      result[k-i-1]=b[y]
      y+=1
    else :
      result[k-i-1]=a[x]
      x+=1
  print result
  return result

if __name__=='__main__':
  compute([1,3,5],[4,6,7])
  compute([1,2,3],[4,5,6])
  compute([-6,-4,-2],[-3,-2,-1])
  compute([-1.2,-0.8,1.3],[1,4,6])
