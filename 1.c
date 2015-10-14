#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	char a;
	char s1[100];
	gets(s);
	a = getchar();
	int i, j;
	int len = strlen(s); 
	for(i=j=0; i<=len; i++)
		if(s[i] != a)
			s1[j++] = s[i];
	s1[j] = '\0';
	printf("%s\n", s1);

	return 0;
