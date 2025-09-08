#include <stdio.h>

int raizq(int radicando){
    int i=0;

    for(int i = 1; i<=radicando;i++)
    {
        if(i*i==radicando)
        {
            return i;
        }
    }
    return -1;
}

int qper(int n)
{
    int flag=1;
    int flag1 =1;
    int left,right;
    int m = n;
    int result = m;
    int result1 = result;

    while(flag||flag1){
        if(n==raizq(n)*raizq(n)){
            right = n;
            flag = 0;
        }
        else{
        n += 1;
        }
        if(m==raizq(m)*raizq(m)){
            left = m;
            flag1 = 0;
        }
        else{
            m -= 1;
        }
    }


    result = right-result;
    result1 = result1-left;

    if(result1<result){

        return left;
    }
    else{
        return right;
    }

    return right;
}

float raizquadrada(int radicando){
    float a = radicando + qper(radicando);
    float b = 2 * (raizq(qper(radicando)));

    return a/b;
}

int main(){
    float a;
    a = raizquadrada(17);
    printf("%0.2f",a);
}
