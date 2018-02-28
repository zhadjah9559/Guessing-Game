/*==============================================================================
 Zachary Hadjah                    February 9th 2018
 Junior Year                       Side project
  
 This program first generates a random number and asks the user to guess what the
 number is, from 1 to 100. If the user guesses incorrectly, the
 =============================================================================*/
#include<iostream>
#include<cstdlib>
#include<time.h>
#include <cmath>
#include <cctype>
using namespace std;


/**
 * 
 * @return 0
 */
int main()
{
    do{
        char restart = 'Y';

            while(restart == 'Y')
            {
                int guesses = 0;
                srand(time(NULL));
                int randNum = (rand()%100)+1;

                int guess = 0;
                while(guess <= 0 || guess >100)
                {
                    cout<<"Please enter a number between 1 and 100 \n";
                    cin>>guess; 
                }

                if (guess == randNum)
                        cout << "Congrats, you guessed the right number!\n";
                else if (guess != randNum)
                {
                        cout << "Incorrect, the number I generated is in between: ";
                        if (randNum >= 1 && randNum <= 10)
                                cout << "1 and 10\n";
                        else if (randNum >= 11 && randNum <= 20)
                                cout << "11 and 20\n";
                        else if (randNum >= 21 && randNum <= 30)
                                cout << "21 and 30\n";
                        else if (randNum >= 31 && randNum <= 40)
                                cout << "31 and 40\n";
                        else if (randNum >= 41 && randNum <= 50)
                                cout << "41 and 50\n";
                        else if (randNum >= 51 && randNum <= 60)
                                cout << "51 and 60\n";
                        else if (randNum >= 61 && randNum <= 70)
                                cout << "61 and 70\n";
                        else if (randNum >= 71 && randNum <= 80)
                                cout << "71 and 80\n";
                        else if (randNum >= 81 && randNum <= 90)
                                cout << "81 and 90\n";
                        else if (randNum >= 91 && randNum <= 100)
                                cout << "91 and 100\n";
                        cout<<"Guess again: \n";
                }

                cin>>guess;    


                for(int i = 0; i<10; i++)
                {
                    if(guess == randNum){
                    cout<<"Congrats, You've guessed my random Number!!";
                    break;
                    }

                    else if(guess<randNum)
                    cout<<"My number is higher than your guess, So Guess again! \n";

                    else if(guess>randNum)
                    cout<<"My number is lower than your guess, So Guess again! \n";

                    guess++;
                    cin>>guess;
                }   
                
                cout<<"Do you want to try again? Type Y for yes and N for no. \n";
                cin>>restart;

                restart = toupper(restart);
            } 
    }while (cin.get() != '\n');

    return 0;
}

    
    
	