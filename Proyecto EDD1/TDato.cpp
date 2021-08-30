#include "TDato.hpp"
TDato::TDato(string tipo){
	this->tipo=tipo;
}
void TDato::setTipo(string tipos){
	tipo=tipos;
}
bool TDato::equals(TDato* obj){
	return true;
}
//MyType myObject = ... // myObject is initialized
//
//std::ostringstream myObjectStream; // a stream is built
//myObjectStream << myObject; // the stream is filled
//
//std::string mySerializedObject = myObjectStream.str(); // we extract the contents of the stream