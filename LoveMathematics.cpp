#include<iostream>
#include<string>
using namespace std;

// constants
string INVALID_INPUT = "You might had an typo!!";

int lenlist = 10;
int list[10];

int maximum(int len,int list[]);
int minimum(int len,int list[]);
int average(int len,int list[]);
void display(int value);
void singleIntegerTab();
void listIntegerOperations();







int main()
{

    int integerType = 0;
    // Ask for a single integer or a array
    cout << " Please Give your Preferrence about:\n"
    << "1. Single Integer Operations\n"
    << "2. List of Integers Operations{Array}\n" << endl;
    cin >> integerType;

    if(integerType == 1)
    {
        singleIntegerTab();

    }else if (integerType == 2)
    {
        listIntegerOperations();

    }else
        cout << INVALID_INPUT;

}




void singleIntegerTab()
{
    int value;
    cout << "Enter the integer: "<< endl;
    cin >> value;

    // operations for single integer
    int singleIntegerPre;
    cout << "    You Selected for single integer operations:\n"
    << "        1. Prime Number\n"
    << "        2. Odd or Even\n"
    << "        3. Positive or Negative\n"
    << "        4. z-Summetion\n"
    << "        5. Factorial\n"
    << "        6. Twice Adding\n"
    << "        More on the go ->\n"
    << "        Select from the above:\n"
    << endl;
    cin >> singleIntegerPre;

    switch(singleIntegerPre)
    {
        case 1: //Prime No
        {
            bool isPrime = true;
            for(int i = 2;i<value;i++)
            {
                if(value%i == 0)
                {
                    isPrime = false;
                    break;
                }
                cout << "It is a Prime Number ";
                break;
            }
        }
        case 2:// Odd or even
        {
            (value % 2 == 1)?cout << "It is Odd" << endl :cout << "It is Even"<< endl;
            break;
        }
        case 3: // positive or negative
        {
            (value > 0)? cout << "It is Positive (+)\n": cout << "It is Negative(-)\n";
            break;
        }
        case 4: //Z
        {
            int summetion = 0;
            for(int i = 0;i<=value;i++)
            {
                summetion = summetion + i;
            }
            cout << "Summetion of the Number is: " << summetion;
            break;
        }
        case 5: // factorial
        {
            int factorial = 1;
            // 5 = 5 x4 x3 x2 x1;
            for(int i = value ;i>0; i--)
            {
                factorial = factorial * i;
            }
            cout << "The factorial is: "<< factorial;
            break;
        }
        case 6:
        {
            int sum= 1;
            for(int i =1;i<value;i++)
            {
                sum = sum * 2;
            }
            cout << "Twice Adding value will be: "<< sum;
            break;

        }
        default:
            cout << INVALID_INPUT;
    }
}





void listIntegerOperations()
{
    int list[10];
    int option;
    cout << "Fill the list with 10 integers: \n";
    for(int i = 0;i<lenlist;i++)
    {
        cin >> list[i];
    }
    cout<<"Below are the available Operations over a list of Integers:\n "
    << "1.Maximum\n"
    << "2.Minumum\n"
    << "3.Average\n"
    << "4.Z - Summetion\n"
    << "5.Primes\n" ;
    cout << "make your choice: \n";
    cin>> option;
    switch(option)
    {
        case 1:
        {
            // maximum
            int max = list[0];
            for(int i = 0;i<lenlist;i++)
            {
                if(max < list[i])
                    max = list[i];

            }
            cout << "Maximum of the list is: "<< max;
            break;
        }
        case 2:
        {
            // minimum
            int min = list[0];
            for(int i = 0;i<lenlist;i++)
            {
                if(min > list[i])
                    min = list[i];
            }
            cout << "Minimum of the list is: " << min;
            break;
        }
        case 3:
        {
            // average
            int sum = 0;
            for(int i =0;i<lenlist;i++)
            {
                sum =sum +list[i];
            }
            int average = sum/lenlist;
            cout << "Average of the list is: "<< average;
            break;
        }
        case 4:
        {
            // summetion
            int sum = 0;
            for (int i =0;i<lenlist;i++)
            {
                sum = sum +list[i];
            }
            cout << "Z of the list is: "<< sum;
            break;
        }
        case 5:
        {
            // primes
            int primeList[] ={1,1,1,1,1,1,1,1,1,1};
            for(int i =0;i<lenlist;i++)
            {
                for(int j=2;j<list[i];j++)
                {
                    if(list[i]%j ==0)
                        primeList[i] = 0;

                }
            }
            for(int i = 0;i<lenlist;i++)
            {
                (primeList[i])?cout << "Prime\n":cout << "Not-Prime\n";
            }
            break;
        }
        
        default:
        {
            cout << "Invalid option!";
        }
    }

}