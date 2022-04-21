// You are given an idle body in space and the forces that affect it. The body can be considered as a material point with coordinates (0; 0; 0). We need only to check if the sum of all vectors is equal to 0. Write a program that determines whether a body is idle or is moving by the given vectors of forces.

// Input
// The first line contains a positive integer n (1 ≤ n ≤ 100), then follow n lines containing three integers each: the xi coordinate, the yi coordinate and the zi coordinate of the force vector, applied to the body ( - 100 ≤ xi, yi, zi ≤ 100).

// Output
// Print the word "YES" if the body is in equilibrium, or the word "NO" if it is not.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x1, y1, z1;
    vector<int> V_X;
    vector<int> V_Y;
    vector<int> V_Z;
    int vecX = 0;
    int vecY = 0;
    int vecZ = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x1;
        V_X.push_back(x1);
        cin >> y1;
        V_Y.push_back(y1);
        cin >> z1;
        V_Z.push_back(z1);
    }
    for (int i = 0; i < V_X.size(); i++)
    {
        // cout << V_X[i] << " " << V_Y[i] << " " << V_Z[i] << endl;
        vecX += V_X[i];
        vecY += V_Y[i];
        vecZ += V_Z[i];
    }

    if (vecX == 0 && vecY == 0 && vecZ == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}