//
//  main.c
//  poly_1
//
//  Created by 강현철 on 2023/03/21.
//

#include <stdio.h>
#define MAX_DEGREE 10


typedef struct {
    int degree;
    float coef[MAX_DEGREE];
}polynomial;




polynomial mult(polynomial A,polynomial B){
    
    int i,j;
    
    for(i=0; i<A.degree + B.degree+1;i++) C.coef[i]=0;
    C.degree=A.degree+B.degree;
    
    for(i=0;i<A.degree+1;i++)
        for(j=0;j<B.degree+1;i++)
            C.coef[i+j] += (A.coef[i]*B.coef[j]);

    return C;
}




int main() {
    
    int i;
    
    polynomial a= {4,{0,0,2,2,3,0,0}};
    polynomial b = {2,{7,3,4,0,0,0,0}};
    
    polynomial c = mult(a,b);
    
 
    return 0;
}

//int argc, const char * argv[]
