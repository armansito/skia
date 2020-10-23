

/**************************************************************************************************
 *** This file was autogenerated from GrRecursion.fp; do not modify.
 **************************************************************************************************/
#ifndef GrRecursion_DEFINED
#define GrRecursion_DEFINED

#include "include/core/SkM44.h"
#include "include/core/SkTypes.h"


#include "src/gpu/GrFragmentProcessor.h"

class GrRecursion : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make() {
        return std::unique_ptr<GrFragmentProcessor>(new GrRecursion());
    }
    GrRecursion(const GrRecursion& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "Recursion"; }
    bool usesExplicitReturn() const override;
private:
    GrRecursion()
    : INHERITED(kGrRecursion_ClassID, kNone_OptimizationFlags) {
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
#if GR_TEST_UTILS
    SkString onDumpInfo() const override;
#endif
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    using INHERITED = GrFragmentProcessor;
};
#endif
