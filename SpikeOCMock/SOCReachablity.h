//
//  SOCReachablity.h
//  SpikeOCMock
//
//  Created by Gao Song on 3/29/16.
//  Copyright © 2016 Gao Song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SOCReachablity : NSObject
-(BOOL)isServerAvailableWithAddress:(NSString *)address;
@end
