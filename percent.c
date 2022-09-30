  #include <stdio.h>

   double scale0_10(double a){
       double b=a;
       if (a<0.00)b=0.00;
       if(a>100.00)b=100.00;
       b=b/10.00;
       return b;
   }
int main(){
    double a;
    for(a=0;a<11.00;a++)printf("\e[42;30m %fu ]\n",scale0_10(a*10));
    return 0;
}
     
