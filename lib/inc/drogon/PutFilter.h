//
// Copyright 2018, An Tao.  All rights reserved.
//
// Use of this source code is governed by a MIT license
// that can be found in the License file.
#pragma once

#include <drogon/HttpFilter.h>

namespace drogon
{
    class PutFilter:public HttpFilter<PutFilter>
    {
    public:
        PutFilter(){}
        virtual std::shared_ptr<HttpResponse> doFilter(const HttpRequest& req) override ;
    };
}