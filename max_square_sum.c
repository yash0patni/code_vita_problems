#include <stdio.h>

int main()
{
  int n;
  scanf("%i", &n);
  int arr[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%i", &arr[i][j]);

  int sum = 0;
  int max_sum = 0;

  for (int k = 2; k <= n; k++)
  {
    for (int l = 0; l < n - k + 1; l++)
    {
      for (int m = 0; m < n - k + 1; m++)
      {
        sum = 0;
        for (int i = l; i < k + l; i++)
        {
          for (int j = m; j < k + m; j++)
          {
            sum += arr[i][j];
          }
        }
        if (sum > max_sum)
        {
          max_sum = sum;
        }
      }
    }
  }
  printf("%i\n", max_sum);
  return 0;
}
