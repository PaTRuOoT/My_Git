def sum_of_multiples_of_3_and_5(amount_of_numbers:int):
    sum = 0
    for i in range(amount_of_numbers):
        if (i%3 == 0) or (i%5 == 0):
            sum += i
    return sum

def test_sum_of_multiples_of_3_and_5():
    if sum_of_multiples_of_3_and_5(10) == 23:
        print('test - OK')
    else:
        print('test - Fail')
    pass

test_sum_of_multiples_of_3_and_5()
print(sum_of_multiples_of_3_and_5(1000))
