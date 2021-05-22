#include <stdio.h>
#include <stdlib.h>

void degis(int b,int a)
{
    int bos;

    bos=b;
    b=a;
    a=bos;
    printf("\nson hali X  : %d  Y  : %d \n",b,a);
}



int main()
{
    int x;
    int y;
    printf("x: ");
    scanf("%d",&x);
    printf("y : ");
    scanf("%d",&y);
    printf("\n ilk hali X : %d  Y : %d \n\n",x,y);
    degis(x,y);

    return 0;
}
