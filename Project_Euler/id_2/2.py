def fib(count):
    sum = 0
    a, b = 0, 1
    while a < count:
        if a % 2 == 0:
            sum += a
        print(a, end=' ')
        a, b = b, a+b
    print()
    print(f'Сумма = {sum}')
fib(4000000)
