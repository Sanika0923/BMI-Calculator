#include <iostream>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal weight" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Normal weight" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}