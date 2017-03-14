#include <iostream>
#include "source/shellcode.hpp"
using namespace std;

/*
http://www.i42.co.uk/stuff/hexdump.htm
http://courses.cs.vt.edu/cs2604/spring02/Projects/2/HexDump.cpp
*/

int main(int argc, char** argv) { 
   if ( argc != 2 ) {
      std::cout << "Invocation: hexdump <binaryfilename>" << std::endl;
      return 1;
   }
   cout << payload_gen::payload(argv[1]) << endl;


   return 0;
}