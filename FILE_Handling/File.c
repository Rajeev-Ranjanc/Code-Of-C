#include<stdio.h>
int main(){
    FILE *fptr; 
    fptr = fopen("input.txt","r");
   
    
        char ch;
        // ch=fgetc(fptr);
        while(ch!=EOF){
            printf("%c",ch); 
            ch=fgetc(fptr);
        }




        
        //easy way to write in the file

        // fputc('M',fptr);
        // fputc('M',fptr);
        // fputc('M',fptr);
        // fputc('M',fptr);
        // fputc('M',fptr);
    
        //an easy way to read the file

        // printf("%c ",fgetc(fptr));
        // printf("%c ",fgetc(fptr));
        // printf("%c ",fgetc(fptr));
        // printf("%c ",fgetc(fptr));
        // printf("%c ",fgetc(fptr));
        // printf("%c ",fgetc(fptr));

        // fprintf(fptr, "%c", 'M');
        // fprintf(fptr, "%c", 'A');
        // fprintf(fptr, "%c", 'N');
        // fprintf(fptr, "%c", 'A');
        // fprintf(fptr, "%c", 'V');
        
        // fprintf(fptr, "%c", 'M');
        // fprintf(fptr, "%c", 'A');
        // fprintf(fptr, "%c", 'N');
        // fprintf(fptr, "%c", 'A');
        // fprintf(fptr, "%c", 'V');

       fclose(fptr);
    
}