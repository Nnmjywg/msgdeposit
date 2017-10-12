//------ This application will print a desired message a specific number of times. ------//
//------ Copyright (C) 2017 "NNmJYwg" -------//

//------- DEFINES -------//
//-- Constant -- Change this to the message you want --//
#define MESSAGE_IN_FILE "#define"

//-- Constant -- Change this to the number of times you want the message to be appended, minus 1 --//
#define NUMBER_OF_TIMES 46

//-- Constant -- Change this to the filename you would like --//
#define FILENAME "define_47_times.txt"

//-- Toggle output --//
#define OUTPUT true

//------- INCLUDES -------//
#include <iostream>
#include <fstream>

//------- MAIN PROGRAM -------//
int
main(void)
{   std::cout << "Auto-generator\n" << "Copyright (C) 2017 \"NNmJYwg\"\n\n"
    std::fstream f;
    f.open(FILENAME, std::ios::out | std::ios::app);
    f << "//------- AUTO-GENERATED OUTPUT -------//\n";
    f.close();
    for
    (int i = 0; i <= NUMBER_OF_TIMES; i++)
    {   if
        (OUTPUT)
            std::cout << i+1 << " ";
        else { }
        if
        (i != NUMBER_OF_TIMES)
        {   f.open(FILENAME, std::ios::out | std::ios::app);
            f << MESSAGE_IN_FILE;
            f << "\n";
            f.close(); }

        else if
        (i == NUMBER_OF_TIMES)
        {   f.open(FILENAME, std::ios::out | std::ios::app);
            f << MESSAGE_IN_FILE; // Do not want a newline at the end of the file //
            f.close(); } }

    if
    (OUTPUT)
    {   std::cout << "Done.\n";
        return 0; }
    else
        return 0; }
