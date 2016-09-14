#include <iostream>
#include <string>
#include <map>

using namespace std;

class Node {
 public:
  bool endOfWord;
  map<char, Node>children;
  Node();
};

