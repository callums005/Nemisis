#include "Nemisis.h"




namespace Game
{
	class Game : public Nemisis::Application
	{
	public:
		Game()
		{

		}

		~Game()
		{

		}

		void OnStart()
		{
			Nemisis::DateTime dt = Nemisis::DateTime::Now();

			std::cout << dt.ToString() << std::endl;

			Nemisis::Debug::Print("Hello world");
			Nemisis::Debug::Printd("Hello world");
			Nemisis::Debug::Printw("Hello world");
			Nemisis::Debug::Printe("Hello world");
		}

		void NextFrame()
		{

		}

		void OnExit()
		{

		}
	};
}

Nemisis::Application* Nemisis::InstantiateApplication()
{
	return new Game::Game();
}