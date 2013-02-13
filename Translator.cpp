/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: Translaator.cpp
 */

#include <fstream>
#include <string>
#include <iostream>
void Translator::TranslateMsg(std::ifstream& in) {
  //This is my function that is suppose to decode the message. To decode the message
  //we will use the first lookup table and find the corresponding integer to the word then we use the second table to find
  //the word corresponding to the integer.
  //
  //going to call the getter to get the integer of first tabe
  // I want to type something like this to get the integer from T1 but not sure what it is T1.getVal(1);
}

//constructor
Translator::Translator(std::ifstream& in) {

    TranslationTable<std::string, int> T1(in);
    TranslationTable<int, std::string> T2(in);
    
}


