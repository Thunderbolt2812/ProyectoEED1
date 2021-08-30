#include "Task.hpp"
Task::Task(string tarea){
	this->tarea=tarea;
}
bool Task::equals(Task* obj){
	return true;
}
string Task::getTask(){
	return tarea;
}