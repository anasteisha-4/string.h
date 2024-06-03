#include <locale.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "s21_string.h"

int main() {
  char a1, a2;
  char b1[256] = {'\0'};
  char b2[256] = {'\0'};
  float c1, c2;
  short int d1, d2;
  long int e1, e2;

  const char str[] = "$AmIIn%%sane? %\n\n\n \n \n \n\t   InF 0 %FIN9D-ME%";
  const char fstr[] = "%c%5s%%%*s %%  %G %hi %%FIN%ldDME%%";

  int32_t res1 = s21_sscanf(str, fstr, &a1, b1, &c1, &d1, &e1);
  int32_t res2 = sscanf(str, fstr, &a2, b2, &c2, &d2, &e2);
  printf("s21: res:%d a:%c b:%s c:%G d:%hi e:%ld\n", res1, a1, b1, c1, d1, e1);
  printf("orig: res:%d a:%c b:%s c:%G d:%hi e:%ld\n", res2, a2, b2, c2, d2, e2);
}
