/*
There is a corridor in a Jail which is N units long. Given an array A of size N. The ith index of this array is 0 if the light at ith position is faulty otherwise it is 1.

All the lights are of specific power B which if is placed at position X, it can light the corridor from [ X-B+1, X+B-1].

Initially all lights are off.

Return the minimum number of lights to be turned ON to light the whole corridor or -1 if the whole corridor cannot be lighted.*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minLightsToLightCorridor(vector<int> &A, int B) {
    int n = A.size();
    int lights = 0;
    int i = 0;

    while (i < n) {
        int nextLight = -1;
        
        for (int j = max(0, i - B + 1); j < min(n, i + B); ++j) {
            if (A[j] == 1) {
                nextLight = j;
            }
        }
        
        if (nextLight == -1) {
            return -1;
        }
        
        ++lights;
        
        i = nextLight + B;
    }
    
    return lights;
}

int main() {
    int N, B;
    cin >> N >> B;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = minLightsToLightCorridor(A, B);
    cout << result << endl;

    return 0;
}
