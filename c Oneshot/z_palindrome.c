// Palindrome number/word
#include <stdio.h>
int main()
{

    int number,reminder,origional,rev=0;
    printf("n:");
    scanf("%d",&number);
    origional=number;
    while (number!=0)
    {
        reminder=number%10;
        rev=rev*10+reminder;
        number=number/10;


    }
    // printf("%d",rev);
    if(origional==rev){
        
        printf("%d is palindrome number",origional);

    }
    else{
        printf("%d isn't a palindrome number",origional);
    }
    
    return 0;
}