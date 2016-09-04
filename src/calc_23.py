from random import randint
from time import time

count = 0
TOTAL = 100000
MAX_PEOPLE = 23

start = time()

for _ in range(TOTAL):
    days = []
    for _ in range(MAX_PEOPLE):
        birthday = randint(1, 365)

        if birthday in days:
            count += 1
            break

        days.append(birthday)

end = time() - start

print("Probability of %s" % (count / TOTAL))
print("The calculations took %s seconds" % end)
