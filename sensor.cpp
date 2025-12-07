// Project: Sensor Data Management & Matrix Processing
// Language: C++
// Concepts Used: OOP, Dynamic Memory, Pointers, 2D Arrays, Method Chaining
// Author: Muhammad Tanzeel 
// Platform: Visual Studio / Dev-C++ / g++

#include <iostream>
#include <string>
using namespace std;

// Sensor class definition
class sensor
{
public:
    int id;
    float value;
    string status;

    // Function to set sensor value (supports function chaining)
    sensor &setvalue(float v)
    {
        this->value = v;
        return *this;
    }

    // Function to set sensor status
    void setstatus(string s)
    {
        this->status = s;
    }

    // Function to display sensor information
    void display()
    {
        cout << "ID: " << id << " | Value: " << value << " | Status: " << status;
    }

    // Default constructor
    sensor() : id(0), value(0) {}

    // Destructor (shows when object is destroyed)
    ~sensor()
    {
        cout << "Sensor with ID " << id << " destroyed!" << endl;
    }
};

int main()
{
    int n;
    float v;
    string s;

    // Taking number of sensors from user
    cout << "Enter the number of sensors: ";
    cin >> n;

    // Dynamic allocation of sensor array
    sensor *data = new sensor[n];

    // Taking input for each sensor
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter data for Sensor " << i + 1 << endl;

        cout << "Enter ID: ";
        cin >> data[i].id;

        cout << "Enter Value: ";
        cin >> v;

        cout << "Enter Status (N/E): ";
        cin >> s;

        // Setting value and status using function chaining
        data[i].setvalue(v).setstatus(s);
    }

    // Displaying all sensor information
    cout << "\n----- Sensor Data -----\n";
    for (int i = 0; i < n; i++)
    {
        data[i].display();
        cout << endl;
    }

    int r, c;

    // Taking matrix dimensions
    cout << "\nEnter number of rows and columns of matrix for sensor readings: \n";
    cin >> r;
    cin >> c;

    // Dynamic memory allocation for 2D array (matrix)
    float **readings = new float *[r];
    for (int i = 0; i < r; i++)
    {
        readings[i] = new float[c];
    }

    // Taking matrix input
    cout << "\nEnter readings for the matrix (each row of matrix represents one sensor's readings versus time):\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Row " << i << ", Column " << j << ": ";
            cin >> *(*(readings + i) + j);
        }
    }

    float sum = 0.0, avg = 0.0;

    // Displaying matrix
    cout << "\n----- Matrix -----\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << *(*(readings + i) + j) << " ";
        }
        cout << endl;
    }

    // Calculating row-wise sum and average
    cout << "\n----- Row-wise Sum and Average -----\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += *(*(readings + i) + j);
        }

        avg = sum / c;
        cout << "Row " << i << " -> Sum: " << sum << " | Average: " << avg << endl;

        sum = 0;
        avg = 0;
    }

    // Displaying memory addresses
    cout << "\nSensor array starts at address: " << data << endl;
    cout << "First row of readings starts at address: " << *readings << endl;

    // Releasing dynamically allocated memory
    for (int i = 0; i < r; i++)
    {
        delete[] readings[i];
    }
    delete[] readings;
    delete[] data;

    system("pause");
    return 0;
}

