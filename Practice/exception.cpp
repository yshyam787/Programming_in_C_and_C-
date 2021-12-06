/*
CH-230-A
a13 p7.6[cpp]
Krishna Gautam
k.gautam@jacobs-university.de
*/

#include <exception>
#include <iostream>

using namespace std;

class Ownexception: public exception{
    private:
        string excep_msg;
    public:
        Ownexception();
        const char* what() {return "Ownexception\n";}
};

Ownexception::Ownexception(): exception() {
    excep_msg = "Default case exception";
}

void except(int val){
    if(val == 1){
        throw 'a';
    }else if(val == 2){
        throw (int) 12;
    }else if(val == 3){
        throw true;
    }else{
        Ownexception a;
        throw a;
    }
}

int main(){
    int number;
    cout << "Please enter a number:" << endl;
    cin >> number;
    try{
        except(number);
    }catch (int val1){
        cerr << "Caught in main " << val1 << endl;
    }catch (char val2){
        cerr << "Caught in main " << val2 << endl;
    }catch (bool val3){
        cerr << "Caught in main " << val3 << endl;
    }catch(Ownexception& o){
        cerr << o.what() << endl;
    }
    return 0;
}