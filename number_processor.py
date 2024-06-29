def process_number(num):
    if num == 1:
        print(num)
        return
    
    print(num, "->", end=" ")

    if num % 2 != 0:
        process_number(num * 3 + 1)
    else:
        process_number(num // 2)

num = int(input("Enter a number between 1 and 9: "))

if num < 1 or num > 9:
    print("Invalid input. Please enter a number between 1 and 9.")
else:
    process_number(num)
