#include <iostream>
using namespace std;
main()
{
  int n;
  cout << "enter the number of elements:";
  cin >> n;
  int num[n];
  int min = num[0];
  int max = num[0];
  cout << "enter " << n << " numbers : ";
  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
  }
  for (int i = 1; i < n; i++)
  {
    if (num[i] < num[0])
    {
      min = num[i];
      cout << " smallest number: " << min << endl;
    }
  }

  for (int i = 1; i < n; i++)
  {
    if (num[i] > num[0])
    {
      max = num[i];
      cout << " largest number: " << max << endl;
    }
  }
  return 0;
}