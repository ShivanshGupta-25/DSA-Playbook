a = "abc"

def powerSet(str, curr,count,res):
    if count >=  len(str):
        res.append(curr)
        return
    powerSet(str,curr,count+1,res)
    curr += str[count]
    powerSet(str,curr,count+1,res)


res = []
curr = ""
powerSet(a,curr,0,res)
print(res)

