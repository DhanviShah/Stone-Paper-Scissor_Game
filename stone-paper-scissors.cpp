#include <bits/stdc++.h>
using namespace std;

int main()
{
    string player_name;
    cout << "Enter your name : ";
    cin >> player_name;
    cout << endl;
    int no_of_rounds = 0;
    cout << "Hey, " << player_name << " !" << endl;
    cout << "Howmany rounds would you like to play ? : ";
    cin >> no_of_rounds;
    cout << endl;
    int player_choice, computer_choice;
    cout << "You have three options to choose from!" << endl;
    cout << "1. Stone" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissor" << endl;
    int player_score = 0, computer_score = 0;
    for(int i=0; i<no_of_rounds; i++)
    {
        cout << endl;
        cout << "ROUND : " << i+1 << endl;
        cout << "Player Choice : "; 
        cin >> player_choice ;
        if(player_choice==1)
            cout << player_name << " chooses Stone" << endl;
        if(player_choice==2)
            cout << player_name << " chooses Paper" << endl;
        if(player_choice==3)
            cout << player_name << " chooses Scissor" << endl;    

        while (player_choice!=1 && player_choice!=2 && player_choice!=3)
        {
            cout << "Please select your choice from 1,2 or 3 " << endl;
            cout << "Player Choice : ";
            cin >> player_choice;
            if(player_choice==1)
            cout << player_name << " chooses Stone" << endl;
            if(player_choice==2)
                cout << player_name << " chooses Paper" << endl;
            if(player_choice==3)
                cout << player_name << " chooses Scissor" << endl;
        }
        
        computer_choice = (rand()%3) + 1;
        cout << "Computer Choice : " << computer_choice << endl;
        if(computer_choice==1)
            cout << "Computer chooses Stone" << endl;
        if(computer_choice==2)
            cout << "Computer chooses Paper" << endl;
        if(computer_choice==3)
            cout << "Computer chooses Scissor" << endl;
        if(player_choice == computer_choice)

            cout << "~~~ This round is draw" << endl;
        else if(player_choice==1 && computer_choice==2)
        {
            cout << "~~~ Computer wins this round" << endl;
            computer_score++;
        }
        else if(player_choice==1 && computer_choice==3)
        {
            cout << "~~~ " << player_name <<" wins this round" << endl;
            player_score++;
        }
        else if(player_choice==2 && computer_choice==1)
        {
            cout << "~~~ " << player_name <<" wins this round" << endl;
            player_score++;
        }
        else if(player_choice==2 && computer_choice==3)
        {
            cout << "~~~ Computer wins this round" << endl;
            computer_score++;
        }
        else if(player_choice==3 && computer_choice==1)
        {
            cout << "~~~ Computer wins this round" << endl;
            computer_score++;
        }
        else if(player_choice==3 && computer_choice==2)
        {
            cout << "~~~ " << player_name <<" wins this round" << endl;
            player_score++;
        }
    }
    
    cout << endl;
    if(player_score == computer_score)
    {
        cout << "Result : Draw Game" << endl;
    }
    else if(player_score > computer_score)
    {
        cout << "Result : " << player_name << ",you won this game!! Congratulations!!" << endl;
    }
    else if(player_score < computer_score)
    {
        cout << "Result : Computer won this game" << endl;
    }
    cout << endl;
    return 0;
}
