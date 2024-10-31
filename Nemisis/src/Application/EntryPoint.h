#pragma once

#include "Application.h"

extern Nemisis::Application* Nemisis::InstantiateApplication();

int main()
{
	Nemisis::Application* app = Nemisis::InstantiateApplication();
	app->Run();
	delete app;

	return 0;
}