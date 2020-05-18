//
//  AccountUserService.m
//  AccountModule
//
//  Created by sherlock.chan on 2020/4/30.
//  Copyright © 2020 sherlock.chan. All rights reserved.
//

#import "AccountUserService.h"

NSString * const LoginStatusChangeNotificationName = @"LoginStatusChangeNotificationName";

@implementation AccountUserService

+ (AccountUserService *)sharedService {
    static id sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

- (void)setLogin:(BOOL)login {
    _login = login;
    
    [[NSNotificationCenter defaultCenter] postNotificationName:LoginStatusChangeNotificationName object:nil];
}

@end
