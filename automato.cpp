#include <iostream>
using namespace std;
/* codigo computa um automato que reconhece a 
linguagem L = {a,b,ab,bb,abb,bbb...} */

const char *s = "";
int count = 0;
char lookahead = s[count];
// A -> a | b | bB | e abbb
// B -> bB | b

void match(char c){
    if (lookahead == c){
        count++;
        lookahead = s[count];
    }
    else cout << "Erro";
}

void A();
void B();

void A(){
    if (lookahead == 'a'){
        match('a');
    }
    if (lookahead == 'b'){
        match('b');
        B();
    }
}

void B(){
    if (lookahead == 'b'){
        match('b');
        B();
    }
        
}

int main()
{
    A();
    if (lookahead == 0) cout << "aceito";
    else cout << "rejeitado";

    return 0;
}