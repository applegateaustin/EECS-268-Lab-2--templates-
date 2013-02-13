#include <fstream>
#include <iostream>
#include <string>
#include "Translator.h"
using namespace std;
int main(int argc, char* argv[]) {
  ifstream in (argv[1]);
  
  Translator tran(in);

  in.close();

  return 0;

}
