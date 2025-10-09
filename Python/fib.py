n = int(input("Enter the limit: "))
a=0
b=1
print("Fibnocci sesries upto",n,"terms")
for i in range(n):
    print(a,end=" ")
    temp=a
    a=b
    b=temp+b