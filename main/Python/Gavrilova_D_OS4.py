import time

def f(i, b, c):
    if i == 0:
        return 0
    a = 0
    for n in range(1, 100000001):
        a += b * 2 + c - i
    return f(i-1, b, c) + a

print('Введите i, b, c:')
i = int(input())
b = int(input())
c = int(input())
print('Process')
start_time = time.monotonic()
result = f(i, b, c)
print("Время: " + str(time.monotonic() - start_time))
print("Ответ: " + str(result))
