//
//  FBQueryTransactions.h
//  foobar
//
//  Created by 泉 雄介 on 10/25/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FBCommandBase.h"

@interface FBQueryTransactions : FBCommandBase
{
}

@property (nonatomic, retain) NSNumber* shopKey;
@property (nonatomic, retain) NSString* userToken;
@property (nonatomic, retain) NSNumber* count;
@property (nonatomic, retain) NSNumber* page;

@end
