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
	printf("������� ��������� ����� (a-j) ��� �����(0-9):\n");
	scanf("%c", &c);
	switch (c)
	{
		case 'a':
			printf("��� �����");
			break;
		case 'b':
			printf("��� �����");
			break;
		case 'c':
			printf("��� �����");
			break;
		case 'd':
			printf("��� �����");
			break;
		case 'e':
			printf("��� �����");
			break;
		case 'f':
			printf("��� �����");
			break;
		case 'j':
			printf("��� �����");
			break;
		case '0':
			printf("��� �����");
			break;
		case '1':
			printf("��� �����");
			break;
		case '2':
			printf("��� �����");
			break;
		case '3':
			printf("��� �����");
			break;
		case '4':
			printf("��� �����");
			break;
		case '5':
			printf("��� �����");
			break;
		case '6':
			printf("��� �����");
			break;
		case '7':
			printf("��� �����");
			break;
		case '8':
			printf("��� �����");
			break;
		case '9':
			printf("��� �����");
			break;
		default:
			printf("����������� ������");
	}
//2
	char ch;
	float x;
	float y;
	printf("\n������� ��������� ��� ����������:\n");
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