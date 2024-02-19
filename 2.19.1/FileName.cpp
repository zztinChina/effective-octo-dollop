#include<stdio.h>
int main()
{
	char ch[100];
	fgets(ch, sizeof(ch), stdin);
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (ch[i] == 'a')
		{
			ch[i] = '*';
		}
	}
	printf("%s", ch);
	return 0;
}