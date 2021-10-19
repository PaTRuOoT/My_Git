def max_number_of_polindrome(count):
    '''
    Функция находит самый большой палиндром, полученный множением двух чисел
    до числа count (включительно)
    Например, при count = 99 - 9009 = 91 х 99
    '''
    max = 0
    for i in range(1, count+1):
        for j in range(1, count+1):
            number = i * j
            if str(number) == str(number)[::-1]:
                if number > max:
                    max = number
    return max

def test_number_of_polindrome():
    print(max_number_of_polindrome(99))
    if max_number_of_polindrome(99) == 9009:
        print('test - OK')
    else:
        print('test - Fail')

test_number_of_polindrome()
print(max_number_of_polindrome(999))
