#include "node.h"
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

class CompleteMe
{
 public:
  CompleteMe();
  Node root;
  int count;
  map<string, map<string, int>>weights;

  int insert(string);
  int insertRecursive(string, int, Node*);

  vector<string> suggest(string);
  vector<string> suggestSetup(string, Node*);

 private:
  vector<string> split(string);
};
