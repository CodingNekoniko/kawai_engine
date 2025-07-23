#pragma once

class KAWAI_Engine;

class MANAGE_Input
{
private:

	MANAGE_Input() {};
	static MANAGE_Input* input_instance;

public:

	MANAGE_Input(const MANAGE_Input& other) = delete;
	void operator=(const MANAGE_Input&) = delete;

	static MANAGE_Input* GetInputInstance()
	{

		if (input_instance == nullptr)
		{
			input_instance = new MANAGE_Input();
		}

		return input_instance;

	}

};

