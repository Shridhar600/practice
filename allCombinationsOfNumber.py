import itertools

n = '3936'
a = [''.join(i) for i in itertools.permutations(n, 4)]

print(a)