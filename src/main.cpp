#include <iostream>
#include <map>
#include <string>

bool collective_anagrams(std::string str_1, std::string str_2) {
  return false;
}

int main() {
  std::cout << "Name Project" << std::endl;
  std::string word_1;
  std::string word_2;
  if (collective_anagrams(word_1, word_2) == true) {
    std::cout << "These words are anagrams" << std::endl;
  } else {
    std::cout << "These words are not anagrams" << std::endl;
  }

  return 0;
}
