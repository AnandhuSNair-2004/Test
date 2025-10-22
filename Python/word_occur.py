words = input("Enter the line of text: ").split()  # Correct split without arguments
c = {}
for t in words:
    if t in c:
        c[t] += 1
    else:
        c[t] = 1
print(c)  # Print once, after the loop
