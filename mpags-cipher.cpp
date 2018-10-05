#include <iostream>
#include <string>
#include <ctype.h>


int main()
{

 char in_char('x');
 char test_char('x');
 std::string Value {""};
 std::cout<<"Enter the charcters. When finished press ENTER and Ctrl + D"<<std::endl;

  while (std::cin>>in_char)
  {
    test_char=in_char;
    in_char = toupper(in_char);

    switch(in_char)
      {
      case '1':
	Value += 'O';
	Value += 'N';
	Value += 'E';
	break;

      case '2':
	Value += 'T';
	Value += 'W';
	Value += 'O';
	break;

      case '3':
	Value += 'T';
	Value += 'H';
	Value += 'R';
	Value += 'E';
	Value += 'E';
      break;

      case '4':
	Value += 'F';
	Value += 'O';
	Value += 'U';
	Value += 'R';
	break; 
     
      case '5':
	Value += 'F';
	Value += 'I';
	Value += 'V';
	Value += 'E';
	break;

      case '6':
	Value += 'S';
	Value += 'I';
	Value += 'X';
	break;

      case '7':
	Value += 'S';
	Value += 'E';
	Value += 'V';
	Value += 'E';
	Value += 'N';
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
	if (in_char != test_char)
	  {
	    Value += in_char;
	  }
	else
	  {break;}

      break;
      }
  }
  std::cout<<Value<<std::endl;

}
