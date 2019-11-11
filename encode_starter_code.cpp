#include <iostream>
#include <cstdio>
using namespace std;


struct Node {
  int id;
  Node *left, *right;
  char l, r;
  Node() { id = 0; left = right = NULL; }
  Node(int i) { id = i; left = right = NULL; }
};

Node* insert(Node* T, int i)
{
  if (T==NULL) return new Node(i);


}


int main(void)
{
  char c;
  Node* root = new Node;
  do {
    // read one character from standard input, whitespace included
    c = cin.get();
    // ...
  } while (c != EOF);
  return 0;
}
