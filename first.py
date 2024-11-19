# n=(0,4,2,4,0,8,8,0)
# m=n.count(0)
# print(m)

# name =input("enter your name")
# print (f"your name is {name} ,welcome")

# n=set()
# print(type(n))
# a= int(input("enter your number"))
# b= input("enter your name")

# if("nahid".lower() in b.lower()):
#     print("rafin ar gusti")

# if(a>18):
#     print("ok ok")
#     print('nopet') 
# elif(a==49):
#     print("jkjk")

# else:
#     print("thanks")    

n= int (input("enter your number ::"))

for i in range(1,n+1):
  if(i==1 or i==n):
    print("*"*n,end="")

  else:
    print("*", end="")  
    print(" "*(n-2),end="")
    print("*", end="")

  print("")



