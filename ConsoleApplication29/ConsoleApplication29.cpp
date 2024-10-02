#include <iostream>
using namespace std;

class Car {
public:
    char model[50];  
    char country[50];  
    int year ;         
    double price = 0;     

    
    void Input()
    {
        cout << "Enter the model: ";
        cin >> model;  

        cout << "Enter the country: ";
        cin >> country; 

        cout << "Enter the year: ";
        cin >> year;   

        cout << "Enter the price: ";
        cin >> price;   
    }

  
    void Print()
    {
        cout << "Model: " << model << endl;
        cout << "Country: " << country << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car car1; 
    car1.Input();  
    car1.Print();  
}
