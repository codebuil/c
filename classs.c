#include <stdio.h>


class starts{
   public:
    starts(int i){
        printf("\e[42;30m start %d]",i);
    };
    

};
int main(){
   starts s(100);
    return 0;
}
