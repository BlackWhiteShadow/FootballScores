/* FootballScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/

#include <iostream>
#include <vector>

using namespace std;

int count(int n)
{
    // table[i] will store count
    // of solutions for value i.
    int i;

    vector<int> scoreVec;
    // Initialize all table
    // values as 0
    for (int j = 0; j < n + 1; j++)
        scoreVec.push_back(0);

    scoreVec[0] = 1;

    for (i = 2; i <= n; i++)
        scoreVec[i] += scoreVec[i - 2];

    for (i = 3; i <= n; i++)
        scoreVec[i] += scoreVec[i - 3];

    for (i = 6; i <= n; i++)
        scoreVec[i] += scoreVec[i - 6];


    for (i = 7; i <= n; i++)
        scoreVec[i] += scoreVec[i - 7];

    for (i = 8; i <= n; i++)
        scoreVec[i] += scoreVec[i - 8];

    return scoreVec[n];
}

int main()
{
    int n;
    cout << "Enter score: ";
    cin >> n;
    cout << "Number of counts: " << count(n);
}

