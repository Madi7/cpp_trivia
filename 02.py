class SomeMath:
    def get_doubled_number(self, number):
        return number ** 2

    def get_trippled_number(self, number):
        return number ** 3


if __name__ == '__main__':
    instance = SomeMath()
    print(instance.get_doubled_number(5))
