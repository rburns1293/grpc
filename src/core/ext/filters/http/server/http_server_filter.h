/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRPC_CORE_EXT_FILTERS_HTTP_SERVER_HTTP_SERVER_FILTER_H
#define GRPC_CORE_EXT_FILTERS_HTTP_SERVER_HTTP_SERVER_FILTER_H

#include <grpc/support/port_platform.h>

#include "src/core/lib/channel/channel_stack.h"

/* Processes metadata on the server side for HTTP2 transports */
extern const grpc_channel_filter grpc_http_server_filter;

namespace grpc_core {
// Temporary code that allows servers to accept PUT requests. DO NOT USE WITHOUT
// PERMISSION.
void InternalOnlyDoNotUseUnlessYouHavePermissionFromGrpcTeamAllowBrokenPutRequests();
}  // namespace grpc_core

#endif /* GRPC_CORE_EXT_FILTERS_HTTP_SERVER_HTTP_SERVER_FILTER_H */
