#include<stdio.h>
#include<stdlib.h>

#define RANGE 100000000

int main( int argc, char **argv )
{
  int i, j, minN, maxN, max_length = 0;

  minN = atoi ( argv[1] );
  maxN = atoi ( argv[2] );
  if ( ( minN <= 0 ) || ( minN > RANGE ) || ( maxN <= 0 ) || ( maxN > RANGE ) || ( argc != 3 ) )
  {
    printf("0\n");
    exit(0);
  }

  for ( j = minN; j <= maxN; j++ )
  {
    long long int N = j;
    for ( i = 1; N > 1; i++ )
    {
      if ( N % 2 == 0 ) N >>= 1;
      else N = 3 * N + 1;
    }
    if ( i > max_length )
      max_length = i;
  }
  printf("%d\n", max_length );
  exit(0);
}

