#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int guess;
    srand((unsigned int) time(NULL));
    int number= (rand()%10+1);
    
    cout<<"Guess The Number"<<"\n";
    cout<<"We have selected a random number between 1-10. See if you can guess it."<<"\n";
    do
    {   cout<<"Guess any number between 1to10 =";
        cin>>guess;

        if(guess>number)
        {
          cout<<"The number you guessed is too high "<<"\n";
        }
        else if (guess<number)
        {
            cout<<"The number you guessed is too low"<<"\n";
        }
        else
        {
            cout<<"You guessed the correct number";
        }
        
    } while (guess!=number);
    
    
    return 0;

}
