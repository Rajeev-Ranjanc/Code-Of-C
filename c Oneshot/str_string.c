//string basic impoerttant condition
#include<stdio.h>
#include<string.h>
int main(){
    char name[]={'r','a','j','e','e','v','\0'};
    char name1[]="rajeev";
    // printf("sIze with::%d",sizeof(name));
    // printf("\nsize without:%d",sizeof(name1));

    //impotant condition
    for(int i=0; name1[i]!='\0';i++){
        printf("%c",name[i]);
    }
    return 0;
}