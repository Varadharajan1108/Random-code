a=int(input("Enter any number\n"))
n=0
for i in range(2,a):
    if a%i==0:
        n+=1
    else:
        n=n
if n==0:
    print("The number is prime")
    
else:
    print("The number is not prime")
