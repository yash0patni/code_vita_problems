#include <stdio.h>
typedef long long int ll;

int main()
{
  ll t1, t2, m;
  scanf("%lli %lli %lli", &t1, &t2, &m);
  ll i = 1, j = 1;
  ll num = 0, count = 0, h, t;
  while (num < t2)
  {
    h = i*((2*i)-1);
    t = (j*(j+1))/2;
    if (h == t)
    {
      num = h;
      if (num > t1)
      {
        count++;
        if (count == m)
        {
          printf("%lli\n", num);
          break;
        }
      }
      i++;
      j++;
    }
    else if (h < t)
      i++;
    else
      j++;
  }
  if (count < m)
  {
    printf("No number is present at this index\n");
  }
  return 0;
}
