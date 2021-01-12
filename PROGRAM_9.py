  
def NFA(n):
    current=state[0]
    final_N=state[1]
    for i in n:
        if i=='0' and current==state[0]:
            current=state[0]
        elif i=='0' and current==state[0]:
            current==state[1]
        elif i=='1' and state[1]:
            current==state[1]
    if current in final_N:
        print("NFA=Valid")
    elif current not in final_N:
        print("NFA=Invalid")
    else:
        print("Solution not found")
def DFA(n):
    c=state[0]+state[1]   
    current=state[0]
    final_D=state[1],c
    for i in n:
        if i=='0' and current==state[0]:
            current=c
        elif i=='0' and current==c:
            current=c
        elif i=='1' and current==c:
            current=state[1]
        elif i=='1' and current==state[1]:
            current=state[1]
        
    if current in final_D:
        print("DFA=Valid")
    else:
        ("DFA=Invalid")
n=input("Enter a Sting : ")
state=['a','b']    
k=NFA(n)
l=DFA(n)
