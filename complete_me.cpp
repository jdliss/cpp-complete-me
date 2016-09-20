#include "complete_me.h"

CompleteMe::CompleteMe() {
  this->root = Node();
  this->count = 0;
}

int CompleteMe::insert(string word) {
  return insertRecursive(word, 0, &this->root);
}

int CompleteMe::insertRecursive(string word, int n, Node* currentNode) {
  if (currentNode->children.count(word[n]) == 0) {
    currentNode->children[word[n]] = Node();
    if (n == word.size() - 1) {
      currentNode->children[word[n]].endOfWord = true;
      this->count++;
    }
  }
  if (n < word.size() - 1) {
    insertRecursive(word, n+1, &currentNode->children[word[n]]);
  }
  return this->count;
}

vector<string> CompleteMe::suggest(string word) {
  if (word == "") {
    try {
      throw 1;
    }
    catch (int n) {
      cout << "Suggestion input must not be empty" << endl;
    }
  }
  return suggestSetup(word, &this->root);
}

vector<string> CompleteMe::suggestSetup(string word, Node* currentNode) {
  if (word == "") {
    try {
      throw 1;
    }
    catch (int n) {
      cout << "Suggestion input must not be empty" << endl;
    }
  }

  for (int i = 0; i < word.size(); ++i) {
    if (this->root.children.count(word[i]) > 0) {
      currentNode = &this->root.children[word[i]];
    } else {
      vector<string> none = { "No suggestions found." };
      return none;
    }
  }
}
