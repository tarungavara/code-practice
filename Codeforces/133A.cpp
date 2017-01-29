#include<iostream>
#include<cstring>

int main()
{
  int i, flag=0;
  char str[10000];
  std::cin >> str;
  for (i=0; i<strlen(str); i++)
  {
    if ((str[i] == 'H') || (str[i] == 'Q') || (str[i] == '9'))
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    std::cout << "YES" << '\n';
  else std::cout << "NO" << '\n';
  return 0;
}
