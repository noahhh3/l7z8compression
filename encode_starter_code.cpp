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
  unordered_map <char, int> m;
  Node(int i) { id=i; }
};



int main(void)
{
  char c;
  vector <Node> trie;
  trie.push_back(Node(0));
  int i=0;
  int nodeCount = 1;

  do {
    // read one character from standard input, whitespace included
    c = cin.get();
     
    //if pattern exists
    if (trie[i].m.find(c) != trie[i].m.end())
    {
      unordered_map <char,int>::iterator t = trie[i].m.find(c);
      i = (t->second);
      nodeCount--;
    }
    else
    { 
      trie.push_back(Node(nodeCount));
      trie[i].m.insert({c,nodeCount});
      cout << i << " " << (int)c << "\n";
      i = 0;
    }
    nodeCount++;

  } while (c != EOF);

  return 0;
}
