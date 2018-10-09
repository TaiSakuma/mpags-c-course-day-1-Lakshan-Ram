#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{

  const std::vector<std::string> cmdLineArgs{argv, argv+argc};
  std::string Input_File{""};
  std::string Output_File{""};
  bool encrypt{true};
  bool ERROR{false};
  for (int i=1;i<argc;i++) // Starts from the arguments and not the name of the program.
    { 
      std::cout<<"Argument " << i << ": " << cmdLineArgs[i]<<std::endl;
      
      if (cmdLineArgs[i]=="-h" || cmdLineArgs[i]=="--help")
	{
	  std::cout<<"This Program encrypts or decrypts the input data. The program is not case-sensitive and only supports Alpha-numeric characters."<<std::endl;
	  std::cout<<"The Following arguments are required for the program to run"<<std::endl;
	  std::cout<<"Input FileName, Output FileName, To Encrypt/Decrypt(Default:Encrypt)"<<std::endl; 
	  //std::cout<<"-i [FileName]:  The name of the input file containing the data to be encrypted/decrypted"<<std::endl;
	  //std::cout<<"-o [FileName]:  The name of the output file containing the encrypted/decrypted data"<<std::endl;
	  //std::cout<<"-c [Cipher]  :  The Cipher to be used to encrypt/decrypt the data. The only allowed arguments are ceaser
	}

      else if (cmdLineArgs[i]=="--encrypt") 
	{
	  encrypt = true;
	}


      else if (cmdLineArgs[i]=="--decrypt") 
	{
	  encrypt = false;
	}

      else if (cmdLineArgs[i]=="-i")
	{
	  i++;                  // Takes us to the next argument and make s sure the for loop skips over it.
	  Input_File+=cmdLineArgs[i]; // The imput file name is updated.
	}
    
      else if (cmdLineArgs[i]=="-o")
	{
	  i++;
	  Output_File+=cmdLineArgs[i];
	}

      else
	{
	  std::cout<<"ERROR: Check input argument "<< i << "\n Allowed input options are -h, --help, -i [FileName], -o [FileName], --encrypt, --decrypt"<<std::endl;
	  ERROR=true;   // Error propogation
	  break;
	}
    }
  if (ERROR==false) 
  {

    std::cout<< "Selected Input File: "<< Input_File <<"\nSelected Output File: "<< Output_File<<std::endl;
    if (encrypt == true)
      {std::cout<<"Encryption is activated"<<std::endl;}
    else if (encrypt == false)
      {std::cout<<"Decryption is activated"<<std::endl;}
  
  char in_char('x');
  char test_char('x');
  std::string Value {""};
  std::cout<<"Enter the charcters to be encryted. When finished press ENTER and Ctrl + D"<<std::endl;

  while (std::cin>>in_char) //Waits to eneter characters
    {
      test_char=in_char;
      in_char = toupper(in_char); // Converstto upper case, does not do anything to numbers and non alpha-numeric characters 
      
      switch(in_char)  // Converts numbers to letters
	{
	case '1':
	  Value += "ONE";
	break;
	
	case '2':
	  Value += "TWO";
	break;
	
	case '3':
	  Value += "THREE";
	break;
	
	case '4':
	  Value += "FOUR";
	  break; 
	  
	case '5':
	  Value += "FIVE";
	  break;
	  
	case '6':
	  Value += "SIX";
	  break;
	  
	case '7':
	  Value += "SEVEN";
	  break;
	  
	case '8':
	  Value += "EIGHT";
	  break;
	  
	case '9':
	  Value += "NINE";
	  break;
	  
	case '0':
	  Value += "ZERO";
	  break;
	default:  

	  if (in_char != test_char) // If the charater was converted to upper-case add it to the string 
	    {
	      Value += in_char;
	    }
	  else
	    {break;} // Ignore the character
	  
	  break;
	}
    }
  std::cout<<Value<<std::endl; // Print the string
  }
}




