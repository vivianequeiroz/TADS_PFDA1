#include <stdio.h>
#define N 4
float mediaNotas(n1, n2, n3){
    float media = (n1+n2+n3)/3;
    return media;
}

typedef struct
{
    char name [20];
    int eng, math, phys;
    float media;
}student;





int main (void)
{
    student data [N] = 
{
    {"Ad", 44, 55, 66, mediaNotas(data[1].eng, data[2].eng, data[3].eng)},
    {"AC", 11, 22, 33, mediaNotas(data[1].eng, data[2].eng, data[3].eng)},
    {"DC", 42, 23, 80, mediaNotas(data[1].eng, data[2].eng, data[3].eng)},
    {"ata", 100, 93, 75, mediaNotas(data[1].eng, data[2].eng, data[3].eng)}
};
    int i;
    for (i=0; i<N; i++)
    {
        printf ("%7s: Eng = %3d Math =%3d Phys = %3d\n MEDIA = %2.f", data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].media);
    }

    return 0;
}
