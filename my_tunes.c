#include <stdio.h>
#include <stdlib.h>
#include "tune.h"
#include "lib.h"
#include <time.h>

int main(){
  srand(time(NULL));
  struct song * library[27];
  add(library,"please","dumplings");
  return 0;
}
