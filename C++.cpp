#include <iostream> 
   #include <string> 
   #include <cctype> 
   using namespace std; 
   int main() 
   { 
     string text; 
     cout << "Counts words. Enter a text and terminate with a period and return:\n"; 
     getline( cin, text, '.'); // Reads a text up to the first '.' 
       int i, // Index 
       numberOfWhiteSpace = 0, // Number of white spaces 
       numberOfWords = 0; // Number of words 
     bool fSpace = true; // Flag for white space 
     for( i = 0; i < text.length(); ++i) 
     { 
       if( isspace( text[i]) ) // white space? 
       { 
         ++numberOfWhiteSpace; 
         fSpace = true; 
       } 
       else if( fSpace) // At the beginning of a word? 
       { 
         ++numberOfWords; 
         fSpace = false; 
       } 
     } 
     cout << "\nYour text contains (without periods)" 
       << "\ncharacters: " << text.length() 
       << "\nwords: " << numberOfWords 
       << "\nwhite spaces: " << numberOfWhiteSpace 
       << endl; 
       return 0;
   }
