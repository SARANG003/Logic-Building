#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iNum = 0;

    for( ; iNo != 0 ; iNo = iNo / 10)
    {
        iNum = iNo % 10;
        printf("%d\n",iNum);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}