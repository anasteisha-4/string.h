#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *res = s21_NULL;
  for (s21_size_t i = 0; i < (s21_strlen(str) + 1) && !res; i++) {
    if (str[i] == c) {
      res = (char *)(str + i);
    }
  }
  return res;
}