#include <iostream>
using namespace std;

class AIModel
{
    private:
    string name;
    int version;
    int score;

    public:
    AIModel(string n, int m, int s)
    {
        name = n;
        version = m;
        score = s;

    }

    AIModel() {};

    AIModel operator+(const AIModel& obj)
    {
        AIModel a1;
        a1.score = score + obj.score;
        return a1;
    }

    bool operator==(const AIModel& obj)
    {
        return score == obj.score;
    }

    void boost()
    {
       int boosted = score >> 1;
        if(score < 0 || score > 1024) throw out_of_range("Score out of range";)
    }

    int nerf()
    {
        int nerf = score << 1;
        return nerf;
    }

    friend class AIAdmin;
    friend void compareFunction(AIModel& obj, AIModel& obj1) {};

};

class AIAdmin
{
    public:
    void resetScores(AIModel& obj)
    {
       obj.score = ~obj.score;
    }
};

void compareFunction(AIModel& obj, AIModel& obj1)
{
    if(obj1.score > obj.score)
    {
        cout << obj1.score << " is greater";
    }

    else if(obj1.score == obj.score)
    {
        cout << "Both are equal";
    }

    else {cout << obj.score << " is greater";}
}

int main()
{
    try
    {
        AIModel arr [3] =
        {
            AIModel("VisionX", 1.0, 200),
            AIModel("AudioBot", 2.3, 300),
            AIModel("TextGen", 1.5, 400)
        };

        AIModel a4;
        arr[0].boost();

        arr[1].nerf();

        compareFunction(arr[0], arr[1]);
        
        a4 = arr[0] + arr[1];
        cout << a4;

    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    
}

