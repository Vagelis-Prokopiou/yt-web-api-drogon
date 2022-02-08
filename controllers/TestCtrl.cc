#include "TestCtrl.h"

void
TestCtrl::asyncHandleHttpRequest(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) {
    Json::Value ret;
    ret["id"] = 1;
    ret["Age"] = 25;
    ret["First_Name"] = "Michael";
    ret["Last_Name"] = "Jordan";
    ret["Framework"] = "Drogon";
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}