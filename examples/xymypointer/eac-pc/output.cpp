 
#include <iostream>
 
using namespace std;

/**[ GLOBAL VARIABLES"] ]**/
	int nx, ny, px, py, tx;
	int y, x;
	char o;
	
	const char* out_of_range = "FUERA DE RANGO\n";
	const char* invalid_option = "OPCION INVALIDA\n";
	const char* goodbye = "ADIOS\n";

void getDataFromUser () {
		
		cout << "BIENVENIDO A XYMYPOINTER" << endl;
		cout << "CREAR GRAFICA:" << endl;
		cout << " NUMERO DE COLUMNAS (X): "; cin >> nx;
		cout << " NUMERO DE FILAS (Y):    "; cin >> ny;
		cout << " UBICACION DEL PUNTERO:  " << endl;;
		cout << "  COLUMNA(X):"; cin >> px;
		cout << "  FILA(Y):   "; cin >> py;
		tx = (nx+ny)-2;
		
}
void getPointerLocation () {
		
		px = 0;
        py = 0,
        x = 0;
        y = 0;
        cout << " UBICACION DEL PUNTERO:  " << endl;;
        cout << "  COLUMNA(X):"; cin >> px;
        cout << "  FILA(Y):   "; cin >> py;
        tx = (nx+ny)-2;
		
}
void showmenu () {
	
		cout << "\nMENU: " << endl;
        cout << "        a[CREAR NUEVA GRAFICA]"<< endl;
        cout << "        b[MOVER EL PUNTERO]"<< endl;
        cout << "        c[SALIR DEL PROGRAMA]"<< endl;
        cout << "OPCION: "; cin >> o; cout << "\n";
	
}
void drawGraphic () {
		
		cout << "GRAFICA: \n";
     
		if(px<=nx || py<=ny){
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
		    cout << out_of_range;
		}
		
}
 
int main()
{
    
    getDataFromUser();
    
    drawGraphic();
     
    while(o!='c'){
        showmenu();
        switch(o)
        {
            case 'a':
                getDataFromUser();
                
                drawGraphic();
                
                break;
            case 'b':
                getPointerLocation();
                 
                drawGraphic();
                break;
            case 'c':
                cout << goodbye;
                break;
            default:
                cout << invalid_option;
        }   
    }
     
    return 0;
}

/**[ GLOBAL FUNCTIONS"] ]**/
	
	
	
	
