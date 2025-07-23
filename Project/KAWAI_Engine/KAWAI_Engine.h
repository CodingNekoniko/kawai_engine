#pragma once

class KAWAI_Engine
{
	public:

		KAWAI_Engine() = default;
		~KAWAI_Engine() = default;

		void Initialize();
		void Run();
		void Shutdown();

	private:
		void Input();
		void Update();
		void Render();

		bool is_running = false;
};
