n = int(input())

if n == 0 or n == 1:
    print(1)
else:
    result = 1
    for i in range(1, n + 1):
        result *= i
    print(result)


# 0!은 1이다. 예?
# 수학적 일관성때문에 그러시단다