#include <stdio.h>

/*
  this is a fixed-point program: its output is identical to its source code
*/

static void say(const char *s)
{
	printf(s, 10, 9, 34, s);
}

int main(void)
{
	const char *s = "#include <stdio.h>%1$c%1$c/*%1$c  this is a fixed-point program: its output is identical to its source code%1$c*/%1$c%1$cstatic void say(const char *s)%1$c{%1$c%2$cprintf(s, 10, 9, 34, s);%1$c}%1$c%1$cint main(void)%1$c{%1$c%2$cconst char *s = %3$c%4$s%3$c;%1$c%2$c/*%1$c%2$c  above is a string containing the source code%1$c%2$c*/%1$C%1$c%2$csay(s);%1$c%1$c%2$creturn 0;%1$c}%1$c";
	/*
	  above is a string containing the source code
	*/

	say(s);

	return 0;
}
