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




/**
 * Subscription
 *
 * \ingroup SNS
 */

@interface SNSSubscription:NSObject

{
    NSString *subscriptionArn;
    NSString *owner;
    NSString *protocol;
    NSString *endpoint;
    NSString *topicArn;
}


/**
 * The subscription's ARN.
 */
@property (nonatomic, retain) NSString *subscriptionArn;

/**
 * The subscription's owner.
 */
@property (nonatomic, retain) NSString *owner;

/**
 * The subscription's protocol.
 */
@property (nonatomic, retain) NSString *protocol;

/**
 * The subscription's endpoint (format depends on the protocol).
 */
@property (nonatomic, retain) NSString *endpoint;

/**
 * The ARN of the subscription's topic.
 */
@property (nonatomic, retain) NSString *topicArn;


/**
 * Default constructor for a new Subscription object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end
