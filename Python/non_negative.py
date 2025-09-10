text = input("Enter a text: ")
n = int(input("Enter a non negative integer: "))
#print(text*n)
if n >= 0:
    result = text * n
    print(result)
else:
    print("Enter a non negative integer: ")
