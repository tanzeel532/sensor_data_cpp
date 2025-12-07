# sensor_data_cpp
C++ program for sensor data management and matrix processing

This is a console-based C++ project that demonstrates **object-oriented programming, dynamic memory management, pointer-based 2D arrays, and basic data processing** using real-world style sensor data.

The program allows users to:

* Create multiple sensors using a class
* Store and display sensor ID, value, and status
* Dynamically create a 2D matrix of sensor readings
* Calculate row-wise sum and average
* Properly allocate and deallocate memory using `new` and `delete`.


## Features

*  Sensor class with constructor and destructor
*  Function chaining using return by reference
*  Dynamic allocation of sensor objects
*  Dynamic 2D matrix using pointers
*  Pointer arithmetic for matrix access
*  Row-wise sum and average calculation
*  Clean and formatted console output

---

## Technologies Used

* **Language:** C++
* **Concepts:**
  * Object-Oriented Programming (OOP)
  * Dynamic Memory Management
  * Pointers & Pointer Arithmetic
  * 1D & 2D Dynamic Arrays


## How to Run This Program

### Using g++ Compiler:

```bash
g++ sensor.cpp -o sensor
./sensor
```

### Using Dev-C++ / Visual Studio:

1. Create a new C++ file
2. Paste the code
3. Compile and run


## Sample Program Flow

1. User enters number of sensors
2. Enters ID, value, and status for each sensor
3. Program prints all sensor data
4. User enters matrix size
5. Enters matrix values
6. Program displays matrix
7. Program calculates row-wise sum & average


## Learning Outcomes

This project helped me understand:
* How objects are stored dynamically in memory
* Proper usage of constructors and destructors
* How 2D arrays work using double pointers
* Real-world application of pointer arithmetic
* Manual memory cleanup using `delete[]`


## Author

**Muhammad Tanzeel**
C++ & Embedded Systems Learner


##  If you like this project, feel free to star the repository!

