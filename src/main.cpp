#include <iostream>
#include <map>
#include <string>

bool CollectiveAnagrams(std::map<char, int> word1, std::map<char, int> word2) {
  if (word1 == word2)
    return true;
  else
    return false;
}

std::map<char, int> BuildCharCounters(std::string& str) {
  std::map<char, int> tmpMap;
  for (const auto& ch : str) {
    ++tmpMap[ch];
  }
  return tmpMap;
}

int main() {
  std::cout << "Anagrams" << std::endl;
  std::map<char, int> word1;
  std::map<char, int> word2;
  std::string word_1;
  std::string word_2;
  std::cout << "Enter the first word" << std::endl;
  std::cin >> word_1;
  word1 = BuildCharCounters(word_1);

  std::cout << "Enter the second word" << std::endl;
  std::cin >> word_2;
  word2 = BuildCharCounters(word_2);

  for (std::map<char, int>::iterator it = word1.begin(); it != word1.end(); it++) {
    std::cout << "Word1 [key] - " << it->first << " value - " << it->second << std::endl;
  }
  std::cout << std::endl;
  for (std::map<char, int>::iterator it = word2.begin(); it != word2.end(); it++) {
    std::cout << "Word2 [key] - " << it->first << " value - " << it->second << std::endl;
  }

  if (CollectiveAnagrams(word1, word2) == true) {
    std::cout << "These words are anagrams" << std::endl;
  } else {
    std::cout << "These words are not anagrams" << std::endl;
  }

  return 0;
}
