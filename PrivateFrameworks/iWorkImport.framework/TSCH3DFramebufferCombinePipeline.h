/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCH3DPipelineLinkable>, TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferCombinePipeline : TSCH3DFramebufferCopyPipeline {
    TSCH3DGLFramebuffer *mInput1;
    <TSCH3DPipelineLinkable> *mSource1;
    unsigned int mTextureUnit1;
}

@property(retain) <TSCH3DPipelineLinkable> * source0;
@property(retain) <TSCH3DPipelineLinkable> * source1;

- (void)dealloc;
- (void)loadSource;
- (BOOL)run;
- (void)setSource0:(id)arg1;
- (void)setSource1:(id)arg1;
- (id)source0;
- (id)source1;
- (void)updateShaderEffectsStates;

@end
