import random

def r(fname):
    lines = open(fname).read().splitlines()
    return random.choice(lines)

print(r('test.tet'))