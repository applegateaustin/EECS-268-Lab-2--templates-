  // Constructor
#include <string>
int size = 0;

template<typename Key, typename Value>
TranslationTable<Key, Value>::TranslationTable(std::ifstream& in) {
  std::string tempWord;
  bool firstWord = true;
  int step = 0;

  while(!in.eof()) {
    //This will get the size of our first array that we need to build and store it in the variable 'size' which is declared as a integer.
    in >> size;
    //set firstWord to false now since we already got the size of array now
    firstWord = false;

    // Read the first number from the input (16 from the sample data file)
    if (firstWord) {
      // Cast the word to an int and instantiate the array of kvp
      KyArray = new KeyValuePair<Key, Value>[size];
      firstWord = false;

      // Move to the next word
      in >> tempWord;
    }

    // Set the key
    KyArray[step].setKy(tempWord);
    in >> tempWord;

    // Set the value
    KyArray[step].setVal(tempWord);

    // Increment
    step += 1;

    // Check to see if we read all of them
    if (step == size -1) {
      // This will read the blank line below the last pair so the next time we read it will be in the right place
      in >> tempWord;
      break;
    }
  }
}

  // Method for getting a value from the key
template<typename Key, typename Value>
Value TranslationTable<Key, Value>::getValue(Key key) {
  for(int i=0; i < size; i++) {
    if (key == KyArray[i].getKy()) {
      return KyArray[i].getVal();
    }
  }
}

