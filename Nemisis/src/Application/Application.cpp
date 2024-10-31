#include "Application.h"

namespace Nemisis
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		OnStart();

		while (m_IsRunning)
		{
			NextFrame();
		}

		OnExit();
	}
}