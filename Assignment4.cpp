#include<iostream>

void increment(int &x) {
  x = x + 1;
}

int main(){

  int m = 1;
  increment(m);

  return 0;
}
