#include "Decode.h"

int roman_decode(char* in) {
	switch(in){
	    case 'I' :
	       return 1;
	       break;
	    case 'V' :
	       return 5;
	       break;
	    default :
	       printf("%c n'est pas un chiffre romain",in);
	};
}
