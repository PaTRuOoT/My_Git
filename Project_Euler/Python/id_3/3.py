def prime_number(number):
    max = 0
    for i in range(1, int(number**(1/2))):
        if number % i == 0:
            print(number, end = ' ')
            max = i
            number /= i
    print(max)
prime_number(600851475143)
