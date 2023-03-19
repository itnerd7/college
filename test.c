//4th March - QSpiders session -- Santanu.
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms for the sequence
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term), very important !
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2 for later calculations
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms cronologically
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}

