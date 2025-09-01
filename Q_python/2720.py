t = int(input())

while t > 0:
    t -= 1

    total = int(input())
    quarter = 0
    dime = 0
    nickel = 0
    penny = 0

    while total != 0:
        if total // 25 != 0:
            quarter += total // 25
            total -= 25 * quarter
        elif total // 10 != 0:
            dime += total // 10
            total -= 10 * dime
        elif total // 5 != 0:
            nickel += total // 5
            total -= 5 * nickel
        else:
            penny += total
            total = 0

    print(quarter, dime, nickel, penny)
