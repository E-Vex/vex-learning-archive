def f(x):
    return 2**x - x - 2       # نفس المعادلة التي حللناها

def bisection(a, b, tol=1e-6):
    while (b - a) / 2 > tol:
        mid = (a + b) / 2
        if f(mid) == 0:
            break
        elif f(a) * f(mid) < 0:
            b = mid
        else:
            a = mid
    return (a + b) / 2

root = bisection(-2, -1)
print(f"Root ≈ {root:.6f}")   # يجب أن يعطيك -1.627854