import re
name=input("Enter your name \n")
age=int(input("Enter your age\n"))
if age in range(18,100):
    day=int(input("Enter your day of birth in the form DD\n"))
    month=int(input("Enter your month of birth in the form MM\n"))
    year=int(input("Enter your year of birth in the form YYYY\n"))
wrexp=input("Write a few words about your work experience\n")
parname=input("Enter your parents name\n")
contactno=int(input("Enter your contact number\n"))
email=input("Enter your email id \n")
print("\t\t\t\t\tCURRICULUM VITAE")
print("NAME:\t\t\t\t",name)
print("AGE:\t\t\t\t",age)
if day<=31:
    if month<=12:
        if year>=1970:
            print("DAY OF BIRTH:\t\t\t",day,"/",month,"/",year)
if contactno<=10000000000:
      print("CONTACT NUMBER:\t\t\t",contactno)
else:
    print("Invalid contact details")

def solve(email):
    pat = "^[a-zA-Z0-9-_]+@[a-zA-Z0-9]+\.[a-z]{1,3}$"
    if re.match(pat,email):
        print("EMAIL ID:\t\t\t",email)
    else:
        print("Invalid email") 


      


