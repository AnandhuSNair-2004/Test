number = input("enter the set of number : ").split(',')
result = []
for n in number:
    n=int(n)
    if n > 100:
        result.append("over")
    else:
        result.append(n)
print("Modified numbers are", result)
