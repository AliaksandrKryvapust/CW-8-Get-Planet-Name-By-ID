#include<iostream>
#include<string>
#include<vector>
using namespace std;

string get_planet_name(const int id) {
	vector<string> names = { "Mercury" , "Venus" , "Earth" , "Mars" , "Jupiter" , "Saturn", "Uranus", "Neptune" };
	return names.at(id-1);
}
int main() {
	int id = 3;
	get_planet_name(id);
	return 0;
}