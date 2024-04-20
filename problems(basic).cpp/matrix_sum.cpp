#include <iostream>

int main(){
     
    int matrix[][2]={{1,2},{4,5},{7,8}};
   // Size of the 
    int rows =sizeof(matrix)/sizeof(matrix[0]);
    int column= sizeof(matrix[0])/sizeof(matrix[0][0]);
    int sum{0};

    std::cout<<"It has rows ::"<< rows << "column::"<< column<<std::endl;
  
    for ( int i{0}; i<rows ; i++){
        for ( int j{0}; j<column; j++){
            std::cout << matrix[i][j]<<std::endl;
            sum+=matrix[i][j]; 


        }

    }
        std::cout<< "The value of sum is equal to "<<sum<<std::endl;
        
    
    return 0;
}