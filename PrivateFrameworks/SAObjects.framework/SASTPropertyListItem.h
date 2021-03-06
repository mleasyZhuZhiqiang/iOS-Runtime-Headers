/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SAUIDecoratedText;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem> {
}

@property(copy,readonly) NSString * debugDescription;
@property(retain) SAUIDecoratedText * decoratedTitle;
@property(copy) NSArray * decoratedValues;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property(copy) NSArray * values;

+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)decoratedTitle;
- (id)decoratedValues;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDecoratedTitle:(id)arg1;
- (void)setDecoratedValues:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValues:(id)arg1;
- (id)title;
- (id)values;

@end
