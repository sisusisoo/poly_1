
#include <stdio.h>
#define MAX_DEGREE 101


typedef struct {
    int degree;
    float coef[MAX_DEGREE];
}polynomial;

polynomial multi(polynomial A,polynomial B){
    
    int i,j;
    polynomial C;
  
    for(i=0; i<A.degree + B.degree+1;i++) C.coef[i]=0;
    C.degree=A.degree+B.degree;
    
    for(i=0;i<A.degree+1;i++)
        for(j=0;j<B.degree+1;j++)
            C.coef[i+j] += (A.coef[i]*B.coef[j]);

    return C;
}

int main() {
    
    int i;
    
    polynomial a = {3,{1,2,3,4,0,0}};
    polynomial b = {2,{8,2,3,0,0,0}};
    
    polynomial c = multi(a,b);
    printf("1번식 \n");
    
    //printf("%d차 ", c.degree);
       for (i = c.degree; i+1 > 0; i--)
           if(c.coef[i]>0){
               printf("%dx^%d ", (int)c.coef[i],i);
               
               
           }
    printf("\n");
    
    //__________________________
    
    polynomial d = {3,{1,2,3,4,0,0}};
    polynomial e = {2,{8,2,3,0,0,0}};
    
    polynomial f = multi(d,e);
    printf("2번식 \n");
    
           for (i = 0; i < f.degree + 1; i++)
          printf("%d ", (int)f.coef[i]);
    printf("\n");
  
    return 0;
}
//int argc, const char * argv[]
