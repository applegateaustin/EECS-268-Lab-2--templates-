/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: Translaator.cpp
 */
#ifndef Translator_H
#define Translator_H

#include <fstream>
#include <string>
#include "TranslationTable.h"

class Translator {
  private:


  public:
    Translator(std::ifstream& in);

    void TranslateMsg(std::ifstream& in);

};
#include "Translator.cpp"
#endif
