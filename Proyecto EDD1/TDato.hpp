#ifndef TDato_HPP
#define TDato_HPP
#include <string>
#include <iostream>
using namespace std;
class TDato {
	public:
		TDato(string);
		void setTipo(string);
		bool equals(TDato*);
		string toString();
	private:
		string tipo;
};
#endif