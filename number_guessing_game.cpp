#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
      srand(time(0));
      int guess;
      int temp=0;
      int number;
      number = rand() % 1000 + 1;
      
      cout <<"welcome to number guessing game \n";
      cout<<"lets predict numbers to match with our system guessing method \n";
   

      while (temp < 5){
        cout << " -> Enter your estimate: ";
        cin >> guess;
      temp++;
       

            if (guess < number){
                  cout << "Your estimate is less, than the secret number" << endl;
            } 

            else if (guess > number){
                  cout << "Your estimate is more, than the secret number" << endl;
            }
            else{
                  cout << "Your guess is right!" << endl;
                break;
            }     

      } 
        cout<<"-> you try to atempt 5 times \n-> lets saw my right guess is :"<<number;
      system("PAUSE");

      return 0;

}