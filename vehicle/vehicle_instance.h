// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef VEHICLE_INSTANCE_H_
#define VEHICLE_INSTANCE_H_

#include "common/extension.h"

class VehicleManager;

namespace picojson {
class value;
}

class VehicleInstance : public common::Instance {
 public:
  VehicleInstance();
  virtual ~VehicleInstance();

 private:
  // common::Instance implementation.
  virtual void HandleMessage(const char* msg);
  virtual void HandleSyncMessage(const char* msg);

 private:
  VehicleManager* media_server_manager_;
};

#endif  // VEHICLE_INSTANCE_H_
