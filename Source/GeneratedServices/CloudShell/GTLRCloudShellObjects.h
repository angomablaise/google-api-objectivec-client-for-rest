// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Shell API (cloudshell/v1)
// Description:
//   Allows users to start, configure, and connect to interactive shell sessions
//   running in the cloud.
// Documentation:
//   https://cloud.google.com/shell/docs/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudShell_Environment;
@class GTLRCloudShell_Operation;
@class GTLRCloudShell_Operation_Metadata;
@class GTLRCloudShell_Operation_Response;
@class GTLRCloudShell_PublicKey;
@class GTLRCloudShell_Status;
@class GTLRCloudShell_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudShell_Environment.size

/**
 *  The boosted VM size.
 *
 *  Value: "BOOSTED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_Size_Boosted;
/**
 *  The default VM size.
 *
 *  Value: "DEFAULT"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_Size_Default;
/**
 *  The VM size is unknown.
 *
 *  Value: "VM_SIZE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_Size_VmSizeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudShell_Environment.state

/**
 *  The environment is not running and can't be connected to. Starting the
 *  environment will transition it to the STARTING state.
 *
 *  Value: "DISABLED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_State_Disabled;
/**
 *  The environment is running and ready to accept connections. It will
 *  automatically transition back to DISABLED after a period of inactivity or
 *  if another environment is started.
 *
 *  Value: "RUNNING"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_State_Running;
/**
 *  The environment is being started but is not yet ready to accept
 *  connections.
 *
 *  Value: "STARTING"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_State_Starting;
/**
 *  The environment's states is unknown.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_Environment_State_StateUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudShell_PublicKey.format

/**
 *  `ecdsa-sha2-nistp256` key format (see RFC5656).
 *
 *  Value: "ECDSA_SHA2_NISTP256"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp256;
/**
 *  `ecdsa-sha2-nistp384` key format (see RFC5656).
 *
 *  Value: "ECDSA_SHA2_NISTP384"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp384;
/**
 *  `ecdsa-sha2-nistp521` key format (see RFC5656).
 *
 *  Value: "ECDSA_SHA2_NISTP521"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp521;
/**
 *  Unknown format. Do not use.
 *
 *  Value: "FORMAT_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_FormatUnspecified;
/**
 *  `ssh-dss` key format (see RFC4253).
 *
 *  Value: "SSH_DSS"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_SshDss;
/**
 *  `ssh-rsa` key format (see RFC4253).
 *
 *  Value: "SSH_RSA"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_PublicKey_Format_SshRsa;

// ----------------------------------------------------------------------------
// GTLRCloudShell_StartEnvironmentMetadata.state

/**
 *  Startup is complete and the user should be able to establish an SSH
 *  connection to their environment.
 *
 *  Value: "FINISHED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_Finished;
/**
 *  The environment is in the process of being started, but no additional
 *  details are available.
 *
 *  Value: "STARTING"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_Starting;
/**
 *  The environment's start state is unknown.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_StateUnspecified;
/**
 *  Startup is waiting for the user's disk to be unarchived. This can happen
 *  when the user returns to Cloud Shell after not having used it for a
 *  while, and suggests that startup will take longer than normal.
 *
 *  Value: "UNARCHIVING_DISK"
 */
GTLR_EXTERN NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_UnarchivingDisk;

/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRCloudShell_CancelOperationRequest : GTLRObject
@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudShell_Empty : GTLRObject
@end


/**
 *  A Cloud Shell environment, which is defined as the combination of a Docker
 *  image specifying what is installed on the environment and a home directory
 *  containing the user's data that will remain across sessions. Each user has a
 *  single environment with the ID "default".
 */
@interface GTLRCloudShell_Environment : GTLRObject

/**
 *  Required. Full path to the Docker image used to run this environment, e.g.
 *  "gcr.io/dev-con/cloud-devshell:latest".
 */
@property(nonatomic, copy, nullable) NSString *dockerImage;

/**
 *  Output only. The environment's identifier, which is always "default".
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Output only. Full name of this resource, in the format
 *  `users/{owner_email}/environments/{environment_id}`. `{owner_email}` is the
 *  email address of the user to whom this environment belongs, and
 *  `{environment_id}` is the identifier of this environment. For example,
 *  `users/someone\@example.com/environments/default`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. Public keys associated with the environment. Clients can
 *  connect to this environment via SSH only if they possess a private key
 *  corresponding to at least one of these public keys. Keys can be added to or
 *  removed from the environment using the CreatePublicKey and DeletePublicKey
 *  methods.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudShell_PublicKey *> *publicKeys;

/**
 *  Indicates the size of the backing VM running the environment. If set to
 *  something other than DEFAULT, it will be reverted to the default VM size
 *  after vm_size_expire_time.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudShell_Environment_Size_Boosted The boosted VM size.
 *        (Value: "BOOSTED")
 *    @arg @c kGTLRCloudShell_Environment_Size_Default The default VM size.
 *        (Value: "DEFAULT")
 *    @arg @c kGTLRCloudShell_Environment_Size_VmSizeUnspecified The VM size is
 *        unknown. (Value: "VM_SIZE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *size;

/**
 *  Output only. Host to which clients can connect to initiate SSH sessions
 *  with the environment.
 */
@property(nonatomic, copy, nullable) NSString *sshHost;

/**
 *  Output only. Port to which clients can connect to initiate SSH sessions
 *  with the environment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *sshPort;

/**
 *  Output only. Username that clients should use when initiating SSH sessions
 *  with the environment.
 */
@property(nonatomic, copy, nullable) NSString *sshUsername;

/**
 *  Output only. Current execution state of this environment.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudShell_Environment_State_Disabled The environment is not
 *        running and can't be connected to. Starting the
 *        environment will transition it to the STARTING state. (Value:
 *        "DISABLED")
 *    @arg @c kGTLRCloudShell_Environment_State_Running The environment is
 *        running and ready to accept connections. It will
 *        automatically transition back to DISABLED after a period of inactivity
 *        or
 *        if another environment is started. (Value: "RUNNING")
 *    @arg @c kGTLRCloudShell_Environment_State_Starting The environment is
 *        being started but is not yet ready to accept
 *        connections. (Value: "STARTING")
 *    @arg @c kGTLRCloudShell_Environment_State_StateUnspecified The
 *        environment's states is unknown. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  Output only. The time when the Environment will expire back to the default
 *  VM size.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *vmSizeExpireTime;

/**
 *  Output only. Host to which clients can connect to initiate HTTPS or WSS
 *  connections with the environment.
 */
@property(nonatomic, copy, nullable) NSString *webHost;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudShell_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudShell_Operation *> *operations;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudShell_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudShell_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRCloudShell_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudShell_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time.
 *  Some services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudShell_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudShell_Operation_Response : GTLRObject
@end


/**
 *  A public SSH key, corresponding to a private SSH key held by the client.
 */
@interface GTLRCloudShell_PublicKey : GTLRObject

/**
 *  Required. Format of this key's content.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp256
 *        `ecdsa-sha2-nistp256` key format (see RFC5656). (Value:
 *        "ECDSA_SHA2_NISTP256")
 *    @arg @c kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp384
 *        `ecdsa-sha2-nistp384` key format (see RFC5656). (Value:
 *        "ECDSA_SHA2_NISTP384")
 *    @arg @c kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp521
 *        `ecdsa-sha2-nistp521` key format (see RFC5656). (Value:
 *        "ECDSA_SHA2_NISTP521")
 *    @arg @c kGTLRCloudShell_PublicKey_Format_FormatUnspecified Unknown format.
 *        Do not use. (Value: "FORMAT_UNSPECIFIED")
 *    @arg @c kGTLRCloudShell_PublicKey_Format_SshDss `ssh-dss` key format (see
 *        RFC4253). (Value: "SSH_DSS")
 *    @arg @c kGTLRCloudShell_PublicKey_Format_SshRsa `ssh-rsa` key format (see
 *        RFC4253). (Value: "SSH_RSA")
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  Required. Content of this key.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *key;

/**
 *  Output only. Full name of this resource, in the format
 *  `users/{owner_email}/environments/{environment_id}/publicKeys/{key_id}`.
 *  `{owner_email}` is the email address of the user to whom the key belongs.
 *  `{environment_id}` is the identifier of the environment to which the key
 *  grants access. `{key_id}` is the unique identifier of the key. For example,
 *  `users/someone\@example.com/environments/default/publicKeys/myKey`.
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Message included in the metadata field of operations returned from
 *  StartEnvironment.
 */
@interface GTLRCloudShell_StartEnvironmentMetadata : GTLRObject

/**
 *  Current state of the environment being started.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudShell_StartEnvironmentMetadata_State_Finished Startup is
 *        complete and the user should be able to establish an SSH
 *        connection to their environment. (Value: "FINISHED")
 *    @arg @c kGTLRCloudShell_StartEnvironmentMetadata_State_Starting The
 *        environment is in the process of being started, but no additional
 *        details are available. (Value: "STARTING")
 *    @arg @c kGTLRCloudShell_StartEnvironmentMetadata_State_StateUnspecified
 *        The environment's start state is unknown. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRCloudShell_StartEnvironmentMetadata_State_UnarchivingDisk
 *        Startup is waiting for the user's disk to be unarchived. This can
 *        happen
 *        when the user returns to Cloud Shell after not having used it for a
 *        while, and suggests that startup will take longer than normal. (Value:
 *        "UNARCHIVING_DISK")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Message included in the response field of operations returned from
 *  StartEnvironment once the
 *  operation is complete.
 */
@interface GTLRCloudShell_StartEnvironmentResponse : GTLRObject

/** Environment that was started. */
@property(nonatomic, strong, nullable) GTLRCloudShell_Environment *environment;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details.
 *  You can find out more about this error model and how to work with it in the
 *  [API Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRCloudShell_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudShell_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudShell_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudShell_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
