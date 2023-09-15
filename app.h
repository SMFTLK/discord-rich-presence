#pragma once

#include <iostream>
#include "discord/activity_manager.h"
#include "discord/core.h"


namespace VMPHandler
{
	class VMPActivity
	{
	public:
		VMPActivity();
		~VMPActivity();
		void Update();

	private:
		const	discord::ClientId	clientID = <your client id>;
				discord::Core*		core{};
				discord::Activity*	activity{};

		const uint8_t flags	= static_cast<uint8_t>(discord::CreateFlags::Default);

		const char* state = "Your text";
		const char* details = "Your text";
	};
}
