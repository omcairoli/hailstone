// Hailstone
#include <iostream>

using namespace std;

//Declaration or Prototype
int counter( int );

int main( int argc, char *argv[] ) {
   
    int user_input;
    int user_length;
   
    cout << "Enter a number: ";
    cin >> user_input;
   
    user_length = counter( user_input );
   
    cout << endl;
    cout << "The number of steps to hit 1: " << user_length << endl;

    return 0;
}

//Definition
int counter( int user_input )
{
    int ctr = 0;            //Keep track of length that it takes to reach number 1 (counter)
   
    while ( true )
    {
        // Even
        if ( user_input % 2 == 0 )
        {
            user_input = user_input / 2;
        }
        // Odd
        else if ( user_input % 2 != 0 )
        {
            user_input = (( user_input * 3 ) + 1 );
        }
        if ( user_input == 1 )
        {
            cout << user_input;
            ctr++;
            break;
        }
       
        cout << user_input << " ";
        ctr++;
    }
   
    return ctr;
}