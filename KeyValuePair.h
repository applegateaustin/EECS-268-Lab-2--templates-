/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: KeyValuePair.h
 */


#ifndef KVP_H
#define KVP_H

//this is how we declare a template class. The actual name of the class is what you define the class to be, in this case we defined it as KeyValuePair.
template<typename Key, typename Value>

class KeyValuePair {
  
  //varaibles to only be used within this file.
  private:
    Key Ky;

    Value Val;

  public:
    //getter
    Key getKy();

    Value getVal();


    //setter
    void setKy(Key k);

    void setVal(Value v);

    //creating constructor
    KeyValuePair();
}

#endif
