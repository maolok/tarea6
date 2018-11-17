#include "triqui.h"

int main()
{
    Triqui nuevojuego;

    cout<<"INICIA EL JUEGO!"<<endl;
    nuevojuego.printboard();



    do {

        nuevojuego.siguientejugador();
        nuevojuego.printboard();
        nuevojuego.verificarsihayganador();

    }

    while (nuevojuego.getganador() == 0);

    switch (nuevojuego.getganador())
    {

    case 1:

        cout<<"GANO : "<<nuevojuego.getganador1()<<" !"<<endl;

        break;
    case 2:

        cout<<"EMPATE!"<<endl;

        break;
    }






    return 0;
}
