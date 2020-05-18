//
//  AccountUserService.h
//  AccountModule
//
//  Created by sherlock.chan on 2020/4/30.
//  Copyright © 2020 sherlock.chan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const LoginStatusChangeNotificationName;

@interface AccountUserService : NSObject

+ (AccountUserService *)sharedService;

@property (nonatomic, assign, getter=isLogin, setter=setLogin:) BOOL login;

@end

NS_ASSUME_NONNULL_END
