//004: format specifier in C



#include <stdio.h>

int main()
{
// %d used to take value of integer type ,it will convert float value into integer
printf("my age is  %d \n ",20);
printf("my income is %d \n",34.24);

// %f used to take value of float type ,it will convert int value into float
printf("my float value is %f \n",34);
printf("my age is %f \n",24.4567);

// %.1f means it will take 1 value after decimal and %.2f means two value after decimal and so on
printf("my income is %.1f and %.3f \n",10.1234,23.135666);

// %c is used to print character or string
printf("this is my %s","amit");

return 0;

}