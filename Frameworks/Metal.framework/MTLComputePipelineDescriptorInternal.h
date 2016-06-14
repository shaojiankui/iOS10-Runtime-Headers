/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    struct MTLComputePipelineDescriptorPrivate { id x1; bool x2; } * _private;
}

- (const struct MTLComputePipelineDescriptorPrivate { id x1; bool x2; }*)_descriptorPrivate;
- (id)computeFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)reset;
- (void)setComputeFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg1;
- (bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;
- (void)validateWithDevice:(id)arg1;

@end