def func(value):
    if type(value) == type(100):
        return 100
    elif type(value) == type(""):
        return len(value) 
    else:
        return 20
 
 
a = '100.0'
b = 100.0
c = (100, 200)
 
print(func(a) + func(b) + func(c))

# 파이썬에서 문자열을 정의할 때 큰따옴표(")와 작은따옴표(')는 서로 호환 가능하며, 
# 기능상 차이는 없습니다. 둘 중 어떤 것을 사용해도 동일한 문자열로 인식됩니다. 

# 하지만, 2번째는 float, 3 번째는 tuple 이기에 5 + 20 + 20 = 45