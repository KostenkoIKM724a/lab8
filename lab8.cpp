#include <iostream>
using namespace std;

int main()
{
    srand(time(nullptr));
    const int array_size = 20;
    double array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        double intNumberPart = rand() % 21 - 10; 
        double fractionNumberPart = (double)(rand() % 2000 - 1000) / 1000; //-10...10
        double fullNumber = intNumberPart + fractionNumberPart;

        array[i] = fullNumber;
    }
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " ";
        //display an array
    }
    double min_number = array[0];
    double max_number = array[0];
    for (int i = 1; i < array_size; i++)
    {
        if (array[i] < min_number)
        {
            min_number = array[i];
        }
        if (array[i] > max_number)
        {
            max_number = array[i];
        }
    }
    cout << endl << "Min number: " << min_number << endl;
    cout << "Max number: " << max_number << endl;
    double difference_max_min = max_number - min_number;
    cout << "Difference between max and min numbers: " << difference_max_min;
}
