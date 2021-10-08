#include <bits/stdc++.h>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin();

void board();

void title()
{
  
    cout<<"\t\t\t\t\t";
    cout<<"\n";
    cout<<"\t\t\t\t    --------------------\n";
    cout<<"\t\t\t\t    | TIC-TAC-TOE GAME |\n";
    cout<<"\t\t\t\t    --------------------\n";
    cout<<"\n";
  
  
    cout <<"Players can choose a cell number numbered from 1 to 9 and marks at their desired positions.\n" << endl << endl;
    cout << endl;

    cout<<"\n\t\t\t\t   (: ENJOY YOUR GAME :)\n";
    cout<<"\t\t\t\t    ------------------\n";
    cout<<"\n";

}

int main()
{
	int player = 1;
	int i,choice;
	
	title();
  
    char mark;
    
    do
    {
        board();
        
        player=(player%2)?1:2;
        
        if(player==1)
        cout << "Player 1 puts X in cell:  "; //Enters the cell number to mark at there desired postion.
        else
        cout << "Player 2 puts O in cell:  "; //Enters the cell number to mark at there desired postion.
        
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move \nPlease press Enter ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    
    if(i==1)
        cout<<"==>\a Congratulations! Player"<<--player<<" win ";
    else
        cout<<"==>\a Game draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{

    cout << "\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t     |     |     " << endl;

    cout << "\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t     |     |     " << endl;

    cout << "\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "\t\t\t\t     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
********************************************************************/
