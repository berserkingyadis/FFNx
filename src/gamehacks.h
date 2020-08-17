/****************************************************************************/
//    Copyright (C) 2009 Aali132                                            //
//    Copyright (C) 2018 quantumpencil                                      //
//    Copyright (C) 2018 Maxime Bacoux                                      //
//    Copyright (C) 2020 Julian Xhokaxhiu                                   //
//    Copyright (C) 2020 myst6re                                            //
//    Copyright (C) 2020 Chris Rizzitello                                   //
//    Copyright (C) 2020 John Pritchard                                     //
//                                                                          //
//    This file is part of FFNx                                             //
//                                                                          //
//    FFNx is free software: you can redistribute it and/or modify          //
//    it under the terms of the GNU General Public License as published by  //
//    the Free Software Foundation, either version 3 of the License         //
//                                                                          //
//    FFNx is distributed in the hope that it will be useful,               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of        //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
//    GNU General Public License for more details.                          //
/****************************************************************************/

#pragma once

#include "log.h"

class GameHacks
{
private:
	double speedhack_current_speed = 1.0;
	bool processKeyboardInput(UINT msg, WPARAM wParam, LPARAM lParam);
	void processGamepadInput(UINT msg, WPARAM wParam, LPARAM lParam);

public:
	// GLOBALS
	void init();
	void process(UINT msg, WPARAM wParam, LPARAM lParam);

	//SPEEDHACK
	void resetSpeedhack();
	void increaseSpeedhack();
	void decreaseSpeedhack();
	double speedhack_getSpeed();
};

extern GameHacks gamehacks;
