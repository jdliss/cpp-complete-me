#include "node.h"
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

class CompleteMe {
 public:
  CompleteMe();
  Node root;
  int count;
  map<string, map<string, int>>weights;

  int insert(string);

  vector<string> suggest(string);

 private:
  int insertRecursive(string, int, Node*);
  vector<string> suggestSetup(string, Node*);
  vector<string> split(string);
};
