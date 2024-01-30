#include<stdio.h>
void rmwhitespace(char str[]);
int main(){
    char nm[]="r a j e e v r a n j a n";
    rmwhitespace(nm);
    return 0;
}
void rmwhitespace(char str[]){
    int i,j;
    for (i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
           
        }
    }
    printf("String after removing all the white spaces : %s", str);
    
}