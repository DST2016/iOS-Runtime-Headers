/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {
    NSNumber *inputHighlightAmount;
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputShadowAmount;
}

@property(retain) NSNumber * inputHighlightAmount;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputShadowAmount;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_kernelS;
- (id)_kernelSH;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v1;
- (id)_kernelSnoB;
- (id)_outputProperties;
- (id)inputHighlightAmount;
- (id)inputImage;
- (id)inputRadius;
- (id)inputShadowAmount;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputHighlightAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowAmount:(id)arg1;

@end