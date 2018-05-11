def get_max_number(num1, num2):
    if (num1 > num2):
        biggest = num1
    else:
        biggest = num2

    return biggest


if __name__ == '__main__':
    a = 5
    b = 7

    result = get_max_number(a, b)
    print('Max number is: ',result,'\n')
