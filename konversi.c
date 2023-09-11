#include <stdio.h>

int main()
{
    int km, m, cm;

    printf("Masukkan Jarak dalam kilometer : " );
    scanf("%d",&km);

    m = km * 1000;
    cm = km * 100000;

    printf("\nKonversi Km ke meter dan sentimeter\n");
    printf("Jarak dalam meter = %d\n", m);
    printf("Jarak dalam sentimeter = %d\n", cm);

}
