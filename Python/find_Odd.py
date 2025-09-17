numbers = list(map(int,input("enter the list of  numbers: ").split(',')))
result = [n for n in numbers if n%2!=0]
print("List after removing even numbers :", result)
