#include "AgentModule.hpp"
using namespace std;
Agent::Agent(int ii, int jj){
	i = ii;
	j = jj;
	health = 100.0;
	hunger = 0.0;
	thirst = 0.0;
	faith = 50.0;
	cold = 0.0;
	heat = 0.0;
	fear = 25.0;
}
Agent::~Agent(){
}
void Agent::movePosition(int ii, int jj){
	i = ii;
	j = jj;
}
void Agent::updateStatus(){
}
