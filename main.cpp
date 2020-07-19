#include <iostream>

#include <vector>
using namespace std;

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
            if (j.at(b) < j.at(min_idx)){
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


    vector<int> j = {1,2,3,4,5,6,7,8,9,10};
   vector<int> r;
   
  

             firstmenu (j,r);
         
         
    
   

   return 0;
}
         
         
         
         void  outputAllPlayers( vector<int>& j,  vector<int>& r){
             cout << endl<< endl;
         for(unsigned i = 0; i<j.size();++i){
            cout<<"Position "<< i+1<< ": "<< j.at(i)<<endl;
           }
             cout << endl<< endl;
             menu(j,r);
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
void addPlayer(vector<int>& j, vector<int>& r){
    
    
    if (r.size()>=5){
        cout << "max players"<< endl;
        menu(j,r);
    }
    
    
    else{

            cout << endl<< endl;
        for(unsigned i = 0; i<j.size();++i){
           cout<<"Position "<< i+1<< ": "<< j.at(i)<<endl;
          }
            cout << endl<< endl;
        
   cout<< "Enter Player Poisition number"<<endl;
   int x;
   cin>>x;
        if(x<j.size()){
    for (int i=0; i <j.size(); i++){
        if(i+1==x){
            r.push_back(j.at(i));
            j.erase(j.begin()+i);
        }
    }
   selectionSort(j,r);
}
        else {
            cout << endl << "Invalid Input Try Again" << endl;
            addPlayer(j,r);
        }
            }
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

