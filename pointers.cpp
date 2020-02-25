#include <stdio.h>
#include<cstdlib>

void update(int *a,int *b) {
    // Complete this function
    int sum,diff;
    sum=*a+*b;
    diff=abs(*a-*b);
    *a=sum;
    *b=diff;  
}

/*void update(int *a,int *b) {
    int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference; 
}*/

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}