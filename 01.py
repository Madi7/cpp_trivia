from typing import (
    Dict, List, Tuple, Union, Any
)


def get_max_number(num1: int, num2: int):

    biggest: int = 0

    if (num1 > num2):
        biggest = num1
    else:
        biggest = num2

    return biggest


if __name__ == '__main__':

    a: int = 5; b: int = 7; result: int = 0

    result = get_max_number(a, b)
    print('Max number is: ',result,'\n')
