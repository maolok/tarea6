#include "triqui.h"

void Triqui::printboard()
{
    for (int i=0;i<3;i++)
    {
        for (int k=0;k<3;k++)
        {
            cout<<"|"<<this->board[i][k]<<"|";

        }

                   cout<<endl;

    }

}


void Triqui::nuevajugadaX ()
{
    string pos;
    int fila,columna;

    cout << "Ingrese posicion <fila(0-2),columna(0-2)>" << endl;
    cin>>pos;

    fila = pos[0] - 48;
    columna = pos[2]-48;

    if((fila < 0) || (fila > 2))
    {

        cout<<"POSICION INVALIDA!"<<endl;
        siguientejugador();
    }

    else if((columna < 0) || (columna > 2))
    {

        cout<<"POSICION INVALIDA!"<<endl;
        siguientejugador();
    }

    else if(this->board[fila][columna] != '-')
    {
        cout<<"POSICION OCUPADA!"<<endl;
        siguientejugador();
    }

    else

    {
    this->board[fila][columna] = 'X';


    this->njugadas++;
    }
}

void Triqui::nuevajugadaO ()
{

    string pos;
    int fila,columna;

    cout << "Ingrese posicion <fila(0-2),columna(0-2)>" << endl;
    cin>>pos;

    fila = pos[0] - 48;
    columna = pos[2]-48;

    if((fila < 0) || (fila > 2))
    {

        cout<<"POSICION INVALIDA!"<<endl;
        siguientejugador();
    }

    else if((columna < 0) || (columna > 2))
    {

        cout<<"POSICION INVALIDA!"<<endl;
        siguientejugador();
    }

    else if(this->board[fila][columna] != '-')
    {
        cout<<"POSICION OCUPADA!"<<endl;
        siguientejugador();
    }

    else
    {
    this->board[fila][columna] = 'O';


    this->njugadas++;
    }
}

void Triqui::verificarsihayganador ()
{

    if ((this->board[0][0] == 'X') && (this->board[0][1] == 'X') && (this->board[0][2] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[1][0] == 'X') && (this->board[1][1] == 'X') && (this->board[1][2] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[2][0] == 'X') && (this->board[2][1] == 'X') && (this->board[2][2] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[0][0] == 'X') && (this->board[1][0] == 'X') && (this->board[2][0] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[0][1] == 'X') && (this->board[1][1] == 'X') && (this->board[2][1] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[0][2] == 'X') && (this->board[1][2] == 'X') && (this->board[2][2] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[0][0] == 'X') && (this->board[1][1] == 'X') && (this->board[2][2] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }
    else if ((this->board[0][2] == 'X') && (this->board[1][1] == 'X') && (this->board[2][0] == 'X'))
    {
        ganador = 1;
        ganador1 = 'X';
    }


    else if ((this->board[0][0] == 'O') && (this->board[0][1] == 'O') && (this->board[0][2] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[1][0] == 'O') && (this->board[1][1] == 'O') && (this->board[1][2] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[2][0] == 'O') && (this->board[2][1] == 'O') && (this->board[2][2] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[0][0] == 'O') && (this->board[1][0] == 'O') && (this->board[2][0] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[0][1] == 'O') && (this->board[1][1] == 'O') && (this->board[2][1] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[0][2] == 'O') && (this->board[1][2] == 'O') && (this->board[2][2] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[0][0] == 'O') && (this->board[1][1] == 'O') && (this->board[2][2] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }
    else if ((this->board[0][2] == 'O') && (this->board[1][1] == 'O') && (this->board[2][0] == 'O'))
    {
        ganador = 1;
        ganador1 = 'O';
    }


    else
    {
        bool lleno = 1;
        for (int i=0;i<3;i++)
        {
            for (int k=0;k<3;k++)
            {

                if (this->board[i][k] == '-')
                {
                        lleno = 0;
                }

            }



        }

        if (lleno == 1)
        {

            ganador = 2;

        }


    }





}

void Triqui::siguientejugador()
{
    if ((this->njugadas % 2) == 0)
    {
        cout<<"JUGADOR ACTIVO : X"<<endl;
        nuevajugadaX();


    }
    else
    {   cout<<"JUGADOR ACTIVO : O"<<endl;
        nuevajugadaO();

    }


}

