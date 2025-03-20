def is_a_triangle(a,b,c):
    return a+b>c and a+c>b and b+c>a

def is_a_right_triangle(a,b,c):
    if not is_a_triangle(a,b,c):
        return False
    if a>b and a>c:
        return a**2==b**2+c**2
    if b>a and b>c:
        return b**2==a**2+c**2
    if c>b and c>a:
        return c**2==b**2+a**2
print(is_a_right_triangle(5,3,4))
print(is_a_right_triangle(1,3,4))
print(is_a_right_triangle(1,1,3))

