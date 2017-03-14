#ifndef SHELLCODE_HPP
#define SHELLCODE_HPP
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

namespace payload_gen{ 
	template<typename f>
	std::string payload(f file){
		char byte;
		std::string payload, buffer;
		std::fstream binary_file(file, std::fstream::in);
		if (binary_file.fail()) {
			return "UTFF"; //Unable To Find File
		}
		std::stringstream payload_ss(payload);
		std::stringstream buffer_ss(buffer);
		while(binary_file >> std::noskipws >> byte){
			buffer_ss.str(std::string());
			buffer_ss << std::hex << std::setfill('0') << std::uppercase << (int)byte; 
			if(buffer_ss.str()=="0" || buffer_ss.str().find("FF")!=std::string::npos){
				continue;
			}
			else{
				payload_ss  << "\\x" << buffer_ss.str();
			}
		}
		if(payload_ss.str().size() > 0){
		   return payload_ss.str();
		}
		else{
		   return "0"; // file was empty
		}
	}
}

#endif // SHELLCODE_HPP
