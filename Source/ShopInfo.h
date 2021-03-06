//
//  ShopInfo.h
//  foobar
//
//  Created by 泉 雄介 on 10/27/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "APCDataModel.h"


@interface ShopInfo : APCDataModel {
@private
}
@property (nonatomic, retain) NSString * redeemToken;
@property (nonatomic, retain) NSNumber * points;
@property (nonatomic, retain) NSDate * redeemTokenExpiration;
@property (nonatomic, retain) NSString * sectionTitle;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * imageUrl;
@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSDate * lastVisit;
@property (nonatomic, retain) NSDate * firstVisit;
@property (nonatomic, retain) NSString * tel;
@property (nonatomic, retain) NSString * name;

@end
