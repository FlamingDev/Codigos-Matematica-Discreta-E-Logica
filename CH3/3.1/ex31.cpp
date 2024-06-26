/******************************************************************************
Two strings are anagrams if each can be formed from the
 other string by rearranging its characters. Devise an algo
rithm to determine whether two strings are anagrams
*******************************************************************************/

#include <iostream>
#include <cstring>
// aatabt batata

bool isAnagram(const char *a, const char *b){
    char *c = new char[strlen(b)];
    strcpy(c,b);
    
    for (int i = 0; a[i]; i++){
        int j;
        for (j = 0; c[j] && c[j] != a[i]; j++){;}
        
        if (c[j] != a[i]){
            return false;
        }
        c[j] = -1;
    }
    return true;
} 

int main()
{
    std::cout << isAnagram("aatabt","batata");
    return 0;
}
