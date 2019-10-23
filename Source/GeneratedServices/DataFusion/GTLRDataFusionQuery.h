// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Data Fusion API (datafusion/v1beta1)
// Description:
//   Cloud Data Fusion is a fully-managed, cloud native, enterprise data
//   integration service for
//   quickly building and managing data pipelines. It provides a graphical
//   interface to increase
//   time efficiency and reduce complexity, and allows business users,
//   developers, and data
//   scientists to easily and reliably build scalable data integration solutions
//   to cleanse,
//   prepare, blend, transfer and transform data without having to wrestle with
//   infrastructure.
// Documentation:
//   https://cloud.google.com/data-fusion/docs

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRDataFusion_CancelOperationRequest;
@class GTLRDataFusion_Instance;
@class GTLRDataFusion_RestartInstanceRequest;
@class GTLRDataFusion_SetIamPolicyRequest;
@class GTLRDataFusion_TestIamPermissionsRequest;
@class GTLRDataFusion_UpgradeInstanceRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Data Fusion query classes.
 */
@interface GTLRDataFusionQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: datafusion.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsGet : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a new Data Fusion instance in the specified project and location.
 *
 *  Method: datafusion.projects.locations.instances.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesCreate : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesCreateWithObject:parent:]

/** The name of the instance to create. */
@property(nonatomic, copy, nullable) NSString *instanceId;

/**
 *  The instance's project and location in the format
 *  projects/{project}/locations/{location}.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Creates a new Data Fusion instance in the specified project and location.
 *
 *  @param object The @c GTLRDataFusion_Instance to include in the query.
 *  @param parent The instance's project and location in the format
 *    projects/{project}/locations/{location}.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesCreate
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_Instance *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a single Date Fusion instance.
 *
 *  Method: datafusion.projects.locations.instances.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesDelete : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesDeleteWithname:]

/**
 *  The instance resource name in the format
 *  projects/{project}/locations/{location}/instances/{instance}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Deletes a single Date Fusion instance.
 *
 *  @param name The instance resource name in the format
 *    projects/{project}/locations/{location}/instances/{instance}
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets details of a single Data Fusion instance.
 *
 *  Method: datafusion.projects.locations.instances.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesGet : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesGetWithname:]

/**
 *  The instance resource name in the format
 *  projects/{project}/locations/{location}/instances/{instance}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Instance.
 *
 *  Gets details of a single Data Fusion instance.
 *
 *  @param name The instance resource name in the format
 *    projects/{project}/locations/{location}/instances/{instance}.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  Method: datafusion.projects.locations.instances.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesGetIamPolicy : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesGetIamPolicyWithresource:]

/**
 *  Optional. The policy format version to be returned.
 *  Valid values are 0, 1, and 3. Requests specifying an invalid value will be
 *  rejected.
 *  Requests for policies with any conditional bindings must specify version 3.
 *  Policies without any conditional bindings may specify any valid value or
 *  leave the field unset.
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRDataFusion_Policy.
 *
 *  Gets the access control policy for a resource.
 *  Returns an empty policy if the resource exists and does not have a policy
 *  set.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  Lists Data Fusion instances in the specified project and location.
 *
 *  Method: datafusion.projects.locations.instances.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesList : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesListWithparent:]

/** List filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Sort results. Supported values are "name", "name desc", or "" (unsorted).
 */
@property(nonatomic, copy, nullable) NSString *orderBy;

/** The maximum number of items to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value to use if there are additional
 *  results to retrieve for this list request.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  The project and location for which to retrieve instance information
 *  in the format projects/{project}/locations/{location}. If the location is
 *  specified as '-' (wildcard), then all regions available to the project
 *  are queried, and the results are aggregated.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRDataFusion_ListInstancesResponse.
 *
 *  Lists Data Fusion instances in the specified project and location.
 *
 *  @param parent The project and location for which to retrieve instance
 *    information
 *    in the format projects/{project}/locations/{location}. If the location is
 *    specified as '-' (wildcard), then all regions available to the project
 *    are queried, and the results are aggregated.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a single Data Fusion instance.
 *
 *  Method: datafusion.projects.locations.instances.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesPatch : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesPatchWithObject:name:]

/**
 *  Output only. The name of this instance is in the form of
 *  projects/{project}/locations/{location}/instances/{instance}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Field mask is used to specify the fields that the update will overwrite
 *  in an instance resource. The fields specified in the update_mask are
 *  relative to the resource, not the full request.
 *  A field will be overwritten if it is in the mask.
 *  If the user does not provide a mask, all the supported fields (labels and
 *  options currently) will be overwritten.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Updates a single Data Fusion instance.
 *
 *  @param object The @c GTLRDataFusion_Instance to include in the query.
 *  @param name Output only. The name of this instance is in the form of
 *    projects/{project}/locations/{location}/instances/{instance}.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesPatch
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_Instance *)object
                           name:(NSString *)name;

@end

/**
 *  Restart a single Data Fusion instance.
 *  At the end of an operation instance is fully restarted.
 *
 *  Method: datafusion.projects.locations.instances.restart
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesRestart : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesRestartWithObject:name:]

/**
 *  Name of the Data Fusion instance which need to be restarted in the form of
 *  projects/{project}/locations/{location}/instances/{instance}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Restart a single Data Fusion instance.
 *  At the end of an operation instance is fully restarted.
 *
 *  @param object The @c GTLRDataFusion_RestartInstanceRequest to include in the
 *    query.
 *  @param name Name of the Data Fusion instance which need to be restarted in
 *    the form of
 *    projects/{project}/locations/{location}/instances/{instance}
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesRestart
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_RestartInstanceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *  Can return Public Errors: NOT_FOUND, INVALID_ARGUMENT and PERMISSION_DENIED
 *
 *  Method: datafusion.projects.locations.instances.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesSetIamPolicy : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesSetIamPolicyWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy is being specified.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRDataFusion_Policy.
 *
 *  Sets the access control policy on the specified resource. Replaces any
 *  existing policy.
 *  Can return Public Errors: NOT_FOUND, INVALID_ARGUMENT and PERMISSION_DENIED
 *
 *  @param object The @c GTLRDataFusion_SetIamPolicyRequest to include in the
 *    query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  Method: datafusion.projects.locations.instances.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesTestIamPermissions : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesTestIamPermissionsWithObject:resource:]

/**
 *  REQUIRED: The resource for which the policy detail is being requested.
 *  See the operation documentation for the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRDataFusion_TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified resource.
 *  If the resource does not exist, this will return an empty set of
 *  permissions, not a NOT_FOUND error.
 *  Note: This operation is designed to be used for building permission-aware
 *  UIs and command-line tools, not for authorization checking. This operation
 *  may "fail open" without warning.
 *
 *  @param object The @c GTLRDataFusion_TestIamPermissionsRequest to include in
 *    the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested.
 *    See the operation documentation for the appropriate value for this field.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Upgrade a single Data Fusion instance.
 *  At the end of an operation instance is fully upgraded.
 *
 *  Method: datafusion.projects.locations.instances.upgrade
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsInstancesUpgrade : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsInstancesUpgradeWithObject:name:]

/**
 *  Name of the Data Fusion instance which need to be upgraded in the form of
 *  projects/{project}/locations/{location}/instances/{instance}
 *  Instance will be upgraded with the latest stable version of the Data
 *  Fusion.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Upgrade a single Data Fusion instance.
 *  At the end of an operation instance is fully upgraded.
 *
 *  @param object The @c GTLRDataFusion_UpgradeInstanceRequest to include in the
 *    query.
 *  @param name Name of the Data Fusion instance which need to be upgraded in
 *    the form of
 *    projects/{project}/locations/{location}/instances/{instance}
 *    Instance will be upgraded with the latest stable version of the Data
 *    Fusion.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsInstancesUpgrade
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_UpgradeInstanceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: datafusion.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsList : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRDataFusion_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: datafusion.projects.locations.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsOperationsCancel : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsOperationsCancelWithObject:name:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param object The @c GTLRDataFusion_CancelOperationRequest to include in the
 *    query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsOperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRDataFusion_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: datafusion.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsOperationsDelete : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: datafusion.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsOperationsGet : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRDataFusion_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: datafusion.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeDataFusionCloudPlatform
 */
@interface GTLRDataFusionQuery_ProjectsLocationsOperationsList : GTLRDataFusionQuery
// Previous library name was
//   +[GTLQueryDataFusion queryForProjectsLocationsOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRDataFusion_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRDataFusionQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
