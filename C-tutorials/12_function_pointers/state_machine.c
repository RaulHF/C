#include<stdio.h>
#include<time.h>
#include<unistd.h>
/*This structure represent all the sensor readings*/
typedef struct data{
	double p_1;
	double p_2;
	double temp;
}data;

/*This structrue represent all the actuators state*/
typedef struct action{
	double v_1;
	double v_2;
	double v_3;
}action;

/*This si a new type state: this object points a 
function state					*/
typedef void(*state)(data *, action *);

/*These are all the machine states*/
void state_1(data *, action *);
void state_2(data *, action *);
void state_3(data *, action *);
void state_4(data *, action *);
/*This is the helper functions for the actuator*/
void valve_actuation(action *action);

/*This function takes a pointer to a function 
state and a pointer to ad object structure*/
void change_state(state , data *, action *);

int main(){

	clock_t start_t, end_t, deadline_t;
	start_t = clock();

	data data = {0, 0, 0};
	action action = {0, 0, 0};

	change_state(state_1, &data, &action);
	change_state(state_2, &data, &action);
	change_state(state_3, &data, &action);
	for(int indx = 0; indx < 100000000; indx++){
	}
	end_t = clock();	
	printf("%lf\n" , (double)(end_t - start_t)/CLOCKS_PER_SEC);
	return 0;
}

void change_state(state state, data *data, action *action){
	state(data, action);
}

void state_1(data *data, action *action){
	printf("Hello state 1\n");
	valve_actuation(action);
}
void state_2(data *data, action *action){
	printf("Hello state 2\n");
	valve_actuation(action);
}
void state_3(data *data, action *action){
	printf("Hello state 3\n");
	valve_actuation(action);
}
void state_4(data *data, action *action){
	printf("Hello state 4\n");
	valve_actuation(action);
}

void valve_actuation(action *action){

	if(action->v_1 == 0){
		printf("Vale 1 On\n");
	}		
	else{
		printf("Valve 1 Off\n");
	}

	if(action->v_2 == 0){
		printf("Vale 2 On\n");
	}
	else
	{
		printf("Valve 2 Off\n");
	}
	if(action->v_3 == 0){
		printf("Vale 3 On\n");
	}
	else
	{
		printf("Valve 3 Off\n");
	}
}
