#include <string>

using namespace std;

class Token
{
public:
    string name;
    Token(string name);
};

// Construts a new Token
Token::Token(string name)
{
    name = name;
}
