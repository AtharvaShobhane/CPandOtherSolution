# cook your dish here
t=int(input())
for x in range(t):
    arr = []
    s = str(input())
    sum=0
    for y in s :
        arr.append(ord(y))
    arr.sort()
    # print(arr)
    for z in range(len(arr)):
        sum=sum+(z+1)*(arr[z]-96)
    print(sum)    