// function practice
#include <stdio.h>
void hello();
void bye();
int finalprice();
int main()
{
    //hello();
    //bye();
    int gst;
    gst=finalprice();
    printf("\nfinal price is:%d",gst);
    return 0;
}
int finalprice(){
    float value=100;
    value=value+(100*18/100);
    return value;
}
void hello()
{
    printf("Hello!\nThis is Rajeev Ranjan");
}
void bye()
{
    printf("\nOkay!\ngoodbye");
}