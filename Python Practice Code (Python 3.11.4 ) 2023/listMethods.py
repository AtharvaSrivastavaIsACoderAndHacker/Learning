l = [i for i in range(15)]
print(l)




l.append(1111111111111111111111111111)
print()

l.sort()
print(l)

l.sort(reverse=True)
print(l)


l.reverse()
print(l)


print(l.index(0))

print(l.count(1))

m = l.copy()
print(m)


l.insert(5, 22222222222222222222222)
print(l)



k = [234,234,3244]
n = [900, 1000, 1100]
n.extend(k)
l.extend(n)                   #  l + m krega ye function
print(l)




