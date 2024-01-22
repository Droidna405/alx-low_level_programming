#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
int main(int argc, char* argv[])
{
UNUSED(argc);

printf("%s", argv[0]);
return (0);
}
