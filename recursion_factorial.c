#include<stdio.h>
 unsigned long long int factorial (int n, int acc){
    if (n==0)

    {
        return acc;
    }else  
    {
        return factorial(n-1,n*acc);
    }
    
    
}
int main ()
{
    int x;
    int y=1;
    
    printf("Enter the number you want to factorial of :");
    scanf("%d",&x);
    unsigned long long  result=factorial(x,y);
    printf("the factorial of %d is %llu" , x,result);

    

}
