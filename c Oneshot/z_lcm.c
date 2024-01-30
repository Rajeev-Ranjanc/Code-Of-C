//finding lcm of two number
#include <stdio.h>
int main()
{
    int a,b;
    int lcm=0;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    // int h=a>b?a:b;
    for(lcm=1;lcm<=a*b;lcm++){
        if(lcm%a==0 && lcm%b==0){
             printf("lcm:%d",lcm);
             break;
            
        }
    }

    
   

}