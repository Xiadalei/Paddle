// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
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
#pragma once

namespace pir {
/**
 * IMPORTANT!!!
 * all those defining strings can't be changed, otherwise the deserialization
 * will failed. define all keys in serialized files to ensure accuracy for
 * deserialization make sure all the key mutually exclusive
 */

// all IR structure's identifier (region, block, op, attr, type value etc)
// which can be string , int64_t etc.
#define ID "id"

// program's key:
#define REGIONS "regions"

// region's key:
// which is json array with block json object(ID and BLOCKARGS and BLOCKOPS)
#define BLOCKS "blocks"

// block's key:
// which is json array with value json object
#define BLOCKARGS "args"
// which is json array with operation json object
#define BLOCKOPS "ops"

// operation's key:
// which is json array with opoperand json object(ID)
#define OPOPERANDS "I"

// which is json array with value json object(ID and TYPE_TYPE)
#define OPRESULTS "O"

// which is json array with json object(NAME and ATTR_TYPE)
#define ATTRS "A"
#define OPRESULTS_ATTRS "OA"

// value's key:
//  value's type which should be pir::Type's json object(ID or ID and DATA).
#define TYPE_TYPE "TT"

// attr's name which is operation's feature.
#define NAME "N"

// attr's value which is pir::Attribute's json object(ID and DATA).
#define ATTR_TYPE "AT"

// type/attr's contents which is json::array.
#define DATA "D"

}  // namespace pir
