#ifndef BoundStrApi_h
#define BoundStrApi_h

// TODO: go with either smartstring or tagstring
// split out the unit test code into it's own section
// reformat the code
// implemnet the strcat
//

typedef char * CharBuf;
typedef unsigned int uint;

CharBuf NewStr( const CharBuf );
void 	DelStr( CharBuf );
uint 	LenStr( CharBuf );

#endif
