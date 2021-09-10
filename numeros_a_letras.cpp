#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h> 
#include <time.h>
#define N 11 //define la longitud maxima que es posible para el numero
using namespace std;
//PROTOTIPOS
main ()
{

	int op;
	while (op != 21)
	{
		cout << "\n";
		cout << "			Menu de Programas\n			"<< endl;
		cout << "  1) Calculadora"<< endl;
		cout << "  2) Determinacion de par o impar"<< endl;
		cout << "  3) Calculadora de conversiones"<< endl;
		cout << "  4) Determinacion de Palidromo"<< endl;
		cout << "  5) Conversion de Numeros Arabigos a Romanos"<< endl;
		cout << "  6) Conversor de numeros enteros a letras"<< endl;
		cout << "  7) Conversor de numeros enteros con decimales a letras"<< endl;
		cout << "  8) Tabla de Multiplicar"<< endl;
		cout << "  9) Tablas de Multiplicar"<< endl;
		cout << " 10) Multiplicacion Manual"<< endl;
		cout << " 11) Conversor de decimal a Binario" << endl;
		cout << " 12) Conversor decimal a hexadecimal" << endl; 
		cout << " 13) Creacion de Figura Geometrica Basica" << endl;
		cout << " 14) Punto en pantalla" << endl;
		cout << " 15) Simulador de Cajero Automatico" << endl;
		cout << " 16) Calculadora de Hipotenusa" << endl;
		cout << " 17) Facturacion de Supermercado" << endl;
		cout << " 18) Calculadora de a. Bisiesto" << endl;
		cout << " 19) Termometro ambiental" << endl;
		cout << " 20) Juego de Nave"<< endl;
		cout << " 21) Salir"<< endl;
		cout << " SELECCIONAR UNA OPCION: ";
		cin >> op;
	
		switch (op)	
		{
			case 1:
				
				
				system ("cls");
				cout << "	BIENVENIDO A LA CALCULADORA\n"<< endl;
				
				int pos, n1, n2, resultado;
				cout << "1-. Suma"<< endl;
				cout << "2-. Resta"<< endl;
				cout << "3-. Multiplicacion"<< endl;
				cout << "4-. Division"<< endl;
				cout << "5-. Regresar al Menu Principal\n"<< endl;
				cout << "SELECCIONE UNA OPCION: ";
				cin>> pos;
				
				switch (pos) 
				{
					case 1:	
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 + n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						
						
					case 2:
						cout << "\n	RESTA	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA RESTAR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 - n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						case 3:
						cout << "\n	MULTIPLICACION	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA MULTIPLICAR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 * n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");
						break;
						
					case 4:
						cout << "\n	DIVISION	"<< endl;
						cout << "INGRESE LOS TERMINOS QUE DESEA DIVIDIR "<< endl;
						cout << "Ingrese el primer termino: ";
						cin >> n1;
						cout << "Ingrese el segundo termino: ";
						cin >> n2;
						
						resultado = n1 / n2;
						cout << "\n";
						cout << "El Resultado es: "<< resultado<< endl;
						system ("Pause");
						system ("cls");	
						break;
						
					case 5:	
						system("pause");
						system ("cls");
						break;
								
				}
				break;
				
				
			case 2:
				{
					system ("cls");
					int n;
			
					cout << "	DETERMINACION SI UN NUMERO ES PAR O IMPAR \n"<< endl;
					cout << "Ingrese el numero que desea determinar: "<< endl;
					cin >> n;
					if (n==0) {
					cout << "EL NUMERO "<< n << " ES CERO. "<<endl;
					}
				
					if (n%2==0) {
					cout << "EL NUMERO "<< n << " ES PAR. "<< endl;
					}
					else {
					cout << "EL NUMERO "<< n << " NO ES PAR. "<< endl;	
					}
					cout << "*PRESIONE PARA REGRESAR AL MENU PRINCIPAL*"<< endl;
					system ("pause");
					system ("cls");
					break;
				}
				break;
			
			case 3:
				{
				
					system ("cls");
					
					cout << "	BIENVENIDO A LA DE CONVERSIONES\n"<< endl;
				
					int conv, km, millas, plg, kg, lb, m;
					
					cout << "1-. Kilometros a Millas"<< endl;
					cout << "2-. Metros a Pulgadas"<< endl;
					cout << "3-. Libras a Kilos"<< endl;
					cout << "4-. Millas a Kilometros"<< endl;
					cout << "5-. Pulgadas a Metros"<< endl;
					cout << "6-. Kilos a Libras"<< endl;
					cout << "7-. Regresar al Menu Principal\n"<< endl;
					cout << "SELECCIONE UNA OPCION: ";
					cin>> conv ;
				
					switch (conv) {
						case 1:	
							cout << "\n	KILOMETROS Y MILLAS 	"<< endl;
							cout << "INGRESE LOS KILOMETROS:  ";
							cin >> km;		
							millas = km * 0.621;
							cout << "\n";
							cout << km <<"Kilometros corresponden a "<< millas << " millas. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						
						case 2:
							cout << "\n	METROS Y PULGADAS	"<< endl;
							cout << "INGRESE LOS METROS: ";
							cin >> m;
							plg = m * 39.3701;
							cout << "\n";
							cout<< m << "Metros corresponde a  "<< plg << " Pulgadas. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 3:
							cout << "\n	LIBRAS A KILOS	"<< endl;
							cout << "INGRESE LAS LIBRAS: ";
							cin >> lb;
							kg = lb * 0.453592;
							cout << "\n";
							cout << lb << " Libras corresponde a "<< kg << " Kilos"<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 4:
							cout << "\n	MILLAS A KILOMETROS	"<< endl;
							cout << "INGRESE LAS MILLAS: ";
							cin >> millas;
							km = millas / 0.621;
							cout << "\n";
							cout << millas << " millas corresponde a "<< km << " kilometros"<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 5:
							cout << "\n	PULGADAS A METROS	"<< endl;
							cout << "INGRESE LAS PULGADAS: ";
							cin >> plg;
							m = plg / 39.3701;
							cout << "\n";
							cout<< m << "Pulgadas corresponde a  "<< plg << " Metros. "<< endl;
							system ("Pause");
							system ("cls");
							break;
						case 6:
							cout << "\n	KILOGRAMOS A LOBRAS	"<< endl;
							cout << "INGRESE LOS KILOGRAMOS: ";
							cin >> kg;
							lb = kg / 0.453592;
							cout << "\n";
							cout << kg << " Kilogramos corresponde a "<< lb << " Libras."<< endl;
							system ("Pause");
							system ("cls");
							break;
						
						case 7:
							system("pause");
							system ("cls");
							break;
										
							}
							break;
							
				}
				break;
			
			case 4:
				{
					system ("cls");
					cout << "\n DETERMINACION DE PALIDROMO"<<endl;
					int pal, cadena, copia;
					cout << "1-. Palabra"<< endl;
					cout << "2-. Numero"<< endl;
					cout << "3-. Regresar a menu principal"<< endl;
					cout << "SELECCIONE UNA OPCION: ";
					cin >> pal;
					
					switch (pal) 
					{
						case 1:
							{
							system ("cls");
							cout << "\n DETERMINACION SI UNA PALABRA ES PALIDROMA "<< endl;
							char cadena[100], copia[100];
							cout << "Ingrese la palabra: "<< endl;
							cin>>cadena;
							
							for ( int i=(strlen(cadena)-1);i>=0;i--){
								copia[strlen(cadena)-1-i]=cadena[i];
								}
								copia[strlen(cadena)]='\0';
								
							if(strcmp(cadena,copia)==0){
								cout<<"La palabra es palidroma\n";
							} else{
								cout <<"La palabra no es palidroma\n";
							}
							system ("Pause");
							system ("cls");
							break;	
							}
							break;
						case 2:
							{
							system ("cls");
							cout << "\n DETERMINACION SI UN NUMERO ES PALIDROMA  "<< endl;
							char cadena[100], copia[100];
							cout << "Ingrese el Numero: "<< endl;
							cin>>cadena;
							for ( int i=(strlen(cadena)-1);i>=0;i--){
								copia[strlen(cadena)-1-i]=cadena[i];
								}
								copia[strlen(cadena)] ='\0';
							if(strcmp(cadena,copia)==0){
								cout<<"El numer es palidroma\n";
							} else{
								cout <<"El numero no es palidroma\n";
							}
							system ("Pause");
							system ("cls");
							break;			
							}
							break;	
						case 3:
							{
							system("pause");
							system ("cls");
							break;
							}
	
					}
					break;
		
				}
				break;
			
			case 5:
				{
				system ("cls");
				
				int rem, numero, unidades, decenas, centenas, millar;
				
				cout <<"\n CONVERSOR DE NUMEROS ARABIGOS A ROMANOS"<< endl;
				cout <<"Digite numero arabigo: ";
				cin >> numero;
				
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /= 10;
				millar = numero % 10; numero /= 10;
				
				cout << "\n El numero corresponde a:  "<<endl;
				
				switch (millar) {
				
					case 1: cout<<"M"; break;
					case 2: cout<<"MM"; break;
					case 3: cout<<"MMM"; break;
					}
				
				switch(centenas){
					case 1: cout<<"C";break;
					case 2: cout<<"CC";break;
					case 3: cout<<"CCC";break;
					case 4: cout<<"CD";break;
					case 5: cout<<"D";break;
					case 6: cout<<"DC";break;
					case 7: cout<<"DCC";break;
					case 8: cout<<"DCCC";break;
					case 9: cout<<"CM";break;
					}
				switch(decenas){
					case 1: cout<<"X";break;
					case 2: cout<<"XX";break;
					case 3: cout<<"XXX";break;
					case 4: cout<<"XL";break;
					case 5: cout<<"L";break;
					case 6: cout<<"LX";break;
					case 7: cout<<"LXX";break;
					case 8: cout<<"LXXX";break;
					case 9: cout<<"XC";break;
					}
				switch(unidades){
					case 1: cout<<"I";break;
					case 2: cout<<"II";break;
					case 3: cout<<"III";break;
					case 4: cout<<"IV";break;
					case 5: cout<<"V";break;
					case 6: cout<<"VI";break;
					case 7: cout<<"VII";break;
					case 8: cout<<"VIII";break;
					case 9: cout<<"IX";break;
					system ("Pause");
					system ("cls");
					break;
					}
				
				cout << " \n 1-. Regresar al menu principal"<< endl;
				cin>> rem;
				
				switch(rem){
					case 1:
						{
							system("pause");
							system ("cls");
							break;
							}		
				}
				break;
				
				}
				break; 
			
			case 6:
				{
					system ("cls");
					cout << "	BIENVENIDO A LA CONVERCION DE NUMEROS ENTEROS A LETRAS \n"<< endl;


					void unidades(char num[N],int x);
					void unidades2(char num[N],int x);
					bool decenas(char num[N],int x);
					void centenas(char num[N],int x);
					void miles(char num[N],int x);
					bool dec_miles(char num[N],int x);
					void cent_dmiles(char num[N],int x);
					void millones(char num[N],int x);
					bool decenas_mill(char num[N],int x);
					void cent_mill(char num[N],int x);
					void gotoxy(int x, int y);
					{
						char num[N];
						bool b,a;
						int x,y=-1,i;
						system("color 1f");
						do{
							system("title Conversor de Numeros a letras");
							system("cls");
							fflush(stdin);
							do{a=true;
							b=true;
							cout<<"\nIngrese el numero: ";cin.getline(num,N);
							x=strlen(num);}while(x<1||x>10);	fflush(stdin);cout<<"\n\n";
							while(x>=1){
								y++;
								fflush(stdin);
								switch(x){
								case 1:if(a==true&&b==true)unidades(num,y);a++;if(num[0]=='0'){x=1;}break;
								case 2:b=decenas(num,y);if(num[y+1]=='0'){x=1;}break;
								case 3:centenas(num,y);break;
								case 4:if(b==true)miles(num,y);break;
								case 5:b=dec_miles(num,y);break;
								case 6:cent_dmiles(num,y);break;
								case 7:millones(num,y);break;
								case 8:b=decenas_mill(num,y);break;
								case 9:cent_mill(num,y);break;
								case 10: cout<<"Lo siento pero puedo convertir hasta 999,999,999";x=1;break;
								}//cout<<"["<<x<<"]";
								--x;
								fflush(stdin);
							}y=-1;//
							fflush(stdin);
							cout<<"\n\n\nSalir 0: ";cin>>i;}while(i!=0);
					}
					
					{
						switch(num){
							
						case '0':cout<<"cero"<<" ";break;
						case '1':cout<<"uno"<<" ";break;
						case '2':cout<<"dos"<<" ";break;
						case '3':cout<<"tres"<<" ";break;
						case '4':cout<<"cuatro"<<" ";break;
						case '5':cout<<"cinco"<<" ";break;
						case '6':cout<<"seis"<<" ";break;
						case '7':cout<<"siete"<<" ";break;
						case '8':cout<<"ocho"<<" ";break;
						case '9':cout<<"nueve"<<" ";break;
						}
					}
					){
						switch(num[x]){//UNIDADES
						case '1':cout<<"once"<<" ";break;
						case '2':cout<<"doce"<<" ";break;
						case '3':cout<<"trece"<<" ";break;
						case '4':cout<<"catorce"<<" ";break;
						case '5':cout<<"quince"<<" ";break;
						case '6':cout<<"dieciseis"<<" ";break;
						case '7':cout<<"diecisiete"<<" ";break;
						case '8':cout<<"dieciocho"<<" ";break;
						case '9':cout<<"diecinueve"<<" ";break;
						}
					}
				{
						bool r=true;
						switch(num){//DECENAS
						case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;}else{cout<<"diez"<<" ";}break;
						case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
						}
						return r;
					}
					{
						switch(num){
						case '1':(num[x+2]!='0')?cout<<"ciento"<<" ":cout<<"cien"<<" ";break;
						case '2':cout<<"doscientos"<<" ";break;
						case '3':cout<<"trescientos"<<" ";break;
						case '4':cout<<"cuatrocientos"<<" ";break;
						case '5':cout<<"quinientos"<<" ";break;
						case '6':cout<<"seiscientos"<<" ";break;
						case '7':cout<<"setecientos"<<" ";break;
						case '8':cout<<"ochocientos"<<" ";break;
						case '9':cout<<"novecientos"<<" ";break;
					
						}
					}
					{
						switch(num[x]){
						case '1':cout<<"mil"<<" ";break;
						case '2':cout<<"dos mil"<<" ";break;
						case '3':cout<<"tres mil"<<" ";break;
						case '4':cout<<"cuatro mil"<<" ";break;
						case '5':cout<<"cinco mil"<<" ";break;
						case '6':cout<<"seis mil"<<" ";break;
						case '7':cout<<"siete mil"<<" ";break;
						case '8':cout<<"ocho mil"<<" ";break;
						case '9':cout<<"nueve mil"<<" ";break;
						}
					}
					bool dec_miles(char num[N],int x){
						bool r=true;
						switch(num){
						case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;cout<<"mil ";}else{cout<<"diez mil"<<" ";}break;
						case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
						}
						return r;
					}
					void cent_dmiles(char num[N],int x){
						centenas(num,x);
					}
					void millones(char num[N],int x){
						switch(num){
						case '1':cout<<"un millon";break;
						default: if(num[x]!='0'){unidades(num,x);if(num[x-1]!='0')cout<<" millones ";}break;
						}
					}
					bool decenas_mill(char num[N],int x){
						bool r=true;
						switch(num){
						case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;cout<<"millones ";}else{cout<<"diez millones"<<" ";}break;
						case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
						}
						return r;
					}
					void cent_mill(char num[N],int x){
						centenas(num,x);if(num[x+1]=='0')if(num[x+2]=='0')cout<<"millones ";
					}
					void gotoxy(int x, int y){
						COORD coord={x,y};
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
					} 
					
			}	
				
					
		}
			
			
			
			
				
					
	}	
		
}					
