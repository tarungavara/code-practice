#include<iostream>
#include<cstring>
#include<cmath>

int main()
{
  int i, flag=0, flag2=0, n=0;
  int array[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  char str[100];
  std::cin >> str;
  for (i=0; i<strlen(str); i++)
  {
    if ((str[i] != '4') && (str[i] != '7'))
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    std::cout << "YES" << '\n';
  else
  {
    //convert str to int
    for (i=0; i<strlen(str); i++)
    {
      n = n+((int)str[strlen(str)-i-1]-48)*pow(10, i);
    }

    for (i=0; i<14; i++)
    {
      if (array[i] > n)
        break;
      else if ((n % array[i]) == 0)
        {
          flag2=1;
          break;
        }
    }
    if (flag2 == 0)
      std::cout << "NO" << '\n';
    else if (flag2 == 1)
      std::cout << "YES" << '\n';
  }
  return 0;
}
