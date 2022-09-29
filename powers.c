#include <stdio.h>


int powers(int i,int ii){
    int iii=i;
    int n;
    if(ii==0)return 1;
    if(ii==1)return i;
    for(n=1;n<ii;n++){
        iii=iii*i;
    }
    
    return  iii;
}
int main(){
    int n;
    for(n=0;n<16;n++){
            printf("\e[42;30m %d\n",powers(2,n));
    }
    return 0;
}
