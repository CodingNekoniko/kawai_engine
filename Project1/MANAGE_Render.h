#pragma once

class KAWAI_Engine;

class MANAGE_Render
{
	private:

		MANAGE_Render() {};
		static MANAGE_Render* render_instance;

	public:

		MANAGE_Render(const MANAGE_Render& other) = delete;
		void operator=(const MANAGE_Render&) = delete;

		static MANAGE_Render* GetRenderInstance()
		{

			if (render_instance == nullptr)
			{
				render_instance = new MANAGE_Render();
			}

			return render_instance;

		}
};

