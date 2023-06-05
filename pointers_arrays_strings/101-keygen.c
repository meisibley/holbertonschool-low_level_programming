#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords for program 101-crackme
 *
 * Return: Always 0.
 */
void passwd(int p_l)
{
	int i;
	time_t t;
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_-+=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/|";
	printf("\n");
	srand((unsigned) time(&t));
	for(i = 0; i < p_l; i++)
		printf("%c", list[rand() % (sizeof list - 1)]);
	printf("\nTada! Congrats\n");
}

int main(void)
{
	int passwd_len;
	printf("\n\tPlease enter the length of the password: ");
	scanf("%d", &passwd_len);
	passwd(passwd_len);
	return (0);
}
