#include<iostream>
#include<cstring>

using namespace std;
void translateRxCx(char str[], int i)
{

}

void translateBCxx(char str[])
{

}

int main()
{
  int t, i;
  char str[100];
  cin >> t;
  for (; t>0; t--)
  {
    cin >> str;
    // case 1 R23C55
    if (str[0] == 'R' && (str[1] == '0' || str[1] == '1' || str[1] == '2' || str[1] == '3' || str[1] == '4' || str[1] == '5' || str[1] == '6' || str[1] == '7' || str[1] == '8' || str[1] == '9'))
    {
      for (i=3; i<100; i++)
      {
        if (str[i] == 'C')
          translateRxCx(str, i);
        else if (str[i] == '\0')
          break;
      }
    }
    // case 2 BC23
    translateBCxx(str);
  }
  return 0;
}
