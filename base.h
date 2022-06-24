#ifndef _BASE_H
#define _BASE_H

#include <iostream>

using namespace std;

class Node {
public:
  string nama, nim;
  Node *berikut;
};

class SK10 {

private:
  Node *mhs;
  int n;
		
public:
  void input();
  void output();
  void pushNode(string, string);
  
};

#endif
