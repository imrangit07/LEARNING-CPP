#include <iostream>
using namespace std;

int main()
{
    float marks,hindi, english, chemistry, math, physics;

    cout << "Hindi ke marks enter karein (0-100): ";
    cin >> hindi;
    cout << "English ke marks enter karein (0-100): ";
    cin >> english;
    cout << "Science ke marks enter karein (0-100): ";
    cin >> chemistry;
    cout << "Math ke marks enter karein (0-100): ";
    cin >> math;
    cout << "Physics ke marks enter karein (0-100): ";
    cin >> physics;

    marks = (((hindi+english+chemistry+math+physics)/500)*100);

    cout << "\n------ Mark Sheet ------\n";

    if (hindi < 20 || english < 20 || chemistry < 20 || math < 20 || physics < 20)
    {
        cout << "--------fall--------";
    }
    else if ((hindi >= 21 && hindi <= 40) || (english >= 21 && english <= 40) || (chemistry >= 21 && chemistry <= 40) || (math >= 21 && math <= 40) || (physics >= 21 && physics <= 40))
    {
        cout << "--------Supply--------";
    }
    else if (marks>=41 && marks<=50)
    {
        cout<< "C Grade - marks is: "<<marks;
    }
    else if (marks>=51 && marks<=60)
    {
        cout<< "C+ Grade - marks is: "<<marks;
    }
    else if (marks>=61 && marks<=70)
    {
        cout<< "B Grade - marks is: "<<marks;
    }
    else if (marks>=71 && marks<=80)
    {
        cout<< "B+ Grade - marks is: "<<marks;
    }
    else if (marks>=81 && marks<=90)
    {
        cout<< "A Grade - marks is: "<<marks;
    }
    else if (marks>=91 && marks<=100)
    {
        cout<< "A+ Grade - marks is: "<<marks;
    }
    else
    {
        cout<< "Invalid Marks";
    }

    return 0;
}
