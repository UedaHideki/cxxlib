#include "msg.h"
#include "calc.h"

#include <iostream>
using namespace std;


int main(void)
{
  int a = 10;
  int b = 8;

  cout << "add result" << add(a, b) << endl;
  cout << "sub redult" << sub(a, b) << endl;

  for(int i = 0; i < 10; i++)
  {
    msg_hello();
  }

  return 0;
}

