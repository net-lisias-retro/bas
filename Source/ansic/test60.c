#include <stdio.h>

#include "value.h"
#include "token.h"

int main(int argc, char *argv[])
{
  struct Token *t,*r;
  struct String str;
  int indent;

  Token_init(0,0,0);
  t=Token_newCode("10 print 4\n");

  for (r=t; ;++t)
  {
    printf("type %d\n",t->type);
    switch (t->type)
    {
      case T_IDENTIFIER: printf("  %s\n",t->u.identifier->name); break;
      case T_INTEGER:    printf("  %ld\n",t->u.integer); break;
      case T_HEXINTEGER: printf("  %lx\n",t->u.hexinteger); break;
      case T_OCTINTEGER: printf("  %lo\n",t->u.octinteger); break;
      default: break;
    }

    if (t->type==T_EOL) break;
  }

  String_new(&str);

  indent = 0;
  Token_toString(r, NULL, &str, &indent, 2);
  printf("<%s>\n",str.character);
  String_destroy(&str);

  Token_destroy(r);

  return 0;
}
