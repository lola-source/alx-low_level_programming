/*
 *file: 6-size.c
 *auth: lola-source
 */
#include<stdio.h>
/**
 *main - prints the size of various types
 *	based on the computer it is compiled and run on..
 *return: always 0.
 */
int main(void)
{
	printf("Size of the char:%zu byte(s)\n", sizeof(char));
	printf("Size of the int:%zu byte(s)\n", sizeof(int));
	printf("Size of long int:%zu byte(s)\n", sizeof(longint));
	printf("Size of long long int:%zu byte(s)\n", sizeof(long long int));
	printf("Size of float:%zu byte(s)\n", sizeof(float));
}
