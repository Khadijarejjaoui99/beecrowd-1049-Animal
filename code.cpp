// beecrowd 1049 Animal
#include <iostream>
using namespace std;
 
int main() {
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;
    if(word1 == "vertebrado"){
        if(word2 == "ave"){
            if(word3 == "carnivoro"){
                cout<<"aguia"<<endl;
            }else if(word3 == "onivoro"){
                cout<<"pomba"<<endl;
            }else{
                cout<<"Please check your third word once again."<<endl;
            }
        }else if(word2 == "mamifero"){
            if(word3 == "onivoro"){
                cout<<"homem"<<endl;
            }else if(word3 == "herbivoro"){
                cout<<"vaca"<<endl;
            }else{
                cout<<"Please check your third word once again."<<endl;
            }
        }else{
            cout<<"Please check your second word once again."<<endl;
        }
    }else if(word1 == "invertebrado"){
        if(word2 == "inseto"){
            if(word3 == "hematofago"){
                cout<<"pulga"<<endl;
            }else if(word3 == "herbivoro"){
                cout<<"lagarta"<<endl;
            }else{
                cout<<"Please check your third word once again."<<endl;
            }
        }else if(word2 == "anelideo"){
            if(word3 == "hematofago"){
                cout<<"sanguessuga"<<endl;
            }else if(word3 == "onivoro"){
                cout<<"minhoca"<<endl;
            }else{
                cout<<"Please check your third word once again."<<endl;
            }
        }else{
            cout<<"Please check your second word once again."<<endl;
        }
    }else{
        cout<<"Please check your first word once again."<<endl;
    }
    system("pause");
    return 0;
}