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

#import "EC2CreateVolumeRequestMarshaller.h"

@implementation EC2CreateVolumeRequestMarshaller

+(AmazonServiceRequest *)createRequest:(EC2CreateVolumeRequest *)createVolumeRequest
{
    AmazonServiceRequest *request = [[EC2Request alloc] init];

    [request setParameterValue:@"CreateVolume"           forKey:@"Action"];
    [request setParameterValue:@"2011-01-01"   forKey:@"Version"];

    [request setDelegate:[createVolumeRequest delegate]];
    [request setCredentials:[createVolumeRequest credentials]];
    [request setEndpoint:[createVolumeRequest requestEndpoint]];

    if (createVolumeRequest != nil) {
        if (createVolumeRequest.size != nil) {
            [request setParameterValue:[NSString stringWithFormat:@"%@", createVolumeRequest.size] forKey:[NSString stringWithFormat:@"%@", @"Size"]];
        }
    }
    if (createVolumeRequest != nil) {
        if (createVolumeRequest.snapshotId != nil) {
            [request setParameterValue:[NSString stringWithFormat:@"%@", createVolumeRequest.snapshotId] forKey:[NSString stringWithFormat:@"%@", @"SnapshotId"]];
        }
    }
    if (createVolumeRequest != nil) {
        if (createVolumeRequest.availabilityZone != nil) {
            [request setParameterValue:[NSString stringWithFormat:@"%@", createVolumeRequest.availabilityZone] forKey:[NSString stringWithFormat:@"%@", @"AvailabilityZone"]];
        }
    }


    return [request autorelease];
}

@end

