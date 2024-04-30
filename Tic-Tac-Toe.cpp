#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>
using namespace std;

vector<char> positions;

class Board
{
public:
    void draw(){
        system("cls");
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
        cout << setw(5) << positions[0] << setw(5) << "||" << setw(5) << positions[1] << setw(5) << "||" << setw(5) << positions[2] << setw(5)  << endl;
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
        cout << "============================" << endl;
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
        cout << setw(5) << positions[3] << setw(5) << "||" << setw(5) << positions[4] << setw(5) << "||" << setw(5) << positions[5] << setw(5)  << endl;
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
        cout << "============================" << endl;
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
        cout << setw(5) << positions[6] << setw(5) << "||" << setw(5) << positions[7] << setw(5) << "||" << setw(5) << positions[8] << setw(5)  << endl;
        cout << setw(10) << "||" << setw(10) << "||" << setw(10) << endl;
    }

    void clear(){
        for(int i  = 0; i < positions.size(); i++){
            positions[i] = ' ';
        }
    }
};

class Player
{
private:
int position;

public:
    void setPosition(int num){
        position = num;
    }

    void getPositionX() const{
        positions[position - 1] = 'X';
    }

    void getPositionO() const{
        positions[position - 1] = 'O';
    }
};

int main(){
    vector<int> player_choice;
    int pos = 0, count = 0, cycle = 0;
    char choice;
    Board board;
    Player p1;
    Player p2;

    for(int i = 0; i < 9; i++){
        positions.push_back('0' + i + 1);
    }

    while(cycle < 1){
        while(count < 10){
            board.draw();

            cout << endl;
            cout << "Player \033[1;31m1\033[0m chooses: ";
            cin >> pos;
            for(int i = 0; i < player_choice.size(); i++){
                if(pos == player_choice[i]){
                    cout << "Taken. Try another: ";
                    cin >> pos;
                }
            }
            player_choice.push_back(pos);

            p1.setPosition(pos);
            p1.getPositionX();
            board.draw();

            if(positions[0] == 'X' && positions[1] == 'X' && positions[2] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[3] == 'X' && positions[4] == 'X' && positions[5] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[6] == 'X' && positions[7] == 'X' && positions[8] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[0] == 'X' && positions[3] == 'X' && positions[6] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[1] == 'X' && positions[4] == 'X' && positions[7] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[2] == 'X' && positions[5] == 'X' && positions[8] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[0] == 'X' && positions[4] == 'X' && positions[8] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[2] == 'X' && positions[4] == 'X' && positions[6] == 'X'){
                cout << "\033[1;31mPlayer 1 wins!!!\033[0m" << endl;
                break;
            }

            if(player_choice.size() == 9){
                cout << endl;
                cout << "No winner" << endl;
                break;
            }

            cout << endl;
            cout << "Player \033[1;32m2\033[0m chooses: ";
            cin >> pos;
            for(int i = 0; i < player_choice.size(); i++){
                if(pos == player_choice[i]){
                    cout << "Taken. Try another: ";
                    cin >> pos;
                }
            }
            player_choice.push_back(pos);

            p2.setPosition(pos);
            p2.getPositionO();
            board.draw();

            if(positions[0] == 'O' && positions[1] == 'O' && positions[2] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[3] == 'O' && positions[4] == 'O' && positions[5] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[6] == 'O' && positions[7] == 'O' && positions[8] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[0] == 'O' && positions[3] == 'O' && positions[6] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[1] == 'O' && positions[4] == 'O' && positions[7] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[2] == 'O' && positions[5] == 'O' && positions[8] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[0] == 'O' && positions[4] == 'O' && positions[8] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }
            else if(positions[2] == 'O' && positions[4] == 'O' && positions[6] == 'O'){
                cout << "\033[1;32mPlayer 2 wins!!!\033[0m" << endl;
                break;
            }

            if(player_choice.size() == 9){
                cout << endl;
                cout << "No winner" << endl;
                break;
            }

            count++;
        }
        cout << "Press 'r' to play again, or 'q' to exit: ";
        cin >> choice;
        
        if(choice == 'r'){
            cycle = 0;
            count = 0;
            board.clear();
            player_choice.clear();
        }
        else if(choice == 'q'){
            cycle = 1;
        }
    }
    return 0;
}
