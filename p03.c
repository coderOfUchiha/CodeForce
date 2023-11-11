#include <stdio.h>
 int main(int argc, char const *argv[])
{
	char s[100];
	int n;
	gets(s);
	n = strlen(s);
	if (n<10)
	{
		printf("%s\n",s );
	}
	else
	{
		printf("%s%d%s"s[0],n,s[n]);
	}
	/* code */
	return 0;
}