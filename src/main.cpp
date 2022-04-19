#include <iostream>
#include <map>
#include <string>

bool collective_anagrams(std::string str_1, std::string str_2) {
  int count[256] = {0};
  int i;
  for (i = 0; str_1[i] && str_2[i]; i++) {
    count[str_1[i]]++;
    count[str_2[i]]--;
  }
  if (str_1[i] || str_2[i])
    return false;
  for (i = 0; i < 256; i++)
    if (count[i])
      return false;
  return true;
}

int main() {
  std::cout << "Anagrams" << std::endl;
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
