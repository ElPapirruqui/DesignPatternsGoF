#include "WorldContext.h"

WorldContext::WorldContext(){}

WorldContext::~WorldContext() {
	delete World;

}

WorldContext* WorldContext::GetInstance() {
	if (World == nullptr) {
		World = new WorldContext();
	}
	return World;
}