//
//  AES.h
//  AES256Testing
//
//  Created by Thỏ on 6/17/16.
//  Copyright © 2016 Thỏ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AES : NSObject

+(NSString*)decrypt:(NSString*)cipherText withKey:(NSString*)key;
+(NSString*)decryptNew:(char*)ciphertext withKey:(char*)key withLength: (int) lenCipher;
@end
