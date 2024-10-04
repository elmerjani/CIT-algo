t = int(input())
for _ in range(t):
    score = int(input())
    if score < 1400:
        print('Level 4')
    elif score < 1600 :
        print('Level 3')
    elif score < 1900 :
        print('Level 2')
    else :
        print('Level 1')