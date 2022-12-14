//https://pl.spoj.com/problems/PP0506A/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Point2D
{
    int x;
    int y;
    string name;
    double distance;
    
    public:
    Point2D(string name, int x, int y)
    {
        this->name = name;
        this->x = x;
        this->y = y;
        distance = distanceToMiddle();
    }
    double distanceToMiddle()
    {
        return sqrt(pow(x,2) + pow(y,2));
    }
    void printPoint()
    {
        cout << name << ' ' << x << ' ' << y << endl;
    }
    double getDistance()
    {
        return distance;
    }
};

int main()
{
    vector<Point2D> points;
    
    int tests;
    cin >> tests;
    
    for(int t = 0; t < tests; t++)
    {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            string name;
            int x, y;
            cin >> name >> x >> y;
            Point2D p(name, x, y);
            points.push_back(p);
        }
        
        for(int i = 0; i < n-1; i++)
        {
            if(points[i].getDistance() > points[i+1].getDistance())
            {
                Point2D tmp = points[i];
                points[i] = points[i+1];
                points[i+1] = tmp;
                i = -1;
            }
        }
        
        for(auto p:points)
            p.printPoint();
        
        points.clear();
    }
}
