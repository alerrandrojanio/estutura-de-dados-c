#include <stdio.h>

int mdc(int a, int b){
    if(a == b){
        return a;
    }
    else if(a > b){
        return mdc(a-b, b);
    }
    else{
        return mdc(b, a);
    }
    
}

int main()
{
    printf("%d", mdc(12,8));

    return 0;
}
