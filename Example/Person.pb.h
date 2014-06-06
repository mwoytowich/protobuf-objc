// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

// @@protoc_insertion_point(imports)

@class Person;
@class PersonBuilder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface PersonRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface Person : PBGeneratedMessage {
@private
  PBAppendableArray * myfieldArray;
}
@property (readonly, strong) PBArray * myfield;
- (unsigned long)myfieldAtIndex:(NSUInteger)index;

+ (Person*) defaultInstance;
- (Person*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PersonBuilder*) builder;
+ (PersonBuilder*) builder;
+ (PersonBuilder*) builderWithPrototype:(Person*) prototype;
- (PersonBuilder*) toBuilder;

+ (Person*) parseFromData:(NSData*) data;
+ (Person*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromInputStream:(NSInputStream*) input;
+ (Person*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PersonBuilder : PBGeneratedMessage_Builder {
@private
  Person* result;
}

- (Person*) defaultInstance;

- (PersonBuilder*) clear;
- (PersonBuilder*) clone;

- (Person*) build;
- (Person*) buildPartial;

- (PersonBuilder*) mergeFrom:(Person*) other;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (PBAppendableArray *)myfield;
- (unsigned long)myfieldAtIndex:(NSUInteger)index;
- (PersonBuilder *)addMyfield:(unsigned long)value;
- (PersonBuilder *)setMyfieldArray:(NSArray *)array;
- (PersonBuilder *)setMyfieldValues:(const unsigned long *)values count:(NSUInteger)count;
- (PersonBuilder *)clearMyfield;
@end


// @@protoc_insertion_point(global_scope)
