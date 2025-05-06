print("hello world")
class A:
    def __init__(self):
        self.a = 1
        self.b = 2
        self.c = 3

    def __str__(self):
        return f"A(a={self.a}, b={self.b}, c={self.c})"
boss = A()
print(boss)
print(boss.a)