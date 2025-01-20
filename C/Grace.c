#include <stdio.h>

#define FORMAT "#include <stdio.h>%1$c%1$c#define FORMAT %2$c%3$s%2$c%1$c#define SAY(f, s) fprintf(f, s, 10, 34, s);%1$c#define MAIN() int main(void){ FILE *f = fopen (%2$cGrace_kid.c%2$c, %2$cw%2$c); if (f == NULL) return 1; SAY(f, FORMAT) fclose(f); return 0; }%1$c%1$c/*%1$c  this program writes its source code in a file%1$c*/%1$c%1$cMAIN();%1$c"
#define SAY(f, s) fprintf(f, s, 10, 34, s);
#define MAIN() int main(void){ FILE *f = fopen ("Grace_kid.c", "w"); if (f == NULL) return 1; SAY(f, FORMAT) fclose(f); return 0; }

/*
  this program writes its source code in a file
*/

MAIN();
