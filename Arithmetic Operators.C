#include <stdio.h>

int main()
{

int num1, num2;
int ADD, MUL, SUB;
float DIV;

printf("Enter any 2 integer : ");
scanf("%d %d", &num1, &num2);

ADD = num1 + num2;
MUL = num1 * num2;
DIV = (float)num1 / num2;
SUB = num1 - num2;

printf("ADD = %d\n", ADD);
printf("MUL = %d\n", MUL);
printf("DIV = %0.1f\n", DIV);
printf("SUB = %d\n", SUB);

return 0;

}
