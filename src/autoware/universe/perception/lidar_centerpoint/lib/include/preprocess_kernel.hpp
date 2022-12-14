// Copyright 2022 TIER IV, Inc.
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

#ifndef PREPROCESS_KERNEL_HPP_
#define PREPROCESS_KERNEL_HPP_

#include <cuda.h>
#include <cuda_runtime_api.h>

namespace centerpoint
{
cudaError_t generateFeatures_launch(
  const float * voxel_features, const float * voxel_num_points, const int * coords,
  const std::size_t num_voxels, float * features, cudaStream_t stream);

}  // namespace centerpoint

#endif  // PREPROCESS_KERNEL_HPP_
