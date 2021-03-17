// Define includes

#define STDIO "stdio.h"
#define STRING "string.h"
#define INTERPRETER_H "interpreter.h"
#define STDLIB "stdlib.h"

// Include includes

#include STDIO
#include STRING
#include INTERPRETER_H
#include STDLIB

// Initialise header values

#define runningFile "filename.txt"
#define declare "declare"

int main(const char runningFileIn)
{
    if (!runningFileIn)
    {
        printf("You have not provided a file to run! (runningFileIn is NULL)");
        exit(-1000);
    }

    printf(declare);
    printf(concatIntroText());

    return 0;
}

char concatIntroText()
{
    char baseMessage = "Welcome to ScriptMinutePer! You are running: ";

    char returnMessage[256] = "";

    strcat(returnMessage, &baseMessage);
    strcat(returnMessage, &runningFile);

    return returnMessage;
}
