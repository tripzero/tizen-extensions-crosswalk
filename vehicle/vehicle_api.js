// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

var next_async_call_id = 0;
var async_calls = {};

function VehicleInterface(attname)
{
    this.attributeName = attname;
}

VehicleInterface.prototype.get = function (zone)
{
    var msg = {};
    msg["method"] = "get";
    msg["arg1"] = this.attributeName;
    msg["arg2"] = zone;

    return createPromise(msg);
}

function AsyncCall(resolve, reject)
{
    this.resolve = resolve;
    this.reject = reject;
}

function createPromise(msg)
{
    var promise = new Promise(function(resolve, reject)
    {
       async_calls[next_async_call_id]  = new AsyncCall(resolve, reject);
    });

    ++next_async_call_id;
    return promise;
}
