#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <locale>
#include "Player.hpp"



using namespace std ;






vector<string>  readPlayerInfo( string nameOfFile )
{
   fstream newfile  ;
   vector<string> result ;
   newfile.open( nameOfFile  ,ios::in);
   if (newfile.is_open())
   {
      string line ;
      while( getline(newfile, line)  )
      {
     
         if( line.length() > 10)
           
         result.push_back( line ) ;
      }
      newfile.close()  ;
   }
   return result ;
}


int main()
{
    string nameOfFile = "All_Positions_Stats.txt" ;

   


    vector<string> list = readPlayerInfo(nameOfFile);
    
    
    string x = "Hello";
    x.push_back('l');
    cout <<x<< endl;
    
  /*  string line1 = "{\"Rank\": \"1\", \"Player\": \"James Harden\", \"Team\": \"HOU\", \"GP\": \"61\",\"MPG\": \"36.7\", \"FGM\": \"9.9\", \"FGA\": \"22.7\", \"FG%\": \".435\", \"3PM\": \"4.4\", \"3PA\": \"12.6\", \"3P%\": \".352\" \"FTM\": \"10.1\",	\"FTA\": \"11.8\"	\"FT\": \".861\", \"TOV\": \"4.5\", \"PF\": \"3.4\", \"ORB\": \"1.0\",	\"DRB\": \"5.3\"	\"RPG\": \"6.4\", \"APG\": \"7.4\", \"SPG\": \"1.7\", \"BPG\": \"0.9\", \"PPG\": \"34.4\"}," ;
 *      */
    int ind = list[0].find("PPG");
    string a  = "";
    
    for (int i = ind+8; i< ind+60; i++){
        if (list[0].at(i) == '"')
            break;
        else{
        
        a.push_back(list[0].at(i) );
        }
	double b = stod(a);
	Player* 1stPlayer->points = b;
 	cout << 1stPlayer->points<< endl;           
    }
   
    

	return ( 1 );
}

