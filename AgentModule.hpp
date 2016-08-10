
using namespace std;

class Agent{
	public:
	int i;
	int j;
	//	Measures Agent's health
	double health;
	//	When high enough, decreases health
	double hunger;
	//	When high enough, decreases health
	double thirst;
	//	Needed to heed the "Voice"
	double faith;
	//	When high enough, decreases health fast
	double cold;
	//	Increases thirst faster. Adds random perturbations to policy.
	double heat;
	//	When high enough, decreases faith fast
	double fear;
	
	string IMAGE = " 🚹 ";
	Agent(int i, int j);
	~Agent();
	
	//	Updates the agents position to the coordinates specified by row ii, column jj
	void movePosition(int ii, int jj);
	//	Here goes the logic for updating the agent's stats based on the action just taken
	void updateStatus();
};
