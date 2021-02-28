#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
 	char descript[30];
 	int cantidad;
	 int numero, unidades, decenas, centenas, millares;
	 int number;
	 int izquierda=1;
     int derecha=1;
     int exp, digito;
     int total, contador, calif;
     int no_prod;
     double promedio;
     total = 0;
     contador = 1;
     float precio;
     float c1,c2,hipo=0;
     int opcion;
    
    do {
        system("cls");
        cout << "\n\n            		************************  MENU DE OPCIONES  ************************\n" << endl;
        cout << "            		**   1. Suma, Resta, Multiplicacion y Division de dos numeros     **" << endl; 
        cout << "            		**   2. Determinar si un numero es par o impar                    **" << endl; 
        cout << "            		**   3. Determinar si una palabra o un numero es palindromo       **" << endl; 
        cout << "            		**   4. Conversion de numeros arabigos a romanos (minimo 1,000)   **" << endl;
        cout << "            		**   5. Conversion de numeros enteros a letras                    **" << endl;
        cout << "            		**   6. Una tabla de multiplicar                                  **" << endl;
        cout << "            		**   7.Todas las tablas de multiplicar del 1 al 10                **" << endl; 
        cout << "            		**   8. Conversion de numeros decimales a binario                 **" << endl;
        cout << "            		**   9. Calcular la hipotenusa                                    **" << endl;
        cout << "            		**   17. Opcion libre                                             **" << endl;
        cout << "            		**   18. Opcion libre                                             **" << endl;
        cout << "            		**   19. Opcion libre                                             **" << endl; 
        cout << "            		**   20. SALIR                                                    **\n" << endl;
        cout << "            		********************************************************************" << endl;
        cout << "\n   Ingrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:  // Lista de instrucciones de la opción 1                
                char opcion;
    int n1, n2;
    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n\n   1. Sumar dos n%cmeros.", 163 );
        printf( "\n   2. Restar dos n%cmeros.", 163 );
        printf( "\n   3. Multiplicar dos n%cmeros.", 163 );
        printf( "\n   4. Dividir dos n%cmeros.", 163 );
        printf( "\n   5. Salir.\n" );
        do
        {
            printf( "\n   Introduzca opci%cn (1-5): ", 162 );
            fflush( stdin );
            scanf( "%c", &opcion);
        } while ( opcion < '1' || opcion > '5' );
        switch ( opcion )
        {
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d + %d = %d\n", n1, n2, n1 + n2 );
                      break;
                      
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d - %d = %d\n", n1, n2, n1 - n2 );
                      break;

            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d * %d = %d\n", n1, n2, n1 * n2 );
                      break;

            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%d", &n2);
                      if ( n2 != 0 )
                          printf( "\n   %d div %d = %d ( Resto = %d )\n", n1, n2, n1 / n2, n1 % n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
        }
    } while ( opcion != '5' );
                system("pause>nul");
                break;
                
            case 2: // Lista de instrucciones de la opción 2                
             int numero;
             cout << "\n\n  >>> Numero PAR o IMPAR <<<\n" << endl;
            printf("     Escribe un numero:\n");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
            printf("Es par");
            } else {
           printf("Es impar");
            }
             cout << "\n\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");
                break;
    
            case 3:  // Lista de instrucciones de la opción 3             
                char palabra[80];
 int x,y,z;
   printf("\t >>> PROGRAMA QUE DETERMINA SI UNA PALABRA ES PALINDROMO <<<");
   printf("\n\n         Escribe una palabra: \n");
   scanf(" %s",palabra);
   x=strlen(palabra);
   x=x-1;
   for(y=0,z=x;y<=x/2;y++,z--)
          if(palabra[y]==palabra[z])
             printf("   Es palindromo");
 else
                printf("  No es palindromo");
                 cout << " \n\npresione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");             
                break;
                
                case 4: // Lista de instrucciones de la opción 4
printf("\t >>> CONVERSION DE NUMEROS ARABIGOS A ROMANOS  <<<\n");              
 cout<< "    Ingrese un numero"<<endl;
 cin>> numero;
printf("  Resultado\n");
 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }
  cout << "\n\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");               
                break;
                
                case 5:// Lista de instrucciones de la opción 5   
	cout<<"        >>> CONVERSION DE NUMEROS ENTEROS A LETRAS <<<"<<endl;             
    cout<<"      ingresa un numero del 1 al 999 "<<endl;
    cin>>x;
if((x<1)||(x>999)) 
cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
  cout<<"Resultado"<<endl; 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       } 
    cout<<endl;
cin.ignore();
 cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");                
                break;
			   
			   case 6: // Lista de instrucciones de la opción 6  
	cout<<"        >>> TABLA DE MULTIPLICACION: <<<"<<endl;             
    cout<<"por favor agregue el numero de multiplicacion de la tabla :"<<endl;
    cin>>number;
    
    for(int i=1;i<=10;i++){
        int multiplicacion = i * number;
        cout<<number <<" x "<< i <<" = "<< multiplicacion <<endl;
    }
   cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");              
                break;
			    
			    case 7: // Lista de instrucciones de la opción 7
				cout<<"        >>> TODAS LAS TABLAS DE MULTIPLICAR DEL 1 AL 10: <<<"<<endl;   
				cout<< "tablas de multiplicar: "<<endl;            
                while (izquierda <= 10){
                cout << izquierda << "x" <<derecha<< "="<< izquierda*derecha << endl;
                 Sleep(490);
                if (derecha == 10){
                 izquierda++;  
                 cout<< "\ntablas de multiplicar: "<<endl;
				 derecha=0; 
                  }
                 derecha++; 
                   }
                    cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");              
                break;
              
                case 8: // Lista de instrucciones de la opción 8           
                double binario;
   cout <<    "      >>> CONVERSION DE NUMEROS DECIMALES A BINARIO: <<< \n";
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");               
                break;
                
                case 9: // Lista de instrucciones de la opción 9 
	cout << "      >>> CALCULAR LA HIPOTENUSA: <<<\n";			              
  cout << "  Digite cateto 1: ";
  cin >> c1;
  cout << "  Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
  cout << "\nLa hipotenusa es: " << hipo << endl;
   cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");              
                break;
                
                case 17: // Lista de instrucciones de la opción 17  
cout << "      >>> PROGRAMA LIBRE: <<<\n";                        
cout<<"  Ingrese el Numero de producto: "; cin>>no_prod;
cout<<"  Ingrese la Descripcion: "; cin>>descript;
cout<<"  Ingrese la Cantidad: "; cin>>cantidad;
cout<<"  Ingrese el Precio por unidad: "; cin>>precio;
total = cantidad * precio;
cout<<"\nSu total a pagar es de: "<<total<<endl;
                cout << "\n presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");              
                break;
                
                case 18:  // Lista de instrucciones de la opción 18  
				cout << "      >>> PROGRAMA LIBRE: <<<\n";             
               total = 0;
               contador = 1;

       while (contador <= 5 )

       {
          cout<<" Dame tu calificacion: "<<endl;
          cin >> calif;
          total = total + calif;
          contador ++;

       }
       promedio = total / 5.0;
       cout<<"\n El promedio es: "<< promedio<<endl;
        cout << "\n  presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");               
                break;
                
                case 19: // Lista de instrucciones de la opción 19               
            cout << "      >>> PROGRAMA LIBRE: <<<\n";
              srand(time(NULL));

    int posiciones[200];

    string letras [05][05] = {{"AAAA"}, {"CCC"}, {"FFFF"}, {"NNNNN"}};

    random_shuffle(posiciones, posiciones + 100);

    for(int fila = 0; fila < 05; fila++){
        for(int columna = 0; columna < 05; columna++)
            letras [fila][columna] = posiciones[200];
    }

    for(int f = 0; f < 05; f++){
        for(int c = 0; c < 05; c++)
            cout << letras[f][c];
        cout << endl;
        cout << "   >>> PROGRAMACION I <<<\n";
    }
                cout << " presione cualquier tecla para regresar al menu inicio:";
                system("pause>nul");               
                break;
        }        
    } while (opcion != 20);        
    return 0;
}
