#include <iostream> 
#include <cmath>
using namespace std;

template<class type> class Vector;
template <class type>

class Point
{
	private:
		type x, y;
	public:
	    Point(){}
		Point( type u, type v) : x(u), y(v) {}
	friend class Vector<type>;
	
};

template <class type> class Vector
{
    private:
            Point<type> start;
            Point<type> end;
    public:
            Vector() {};
           
            void add(Point<type> a, Point<type> b)
            {
                start=a;
                end=b;
            }
            
            double distance()
            {
	            return sqrt((end.x-start.x)*(end.x-start.x) + (end.y-start.y)*(end.y-start.y));
            }
};
 

        

 
int main() {
	Point<float> x(2.5, 3.5);
	Point<float> y(1.5, 4.5);
	Vector<float> fVector;
	fVector.add(x,y);
	cout<< fVector.distance();
	return 0;
}
