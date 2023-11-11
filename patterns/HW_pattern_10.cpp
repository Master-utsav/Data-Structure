#include<iostream>
#include<string>
#include<limits.h>
#include<cmath>

using namespace std;

void drawFibonacciSpiral(int n) {
    int fibo1 = 0;
    int fibo2 = 1;
    int x = 0, y = 0;
    
    for (int i = 1; i <= n; i++) {
        cout << "(" << x << ", " << y << ")" << std::endl;
        
        // Calculate the next Fibonacci number
        int fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;
        
        // Calculate the coordinates for the next point
        double angle = i * 90.0; // Adjust the rotation angle
        double radius = sqrt(i); // Adjust the scaling factor
        x = round(radius * cos(angle));
        y = round(radius * sin(angle));
    }
}

int main(){
    
    int n;
    cout << "Enter the number of points to draw: ";
    cin >> n;
    
    drawFibonacciSpiral(n);
    return 0;
}