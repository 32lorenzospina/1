#include <iostream> //inclusione della libreria di input/output

using namespace std; //dichiarazione spazio dei nomi standard

int main() //funzione principale del programma
{
	int numero; //dichiarazione di una variabile intera
	
	cout << "Benvenuto nel mio primo programma!" << endl; //messaggio a schermo
	cout << "Inserisci un numero: "; 
	cin >> numero; //dalla tastiera l'utente digita il valore da dare a numero
	
	cout << "Hai inserito il numero " << numero << endl;
	return 0; //il flusso del programma e' terminato con successo
}