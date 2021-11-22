
#include "Vector.cpp"
#include <iostream>

using namespace std;

int main () {
    int n;
    double* v1;
    double* v2;
    cout << "Size:" << endl;
    cin >> n;
    v1 = new double[n];
    v2 = new double [n];

    cout << "Values V2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << "Values v4" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
 
    Vector Vector1;

    cout << "V1 is:" << endl;
    Vector1.print();

    Vector Vector2(n, v1);
    Vector2.setelements(v1);
    cout << "\nV2 is:" << endl;
    Vector2.print();
    
    Vector Vector3 (Vector2);
    cout << "\nV3 is: " << endl;
    Vector3.print();

    Vector Vector4(n, v2);
    Vector4.setelements(v2);
    cout << "\nV4:" << endl;
    Vector4.print();

    cout << "\nNorm: " <<
    Vector2.normality() << endl;
    cout << "Scalar Prod: "
    << Vector2.sprod(Vector4) << "." <<endl;
    cout << "Sum: ";
    (Vector2.addition(Vector4)).print();
    cout << "\nDiff ";
    (Vector2.differ(Vector4)).print();
    cout<<endl;


    return 0;
}
