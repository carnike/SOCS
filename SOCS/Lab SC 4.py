def bisection(f, left, right, epsilon):
    if(left) * f(right) > 0:
      return "none"
    while abs(f(left) - f(right)) >= epsilon:
      mid = (left + right) / 2
      if f(mid) * f(right) < 0:
        left = mid
      else:
        right - mid
    return mid

func = lambda x: (x ** 2) + (2 * x) + 1
epsilon = 1e-4

root = bisection(func, -1, 1 , epsilon)

print(f"root of this equation is {root}")

