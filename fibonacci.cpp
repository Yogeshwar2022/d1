#include <iostream>
using namespace std;

int fibRec(int n, int &steps) {
    steps++;
    if (n <= 1)
        return n;
    return fibRec(n - 1, steps) + fibRec(n - 2, steps);
}

int fibIter(int n, int &steps) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        steps++;
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n ;
    cout<<"enter the number"<<endl;
    cin>>n;
    int stepsRec = 0, stepsIter = 0;

    
    cout << "Fibonacci Series using Recursion: " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibRec(i, stepsRec) << endl;
    }
    cout << endl;
    cout << "Number of steps taken for the recursive method: " << stepsRec << endl;

  
    cout << "\nFibonacci Series using Iteration: " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibIter(i, stepsIter) <<endl;
    }
    cout << endl;
    cout << "Number of steps for the iterative method: " << stepsIter << endl;

    return 0;
}
