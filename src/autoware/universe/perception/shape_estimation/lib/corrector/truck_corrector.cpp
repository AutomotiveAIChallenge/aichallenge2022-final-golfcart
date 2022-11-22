// Copyright 2018 Autoware Foundation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "shape_estimation/corrector/truck_corrector.hpp"

bool TruckCorrector::correct(
  autoware_auto_perception_msgs::msg::Shape & shape, geometry_msgs::msg::Pose & pose)
{
  if (use_reference_yaw_) {
    return correctVehicleBoundingBoxWithReferenceYaw(params_, shape, pose);
  }
  return correctVehicleBoundingBox(params_, shape, pose);
}
