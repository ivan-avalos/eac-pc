/*
 * XYMYPOINTER
 * 
 * Programa constructor de gráficas con X, Y, que además, te permite
 * localizar un puntero dentro de cualquier lugar en la gráfica.
 * Hecho por Ivan Alejandro Avalos Díaz
 * */
 
#include <iostream>
 
using namespace std;
 
int nx, ny, px, py, tx;
int y, x;
char o;
 
int main()
{
    cout << "BIENVENIDO A XYMYPOINTER" << endl;
    cout << "CREAR GRAFICA:" << endl;
    cout << " NUMERO DE COLUMNAS (X): "; cin >> nx;
    cout << " NUMERO DE FILAS (Y):    "; cin >> ny;
    cout << " UBICACION DEL PUNTERO:  " << endl;;
    cout << "  COLUMNA(X):"; cin >> px;
    cout << "  FILA(Y):   "; cin >> py;
    tx = (nx+ny)-2;
    cout << "GRAFICA: \n";
     
    if(px<=nx || py<=ny){
        //Bucle for funcionando
        for(y=0;y<ny;)
        {
            for(x=0;x<nx;){
                if(y==py-1 && x==px-1){
                    cout << "0 ";
                    x++;
                }else{
                    cout << "# ";
                    x++;
                }
            }
            cout << "\n";
            y++; x=0;
        }
    }else{
        cout << "FUERA DE RANGO\n" << endl;
    }
     
    while(o!='c'){
        cout << "\nMENU: " << endl;
        cout << "        a[CREAR NUEVA GRAFICA]"<< endl;
        cout << "        b[MOVER EL PUNTERO]"<< endl;
        cout << "        c[SALIR DEL PROGRAMA]"<< endl;
        cout << "OPCION: "; cin >> o; cout << "\n";
        switch(o)
        {
            case 'a':
                cout << "CREAR GRAFICA:" << endl;
                cout << " NUMERO DE COLUMNAS (X): "; cin >> nx;
                cout << " NUMERO DE FILAS (Y):    "; cin >> ny;
                cout << " UBICACION DEL PUNTERO:  " << endl;;
                cout << "  COLUMNA(X):"; cin >> px;
                cout << "  FILA(Y):   "; cin >> py;
                tx = (nx+ny)-2;
                cout << "GRAFICA: \n";
                int y, x;
 
                if(px<=nx || py<=ny){
                    //Bucle for funcionando
                    for(y=0;y<ny;)
                    {
                        for(x=0;x<nx;){
                            if(y==py-1 && x==px-1){
                                cout << "0 ";
                                x++;
                            }else{
                                cout << "# ";
                                x++;
                            }
                        }
                        cout << "\n";
                        y++; x=0;
                    }
                }else{
                    cout << "FUERA DE RANGO\n" << endl;
                }
                break;
            case 'b':
                px = 0;
                py = 0,
                x = 0;
                y = 0;
                cout << " UBICACION DEL PUNTERO:  " << endl;;
                cout << "  COLUMNA(X):"; cin >> px;
                cout << "  FILA(Y):   "; cin >> py;
                tx = (nx+ny)-2;
                 
                if(px<=nx || py<=ny){
                    cout << "GRAFICA: \n";
 
                    for(y=0;y<ny;)
                    {
                        for(x=0;x<nx;){
                            if(y==py-1 && x==px-1){
                                cout << "0 ";
                                x++;
                            }else{
                                cout << "# ";
                                x++;
                            }
                        }
                        cout << "\n";
                        y++; x=0;
                    }
                }else{
                    cout << "FUERA DE RANGO\n" << endl;
                }
                break;
            case 'c':
                cout << "ADIOS" << endl;;
                break;
            default:
                cout << "OPCION INEXISTENTE";
        }   
    }
     
    return 0;
}
