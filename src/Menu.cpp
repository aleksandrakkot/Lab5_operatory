#include <Folder/Lab3.hpp>

using namespace std;

int main()
{   
    while(1)
    {
	cout<<"1 - pracuj na macierzy n x m"<<endl;
    cout<<"2 - pracuj na macierzy n x n"<<endl;
    cout<<"3 - wczytaj macierz z pliku"<<endl;
    cout<<"4 - zakoncz program"<<endl;

		int choice = 0;
        cin >> choice;

	 switch(choice)
	    {
        case 1: {
                try {
            Matrix macierz1(4,5);
			Matrix macierz2(4,5); 
			
            cout<< "Macierz1 wypelniona zerami:"<<endl;
			macierz1.print();
            cout<<"Liczba wierszy i kolumn macierzy1 wynosi: "<<macierz1.rows() <<" x "<<macierz1.cols()<<endl;
            cout<<"Ustawianie wartosci macierzy1 i macierzy2 "<<endl;
            macierz1.set(1,1,5);
            macierz1.set(2,2,10);
			macierz2.set(1,1,7);
			macierz2.set(2,2,6);
			cout<<"Macierz1: "<<endl;
			macierz1.print();
			cout<<"Macierz2: "<<endl;
			macierz2.print();
			cout<<"Wynik dodawania: macierz1 + macierz2: "<<endl;
            Matrix wynik = macierz1.operator+(macierz2);
			wynik.print();
            macierz1.operator==(macierz2);
            macierz1.operator!=(macierz2);
            int no_row;
                        cout<<"Podaj nr wiersza z ktorego chcesz pobrac wartosci:"<<endl;
                        cin>>no_row;
                        macierz2.operator[](no_row);
            int value;
                        cout<<"Podaj wartosc o ktora chcesz powiekszyc kazdy element: (int)"<<endl;
                        cin>>value;
                        macierz2.operator++(value);
                        macierz2.print();
            int value2;
                        cout<<"Podaj wartosc o ktora chcesz pomniejszyc kazdy element: (int)"<<endl;
                        cin>>value2;
                        macierz2.operator--(value2);
                        macierz2.print();
			cout<<"Czy chcesz zapisac wynik do pliku? y/n"<<endl;
			 char inp;
             cin>>inp;
			  if('y' == inp){
                 string nazwa;
                 string sciezka;
                 cout << "Podaj nazwe pliku, w ktorym chcesz zapisac macierz: ";
                 cin >> nazwa;
                 cout << "Podaj sciezke do tego pliku: ";
                 cin >> sciezka;
                 macierz1.store(nazwa,sciezka);
                }
				cout<<"------------------------------------------------"<<endl;
			break;
		}
                catch(const exception& e) {
                std::cerr << e.what() << endl;
             }}
		case 2:
        {
            try {
			Matrix kwadratowa(5);
			cout<< "Macierz kwadratowa wypelniona zerami:"<<endl;
		    kwadratowa.print();
			kwadratowa.set(2,3,15);
			cout<< "Macierz kwadratowa po ustawieniu wartosci:"<<endl;
            kwadratowa.print();
			cout<<"Wartosc elementu 2x3 wynosi: "<<kwadratowa.get(2,3)<<endl;
            cout<<"Tworzymy macierz3, ktora poslozy nam do odejmowania i mnozenia"<<endl;
			Matrix macierz3(5);
			macierz3.set(2,3,7);
			cout<<"Wynik odejmowania: kwadratowa - macierz3: "<<endl;
			kwadratowa.operator-(macierz3).print();
			cout<<"Wynik mnozenia: kwadratowa x macierz3 "<<endl;
			kwadratowa.operator*(macierz3).print();
        cout<<"------------------------------------------------"<<endl;
           break;
		}
            catch(const exception& e) {
                  std::cerr << e.what() << endl;
                   }}
		case 3: 
        {
             try {
			 cout<<"Wczytanie macierzy z pliku"<<endl;
			 string nazwa;
             string sciezka;
			 cout << "Podaj nazwe pliku z ktorego chcesz zczytac macierz: ";
             cin >> nazwa;
             cout << "Podaj sciezke do tego pliku: ";
             cin >> sciezka;
             Matrix macierz(nazwa,sciezka);
			 macierz.print();
			cout<<"------------------------------------------------"<<endl;
             break;
			 }
             catch(const exception& e) {
            std::cerr << e.what() << endl;
                }
		 case 4: {
			cout<<"------------------------------------------------"<<endl;
			return 0;
            }
        }
    }
}
}