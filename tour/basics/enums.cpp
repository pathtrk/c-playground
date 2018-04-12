#include <iostream>

using namespace std;


enum class Color { red, green, blue };
enum class TrafficLight { green, yellow, red };


// prefix increment: ++
TrafficLight& operator++(TrafficLight& t)
{
	switch(t) {
		case TrafficLight::green:
			return t = TrafficLight::yellow;
		case TrafficLight::yellow:
			return t = TrafficLight::red;
		case TrafficLight::red:
			return t = TrafficLight::green;
	}
}



int main()
{
	Color col = Color::red;
	TrafficLight light = TrafficLight::red;
	TrafficLight next = light;

	cout << "enumerating the traffic light ..." << endl;

	++next;
	cout << static_cast<underlying_type<TrafficLight>::type>(next) << endl;

	++next;
	cout << static_cast<underlying_type<TrafficLight>::type>(next) << endl;

}

