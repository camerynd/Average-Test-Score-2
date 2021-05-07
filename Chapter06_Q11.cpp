#include<iostream>
using namespace std;
//function prototypes
void getScore(double& score);
void calcAverage(double one, double two, double three, double four, double five, double minimum);
int findLowest(double one, double two, double three, double four, double five);
//driver program
int main()
{
    double testScore, scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, minScore;//variables to store user input

    cout << "This program takes five test scores, drops the lowest one, and averages the other four.";
    cout << endl << endl;
//calling function getScore and assigning value to a new variable each time it is called
    getScore(testScore);
    scoreOne = testScore;
    getScore(testScore);
    scoreTwo = testScore;
    getScore(testScore);
    scoreThree = testScore;
    getScore(testScore);
    scoreFour = testScore;
    getScore(testScore);
    scoreFive = testScore;
    cout << endl;

    calcAverage(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, minScore);//function to drop lowest value and calculate average

    cout << endl << endl;

    return 0;
}

void getScore(double& score)//function to get score from user and give input to driver program
{
    cout << "Enter test score. ";
    cin >> score;
    if (score < 1 || score > 100)//only accept the input if the score is between 1 and 100
    {   
        cout << "Please enter a score between 1 and 100. ";
        cin >> score;
    }

}
//function to drop lowest score and average others
void calcAverage(double one, double two, double three, double four, double five, double minimum)
{
    minimum = findLowest(one, two, three, four, five);//calling function to find the lowest score and using return value
    int sum = (one + two + three + four + five) - minimum;//drop lowest score
    int average = sum / 4;//average top 4
    cout << "The average of your four highest scores is " << average << "%";
}

int findLowest(double one, double two, double three, double four, double five)//function to find lowest test score and return to calcAverage
{
    double min;
    if (one < two && one < three && one < four && one < five)
        min = one;
    if (two < one && two < three && two < four && two < five)
        min = two;
    if (three < one && three < two && three < four && three < five)
        min = three;
    if (four < one && four < two && four < three && four < five)
        min = four;
    if (five < one && five < two && five < three && five < four)
        min = five;
    return min;
}