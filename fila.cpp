#include <iostream>
#include <cstdlib>
#include <locale>
#include <string>
#include <math.h>



/* Conte�do: Estutura de Dados: Fila do tipo est�tica = FIFO
Opera��es mais comum da fila: 
- criar;
- enfileirar;
- exibir;
- verificar se a fila est� cheia;
- verificar se a fila est� vazia;
- imprimir fila.
*/
// topo-1, ou 0/
/* defini��o do tamanho do vetor pode se dar de duas formas:
-  int consta tam_vetor = 6
-  #define tam_vetor 6;
*/

using namespace std;
//-------------------------------------------------------------------------

#define tam_fila 10
//int consta tam_fila = 10
//-------------------------------------------------------------------------
int vt_fila[tam_fila];//vetor da fila;
int topo = -1;
int opcao;
//-------------------------------------------------------------------------
void listar (void);
void inserir (void);
void remover (int x[] );
void pular_linha ( int x );
int menu ();
void tamanho (void);

//-------------------------------------------------------------------------
int main ()
{
setlocale (LC_ALL, "Portuguese" );
cout << "Aula 14" << endl << endl; 

while ( opcao != 5)
   {
	system ("cls");
	menu ();
   }
   
 return 0;
 
 }
//------------------------------------------------------------------------- 
 
int menu ()

{
	//system ( " cls "); // limpar a tela ap�s rodar o menu
	pular_linha(1);
	cout << "Aula 14" << endl << endl;
	
    cout << " ** MENU PRINCIPAL ** " << endl << endl;
    cout << "1-Inserir" << endl;
    cout << "2-Remover" << endl;
    cout << "3-Listar" << endl;
    cout << "4-Tamanho Fila" << endl;
    cout << "5-Sair" << endl << endl;
    cout << "Op��o: " ;
    cin >> opcao;
    
    switch (opcao)
    {
    	case 1:
    		inserir();
    		break;
    	case 2:
    		pular_linha(1);
    		remover (vt_fila);
    		break;	
    	case 3:
    		listar();
    		break;
		case 4:
    		tamanho();
    		break;	
	}
	return 0;
}
	
//-------------------------------------------------------------------------    
void listar (void)
 {
 	int temp;
 	if ( topo == -1)
 	 {
 	   cout << 	"A fila est� vazia ... " << endl;
 	   pular_linha (1);
 	 }
 	 else
 	 {
 	 for ( temp = 0; temp <= topo; temp ++)
 	     {
 	 		cout << "Na posi��o: [" << temp << "] foi alocado: " << vt_fila[temp];
 	 		pular_linha(1);
          } 
	  }
	  pular_linha (1);
	  system ("pause");
  }

//-------------------------------------------------------------------------       
void inserir (void)	 
 {
 	if ( topo == tam_fila - 1 )
 	{
 		cout << "A fila est� cheia" << endl;
 	}
 	else 
 	{
 		topo ++ ;
 		pular_linha ( 1 );
 		cout << "Posi��o do topo atual.................: " << topo << endl;
 		cout << "Digite o valor para entrar na fila....: " ;
		cin >> vt_fila[topo];
		listar(); 
	 }
 }
   
//-------------------------------------------------------------------------       
void remover ( int x[] )
 {
 	int i;
 	if ( topo == -1 )
 	   {
 	   	cout << "A fila est� vazia" << endl;
 	   	pular_linha ( 1 );
	   }
	else
	   {
	   	listar();
	   	pular_linha (1);
		cout << "Foi removido o elemento: " << vt_fila[0] << " posi��o do topo " << endl;
		pular_linha(1);
	   	for ( i = 0; i <= topo; i++)
	   	    {
	   	    	vt_fila[i] = x[ i+1 ];
			}
		topo --;
		listar();
	   }   
 }

//-------------------------------------------------------------------------    
void pular_linha (int x)
{
   int y;
   for ( y = 1; y <= x; y++ )
        cout << endl;
}
 
 //-------------------------------------------------------------------------
 void tamanho (void)
 {
 	int temp,tam = 0;
 	if (topo == -1)
        {
        	cout << "A fila est� vazia " << endl;
        	pular_linha (1);
		}
    else
        {
        cout << "Total de elementos inserido na fila: " << topo + 1	<< endl;
        pular_linha( 1 );
     	}
	   	system ("pause");
	      
 }
 
