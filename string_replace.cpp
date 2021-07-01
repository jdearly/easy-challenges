#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::string tweet;
    getline(std::cin, tweet);
    std::string word;
    std::vector<std::string> words;
   for(char s : tweet){
      if(s == ' '){
         words.push_back(word);
         word = "";
      } else {
          word += s;
      }
   }
   words.push_back(word);
   int max = 0;
   for(std::string word : words) {
       if(word[0] == 'c' && word.length() > max) {
           max = word.length();
       }
   }
   for(std::string word : words) {
       if(word != words.front()) {
           std::cout << " ";
       }
       if(word[0] == 'c' && word.length() >= max) {
           std::cout <<  "covfefe";
       } else {
           std::cout << word;
       }
   }
}
