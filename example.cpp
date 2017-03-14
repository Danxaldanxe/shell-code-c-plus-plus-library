#include <iostream>
#include "source/shellcode.hpp"
using namespace std;

int main(int argc, char** argv) { 
   if ( argc != 2 ) {
      std::cout << "Error: hexdump <binaryfilename>" << std::endl;
      return 1;
   }
   cout << payload_gen::payload(argv[1]) << endl;
   return 0;
}
