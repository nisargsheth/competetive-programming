def main():
    t = int(input())
    for t_itr in range(0,t):
        y,x = map(int,input().split())
        if(x>y):
            if(x%2==1):
                print(x*x - y + 1)
            else:
                x-=1
                print(x*x+y)
        else:
            if(y%2==0):
                print(y*y-x+1)
            else:
                y-=1
                print(y*y+x)
main()
