"""
# program 1

one = int(input('first num: '))
two = int(input('second num: '))
summution = one + two
if summution % 2 == 0:
    print('the sum of them is even')
else:
    print('the sum of them is odd')
"""
"""
# program 2

summution = 0
counter_limit = int(input('the number of number that u want to make a addition to: '))
for i in range(0, counter_limit):
    number = int(input())
    summution += number
print('the sum of all numbers is:', summution)
"""
"""
# program 3

low = int(input('first number:'))
high = int(input('last number:'))
for low in range(low, high+1):
    print(low, '^ 2 =', low**2)
"""
"""
# program 4

num = int(input('ur number:'))
digits = num % 10
tens = (num % 100)//10
hundreds = num//100
print(digits+tens+hundreds)
"""
"""
# program 5

word = input("enter ur word:")
letter = input('enter ur letter:')
for i in range(0, len(word)):
    if word[i] == letter:
        print(i)
"""
'''
# program 6

word = input('enter the word:')
character = input('enter the character to change:')
new_character = input('ur new character:')
new_word = ''
for i in range(0, len(word)):
    if word[i] == character:
        new_word += new_character
    else:
        new_word += word[i]
print('the new word is:', new_word)
'''
"""
# program 7

number = int(input('enter ur number:'))
factorial = 1
for i in range(1, number+1):
    factorial *= i
print(factorial)
"""
"""
# program 8

number = int(input('enter the number of fibonacci:'))
first, second, summation = 0, 1, 0
print(first, ',', second, end=', ')
for i in range(2, number-1):
    summation = first + second
    first = second
    second = summation
    print(summation, ',', end='')
print(first+second)
"""
"""
# program 9

base = int(input('enter ur base:'))
power = int(input('enter the power'))
print(base**power)
"""
"""
# program 10

while True:
    first_number = int(input())
    second_number = int(input())
    if first_number > second_number:
        print(second_number, ',', first_number)
    elif first_number == 0 and second_number == 0:
        print('==Exit==')
        break
    else:
        print(first_number, ',', second_number)
"""
"""
# program 11

apples = int(input('number of apples:'))
people = int(input('number of people: '))
print(apples % people)
"""
"""
# problem 12

time = int(input())
hours = time // 3600
minutes = (time - hours * 3600) // 60
seconds = (time - (hours * 3600 + minutes * 60))
print(hours, ':', minutes, ':', seconds)
"""
"""
# problem 13

# the arrays of each base
hexadecimal_set = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
decimal = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
octal = ['0', '1', '2', '3', '4', '5', '6', '7']
binary_num = ['0', '1']


# then the check function
def check_number(number, base):
    check = True
    while check:
        for i in range(0, len(number)):
            if number[i] not in base:
                check = True
                break
            else:
                check = False
        if not check:
            return number
        else:
            number = input('enter valid number')


choice = input('A)Binary\nB)decimal\nC)octal\nD)hexadecimal\n').upper()
the_number = input('enter number u need to check:').upper()
if choice == 'A':
    the_number = check_number(the_number, binary_num)
    print('your valid binary number is:', the_number)
elif choice == 'B':
    the_number = check_number(the_number, decimal)
    print('your valid decimal number is:', the_number)
elif choice == 'C':
    the_number = check_number(the_number, octal)
    print('your valid octal number is:', the_number)
elif choice == 'D':
    the_number = check_number(the_number, hexadecimal_set)
    print('your valid hexadecimal number is:', the_number)
"""
"""
# problem 14

number = input('enter the number u want to change:')
result = ''
for i in range(0, len(number)):
    if number[i] == '0':
        result += '1'
    else:
        result += '0'
print('the ones complement:', result)
"""
"""
# problem 15

numbers = input('enter the number u want to change:')
result = ''
counter = 0
# that to check the first '1' in the number
for i in range(len(numbers) - 1, -1, -1):
    if numbers[i] == '1':
        counter = i
        result = numbers[i] + result
        break
    else:
        result = numbers[i] + result
# that to change it to twos complement
for j in range(counter-1, -1, -1):
    if numbers[j] == '0':
        result = '1' + result
    else:
        result = '0' + result
print('your twos complement is:',result)
"""
"""
# problem 16

# first when we add we must check that they have the same length
def length_check(bin_one, bin_two):
    if len(bin_one) > len(bin_two):
        bin_two = '0' * (len(bin_one) - len(bin_two)) + bin_two
    elif len(bin_one) < len(bin_two):
        bin_one = '0' * (len(bin_two) - len(bin_one)) + bin_one
    return bin_one, bin_two


# then we make the addition
binary_one = input('enter ur first binary number:')
binary_two = input('enter ur second binary number:')
carry = 0
result = ''

binary_one, binary_two = length_check(binary_one, binary_two)

for i in range(len(binary_two) - 1, -1, -1):
    summution = int(binary_two[i]) + int(binary_one[i]) + carry
    if summution in [0, 1]:
        result = str(summution) + result
    elif summution == 2:
        result = '0' + result
        carry = 1
    elif summution == 3:
        result = '1' + result
        carry = 1
if carry == 1:
    result = '1' + result
print('the result of addition is:',result)
"""
"""
# problem 17

# when we make subtraction I prefer to change second one to twos complement then subtract them
# to check length
def length_check(bin_one, bin_two):
    if len(bin_one) > len(bin_two):
        bin_two = '0' * (len(bin_one) - len(bin_two)) + bin_two
    elif len(bin_one) < len(bin_two):
        bin_one = '0' * (len(bin_two) - len(bin_one)) + bin_one
    return bin_one, bin_two


# then subtract them from each other without carry at end
binary_one = input('enter ur first binary number:')
binary_two = input('enter ur second binary number:')
carry = 0
result = ''
counter = 0

binary_one, binary_two = length_check(binary_one, binary_two)

# then change second one to twos complement
twos_complement = ''
for i in range(len(binary_two) - 1, -1, -1):
    if binary_two[i] == '1':
        counter = i
        twos_complement = binary_two[i] + twos_complement
        break
    else:
        twos_complement = binary_two[i] + twos_complement
# that to change it to twos complement
for j in range(counter-1, -1, -1):
    if binary_two[j] == '0':
        twos_complement = '1' + twos_complement
    else:
        twos_complement = '0' + twos_complement

# then add them
for i in range(len(twos_complement) - 1, -1, -1):
    summution = int(twos_complement[i]) + int(binary_one[i]) + carry
    if summution in [0, 1]:
        result = str(summution) + result
    elif summution == 2:
        result = '0' + result
        carry = 1
    elif summution == 3:
        result = '1' + result
        carry = 1

print('the result of subtraction is:',result)
"""
"""
# problem 18

# defining some functions
# from binary to decimal
def binary_decimal(number):
    decimal_num, power = 0, 0
    for i in range(len(number) - 1, -1, -1):
        decimal_num += int(number[i]) * (2 ** power)
        power += 1
    return decimal_num


# from octal to decimal
def octal_decimal(number):
    decimal_num, power = 0, 0
    for i in range(len(number) - 1, -1, -1):
        decimal_num += int(number[i]) * (8 ** power)
        power += 1
    return decimal_num


# from hexa to decimal
def hexa_decimal(number):
    decimal_num, power = 0, 0
    for counter in range(len(number) - 1, -1, -1):
        if number[counter] in ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']:
            decimal_num += int(number[counter]) * (16 ** power)
        elif number[counter] == 'A':
            decimal_num += 10 * (16 ** power)
        elif number[counter] == 'B':
            decimal_num += 11 * (16 ** power)
        elif number[counter] == 'C':
            decimal_num += 12 * (16 ** power)
        elif number[counter] == 'D':
            decimal_num += 13 * (16 ** power)
        elif number[counter] == 'E':
            decimal_num += 14 * (16 ** power)
        elif number[counter] == 'F':
            decimal_num += 15 * (16 ** power)
        power += 1
    return decimal_num


# from decimal to binary
def decimal_binary(number):
    binary = ''
    number = int(number)
    while number != 0:
        bit = number % 2
        binary = str(bit) + binary
        number = number // 2
    return binary


# from decimal to octal
def decimal_octal(number):
    octal_num = ''
    number = int(number)
    while number != 0:
        bit = number % 8
        octal_num = str(bit) + octal_num
        number = number // 8
    return octal_num


# from decimal to hexadecimal
def decimal_hexadecimal(number):
    hexadecimal = ''
    number = int(number)
    while number != 0:
        bit = number % 16
        if 0 <= bit < 10:
            hexadecimal = str(bit) + hexadecimal
        elif bit == 10:
            hexadecimal = 'A' + hexadecimal
        elif bit == 11:
            hexadecimal = 'B' + hexadecimal
        elif bit == 12:
            hexadecimal = 'C' + hexadecimal
        elif bit == 13:
            hexadecimal = 'D' + hexadecimal
        elif bit == 14:
            hexadecimal = 'E' + hexadecimal
        elif bit == 15:
            hexadecimal = 'F' + hexadecimal
        number //= 16
    return hexadecimal


# A
The_number1 = input('enter ur binary:')
print('decimal:', binary_decimal(The_number1))
print('octal:', decimal_octal(binary_decimal(The_number1)))
print('hexadecimal:', decimal_hexadecimal(binary_decimal(The_number1)))

# B
The_number2 = input('enter ur decimal:')
print('binary:', decimal_binary(The_number2))
print('octal:', decimal_octal(The_number2))
print('hexadecimal:', decimal_hexadecimal(The_number2))

# C
The_number3 = input('enter ur octal:')
print('decimal:', octal_decimal(The_number3))
print('binary:', decimal_binary(octal_decimal(The_number3)))
print('hexadecimal:', decimal_hexadecimal(octal_decimal(The_number3)))

# D
The_number4 = input('enter ur hexadecimal:')
print('decimal:', hexa_decimal(The_number4))
print('binary:', decimal_binary(hexa_decimal(The_number4)))
print('octal:', decimal_octal(hexa_decimal(The_number4)))
"""
"""
# problem 19

distance = int(input('enter the distance between two cities:'))
velocity = int(input('inter the plane velocity:'))
print('the time taken between the two cities is:', distance / velocity, 'hours')
"""
"""
# problem 20
choice = input('A)Even\nB)Odd\n').upper()
low = int(input('enter the first number:'))
high = int(input('enter the last number:'))
if choice == 'A':
    for i in range(low + 1, high):
        if i % 2 == 0:
            print(i)
else:
    for i in range(low + 1, high):
        if i % 2 == 1:
            print(i)
"""
"""
# problem 21

low = int(input('enter the first number:'))
high = int(input('enter the last number:'))
divisor = int(input('enter the number u want to divided on:'))
for i in range(low + 1, high):
    if i % divisor == 0:
        print(i)
"""
