// Autogenerated from Pigeon (v10.1.2), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN


/// The codec used by DemographicsApi.
NSObject<FlutterMessageCodec> *DemographicsApiGetCodec(void);

@protocol DemographicsApi
- (void)addDemographicFieldFieldId:(NSString *)fieldId value:(NSString *)value completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getDemographicFieldFieldId:(NSString *)fieldId completion:(void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)addSimpleTypeDemographicFieldFieldId:(NSString *)fieldId value:(NSString *)value language:(NSString *)language completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSimpleTypeDemographicFieldFieldId:(NSString *)fieldId language:(NSString *)language completion:(void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)setDateFieldFieldId:(NSString *)fieldId subType:(NSString *)subType day:(NSString *)day month:(NSString *)month year:(NSString *)year completion:(void (^)(FlutterError *_Nullable))completion;
- (void)removeDemographicFieldFieldId:(NSString *)fieldId completion:(void (^)(FlutterError *_Nullable))completion;
- (void)setConsentFieldConsentData:(NSString *)consentData completion:(void (^)(FlutterError *_Nullable))completion;
@end

extern void DemographicsApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<DemographicsApi> *_Nullable api);

NS_ASSUME_NONNULL_END
