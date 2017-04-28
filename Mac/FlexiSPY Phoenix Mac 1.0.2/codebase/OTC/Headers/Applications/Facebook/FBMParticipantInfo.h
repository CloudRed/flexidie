/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

@class NSString;

@interface FBMParticipantInfo : NSObject {
	NSString* _userId;
	NSString* _email;
	NSString* _name;
	long long _readReceiptTimestamp;
	NSString* _readReceiptMessageId;
}
@property(copy, nonatomic) NSString* readReceiptMessageId;
@property(assign, nonatomic) long long readReceiptTimestamp;
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* email;
@property(copy, nonatomic) NSString* userId;
+(id)participantInfoFromJson:(id)json;
+(id)participantInfoWithUserId:(id)userId;
-(BOOL)isEmailUser;
-(BOOL)isUser;
-(id)getKey;
-(id)JSONString;
-(void)mergeFromParticipantInfo:(id)participantInfo;
-(id)description;
-(void)dealloc;
-(id)init;
@end
