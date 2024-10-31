#pragma once

namespace Nemisis
{
	class Application
	{
	public:
		Application();
		~Application();

		void Run();

		virtual void OnStart() = 0;
		virtual void NextFrame() = 0;
		virtual void OnExit() = 0;

	private:
		bool m_IsRunning = true;
	};

	Application* InstantiateApplication();
}