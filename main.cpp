// Title: Average after drop lowest value
// Purpose: Eliminate lowest value in array and calculate average
// Have fun - Enjoy the process - Practices makes Improvement

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    double data[] = {10,20,30};
    // double data[] = {1,2,3};
    double sum = 0;
    double low = 0;
    double countEl = 0;
    double average = 0;
    const double size = sizeof(data)/sizeof(double);

    cout << "Here is the array data[] = { ";
    for(size_t i = 0; i < size; ++i)
    {
        cout << data[i] << " ";
    }
    cout << '}' << endl;
    
    low = data[0];
    for(size_t i = 0; i< size; ++i)
    {
        if(data[i] < low)                  // find the  lowest value
        {
            low = data[i];
        }
    }
    

    for(size_t i = 0; i < size; ++i)
    {
        if(data[i] > low)                  // sum without the  lowest value
        {
            sum += data[i];
            countEl++;
        }
    }

    average = sum/countEl;
    cout << "average: " << average << endl;

    return 0;
}
