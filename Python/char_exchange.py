S = input("Enter the string to be replace character between first and last: ")

if len(S) > 1:
    result = S[-1] + S[1:-1] +S[0]
else:
    result = S
print(f"result: {result}")
