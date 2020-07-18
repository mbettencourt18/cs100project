#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <iterator>
#include <list>
#include "Player_Header.h"

using namespace std;
static vector<Player*> list_p;
/*Player::Player(int rank, string name, string team, double rebounds, double points, double assists,
                 double steals, double blocks, double FGPerecent, double FGA, double threePA, double threeP){
    this->rank = rank;
    this->name = name;
    this->team = team;
    this->rebounds = rebounds;
    this->points = points;
    this->assists = assists;
    this->steals = steals;
    this->blocks = blocks;
    this->FGPercent = FGPerecent;
    this->FGA = FGA;
    this->threePA = threePA;
    this->threeP = threeP;
}
*/
void Player::Parser(std::list<string> player){
    string name = " ";
    int rank = 0;
    string team = " ";
    double FGA = 0.0;
    double FG = 0.0;
    double threePA = 0.0;
    double threeP = 0.0;
    double RPG = 0.0;
    double APG = 0.0;
    double SPG = 0.0;
    double BPG = 0.0;
    double PPG = 0.0;


    std::list<string>::iterator i = player.begin();
        while (!player.empty()) {
	//	i = player.begin();
            if (rank == 0) {
                istringstream iss(*i);
                iss >> rank;
		++i;
                player.pop_front();
                
            }
            if (name == " ") {
                istringstream iss(*i);
                iss >> name;
		++i;
                player.pop_front();
	
               

                string last = " ";
                istringstream isss(*i);
                isss >>last;
		++i;
                player.pop_front();
                name = name + " " + last;
                
            }
            if (team == " ") {
                istringstream iss(*i);
                iss >> team;
		++i;
                player.pop_front();
                
            }

            if (FGA == 0) {
                istringstream iss(*i);
                iss >>FGA;
		++i;
                player.pop_front();
                
            }
            if (FG == 0) {
                istringstream iss(*i);
                iss >> FG;
		++i;
                player.pop_front();
                
            }
            if (threePA == 0) {
                istringstream iss(*i);
                iss >>threePA;
		++i;
                player.pop_front();
                
            }
            if (threeP == 0) {
                istringstream iss(*i);
                iss >> threeP;
		++i;
                player.pop_front();
                
            }
            if (RPG == 0) {
                istringstream iss(*i);
                iss >> RPG;
		++i;
                player.pop_front();
                
            }
            if (APG == 0) {
                istringstream iss(*i);
                iss >> APG;
		++i;
                player.pop_front();
                
            }
            if (SPG == 0) {
                istringstream iss(*i);
                iss >> SPG;
		++i;
                player.pop_front();
		
            }
            if (BPG == 0) {
                istringstream iss(*i);
                iss >> BPG;
		++i;
                player.pop_front();
               
            }
            if (PPG == 0) {
                istringstream iss(*i);
                iss >> PPG;
		++i;
                player.pop_front();
                
                player.pop_front();
            }
	    if (player.empty()){
		cout << "empty" << endl;
    	}        
}  
    Player* p = new Player(rank, name, team, RPG, PPG, APG, SPG, BPG, FG, FGA, threePA, threeP);
   list_p.push_back(p);
	cout << &list_p.at(0) << endl;
}

void Player::getplayer(string input){
    std::list<string> player;
    std::istringstream ss(input);

    do {
        string tmp;
        ss >> tmp;
        player.push_back(tmp);
        cout << tmp << endl;
    }while (ss);
    Parser(player);
}

void  Player::main (){
    ifstream file("All_Positions_Stats.txt");
    string input;
    if (file.is_open()) {
        cout << "yes open" << endl;
    }
    else{
        cout << "file was not found" << endl;
    }
    while (file >> input) {
       getline(file,input);
        cout << input <<endl;
                getplayer(input);
                    }
       
       
                    }
                    int main(){
                        Player* p = nullptr;
                            p->main();
       
                                return 0;
                                }
       
