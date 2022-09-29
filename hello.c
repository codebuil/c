#include <stdio.h>


char *retss(){
    char retsss[100]="hello world\n";
    char *c;
    c=retsss;
    return  c;
}
int main(){
    printf("\e[42;30m %s",retss());
    return 0;
}
