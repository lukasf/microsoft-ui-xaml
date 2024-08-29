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

#include "KeyTime.g.h"

#define __PointKeyFrame_GUID "5b6855b4-7554-45fc-a54d-bdb605a756b3"

namespace DirectUI
{
    class PointKeyFrame;

    class __declspec(novtable) __declspec(uuid(__PointKeyFrame_GUID)) PointKeyFrame:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrame
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.Animation.PointKeyFrame");

        BEGIN_INTERFACE_MAP(PointKeyFrame, DirectUI::DependencyObject)
            INTERFACE_ENTRY(PointKeyFrame, ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrame)
        END_INTERFACE_MAP(PointKeyFrame, DirectUI::DependencyObject)

    public:
        PointKeyFrame();
        ~PointKeyFrame() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointKeyFrame;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PointKeyFrame;
        }

        // Properties.
        IFACEMETHOD(get_KeyTime)(_Out_ ABI::Microsoft::UI::Xaml::Media::Animation::KeyTime* pValue) override;
        IFACEMETHOD(put_KeyTime)(_In_ ABI::Microsoft::UI::Xaml::Media::Animation::KeyTime value) override;
        IFACEMETHOD(get_Value)(_Out_ ABI::Windows::Foundation::Point* pValue) override;
        IFACEMETHOD(put_Value)(_In_ ABI::Windows::Foundation::Point value) override;

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) PointKeyFrameFactory:
       public ctl::BetterAggregableAbstractCoreObjectActivationFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrameFactory
        , public ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrameStatics
    {
        BEGIN_INTERFACE_MAP(PointKeyFrameFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)
            INTERFACE_ENTRY(PointKeyFrameFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrameFactory)
            INTERFACE_ENTRY(PointKeyFrameFactory, ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrameStatics)
        END_INTERFACE_MAP(PointKeyFrameFactory, ctl::BetterAggregableAbstractCoreObjectActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Media::Animation::IPointKeyFrame** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_ValueProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;
        IFACEMETHOD(get_KeyTimeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PointKeyFrame;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}