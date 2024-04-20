#include <iostream>

auto sort(int array1[], int array2[]){
      
     int size1=sizeof(array1)/sizeof(array1[0]);
     int size2=sizeof(array2)/sizeof(array2[0]);

    // auxiliary arrray 
     int array[size1+size2];
     int k=0;
     int j=0;


     for ( int i =0 ; i<size1; i++){

        while ( array1[i]>array2[j] && j<size2){

            array[k]=array[j];
            k++;
            j++;

        }

        array[k]=array1[i];
        k++;



      if ( j> size2){
        array[j]=array1[i];
        j++

     }

     }


    if (j<size2){
        
        for (int n =j; n < size2; n++){

            array[k]=array[n];
        }



    }




   return array;
}

int main(int argc, char const *argv[])
{
    
      
      int array[]={10,4,8,11};
      int array1[]={1, 67,8, 4,5};
      
      
      return 0;

}
