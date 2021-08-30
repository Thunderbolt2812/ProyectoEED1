#ifndef Task_HPP
#define Task_HPP
#include <string>
#include <iostream>
using namespace std;
class Task {
	public:
		string tarea;
		Task(string);
		bool equals(Task*);
		string getTask();
};
#endif