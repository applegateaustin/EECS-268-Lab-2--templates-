/*
 * Author: Austin Applegate
 * Date Modified: 2/6/13
 * Lab Number: 2
 * File Name: KeyValuePair.cpp
 */


//"template<typename Key, typename Value> is telling the fucntion below it is telling you what 'Key' and 'Value' are so that the function is then able to use them.
//else you would get an error because the function wouldn't know what 'Key' and 'Value' are.
template<typename Key, typename Value>
KeyValuePair<Key, Value>::KeyValuePair() {
  //this is just the constructor function, which we are doing nothing with
}

//creating a getter function that is going to return whatever data type 'Key' is. the name of the function is 'getKy()' which we defined in 'KeyValuePair.h'
template<typename Key, typename Value>
Key KeyValuePair<Key, Value>::getKy() {
  return Ky;
}

//creating a getter function that is goign to return whatever datat type 'Value' is. The name of the function is 'getVal()' which we defined in 'KeyValuePair.h'
template<typename key, typename Value>
Value KeyValuePair<Key, Value>::getVal() {
  return Val;
}

//creating setter function that is going to return nothing 'void'. The name of the function is 'setKy()' which we defined in 'KeyValuePair.h'
template<typename Key, typename Value>
void KeyValuePair<Key, Value>::setKy(Key k) {
  Ky = k;
}

//creating setter function that is going to return nothing 'void'. Then name of the function is 'setVal()' which we defined in 'KeyValuePair.h'
template<typename Key, typename value>
void KeyValuePair<Key, Value>::setVal(Value v) {
  Val = v;
}
