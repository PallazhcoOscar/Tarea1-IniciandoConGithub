#include <stdio.h>
#define MAXLINE 1000

/* Oscar Pallazhco, Jorge Rodríguez*/

int getline2(char line[], int maxline);
int modificar1(char s[]);
void modificar2(char s[], int c);
void copy(char to[], char from[]);
void menu();

int main(){
	int len;
	int max;
	int f1;
	char line[MAXLINE];
	char longest[MAXLINE];
	int n; /*codigo ascii del caracter a eliminar*/

	max = 0;
	while ((len = getline2(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	f1 = modificar1(longest);
	printf("función1: %d\n",f1);
	
	printf("original: %s", longest);
	modificar2(longest,103);
	printf("función2: %s\n", longest);
	
	return 0;
}

int getline2(char s[],int lim){
	int c, i;

	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	++i;
}

int modificar1(char s[]){
	/*contar numero de caracteres de un cadena de caracteres*/
	int i;
	i=0;
	while (s[i] != '\0')
		++i;
	return i-1;
}


void modificar2(char s[], int c){
int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}




