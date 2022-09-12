r1=int(input("Enter the first number:\n"))
r2=int(input("Enter the second number:\n"))

print("The prime numbers are:")
for num in range(r1,r2+1):
    if num>1:
        for i in range(2,num):
            if(num%i==0):
                break
            else:
                print(num)