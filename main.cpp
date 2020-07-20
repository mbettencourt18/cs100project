
#include <iostream>
#include "Factory.hpp"
#include <vector>



using namespace std;


static vector<Player*> Point;
static vector<Player*> Shoot;
static vector<Player*> Small;
static vector<Player*> Power;
static vector<Player*> Center;

 bool is_number(const std::string& );
void selectionSort(vector<int>&, vector<int> &);
void outputRoster( vector<int> &,  vector<int> &);
void addPlayer(vector<int> &, vector<int> &);
void removePlayer(vector<int> &, vector<int> &);

void menu(vector<int> &, vector<int> &);
void  firstmenu(vector<int> &j, vector<int> &r);

         void  outputAllPlayers( vector<int>& ,  vector<int>& );
         
         
         
         
         void  firstmenu(vector<int> &j, vector<int> &r){
         int choice =0;
         
         cout << "Choose an option" << endl;
         cout << "1. Start/Resume League"<<endl;
         cout << "2. Restart League"<< endl;
         cin >> choice;
         
         if (choice ==1){
         menu(j, r);
         }
         
         }
         
  
void selectionSort(vector<int>&j , vector<int>& r)
{
    
    int min_idx;
  
   
    for (int i = 0; i < j.size()-1; i++)
    {
       
        min_idx = i;
        for ( int b = i+1; b < j.size(); b++){
            if (j.at(b) > j.at(min_idx)){
                min_idx = b;
            }
        }

        int u= j.at(i);
        j.at(i) = j.at(min_idx);
        j.at(min_idx)= u;
         
    }
    
      for (int i = 0; i < r.size()-1; i++)
      {
         
          min_idx = i;
          for ( int b = i+1; b < r.size(); b++){
              if (r.at(b) < r.at(min_idx)){
                  min_idx = b;
              }
          }

                   int u= r.at(i);
                  r.at(i) = r.at(min_idx);
                  r.at(min_idx)= u;
           
      }
    
    
    menu(j,r);
    
}





int main() {

    Factory fact = new Factory();
    
    fact.ReadPlayers(Point, Shoot, Small, Power, Center);
    
    cout << Shoot.at(0)->GetReb();
    

    vector<int> j;
    for (int i=1 ;i <=25; i++)
        j.push_back(i);
   vector<int> r;
   
  

             firstmenu (j,r);
         
         
    
   

   return 0;
}
         
void OutPutPlayers(vector<int>&j, vector<int>& r, int counter){
        string x= "hi";
            
            
        while (!(x=="q" || x=="Q")){
        
           
            
            if(counter > j.size())
                counter = j.size();
                
            if(counter>15 && counter <20)
                counter =20;
            
            for (unsigned int i=counter-5; i<counter; i++){
                cout<<"Position "<< i+1<< ": "<< j.at(i)<<endl;
            }
            
            cout << "Type N for Next Page, P for Previous Page"<< endl;
                     
            cout<< "Type Q to go back to menu"<<endl;
            cin >> x;
            
            
            if (x == "n" || x=="N"){
                if ((counter>=j.size())){
                        
                        cout << endl<<"End of List. Try again." << endl << endl;
                    
                }
                else {
                        counter=5+counter;
                        cout << counter << endl;
                }
            }
                   
                
                else  if (x == "p" || x== "P"){
                    if (counter <=5){
                        cout << endl<<"Beginning of List. Try again."<< endl << endl;
                    }
                    else {
                        counter= counter-5;
                        
                    }
                }
                else if (x=="q"|| x=="Q"){
                    
                }
                else{
                    cout << endl<< "Invalid input. Try again" << endl<< endl;
                }
                
                
        }

        
         cout << endl<< endl;
         menu(j,r);
    
}
         
         void  outputAllPlayers( vector<int>& j,  vector<int>& r){
             cout << endl<< endl;
             int counter =5;
             
             OutPutPlayers(j,r,counter);
        
      /*   for(unsigned i = 0; i<j.size();++i){
            cout<<"Position "<< i+1<< ": "<< j.at(i)<<endl;
           }
             */
             
        
             
         }

void outputRoster( vector<int>& j,  vector<int>& r){
    cout << endl << endl;
   cout<<"ROSTER"<<endl;
   for(unsigned i = 0; i<r.size();++i){
    cout<<"Position "<< i+1<<" -- "<<r.at(i)<<endl;
   }
   cout<<endl;
   menu(j,r);

}

void menu(vector<int>& j, vector<int>& r){
 cout<<"MENU"<<endl;
 
cout<<"a - Add player"<<endl;
cout<<"r - Remove player"<<endl;
cout<<"u - Output All Available Players"<<endl;

cout<<"o - Output roster"<<endl;
cout<<"q - Back"<<endl;
cout<<endl;
cout<<"Choose an option:";
char choice;
cin>>choice;
if(choice == 'a'){

   addPlayer(j,r);
}
else if(choice == 'r'){
   
   removePlayer(j,r);
}
    else if(choice == 'u'){
    outputAllPlayers(j,r);
 
}
else if(choice == 'o'){
   outputRoster(j,r);
}
else if(choice == 'q'){
    firstmenu(j,r);
}
    else {
        cout << endl << "Invalid Input Try Again" << endl;
        menu(j,r);
           }

}

void removePlayer(vector<int>&j, vector<int>& r){
     cout << endl << endl;
    cout<<"ROSTER"<<endl;
    for(unsigned i = 0; i<r.size();++i){
     cout<<"Position "<< i+1<<" -- "<<r.at(i)<<endl;
    }
cout << endl<< endl;
         
    
    
cout<<"Enter a position number to remove"<<endl;
int x;
cin>>x;
    if (x<r.size()){
for(unsigned i =0;i<r.size();++i){
   if(i+1==x){
      j.push_back(r.at(i));
      r.erase(r.begin()+i);
      break;
   }
}
    
    selectionSort(j,r);
    }
    else {
        cout << endl << "Invalid Input Try Again" << endl;
        removePlayer(j,r);
           }
}


void addPlayer(vector<int>& j, vector<int>& r){
    
    
    if (r.size()>=5){
        cout << "max players"<< endl;
        menu(j,r);
    }
    
    
    else{

            cout << endl<< endl;
            int counter =5;
            string x= "hi";
                
                
            while (!is_number(x)){
        
                
                if(counter > j.size())
                    counter = j.size();
                    
                if(counter>15 && counter <20)
                    counter =20;
                
                for (unsigned int i=counter-5; i<counter; i++){
                    cout<<"Position "<< i+1<< ": "<< j.at(i)<<endl;
                }
                
                cout << "Type N for Next Page, P for Previous Page"<< endl;
                         
                cout<< "Enter Player Poisition number"<<endl;
                cin >> x;
                
                
                if (x == "n" || x=="N"){
                    if ((counter>=j.size())){
                    
                        cout << endl<<"End of List. Try again." << endl << endl;
                
            }
            else {
                    counter=5+counter;
                    cout << counter << endl;
            }
        }
               
            
            else  if (x == "p" || x== "P"){
                if (counter <=5){
                    cout << endl<<"Beginning of List. Try again."<< endl << endl;
                }
                else {
                    counter= counter-5;
                    
                }
            }
            else if (is_number(x)){
                int u = stoi(x);
                if (counter<u || ((counter-5)>=u)){
                    cout << endl<< "Invalid input. Try again" << endl<< endl;
                    x = "hi";
                    
                }
            }
            else{
                cout << endl<< "Invalid input. Try again" << endl<< endl;
            }
                    
    }

        int b = stoi(x);
        
        if(b<j.size()){
    for (int i=0; i <j.size(); i++){
        if(i+1==b){
            r.push_back(j.at(i));
            j.erase(j.begin()+i);
        }
    }
   selectionSort(j,r);
}
        else {
            cout << endl << "Invalid Input. Try Again" << endl;
            addPlayer(j,r);
        }
            }
}


bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
