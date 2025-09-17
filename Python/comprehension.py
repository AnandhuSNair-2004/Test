nums = list(map(int, input("enter integers :").split(',')))
positive_list = [n for n in nums if n > 0]
print("positive numbers :", positive_list)

num = int (input("enter a number to generate square  :"))
result = [i**2 for i in range(1,num+1)]
print(f"Squares of first {num} numbers:", result)

word = input("Enter a word : ")
res = [ch for ch in word if ch in "aeiouAEIOU"]
print("Vowels in the word :", res)

word2 = input("Enter a word to get ordinal values: ")
ordinal = [ord(ch) for ch in word2]
print("Ordinal values",ordinal)
