n=int(input("Enter any number"))
l=[]
a=1/n**2
while n>1:
    n=n-1
    l.append(1/n**2)
print(sum(l))