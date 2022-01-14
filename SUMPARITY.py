# def binaryToDecimal(binary):
#     binary1 = binary
#     decimal, i, n = 0, 0, 0
#     while(binary != 0):
#         dec = binary % 10
#         decimal = decimal + dec * pow(2, i)
#         binary = binary//10
#         i += 1
#     return decimal


        
# t =int(input())
# ans = []
# for x in range(t):
    
#     string = str(input())
#     arr = string.split(" ")
#     finalArr = list(map(int, arr))
#     for y in range(len(finalArr)):
#         if(finalArr[y]>10000000):
#             ans.append("Impossible")
#             break
#         else:
#             if(y==0):
#                 final = finalArr[y] & finalArr[y+1]
#             if(y!=0):
#                 final = final & finalArr[y]
#     if(finalArr[y]>10000000):
#             break
#     else:
#         if(binaryToDecimal(final)%2==0):
#             ans.append("Even")
#         elif(binaryToDecimal(final)%2!=0):
#             ans.append("Odd")
# for k in ans:
#     print(k)
        
    

