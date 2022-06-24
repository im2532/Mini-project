#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
	int a = 43;
	int* ptr = &a;
	printf("%d\n",ptr);
	printf("%d\n"ptr+1);
	return 0;
}
