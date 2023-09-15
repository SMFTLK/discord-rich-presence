#include "app.h"

int main()
{
	VMPHandler::VMPActivity* activity = new VMPHandler::VMPActivity();
	while (true)
	{
		activity->Update();
	}
	delete activity;
}