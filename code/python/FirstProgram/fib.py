def fib(n):
    if n==0 or n==1:
        ans = 1
    else:
        ans = fib(n-2) + fib(n-1)
    return ans

if __name__ == '__main__':
    sol = []
    for i in [5]:
        sol.append(fib(i))
    print(sol)