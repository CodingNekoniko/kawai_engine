#pragma once

class KAWAI_Engine;



class MANAGE_Resource
{
	private:

	MANAGE_Resource() {};
	static MANAGE_Resource* resourse_instance;

	public:

		MANAGE_Resource(const MANAGE_Resource& other) = delete;
		void operator=(const MANAGE_Resource&) = delete;

		static MANAGE_Resource* GetResourceInstance()
		{

			if (resourse_instance == nullptr)
			{
				resourse_instance = new MANAGE_Resource();
			}

			return resourse_instance;
			
		}




};

