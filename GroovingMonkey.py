def Monkey(n):
    x=n
    x=[0]*len(n)
    count=0
    while(x!=n):
        count+=1
        x=[0]*len(n)
        for i in range(len(n)):
            x[a[i]-1]=y[i]
        y=x
    return count
t=int(input())
for i in range(t):
    N=int(input())
    Monkeys=list(map(int,input().split(' ')))
    result=Monkey(Monkeys)
    print(result)
