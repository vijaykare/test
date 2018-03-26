#include<stdlib.h>
#include<stdio.h>
int main()
{
        unsigned char uc = 255;
        signed char sc = 127;
        int i;
        for(i=0; i<10; i++){
                printf("uc:%d---sc:%d \n", uc++, sc++);
        }
        printf("A:%d a:%d B:%d b:%d\n", 'A', 'a', 'B', 'b');


return 0;
}
