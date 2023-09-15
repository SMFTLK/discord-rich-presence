#include "app.h"

VMPHandler::VMPActivity::VMPActivity()
{
	discord::Core::Create(this->clientID, this->flags, &this->core);
	this->activity = new discord::Activity();

	activity->SetState(state);
	activity->SetDetails(details);
	activity->SetInstance(true);

	(*core).ActivityManager().UpdateActivity(*activity, [](discord::Result result) {});
}

VMPHandler::VMPActivity::~VMPActivity()
{
	delete core;
	delete activity;
}

void VMPHandler::VMPActivity::Update()
{
	(*core).RunCallbacks();
}
