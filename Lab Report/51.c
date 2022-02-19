#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
    int a,b,c,d,e,f;
    scanf("%d%d", &a,&b);
    c = add(a,b);
    d = sub(a,b);
    e = mul(a,b);
    f = div(a,b);
    return 0;
}
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int sub(int x, int y)
{
    int z;
    z = x - y;
    return z;
}
int mul( int x, int y)
{
    int z;
    z = x*y;
    return z;
}
int div( int x, int y)
{
    int z;
    z = x/y;
    return z;
}