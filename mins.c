#include <stdio.h>


int mins(int i,int ii){
    if (i<ii)return i;
    
    return  ii;
}
int main(){
    printf("\e[42;30m %d",mins(40,20));
    return 0;
}
