/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: KeyValuePair.h
 */

#ifndef TranslateTable_H
#define TranslateTable_H

#include "KeyValuePair.h"
#include <fstream>

template<typename Key, typename Value>

class TranslationTable {

  private:
    //A array of type 'KeyValuePair<Key, Value>' named KyArray.
    KeyValuePair<Key, Value>* KyArray;

  public:
  //my mother fucking function names
  Value getValue(Key key);
   
  //creating the constructor for the class that is going to takes in a file stream that has to be called by reference.
  TranslationTable(std::ifstream& in);
  
};
#include "TranslationTable.cpp"
#endif
