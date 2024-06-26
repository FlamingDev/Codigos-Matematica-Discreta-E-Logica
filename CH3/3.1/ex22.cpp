#include <iostream>
using namespace std;

/*Describe an algorithm to find the longest word in an En
glish sentence (where a sentence is a sequence of sym
bols, either a letter or a blank, which can then be broken
 into alternating words and blanks).*/
 
// oi meu nome eh Breno\0 21
char* longest_word(const char *str){
    int max_length = 0, low, high;
    
    for (int i = 0; str[i]; i++){
        int j = i;
        int length = 0;
        while (str[i] != ' ' && str[i]){
            i++;
            length++;
        }
        // end of the word. We can registrate its infos
        if (length > max_length){
            max_length = length;
            low = j;
            high = i-1;
        }
    }
    // copying the result to a new string
    char *larger = new char[max_length];
    int i, j = 0;
    for (i = low; i <= high; i++, j++){
        larger[j] = str[i];
    }
    larger[i] = '\0';
    return larger;
}

int main() {
	cout << longest_word("oi meu nome eh Breno");
}
