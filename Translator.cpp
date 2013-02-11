/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: Translaator.cpp
 */

#include <ifstream>
#include <string>

class Translator {
  private:
    TranslationTable<std::string, int> T1;
    TranslationTable<int, std::string> T2;
    void translateMsg(std::ifstream& in);

  public:
    Translator(std::ifstream& in)
};
