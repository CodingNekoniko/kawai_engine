#pragma once

class KAWAI_Engine;


class MANAGE_Object
{
	private:

		MANAGE_Object() {};
		static MANAGE_Object* object_instance;

	public:

		MANAGE_Object(const MANAGE_Object& other) = delete;
		void operator=(const MANAGE_Object&) = delete;

		static MANAGE_Object* GetObjectInstance()
		{

			if (object_instance == nullptr)
			{
				object_instance = new MANAGE_Object();
			}

			return object_instance;

		}
};

