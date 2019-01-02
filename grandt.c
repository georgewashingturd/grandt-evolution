#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main (void)
{
	char p[27], say[10 + 1];
	unsigned int i;
	
	p[26] = ' ';
	p[0] = 'a';
	
	for (i = 1; i < 26; i++ )
	{
		p[i] = p[0] + i;
	}
	
	srand(time(NULL));
	
	say[10] = 0;
	for (i = 0; i < 10; i++)
	{
		say[i] = p[rand()%27];
	}
	
	printf("%s\n", say);
	
	i = 0;
	while(strcmp(say,"i love you"))
	{
		int j = rand() % 10;
		
		if (j == 0) j++;
		
		i += j;
		
		while(j-- > 0)
		{
			say[rand()%10] = p[rand()%27];
		}
		
		
		printf("%s %d%c",say,i,13);
	}
	
	printf("\n");
	return 0;
}