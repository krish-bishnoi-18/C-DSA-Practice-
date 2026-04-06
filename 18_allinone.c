#include <stdio.h> 
float avg ( int a , int b , int c , int d , int e  ) {
    return (a+b+c+d+e)/5.0;
}
int largest ( int a , int b , int c , int d , int e  ) { 
     int max =a ;
    if (max<b){
        max=b;
    };
    if (max<c){
        max=c;
    };
    if (max<d){
        max=d;
    };
    if (max<e){
        max=e;
    };
 return max;
}
long long  factorial ( int a ){
    if ( a==1){
        return 1;
    }
   return factorial(a-1)*a;
}
int main (){ 
    printf("please entre all the five number\n");
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a ,&b, &c, &d ,&e ) ; 
    printf("the avg value of all 5 numkbers is %f\n" ,avg(a,b,c,d,e));
    printf("the largest number in this is %d\n",largest(a,b,c,d,e));
    int max = largest(a,b,c,d,e);
    int prime = 0;
    for (int i = 2; i < max; i++)
    {
       if (max%i==0) {
        prime=1;
        break;
       }
    } 
    if (prime==1){ 
       printf("%lld\n",factorial(max) ) ;

    }
    else { 
        for (int i = 1; i <=max; i++)
        { 
            if (max%i==0){
        printf("%d\n",i);
        }
    }}
   printf ("%p\n",&max) ;
}
   

