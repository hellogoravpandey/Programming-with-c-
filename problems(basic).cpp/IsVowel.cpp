#include<iostream>

int main(){


    char vowel;
    std::cout << "Enter the vowel :: "<< std::endl;
    std::cin>> vowel;


    if ( vowel=='a' || vowel == 'e' || vowel=='i' || vowel =='o' || vowel=='u'){
        std::cout << "Vowel"<<std::endl;



    }
    else {
        std::cout<< "Consonant"<< std::endl;
    }

    return 0;
}