#Synopsis 
Allows for the integration of binary files into your shell code payload. 
 
#Usage
After including the library you can call it by doing 'payload_gen::payload("BinaryName");' This will hex dump the file and then after encoding each character will write a hexadecimal escape character, this function has a return type of string. 

#Example of outputted shell code: 
"\x47\x4C\x49\x42\x43\x58\x58\x5F\x33\x2E\x34\x5F\x65\x64\x61\x74\x61\x6D\x61\x69\x6E\x5F\x69\x6E\x69\x74" 
note this above shell code is a small portion of an actual executable and wont actually work. 

#Return Errors and their meanings
A return of 'UTFF' means Unable To Find File.
If you get a return of '0' it means the contents of the file are empty.
