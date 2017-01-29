#include<iostream>
#include<cstring>

int main()
{
  int i, flag=0;
  char str[1000];
  std::cin >> str;
  for (i=1; i<strlen(str); i++)
  {
    if ((str[i] <= 'Z') && (str[i] >= 'A'))
    {}
    else
    {
      flag=1;
      break;
    }
  }
  if (flag == 0)
  {
    if ((str[0] <= 'Z') && (str[0] >= 'A'))
        str[0]=(char)((int)str[0]+32);
    else if ((str[0] <= 'z') && (str[0] >= 'a'))
        str[0]=(char)((int)str[0]-32);
    for (i=1; i<strlen(str); i++)
      str[i]=(char)((int)str[i]+32);
  }
  std::cout << str << '\n';
  return 0;
}
