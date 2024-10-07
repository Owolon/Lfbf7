#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
//1
	setlocale(LC_CTYPE, "RUS");
	char c;    
	printf("Введите латинские буквы (a-j) или цифры(0-9):\n");
	scanf("%c", &c);
	switch (c)
	{
		case 'a':
			printf("Это буква");
			break;
		case 'b':
			printf("Это буква");
			break;
		case 'c':
			printf("Это буква");
			break;
		case 'd':
			printf("Это буква");
			break;
		case 'e':
			printf("Это буква");
			break;
		case 'f':
			printf("Это буква");
			break;
		case 'j':
			printf("Это буква");
			break;
		case '0':
			printf("Это цифра");
			break;
		case '1':
			printf("Это цифра");
			break;
		case '2':
			printf("Это цифра");
			break;
		case '3':
			printf("Это цифра");
			break;
		case '4':
			printf("Это цифра");
			break;
		case '5':
			printf("Это цифра");
			break;
		case '6':
			printf("Это цифра");
			break;
		case '7':
			printf("Это цифра");
			break;
		case '8':
			printf("Это цифра");
			break;
		case '9':
			printf("Это цифра");
			break;
		default:
			printf("Неизвестный символ");
	}
//2
	char ch;
	float x;
	float y;
	printf("\nВведите выражение для вычисления:\n");
	scanf("%f%c%f", &x,&ch,&y);

	switch  (ch)
	{
		case '*':
			printf("=%.1f",x*y);
			break;
		case '/':
			printf("=%.1f", x/y);
			break;
		case '+':
			printf("=%.1f", x+y);
			break;
		case '-':
			printf("=%.1f", x-y);
			break;
		case '^':
			printf("=%.1f", pow(x,2)*pow(y,2));
			break;
		default:
			break;
	}
	return 0;
 }