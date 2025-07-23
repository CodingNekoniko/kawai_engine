#include "KAWAI_Engine.h"
#include <iostream>
#include "MANAGE_Window.h"
#include "MANAGE_Core.h"

//#include "MANAGE_State.h"
//#include "MANAGE_Input.h"
#include "MANAGE_Object.h"
//#include "MANAGE_Render.h"
//#include "MANAGE_Resource.h"

void KAWAI_Engine::Initialize()
{
	MANAGE_Window::GetWindowInstance()->WindowInit("hello", 1280 , 720);
	MANAGE_Object::GetObjectInstance()->ObjectInit();
}

void KAWAI_Engine::Run()
{
}

void KAWAI_Engine::Shutdown()
{
}

void KAWAI_Engine::Input()
{
}

void KAWAI_Engine::Update()
{
}

void KAWAI_Engine::Render()
{
}

