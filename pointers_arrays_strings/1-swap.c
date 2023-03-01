#include "main.h"
/**
 *1-swap.c - swaps value of two integers
 *
 *return-always return zero
 */

void swap_int(int *a, int *b){
  *a = *b;
  *b = *a;
  return (0);
}
