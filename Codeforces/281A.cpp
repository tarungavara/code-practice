#include<iostream>
#include<cstring>

int main()
{
  char str[1005];
  std::cin >> str;
  if ((str[0] <= 'z') && (str[0] >= 'a'))
    str[0]=(char)((int)str[0]-32);
  std::cout << str << '\n';
  return 0;
}
