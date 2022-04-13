#include <iostream>
#include <map>
#include <string>

bool collective_anagrams(std::string str_1, std::string str_2) {
  int count;
  if (str_1.length() != str_2.size()) {
    return false;
  } else {
    for (int i = 0; i < str_1.size(); i++) {
      for (int j = 0; j < str_1.size(); j++) {
        if (str_1[i] == str_2[j]) {
          count++;
          break;
        } else
          return false;
      }
    }
    if (count == str_1.size()) {
      return true;
    }
  }
}

int main() {
  std::cout << "Name Project" << std::endl;
  std::string word_1;
  std::string word_2;
  std::cout << "Enter the first word" << std::endl;
  std::cin >> word_1;
  std::cout << "Enter the second word" << std::endl;
  std::cin >> word_2;

  if (collective_anagrams(word_1, word_2) == true) {
    std::cout << "These words are anagrams" << std::endl;
  } else {
    std::cout << "These words are not anagrams" << std::endl;
  }

  return 0;
}
