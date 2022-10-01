#include <stdio.h>


long long mults(long long a,long long b){
    return a*b;
}
int main(){

    int n;
    long long l=1;
    printf ("\ec\e[42;30m \n");
    for(n=0;n<64/4;n++){
        printf("d%llu\n",l);
        printf("h%llx\n",l);
        l=mults(l,16);
    }

    return 0;
}
