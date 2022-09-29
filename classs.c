#include <stdio.h>


class starts{
   public:
    starts(int i){
        printf("\e[42;30m start %d\n]",i);
    };
    ~ starts(){
        printf("\e[42;30m end \n]");
    };

};
int main(){
   starts s(100);
    return 0;
}
