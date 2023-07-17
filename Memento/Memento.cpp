#include "Memento.h"

Memento::Memento(Properties NewProperties):CurrentProperties(NewProperties) {}

Properties Memento::GetSaved() {
	return CurrentProperties;
}