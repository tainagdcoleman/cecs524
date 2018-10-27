#include<iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int r1 = atoi(argv[1]);
    int c1 = atoi(argv[2]);
    int r2 = atoi(argv[3]);
    int c2 = atoi(argv[4]);

    
    int** m1 = new int*[r1];
    int** m2 = new int*[r2];
    int** res = new int*[r1];
    int k = 1;
    int t = r2*c2;
    int s = 0;

    for(int i = 0; i < r1; ++i){
        m1[i] = new int[c1];
    }
    
    for(int i = 0; i < r1; ++i){
        m2[i] = new int[c2];
    }

    for(int i = 0; i < r1; ++i){
        res[i] = new int[c2];
    }

    cout << "M1 = " << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){

            m1[i][j] = k++;
            res[i][j] = 0;
            cout << m1[i][j] << " ";
        }
        cout << endl;

    }
         cout << endl << endl;

    cout << "M2 = " << endl;
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){

            m2[i][j] = t--;
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << endl;

    cout << "M1 * M2 =" << endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int s = 0; s < c1; s++){
                res[i][j] += m1[i][s] * m2[s][j];
            }
            cout << res[i][j] << " ";
        }
        cout << endl;

    }
    cout << endl << endl;

    for (int i=0; i<r1; i++) {
        delete [] m1[i];
    }
    delete [] m1;

    
    for (int i=0; i<r2; i++) {
        delete [] m2[i];
    }
    delete [] m2;

    for (int i=0; i<r1; i++) {
        delete [] res[i];
    }
    delete [] res;

    


}