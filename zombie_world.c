#include <stdio.h>
typedef long long int ll;

int main()
{
  int n;
  ll b;
  scanf("%lli %i", &b, &n);
  int z;
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &z);
    b -= (z % 2) + (z / 2);
  }
  if (b > 0)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
