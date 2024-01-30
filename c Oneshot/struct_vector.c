// vector is always in a structure
// complex number
// we can calculate the magnitude of the complex number
#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct complex_no
{
    int real;
    int img;
};

void calcsum(struct vector v1, struct vector v2, struct vector sum);
void calcmagnitude(struct complex_no c1, struct complex_no sum);

int main()
{
    /*
    struct vector v1={10,4};
    struct vector v2={3,7};
    struct vector sum={0};
    calcsum(v1,v2,sum);
    */
    struct complex_no c1 = {5, 8};
    struct complex_no sum = {0};
    struct complex_no *ptr;
    ptr = &c1;
    //    printf("real part:%d",ptr->real);
    //    printf("\nimg part:%di",ptr->img);
    // printf("complex no: %d + %di",ptr->real,ptr->img);
    
    calcmagnitude(c1, sum);

    return 0;
}

void calcsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("X:%d  y:%d", sum.x, sum.y);
}

void calcmagnitude(struct complex_no c1, struct complex_no sum)
{
    int real = c1.real * c1.real;
    int img = c1.img * c1.img;
    int x = real + img;
    printf("magnitude:%d", x);
}