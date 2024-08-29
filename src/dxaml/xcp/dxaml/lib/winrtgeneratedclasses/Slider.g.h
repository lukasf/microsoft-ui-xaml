// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "RangeBase.g.h"
#include <FeatureFlags.h>
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement) 
#define FEATURE_HEADERPLACEMENT_OVERRIDE override
#else
#define FEATURE_HEADERPLACEMENT_OVERRIDE
#endif
#define __Slider_GUID "22d330ef-bfdf-41d7-ae0b-72d42784adf3"

namespace DirectUI
{
    class Slider;
    class DataTemplate;

    class __declspec(novtable) SliderGenerated:
        public DirectUI::RangeBase
        , public ABI::Microsoft::UI::Xaml::Controls::ISlider
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::ISliderFeature_HeaderPlacement
#endif
    {
        friend class DirectUI::Slider;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Slider");

        BEGIN_INTERFACE_MAP(SliderGenerated, DirectUI::RangeBase)
            INTERFACE_ENTRY(SliderGenerated, ABI::Microsoft::UI::Xaml::Controls::ISlider)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(SliderGenerated, ABI::Microsoft::UI::Xaml::Controls::ISliderFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(SliderGenerated, DirectUI::RangeBase)

    public:
        SliderGenerated();
        ~SliderGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Slider;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::Slider;
        }

        // Properties.
        IFACEMETHOD(get_Header)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        IFACEMETHOD(put_Header)(_In_opt_ IInspectable* pValue) override;
        IFACEMETHOD(get_HeaderPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement* pValue) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(put_HeaderPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::ControlHeaderPlacement value) FEATURE_HEADERPLACEMENT_OVERRIDE;
        IFACEMETHOD(get_HeaderTemplate)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue) override;
        IFACEMETHOD(put_HeaderTemplate)(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue) override;
        IFACEMETHOD(get_IntermediateValue)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_IntermediateValue)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_IsDirectionReversed)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsDirectionReversed)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_IsThumbToolTipEnabled)(_Out_ BOOLEAN* pValue) override;
        IFACEMETHOD(put_IsThumbToolTipEnabled)(_In_ BOOLEAN value) override;
        IFACEMETHOD(get_Orientation)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Orientation* pValue) override;
        IFACEMETHOD(put_Orientation)(_In_ ABI::Microsoft::UI::Xaml::Controls::Orientation value) override;
        IFACEMETHOD(get_SnapsTo)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::SliderSnapsTo* pValue) override;
        IFACEMETHOD(put_SnapsTo)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::SliderSnapsTo value) override;
        IFACEMETHOD(get_StepFrequency)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_StepFrequency)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_ThumbToolTipValueConverter)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Data::IValueConverter** ppValue) override;
        IFACEMETHOD(put_ThumbToolTipValueConverter)(_In_opt_ ABI::Microsoft::UI::Xaml::Data::IValueConverter* pValue) override;
        IFACEMETHOD(get_TickFrequency)(_Out_ DOUBLE* pValue) override;
        IFACEMETHOD(put_TickFrequency)(_In_ DOUBLE value) override;
        IFACEMETHOD(get_TickPlacement)(_Out_ ABI::Microsoft::UI::Xaml::Controls::Primitives::TickPlacement* pValue) override;
        IFACEMETHOD(put_TickPlacement)(_In_ ABI::Microsoft::UI::Xaml::Controls::Primitives::TickPlacement value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "Slider_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) SliderFactory:
       public ctl::BetterAggregableCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Controls::ISliderFactory
        , public ABI::Microsoft::UI::Xaml::Controls::ISliderStatics
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
        , public ABI::Microsoft::UI::Xaml::Controls::ISliderStaticsFeature_HeaderPlacement
#endif
    {
        BEGIN_INTERFACE_MAP(SliderFactory, ctl::BetterAggregableCoreObjectActivationFactory)
            INTERFACE_ENTRY(SliderFactory, ABI::Microsoft::UI::Xaml::Controls::ISliderFactory)
            INTERFACE_ENTRY(SliderFactory, ABI::Microsoft::UI::Xaml::Controls::ISliderStatics)
#if WI_IS_FEATURE_PRESENT(Feature_HeaderPlacement)
            INTERFACE_ENTRY(SliderFactory, ABI::Microsoft::UI::Xaml::Controls::ISliderStaticsFeature_HeaderPlacement)
#endif
        END_INTERFACE_MAP(SliderFactory, ctl::BetterAggregableCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::ISlider** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_IntermediateValueProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_StepFrequencyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_SnapsToProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TickFrequencyProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_TickPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_OrientationProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsDirectionReversedProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_IsThumbToolTipEnabledProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_ThumbToolTipValueConverterProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderTemplateProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_HeaderPlacementProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) FEATURE_HEADERPLACEMENT_OVERRIDE;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::Slider;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}