/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColorReference, EDResources, NSString;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
    boolmBold;
    boolmBoldOverridden;
    boolmDoNotModify;
    boolmHeightOverridden;
    boolmItalic;
    boolmItalicOverridden;
    boolmOutline;
    boolmShadow;
    boolmStrike;
    boolmStrikeOverridden;
    boolmUnderlineOverridden;
    boolmWeightOverridden;
    int mCharSet;
    EDColorReference *mColorReference;
    int mFamily;
    double mHeightInTwips;
    NSString *mName;
    EDResources *mResources;
    int mScript;
    int mUnderline;
    unsigned int mWeight;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)fontWithResources:(id)arg1;

- (int)charSet;
- (id)color;
- (id)colorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)family;
- (double)height;
- (id)initWithResources:(id)arg1;
- (bool)isBold;
- (bool)isBoldOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFont:(id)arg1;
- (bool)isHeightOverridden;
- (bool)isItalic;
- (bool)isItalicOverridden;
- (bool)isOutline;
- (bool)isShadow;
- (bool)isStrike;
- (bool)isStrikeOverridden;
- (bool)isUnderlineOverridden;
- (bool)isWeightOverridden;
- (id)name;
- (int)script;
- (void)setBold:(bool)arg1;
- (void)setCharSet:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorReference:(id)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFamily:(int)arg1;
- (void)setHeight:(double)arg1;
- (void)setItalic:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setScript:(int)arg1;
- (void)setShadow:(bool)arg1;
- (void)setStrike:(bool)arg1;
- (void)setUnderline:(int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (int)underline;
- (unsigned int)weight;

@end
