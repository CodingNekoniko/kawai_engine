#pragma once

class KAWAI_Engine;

class MANAGE_State
{
private:

	MANAGE_State() {};
	static MANAGE_State* state_instance;

public:

	MANAGE_State(const MANAGE_State& other) = delete;
	void operator=(const MANAGE_State&) = delete;

	static MANAGE_State* GetStateInstance()
	{

		if (state_instance == nullptr)
		{
			state_instance = new MANAGE_State();
		}

		return state_instance;

	}
};

