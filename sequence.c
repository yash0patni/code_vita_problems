#include <stdio.h>
typedef long long int ll;

int main()
{
  ll n;
  scanf("%lli", &n);
  ll arr[n], temp[n], copy[n];
  for (ll i = 0; i < n; i++)
  {
    scanf("%lli", &arr[i]);
  }
  temp[0] = arr[0];
  ll k = 0, max_length = 0;
  for (ll i = 1; i < n; i++)
  {
    if (arr[i] >= temp[k])
    {
      temp[++k] = arr[i];
    }
    else
    {
      if (k > max_length)
      {
        for (ll j = 0; j <= k; j++)
        {
          copy[j] = temp[j];
        }
        max_length = k;
      }
      k = 0;
      temp[k] = arr[i];
    }
  }
  if (k > max_length)
  {
    for (ll j = 0; j <= k; j++)
    {
      copy[j] = temp[j];
    }
    max_length = k;
  }
  for (ll i = 0; i <= max_length; i++)
    printf("%lli ", copy[i]);
  printf("\n");
  return 0;
}
