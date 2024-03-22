#include <iostream>
using namespace std;
class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    
    TestScores(double s1 = 0.0, double s2 = 0.0, double s3 = 0.0) {
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }

    
    void setScore1(double s) {
        score1 = s;
    }

    void setScore2(double s) {
        score2 = s;
    }

    void setScore3(double s) {
        score3 = s;
    }

    
    double getScore1() const {
        return score1;
    }

    double getScore2() const {
        return score2;
    }

    double getScore3() const {
        return score3;
    }

    
    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double score1, score2, score3;

    
     cout << "Enter three test scores: ";
     cin >> score1 >> score2 >> score3;

    
    TestScores testScores(score1, score2, score3);

    
    cout << "Average test score: " << testScores.calculateAverage() << endl;

     
}
