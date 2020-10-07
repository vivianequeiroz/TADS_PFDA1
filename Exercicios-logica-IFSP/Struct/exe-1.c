#include <stdio.h>
#define N 4

typedef struct
{
    char name [20];
    int eng, math, phys;
}student;

student data [N] = 
{
    {"Ad", 44, 55, 66},
    {"AC", 11, 22, 33},
    {"DC", 00, 23, 80},
    {"ata", 100, 93, 75}
};

int main (void)
{
    int i;
    for (i=0; i<N; i++)
    {
        printf ("%7s: Eng = %3d Math =%3d Phys = %3d\n", data[i].name, data[i].eng, data[i].math, data[i].phys);
    }

    return 0;
}