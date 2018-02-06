
#include "array.h"

using namespace std;

void Array::reverse( char str[])
{
  unsigned long length = strlen(str);
  for (int i = 0; i < strlen(str)/2; i++)
  {
  swap(str[i], str[length - i - 1]);
  }
}

int Array::string2number(const char str[])
{
  unsigned long  length=strlen(str);
  int val = 0 ;
  int result = 0;
  for (int i = int(length)-1 ; i >= 0 ; )
  {
  int t = int (str[i]) - '0' ;
    if (t < 0 || t > 9)
    {
    result = 0 ;
    break ;
    }
    i--;
    result = result + t * (a_pow_b(10, val));
    val ++ ;
  }
  return result ;
}

int Array::removedups(int* a, int l )
{
  for (int i =0 ; i < l ; i++)
  {
    for (int j = i+1 ; j < l ; j++)
    {
      if (a[i] == a[j])
      {
        for (int c=j; c< l; c++)
        {
        a[c]=a[c+1];
        }
        l = l-1;
        j--;
      }
    }
  }
  return l ;
}

void Array::p(const char str_reverse[], char str[])
{
  while (*str_reverse != '\0')
  {
  cout << *str_reverse ;
  str_reverse++;
  }
  cout << " " ;
  while (*str != '\0')
    {
    cout << *str;
    str++;
    }
    cout << '\n';
}

void Array::p(const char str[], int* a, int b)
{
  for (int i=0; i < strlen(str); i++)
  {
  cout << str[i] ;
  }
    for (int j=0; j < b ;j++)
    {
    cout << a[j] << " " ;
    }
    cout << '\n';
}

void Array::copy( char* s,  const char* t)
{
  for (int i = 0 ; i < 100; i++)
  {
  s[i] = '\0' ;
  }
    while (*t != '\0')
    {
    *s = *t;
    s++;
    t++;
    }
}

int Array::a_pow_b(int a, int b)
{
  int result=1;
  for (int i=1; i <= b; i++)
  {
  result = result*a;
  }
  return result ;
}

//EOF
