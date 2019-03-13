%{
#include <stdio.h>
int valosszamok=0;
%}
digit	[0-9]
%%
{digit}*{\.{digit}+}?	{++valosszamok;
	printf("[valossz=%s %f]", yytext, atof(yytext));}
%%
int main()
{
	yylex();
	printf("Valós számok száma: %d\n", valosszamok);
	return 0;
}
