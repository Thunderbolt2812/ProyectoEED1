#ifndef Task_HPP
#define Task_HPP
#include <string>
#include <iostream>
using namespace std;
class Task {
	public:
		Task(string);
		bool equals(Task*);
		string toString();
	private:
		string tarea;
};
#endif