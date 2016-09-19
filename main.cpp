#include "complete_me.h"

int main() {
  CompleteMe complete = CompleteMe();
  complete.insert("word");

  vector<string> suggested = complete.suggest("o");
  for (int i = 0; i < suggested.size(); ++i) {
    cout << suggested[i] << endl;
  }
}
