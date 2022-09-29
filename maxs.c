#include <stdio.h>


int maxs(int i,int ii){
    if (i>ii)return i;
    
    return  ii;
}
int main(){
    printf("\e[42;30m %d",maxs(40,20));
    return 0;
}
