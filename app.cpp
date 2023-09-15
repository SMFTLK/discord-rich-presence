#include "app.h"

VMPHandler::VMPActivity::VMPActivity()
{
	discord::Core::Create(this->clientID, this->flags, &this->core);
	this->activity = new discord::Activity();
}

VMPHandler::VMPActivity::~VMPActivity()
{
	delete core;
	delete activity;
}

void VMPHandler::VMPActivity::Update()
{
	activity->SetState("In play mode");
	activity->SetDetails("Playing huynya");
	activity->SetInstance(true);

	(*core).ActivityManager().UpdateActivity(*activity, [](discord::Result result) {});
	(*core).RunCallbacks();
}
