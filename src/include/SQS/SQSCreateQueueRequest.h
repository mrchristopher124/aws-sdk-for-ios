/*
 * Copyright 2010-2011 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "../AmazonServiceRequestConfig.h"



/**
 * Create Queue Request
 *
 * \ingroup SQS
 */

@interface SQSCreateQueueRequest:AmazonServiceRequestConfig

{
    NSString *queueName;
    NSNumber *defaultVisibilityTimeout;
}


/**
 * The name to use for the created queue.
 */
@property (nonatomic, retain) NSString *queueName;

/**
 * The visibility timeout (in seconds) to use for the created queue.
 */
@property (nonatomic, retain) NSNumber *defaultVisibilityTimeout;


/**
 * Default constructor for a new CreateQueueRequest object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Constructs a new CreateQueueRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theQueueName The name to use for the created queue.
 */
-(id)initWithQueueName:(NSString *)theQueueName;

/**
 * Constructs a new CreateQueueRequest object.
 * Callers should use properties to initialize any additional object members.
 *
 * @param theQueueName The name to use for the created queue.
 * @param theDefaultVisibilityTimeout The visibility timeout (in seconds)
 * to use for the created queue.
 */
-(id)initWithQueueName:(NSString *)theQueueName andDefaultVisibilityTimeout:(NSNumber *)theDefaultVisibilityTimeout;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
