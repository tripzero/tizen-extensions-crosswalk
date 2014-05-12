// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "vehicle/vehicle_instance.h"

#include <string>

#include "common/picojson.h"

VehicleInstance::VehicleInstance()
{

}

void VehicleInstance::HandleMessage(const char* message)
{
	picojson::value v;

	std::string err;
	picojson::parse(v, message, message + strlen(message), &err);
	if(!err.empty())
	{
		return;
	}
}

void VehicleInstance::HandleSyncMessage(const char* message)
{

}
