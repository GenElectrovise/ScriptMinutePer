#include <stdio.h>
#include <string>

using namespace std;

int main(char **argv)
{
    return 0;
}

/**
 * 
 */

class Interpreter
{
public:
    string *fileName;
    Interpreter(char *fileNameIn) : Interpreter(new string(fileNameIn)){};

    Interpreter(string *fileNameIn)
    {
        fileName = fileNameIn;
    }
};
