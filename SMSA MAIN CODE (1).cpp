#include <iostream>
using namespace std;

int main() {
    int choice, totalScore = 0;

    for(int q = 1; q <= 9; q++) {
        cout << "\n-----------------------------------\n";
        cout << "Question " << q << ":\n";

        switch(q) {
            case 1:
                cout << "What are you currently pursuing?\n";
                cout << "1. High school\n2. Graduation\n3. Post-graduation\n4. PhD\n5. Other\n";
                cin >> choice;
                if(choice == 1) totalScore += 3;
                else if(choice == 2) totalScore += 4;
                else if(choice == 3) totalScore += 4;
                else if(choice == 4) totalScore += 5;
                else totalScore += 3;
                break;

            case 2:
                cout << "How many hours of academic training per week?\n";
                cout << "1. Less than 20\n2. 20-40\n3. 40-60\n4. More than 60\n";
                cin >> choice;
                if(choice == 1) totalScore += 2;
                else if(choice == 2) totalScore += 3;
                else if(choice == 3) totalScore += 4;
                else totalScore += 5;
                break;

            case 3:
                cout << "How frequently are exams held?\n";
                cout << "1. Every week\n2. Once a month\n3. 1-2 times in a quarter\n4. Half-yearly\n5. Annually\n";
                cin >> choice;
                if(choice == 1) totalScore += 5;
                else if(choice == 2) totalScore += 4;
                else if(choice == 3) totalScore += 3;
                else if(choice == 4) totalScore += 2;
                else totalScore += 1;
                break;

            case 4:
                cout << "Do you get family support?\n";
                cout << "1. Yes\n2. No\n";
                cin >> choice;
                if(choice == 1) totalScore += 1;
                else totalScore += 5;
                break;

            case 5:
                cout << "Does your classmate bully you?\n";
                cout << "1. Yes\n2. No\n";
                cin >> choice;
                if(choice == 1) totalScore += 5;
                else totalScore += 1;
                break;

            case 6:
                cout << "How difficult is it to find a job after education?\n";
                cout << "1. Very difficult\n2. Difficult\n3. Moderately easy\n4. Very easy\n";
                cin >> choice;
                if(choice == 1) totalScore += 5;
                else if(choice == 2) totalScore += 4;
                else if(choice == 3) totalScore += 2;
                else totalScore += 1;
                break;

            case 7:
                cout << "What kind of assessment marking is followed?\n";
                cout << "1. Absolute percentage\n2. Percentile\n3. CGPA\n4. Other\n";
                cin >> choice;
                if(choice == 1) totalScore += 3;
                else if(choice == 2) totalScore += 4;
                else if(choice == 3) totalScore += 3;
                else totalScore += 3;
                break;

            case 8:
                cout << "Is your family financially sound?\n";
                cout << "1. Yes\n2. No\n";
                cin >> choice;
                if(choice == 1) totalScore += 1;
                else totalScore += 5;
                break;

            case 9:
                cout << "Relationship issues?\n";
                cout << "1. Yes\n2. No\n3. Not searching\n";
                cin >> choice;
                if(choice == 1) totalScore += 4;
                else if(choice == 2) totalScore += 2;
                else totalScore += 1;
                break;
        }
    }

    cout << "\n===================================\n";
    cout << "Total Stress Score: " << totalScore << endl;

    // Final Stress Level
    if(totalScore <= 15)
        cout << "Stress Level: LOW \n";
    else if(totalScore <= 30)
        cout << "Stress Level: MODERATE \n";
    else
        cout << "Stress Level: HIGH \n";

    cout << "===================================\n";

    return 0;
}
