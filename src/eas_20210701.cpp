// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eas_20210701.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Eas20210701;

Alibabacloud_Eas20210701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "pai-eas.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "pai-eas.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou", "pai-eas.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "pai-eas.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "pai-eas.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "pai-eas.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "pai-eas.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "pai-eas.ap-southeast-5.aliyuncs.com"},
    {"us-east-1", "pai-eas.us-east-1.aliyuncs.com"},
    {"us-west-1", "pai-eas.us-west-1.aliyuncs.com"},
    {"eu-central-1", "pai-eas.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "pai-eas.ap-south-1.aliyuncs.com"},
    {"cn-shanghai-finance-1", "pai-eas.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1", "pai-eas.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-chengdu", "pai-eas.cn-chengdu.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eas20210701::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::createBenchmarkTask(shared_ptr<CreateBenchmarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createBenchmarkTaskWithOptions(request, headers, runtime);
}

CreateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::createBenchmarkTaskWithOptions(shared_ptr<CreateBenchmarkTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBenchmarkTaskResponse(callApi(params, req, runtime));
}

CreateResourceResponse Alibabacloud_Eas20210701::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceWithOptions(request, headers, runtime);
}

CreateResourceResponse Alibabacloud_Eas20210701::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewal)) {
    body->insert(pair<string, bool>("AutoRenewal", *request->autoRenewal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecsInstanceCount)) {
    body->insert(pair<string, long>("EcsInstanceCount", *request->ecsInstanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceType)) {
    body->insert(pair<string, string>("EcsInstanceType", *request->ecsInstanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceResponse(callApi(params, req, runtime));
}

CreateResourceInstancesResponse Alibabacloud_Eas20210701::Client::createResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

CreateResourceInstancesResponse Alibabacloud_Eas20210701::Client::createResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ResourceId,
                                                                                                     shared_ptr<CreateResourceInstancesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewal)) {
    body->insert(pair<string, bool>("AutoRenewal", *request->autoRenewal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecsInstanceCount)) {
    body->insert(pair<string, long>("EcsInstanceCount", *request->ecsInstanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceType)) {
    body->insert(pair<string, string>("EcsInstanceType", *request->ecsInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceInstancesResponse(callApi(params, req, runtime));
}

CreateResourceLogResponse Alibabacloud_Eas20210701::Client::createResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceLogWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

CreateResourceLogResponse Alibabacloud_Eas20210701::Client::createResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> ResourceId,
                                                                                         shared_ptr<CreateResourceLogRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    body->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/log"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceLogResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_Eas20210701::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_Eas20210701::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::createServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceAutoScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::createServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<CreateServiceAutoScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->max)) {
    body->insert(pair<string, long>("Max", *request->max));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->min)) {
    body->insert(pair<string, long>("Min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceAutoScalerRequestStrategies>(request->strategies)) {
    body->insert(pair<string, CreateServiceAutoScalerRequestStrategies>("Strategies", *request->strategies));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/autoscaler"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceAutoScalerResponse(callApi(params, req, runtime));
}

CreateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::createServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceCronScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::createServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<CreateServiceCronScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeDates)) {
    body->insert(pair<string, vector<string>>("ExcludeDates", *request->excludeDates));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceCronScalerRequestScaleJobs>>(request->scaleJobs)) {
    body->insert(pair<string, vector<CreateServiceCronScalerRequestScaleJobs>>("ScaleJobs", *request->scaleJobs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/cronscaler"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceCronScalerResponse(callApi(params, req, runtime));
}

CreateServiceMirrorResponse Alibabacloud_Eas20210701::Client::createServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceMirrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateServiceMirrorResponse Alibabacloud_Eas20210701::Client::createServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<CreateServiceMirrorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ratio)) {
    body->insert(pair<string, long>("Ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    body->insert(pair<string, vector<string>>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/mirror"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceMirrorResponse(callApi(params, req, runtime));
}

CreateStressResponse Alibabacloud_Eas20210701::Client::createStress(shared_ptr<CreateStressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createStressWithOptions(request, headers, runtime);
}

CreateStressResponse Alibabacloud_Eas20210701::Client::createStressWithOptions(shared_ptr<CreateStressRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStressResponse(callApi(params, req, runtime));
}

DeleteBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::deleteBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

DeleteBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::deleteBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> TaskName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBenchmarkTaskResponse(callApi(params, req, runtime));
}

DeleteResourceResponse Alibabacloud_Eas20210701::Client::deleteResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteResourceResponse Alibabacloud_Eas20210701::Client::deleteResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ResourceId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceResponse(callApi(params, req, runtime));
}

DeleteResourceDLinkResponse Alibabacloud_Eas20210701::Client::deleteResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteResourceDLinkResponse Alibabacloud_Eas20210701::Client::deleteResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/dlink"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceDLinkResponse(callApi(params, req, runtime));
}

DeleteResourceInstancesResponse Alibabacloud_Eas20210701::Client::deleteResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<DeleteResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

DeleteResourceInstancesResponse Alibabacloud_Eas20210701::Client::deleteResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ResourceId,
                                                                                                     shared_ptr<DeleteResourceInstancesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allFailed)) {
    query->insert(pair<string, bool>("AllFailed", *request->allFailed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceList)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/instances"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceInstancesResponse(callApi(params, req, runtime));
}

DeleteResourceLogResponse Alibabacloud_Eas20210701::Client::deleteResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteResourceLogResponse Alibabacloud_Eas20210701::Client::deleteResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> ResourceId,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/log"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceLogResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_Eas20210701::Client::deleteService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceResponse Alibabacloud_Eas20210701::Client::deleteServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> ServiceName,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/autoscaler"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceAutoScalerResponse(callApi(params, req, runtime));
}

DeleteServiceCronScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceCronScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/cronscaler"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceCronScalerResponse(callApi(params, req, runtime));
}

DeleteServiceInstancesResponse Alibabacloud_Eas20210701::Client::deleteServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DeleteServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DeleteServiceInstancesResponse Alibabacloud_Eas20210701::Client::deleteServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<string> ServiceName,
                                                                                                   shared_ptr<DeleteServiceInstancesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceList)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/instances"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceInstancesResponse(callApi(params, req, runtime));
}

DeleteServiceMirrorResponse Alibabacloud_Eas20210701::Client::deleteServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceMirrorResponse Alibabacloud_Eas20210701::Client::deleteServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/mirror"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceMirrorResponse(callApi(params, req, runtime));
}

DeleteStressResponse Alibabacloud_Eas20210701::Client::deleteStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteStressWithOptions(ClusterId, StressName, headers, runtime);
}

DeleteStressResponse Alibabacloud_Eas20210701::Client::deleteStressWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> StressName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStressResponse(callApi(params, req, runtime));
}

DescribeBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

DescribeBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> TaskName,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBenchmarkTaskResponse(callApi(params, req, runtime));
}

DescribeBenchmarkTaskReportResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskReport(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeBenchmarkTaskReportWithOptions(ClusterId, TaskName, headers, runtime);
}

DescribeBenchmarkTaskReportResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskReportWithOptions(shared_ptr<string> ClusterId,
                                                                                                             shared_ptr<string> TaskName,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBenchmarkTaskReport"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName) + string("/report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBenchmarkTaskReportResponse(callApi(params, req, runtime));
}

DescribeResourceResponse Alibabacloud_Eas20210701::Client::describeResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeResourceResponse Alibabacloud_Eas20210701::Client::describeResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                       shared_ptr<string> ResourceId,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceResponse(callApi(params, req, runtime));
}

DescribeResourceDLinkResponse Alibabacloud_Eas20210701::Client::describeResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeResourceDLinkResponse Alibabacloud_Eas20210701::Client::describeResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ResourceId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/dlink"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceDLinkResponse(callApi(params, req, runtime));
}

DescribeResourceLogResponse Alibabacloud_Eas20210701::Client::describeResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeResourceLogResponse Alibabacloud_Eas20210701::Client::describeResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceLogResponse(callApi(params, req, runtime));
}

DescribeServiceResponse Alibabacloud_Eas20210701::Client::describeService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceResponse Alibabacloud_Eas20210701::Client::describeServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<string> ServiceName,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceResponse(callApi(params, req, runtime));
}

DescribeServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::describeServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::describeServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                         shared_ptr<string> ServiceName,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/autoscaler"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceAutoScalerResponse(callApi(params, req, runtime));
}

DescribeServiceCronScalerResponse Alibabacloud_Eas20210701::Client::describeServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceCronScalerResponse Alibabacloud_Eas20210701::Client::describeServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                         shared_ptr<string> ServiceName,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/cronscaler"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceCronScalerResponse(callApi(params, req, runtime));
}

DescribeServiceLogResponse Alibabacloud_Eas20210701::Client::describeServiceLog(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceLogWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DescribeServiceLogResponse Alibabacloud_Eas20210701::Client::describeServiceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> ServiceName,
                                                                                           shared_ptr<DescribeServiceLogRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceLogResponse(callApi(params, req, runtime));
}

DescribeServiceMirrorResponse Alibabacloud_Eas20210701::Client::describeServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceMirrorResponse Alibabacloud_Eas20210701::Client::describeServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ServiceName,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/mirror"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeServiceMirrorResponse(callApi(params, req, runtime));
}

DescribeStressResponse Alibabacloud_Eas20210701::Client::describeStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeStressWithOptions(ClusterId, StressName, headers, runtime);
}

DescribeStressResponse Alibabacloud_Eas20210701::Client::describeStressWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> StressName,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStressResponse(callApi(params, req, runtime));
}

ListBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::listBenchmarkTask() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listBenchmarkTaskWithOptions(headers, runtime);
}

ListBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::listBenchmarkTaskWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListBenchmarkTaskResponse(callApi(params, req, runtime));
}

ListResourceInstanceWorkerResponse Alibabacloud_Eas20210701::Client::listResourceInstanceWorker(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> ResourceId,
                                                                                                shared_ptr<string> InstanceName,
                                                                                                shared_ptr<ListResourceInstanceWorkerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceInstanceWorkerWithOptions(ClusterId, ResourceId, InstanceName, request, headers, runtime);
}

ListResourceInstanceWorkerResponse Alibabacloud_Eas20210701::Client::listResourceInstanceWorkerWithOptions(shared_ptr<string> ClusterId,
                                                                                                           shared_ptr<string> ResourceId,
                                                                                                           shared_ptr<string> InstanceName,
                                                                                                           shared_ptr<ListResourceInstanceWorkerRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  InstanceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInstanceWorker"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/instance/") + string(*InstanceName) + string("/workers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceInstanceWorkerResponse(callApi(params, req, runtime));
}

ListResourceInstancesResponse Alibabacloud_Eas20210701::Client::listResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

ListResourceInstancesResponse Alibabacloud_Eas20210701::Client::listResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ResourceId,
                                                                                                 shared_ptr<ListResourceInstancesRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceInstancesResponse(callApi(params, req, runtime));
}

ListResourceServicesResponse Alibabacloud_Eas20210701::Client::listResourceServices(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceServicesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

ListResourceServicesResponse Alibabacloud_Eas20210701::Client::listResourceServicesWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ResourceId,
                                                                                               shared_ptr<ListResourceServicesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceServices"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceServicesResponse(callApi(params, req, runtime));
}

ListResourcesResponse Alibabacloud_Eas20210701::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourcesWithOptions(request, headers, runtime);
}

ListResourcesResponse Alibabacloud_Eas20210701::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourcesResponse(callApi(params, req, runtime));
}

ListServiceInstancesResponse Alibabacloud_Eas20210701::Client::listServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ListServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

ListServiceInstancesResponse Alibabacloud_Eas20210701::Client::listServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ServiceName,
                                                                                               shared_ptr<ListServiceInstancesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstancesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_Eas20210701::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListServicesResponse Alibabacloud_Eas20210701::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListStressesResponse Alibabacloud_Eas20210701::Client::listStresses() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStressesWithOptions(headers, runtime);
}

ListStressesResponse Alibabacloud_Eas20210701::Client::listStressesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStresses"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStressesResponse(callApi(params, req, runtime));
}

ReleaseServiceResponse Alibabacloud_Eas20210701::Client::releaseService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ReleaseServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

ReleaseServiceResponse Alibabacloud_Eas20210701::Client::releaseServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ServiceName,
                                                                                   shared_ptr<ReleaseServiceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->weight)) {
    body->insert(pair<string, long>("Weight", *request->weight));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/release"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseServiceResponse(callApi(params, req, runtime));
}

ReportStressResponse Alibabacloud_Eas20210701::Client::reportStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reportStressWithOptions(ClusterId, StressName, headers, runtime);
}

ReportStressResponse Alibabacloud_Eas20210701::Client::reportStressWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> StressName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName) + string("/report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportStressResponse(callApi(params, req, runtime));
}

StartBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::startBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

StartBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::startBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> TaskName,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartBenchmarkTaskResponse(callApi(params, req, runtime));
}

StartServiceResponse Alibabacloud_Eas20210701::Client::startService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

StartServiceResponse Alibabacloud_Eas20210701::Client::startServiceWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> ServiceName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartServiceResponse(callApi(params, req, runtime));
}

StartStressResponse Alibabacloud_Eas20210701::Client::startStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startStressWithOptions(ClusterId, StressName, headers, runtime);
}

StartStressResponse Alibabacloud_Eas20210701::Client::startStressWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> StressName,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartStressResponse(callApi(params, req, runtime));
}

StopBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::stopBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

StopBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::stopBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> TaskName,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopBenchmarkTaskResponse(callApi(params, req, runtime));
}

StopServiceResponse Alibabacloud_Eas20210701::Client::stopService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

StopServiceResponse Alibabacloud_Eas20210701::Client::stopServiceWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> ServiceName,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopServiceResponse(callApi(params, req, runtime));
}

StopStressResponse Alibabacloud_Eas20210701::Client::stopStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopStressWithOptions(ClusterId, StressName, headers, runtime);
}

StopStressResponse Alibabacloud_Eas20210701::Client::stopStressWithOptions(shared_ptr<string> ClusterId,
                                                                           shared_ptr<string> StressName,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopStressResponse(callApi(params, req, runtime));
}

UpdateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::updateBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName, shared_ptr<UpdateBenchmarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateBenchmarkTaskWithOptions(ClusterId, TaskName, request, headers, runtime);
}

UpdateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::updateBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> TaskName,
                                                                                             shared_ptr<UpdateBenchmarkTaskRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  TaskName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(*ClusterId) + string("/") + string(*TaskName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBenchmarkTaskResponse(callApi(params, req, runtime));
}

UpdateResourceResponse Alibabacloud_Eas20210701::Client::updateResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

UpdateResourceResponse Alibabacloud_Eas20210701::Client::updateResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ResourceId,
                                                                                   shared_ptr<UpdateResourceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    body->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceResponse(callApi(params, req, runtime));
}

UpdateResourceDLinkResponse Alibabacloud_Eas20210701::Client::updateResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceDLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceDLinkWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

UpdateResourceDLinkResponse Alibabacloud_Eas20210701::Client::updateResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<UpdateResourceDLinkRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ResourceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCIDRs)) {
    body->insert(pair<string, string>("DestinationCIDRs", *request->destinationCIDRs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIdList)) {
    body->insert(pair<string, vector<string>>("VSwitchIdList", *request->vSwitchIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(*ClusterId) + string("/") + string(*ResourceId) + string("/dlink"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceDLinkResponse(callApi(params, req, runtime));
}

UpdateServiceResponse Alibabacloud_Eas20210701::Client::updateService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_Eas20210701::Client::updateServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> ServiceName,
                                                                                 shared_ptr<UpdateServiceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceResponse(callApi(params, req, runtime));
}

UpdateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::updateServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceAutoScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::updateServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<UpdateServiceAutoScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->max)) {
    body->insert(pair<string, long>("Max", *request->max));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->min)) {
    body->insert(pair<string, long>("Min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceAutoScalerRequestStrategies>(request->strategies)) {
    body->insert(pair<string, UpdateServiceAutoScalerRequestStrategies>("Strategies", *request->strategies));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/autoscaler"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceAutoScalerResponse(callApi(params, req, runtime));
}

UpdateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::updateServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceCronScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::updateServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<UpdateServiceCronScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeDates)) {
    body->insert(pair<string, vector<string>>("ExcludeDates", *request->excludeDates));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceCronScalerRequestScaleJobs>>(request->scaleJobs)) {
    body->insert(pair<string, vector<UpdateServiceCronScalerRequestScaleJobs>>("ScaleJobs", *request->scaleJobs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/cronscaler"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceCronScalerResponse(callApi(params, req, runtime));
}

UpdateServiceMirrorResponse Alibabacloud_Eas20210701::Client::updateServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceMirrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceMirrorResponse Alibabacloud_Eas20210701::Client::updateServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<UpdateServiceMirrorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ratio)) {
    body->insert(pair<string, long>("Ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    body->insert(pair<string, vector<string>>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/mirror"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceMirrorResponse(callApi(params, req, runtime));
}

UpdateServiceVersionResponse Alibabacloud_Eas20210701::Client::updateServiceVersion(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceVersionWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceVersionResponse Alibabacloud_Eas20210701::Client::updateServiceVersionWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ServiceName,
                                                                                               shared_ptr<UpdateServiceVersionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  ServiceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    body->insert(pair<string, long>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceVersion"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(*ClusterId) + string("/") + string(*ServiceName) + string("/version"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceVersionResponse(callApi(params, req, runtime));
}

UpdateStressResponse Alibabacloud_Eas20210701::Client::updateStress(shared_ptr<string> ClusterId, shared_ptr<string> StressName, shared_ptr<UpdateStressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateStressWithOptions(ClusterId, StressName, request, headers, runtime);
}

UpdateStressResponse Alibabacloud_Eas20210701::Client::updateStressWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> StressName,
                                                                               shared_ptr<UpdateStressRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  StressName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(StressName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStress"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/stress/") + string(*ClusterId) + string("/") + string(*StressName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStressResponse(callApi(params, req, runtime));
}

