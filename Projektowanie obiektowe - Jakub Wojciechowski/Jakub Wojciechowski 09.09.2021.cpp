#include <iostream>
using namespace std;

class worker{
	public:
	string name;
	string surname;	
	string nationality="Polska";
	
	
	
	//definicja metody showName
	void showName(){
		cout << "Twoje imi�: " << name;
	};
	
	//deklaracja (prototyp) metody showSurname
	void showSurname(); 
	void showAllData();
}; 
//definicja metody showSurname
void worker::showSurname(){
	cout << "\nTest metody Surrname";
};
void worker::showAllData(){
	cout << "\n\nAllData "<< name << surname << nationality;
};




int main(int argc,char** argv){
	setlocale(LC_CTYPE,"polish"); //zmienianie j�zyku (polskie znaki)
	worker pracownik; //utworzony obiekt o nazwie "pracownik" kt�ry jest instancja klasy worker
	pracownik.name = " Krystyna";
	pracownik.surname = " Puczyk";
	cout << "Narodowo��: " << pracownik.nationality;
	pracownik.nationality = " USA";
	cout << "\nImie: " << pracownik.name;
	cout << "\nNarodowo��: " << pracownik.nationality << endl;
	pracownik.showName();
	pracownik.showSurname();
	pracownik.showAllData();
	return 0;
}


