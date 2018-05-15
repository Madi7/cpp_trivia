from typing import (
    Dict, List, Tuple, Union, Any
)


class Base:

    def _get_trippled_number(self, number: int):

        return number * 3


class SomeMath(Base):

    def get_doubled_number(self, number: int):

        return number * 2

    def get_protected(value: int):

        return _get_trippled_number(value)


if __name__ == '__main__':

    instance = SomeMath()
    print(instance.get_doubled_number(5),'\n')
    print(instance.get_protected(7),'\n')
