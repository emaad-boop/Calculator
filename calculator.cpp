#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:

    
    void add()
    {
        int n;
        double num, result = 0;

        cout << "How many numbers do you want to add? ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            result = result + num;
        }

        cout << "Result: " << result << endl;
    }

    
    void subtract()
    {
        int n;
        double num, result;

        cout << "How many numbers do you want to subtract? ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";
        cin >> result;

        for (int i = 1; i < n; i++)
        {
            cin >> num;
            result = result - num;
        }

        cout << "Result: " << result << endl;
    }

    
    void multiply()
    {
        int n;
        double num, result = 1;

        cout << "How many numbers do you want to multiply? ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            result = result * num;
        }

        cout << "Result: " << result << endl;
    }

    
    void divide()
    {
        int n;
        double num, result;

        cout << "How many numbers do you want to divide? ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";
        cin >> result;

        for (int i = 1; i < n; i++)
        {
            cin >> num;

            if (num == 0)
            {
                cout << "Error: Cannot divide by zero!" << endl;
                return;
            }

            result = result / num;
        }

        cout << "Result: " << result << endl;
    }

    
    void modulus()
    {
        int n;
        double num, result;

        cout << "How many numbers do you want to use for modulus? ";
        cin >> n;

        cout << "Enter " << n << " numbers: ";
        cin >> result;

        for (int i = 1; i < n; i++)
        {
            cin >> num;

            if (num == 0)
            {
                cout << "Error: Cannot use zero!" << endl;
                return;
            }

            result = fmod(result, num);
        }

        cout << "Result: " << result << endl;
    }

    
    void power()
    {
        double base;
        int exponent;

        cout << "Enter base: ";
        cin >> base;

        cout << "Enter exponent: ";
        cin >> exponent;

        cout << "Result: " << pow(base, exponent) << endl;
    }

    
    void trigonometry()
    {
        int choice;
        double number;

        cout << "\n1. Sine\n";
        cout << "2. Cosine\n";
        cout << "3. Tangent\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter number: ";
        cin >> number;

        switch (choice)
        {
            case 1:
                cout << "Result: " << sin(number) << endl;
                break;

            case 2:
                cout << "Result: " << cos(number) << endl;
                break;

            case 3:
                cout << "Result: " << tan(number) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    
    void logarithm()
    {
        int choice;
        double number;

        cout << "\n1. Natural Logarithm\n";
        cout << "2. Base 10 Logarithm\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter number: ";
        cin >> number;

        if (number <= 0)
        {
            cout << "Error: Number must be greater than 0!" << endl;
            return;
        }

        switch (choice)
        {
            case 1:
                cout << "Result: " << log(number) << endl;
                break;

            case 2:
                cout << "Result: " << log10(number) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
    void squareRoot()
    {
        double number;

        cout << "Enter number: ";
        cin >> number;

        if (number < 0)
        {
            cout << "Error: Square root of a negative number is not real!" << endl;
            return;
        }

        cout << "Result: " << sqrt(number) << endl;
    }
};


int main()
{
    Calculator calc;

    int choice;
    while(true)
    {

    cout << "\n===== CALCULATOR =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Power\n";
    cout << "7. Trigonometry\n";
    cout << "8. Logarithm\n";
    cout << "9. Square Root\n";
    cout << "Enter your choice: ";
    cin >> choice;

        if (choice == 9)
        {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

    switch (choice)
    {
        case 1:
            calc.add();
            break;

        case 2:
            calc.subtract();
            break;

        case 3:
            calc.multiply();
            break;

        case 4:
            calc.divide();
            break;

        case 5:
            calc.modulus();
            break;

        case 6:
            calc.power();
            break;

        case 7:
            calc.trigonometry();
            break;

        case 8:
            calc.logarithm();
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    }

    return 0;
}
