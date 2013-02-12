#include <ifstream>
#include <iostream>

int main(int argc, std::string* argv) {
  std::ifstream in(argv[1]);
  

  Translator tran(in);

  in.close();

  return 0;

}
