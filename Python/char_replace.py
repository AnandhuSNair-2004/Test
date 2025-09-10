s = input("Enter your string: ")
first = s[0]
print(first + s[1:].replace(first, '$'))
