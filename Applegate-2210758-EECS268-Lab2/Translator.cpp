/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: Translaator.cpp
 */

#include <fstream>
#include <string>
void Translator::TranslateMsg(std::ifstream& in) {

}

//constructor
Translator::Translator(std::ifstream& in) {

    TranslationTable<std::string, int> T1(in);
    TranslationTable<int, std::string> T2(in);
}


