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

#include "GridLength.g.h"

#define __SplitViewTemplateSettings_GUID "d3646b32-9a6e-4d57-b897-b3fbba994e38"

namespace DirectUI
{
    class SplitViewTemplateSettings;

    class __declspec(novtable) __declspec(uuid(__SplitViewTemplateSettings_GUID)) SplitViewTemplateSettings:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings");

        BEGIN_INTERFACE_MAP(SplitViewTemplateSettings, DirectUI::DependencyObject)
            INTERFACE_ENTRY(SplitViewTemplateSettings, ABI::Microsoft::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)
        END_INTERFACE_MAP(SplitViewTemplateSettings, DirectUI::DependencyObject)

    public:
        SplitViewTemplateSettings();
        ~SplitViewTemplateSettings() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::SplitViewTemplateSettings;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::SplitViewTemplateSettings;
        }

        // Properties.
        IFACEMETHOD(get_CompactPaneGridLength)(_Out_ ABI::Microsoft::UI::Xaml::GridLength* pValue) override;
        _Check_return_ HRESULT put_CompactPaneGridLength(_In_ ABI::Microsoft::UI::Xaml::GridLength value);
        IFACEMETHOD(get_NegativeOpenPaneLength)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeOpenPaneLength(_In_ DOUBLE value);
        IFACEMETHOD(get_NegativeOpenPaneLengthMinusCompactLength)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeOpenPaneLengthMinusCompactLength(_In_ DOUBLE value);
        IFACEMETHOD(get_OpenPaneGridLength)(_Out_ ABI::Microsoft::UI::Xaml::GridLength* pValue) override;
        _Check_return_ HRESULT put_OpenPaneGridLength(_In_ ABI::Microsoft::UI::Xaml::GridLength value);
        IFACEMETHOD(get_OpenPaneLength)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OpenPaneLength(_In_ DOUBLE value);
        IFACEMETHOD(get_OpenPaneLengthMinusCompactLength)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_OpenPaneLengthMinusCompactLength(_In_ DOUBLE value);

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
    class __declspec(novtable) SplitViewTemplateSettingsFactory:
       public ctl::AbstractActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::SplitViewTemplateSettings;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}