#include <iostream>
using namespace std;


//The Assumption is that firstNumber <= second;

int refinedEuclideanAlgorithm(int firstNumber,int secondNumber){

    if( firstNumber == 0) return secondNumber;
    else{
         return refinedEuclideanAlgorithm(secondNumber % firstNumber,firstNumber);
    }

};



// The Assumption is that firstNumber <= second;

int euclideanAlgorithm( int firstNumber,int secondNumber){
    if( firstNumber == secondNumber) return firstNumber;
    else if ( firstNumber > secondNumber ) return euclideanAlgorithm(firstNumber - secondNumber, secondNumber);
    else{ return euclideanAlgorithm(firstNumber,secondNumber-firstNumber);};

}




int main(){

    int output = euclideanAlgorithm(5, 50);
    int result = refinedEuclideanAlgorithm(5, 50);
    cout << "The result for euclidean Algorithm is : " <<   output  << "And the result of the refined Algorithm is " << result;
}




