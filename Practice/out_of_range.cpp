/*
CH-230-A
a13 p6.6[cpp]
Krishna Gautam
k.gautam@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> myvector;

    //Vector with the number '8' for 20 times. 
    for(int i = 0; i < 20; i++){

        myvector.push_back(8);

    }

    //Trying to access the element at 21st position.
    try{

        myvector.at(21);

    }

    //Catching the out-of-range values and preventing the 
    //programming from crashing. 
    catch(const out_of_range& OUT_OF_RANGE){

        cerr << "Error: Out of range! " << OUT_OF_RANGE.what() << endl;

    }

    return 0;

}