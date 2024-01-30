//change the case of the letter of a string from lower to upper and vice versa
#include<stdio.h>
void changecase(char ch[]);
int main(){
    char name[]="rAJeEv";
    changecase(name);
    return 0;
}
void changecase(char ch[]){
    for (int i = 0; ch[i]!='\0'; i++)
    {
        if (ch[i]>=65 && ch[i]<=90)
        {
            ch[i]=ch[i]+32;
        }
       else if (ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
        }
        
    }
    puts(ch);
    

}