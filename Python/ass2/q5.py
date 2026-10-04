for num in range(20, 51):
    prime = True

    if num < 2:
        prime = False
    else:
        for i in range(2, num):
            if num % i == 0:
                prime = False
                break

    if prime:
        print(num, "is Prime")
    else:
        print(num, "is Non-Prime")