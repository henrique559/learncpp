#include <cmath>
#include <iostream>

namespace azr
{
    class Point2d
    {
        private:
            double m_x {};
            double m_y {};

        public:
            explicit Point2d(const double& x=0.0, const double& y=0.0)
                : m_x { x }, m_y { y }
                { }; 

        double X () const { return m_x; }
        double Y () const { return m_y; }

        void print()
        {
            std::cout << "Point2d(" << X() << ", " << Y() << ")\n";
        }

        double distanceTo(const Point2d& second )
        {
            return std::sqrt((X() - second.X()) * (X() - second.X()) + (Y() - second.Y()) * (Y() - second.Y()));
        }
    };
}

int main()
{
    azr::Point2d first {};
    azr::Point2d second {3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
}
