num=int(input("Enter the number for which the factorial is to be calculated"))
if(num>0):
    for i in range(1,num):
        num=num*i
        
    print("Factorial of the number is:",num)
elif num==0:
    print("factorial is 1")
else:
    print("The number's factorial can't be calculated")