#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FORMAT "#include <stdlib.h>%1$c#include <stdio.h>%1$c#include <string.h>%1$c%1$c#define FORMAT %3$c%4$s%3$c%1$c%1$cstatic char buffer[512];%1$c%1$cint main(void)%1$c{%1$c%2$cint i = %6$d;%1$c%1$c%2$cif (strcmp(__FILE__, %3$cSully.c%3$c) != 0) i--;%1$c%2$cif (i < 0) return 0;%1$c%1$c%2$csprintf(buffer, %3$cSully_%5$cd.c%3$c, i);%1$c%2$cFILE *f = fopen(buffer, %3$cw%3$c);%1$c%2$cif (f == NULL) return 1;%1$c%2$cfprintf(f, FORMAT, 10, 9, 34, FORMAT, 37, i);%1$c%2$cfclose(f);%1$c%1$c%2$csprintf(buffer, %3$cclang -o Sully_%5$c1$d Sully_%5$c1$d.c; ./Sully_%5$c1$d%3$c, i);%1$c%2$cint ret = system(buffer);%1$c%2$cif (ret != 0) return ret;%1$c%1$c%2$creturn 0;%1$c}%1$c"

static char buffer[512];

int main(void)
{
	int i = 5;

	if (strcmp(__FILE__, "Sully.c") != 0) i--;
	if (i < 0) return 0;

	sprintf(buffer, "Sully_%d.c", i);
	FILE *f = fopen(buffer, "w");
	if (f == NULL) return 1;
	fprintf(f, FORMAT, 10, 9, 34, FORMAT, 37, i);
	fclose(f);

	sprintf(buffer, "clang -o Sully_%1$d Sully_%1$d.c; ./Sully_%1$d", i);
	int ret = system(buffer);
	if (ret != 0) return ret;

	return 0;
}
