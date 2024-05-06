#include <iostream>
#include <fstream>
#include "loading....hpp"


int main(){
    
     for(int y = 0; y < 49; y++){
              Time();
        }
        
    std::ofstream File("loading.txt");
    
    if(File.is_open()){   
                
        for(int z = 1; z <= 100; z+=2){
            File<<"Loading..."<<z<<"% complete."<<std::endl;
            if(z == 99){
               z++;
               File<<"Loading Complete!"<<std::endl;
                    }             
            }
            
        std::cout<<"Successfully wrote to file!"<<std::endl;
        File.close();     
           
    }   
                 
    else{
        std::cerr<<"Couldn\'t open file."<<std::endl;
        }
        
}