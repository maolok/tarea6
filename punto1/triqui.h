#ifndef TRIQUI_H
#define TRIQUI_H

#include <iostream>
#include <string.h>

using namespace std;

class Triqui
{

private:

    char board[3][3] = {

                         {'-','-','-'},
                         {'-','-','-'},
                         {'-','-','-'}

                       };

    int njugadas = 1;
    int ganador = 0;
    char ganador1 = '-';


public:

    void printboard() ;


    void nuevajugadaX ();

    void nuevajugadaO ();


    void verificarsihayganador ();


    void siguientejugador();


    int getganador(){return this->ganador;}
    char getganador1(){return this->ganador1;}

};

#endif // TRIQUI_H
