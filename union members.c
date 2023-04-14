#include<stdio.h>
#include<string.h>
union Data
{
    int i;
    float f;
};

int main()
{
    union Data data;
    data.i=10;
    printf("data.i:%d\n",data.i);
    data.f=220.5;
    printf("data.f:%f\n",data.f);
    strcpy(data.str,"c programming");
    printf("data.str:%s\n",data.str);
    return 0;
}