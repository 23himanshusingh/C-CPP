s=input()
c=0
for j in range(1,len(s)):
    if j==len(s)-1:
        c+=1
        break
    print(len(set(s[j-1:j+2])))
    if len(set(s[j-1:j+2]))==3:
        s.replace(s[j-1:j+2],'',1)
        print(s)
        break
print(s)
s.replace(s[:],'')
print(s)