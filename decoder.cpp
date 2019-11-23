/*
 * Noah Cooley-Cannon
 * lab10
 * cpsc2120-03
 * Dean
 */

/* compile with std=c++11 :) */
#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <vector>
using namespace std;

struct Node {
  int id;
  int pred;
  char c;
  Node(int i, int p, char a) { id=i; pred=p; c=a; }
};


void print_pattern (vector<Node> &t, int i)
{
  if (i == 0||t[i].c == EOF) return;
  print_pattern (t, t[i].pred); 
  cout << t[i].c; 
  
}


int main(void)
{
  int c;
  vector <Node> trie;
  trie.push_back(Node(0, -1, (char)0));
  int pred = 0; 
  int nodeCount = 0;

  do {
    // read one character from standard input, whitespace included
    cin >> pred; 
    cin.ignore();
    cin >> c; 
    nodeCount++;
    //cout <<  c << endl;
    //build and print recursively?

    trie.push_back (Node(nodeCount, pred, (char)c));
    print_pattern(trie, nodeCount);
    pred++;


  } while (c != EOF);

  return 0;
}
