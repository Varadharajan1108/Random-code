 
from re import X


n=int(input("Enter the number of observations \n"))
freq=[]
U=[]
L=[]
ci=[]


for i in range(1,n+1):
    d=int(input("Enter  the frequency value \n"))
    l=float(input("Enter the lower limit \n"))
    u=float(input("Enter the upper limit \n"))
    freq.append(d)
    U.append(u)
    L.append(l)
    c=((u+l)/2)*d
    ci.append(c)
    m=sum(ci)
    print(ci)
    x=sum(freq)
    print(x)
mean=m/x
print(mean)
    
    