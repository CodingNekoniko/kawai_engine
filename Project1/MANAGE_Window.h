#pragma once
<<<<<<< Updated upstream:Project1/MANAGE_Window.h
=======
#include <iostream>
>>>>>>> Stashed changes:Project/KAWAI_Engine/MANAGE_Window.h

class KAWAI_Engine;


class MANAGE_Window
{
private:

	MANAGE_Window() {};
	static MANAGE_Window* window_instance;

public:

	MANAGE_Window(const MANAGE_Window& other) = delete;
	void operator=(const MANAGE_Window&) = delete;

	static MANAGE_Window* GetWindowInstance()
	{

		if (window_instance == nullptr)
		{
			window_instance = new MANAGE_Window();
		}

		return window_instance;

	}



};

