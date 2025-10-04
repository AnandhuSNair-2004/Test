students = {
    "Anu": {85,90,78},
    "Manu": {72, 88, 91},
    "Vishnu": {95, 80, 85}
}
for name, marks in students.items():
    total = sum(marks)
    average = sum(marks) / len(marks)
    print(f"Student:{name}")
    print(f"Marks:{marks}")
    print(f"Total: {total}")
    print(f"Average: {average: .2f}")
    print("." * 20)