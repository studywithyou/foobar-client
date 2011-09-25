//
//  ShowCodeViewModel.h
//  FooBar
//
//  Created by 泉 雄介 on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APCString.h"
#import "FBConfig.h"

#define K_MODE_TAKE 0
#define K_MODE_GIVE 1
#define K_MODE_REDEEM 2

@interface ShowCodeViewModel : NSObject {
    NSTimer* _timer;
}

@property (retain,nonatomic) NSNumber* mode;
@property (retain,nonatomic) NSString* tokenInput;
@property (retain,nonatomic) NSString* tokenDisplay;
@property (retain,nonatomic) NSString* instruction;
@property (retain,nonatomic) NSNumber* isTokenInputValid;
@property (retain,nonatomic) NSDate* expirationDate;
@property (retain,nonatomic) FBConfig* config;

- (void) stopTimer;
- (void) toggleInputTokenChar:(char)chr;
- (void) checkExpiration:(NSTimer*)timer;

@end
