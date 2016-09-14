#include "node.h"
#include <vector>

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
  vector<string> suggestRecursive(string, Node*);
};
