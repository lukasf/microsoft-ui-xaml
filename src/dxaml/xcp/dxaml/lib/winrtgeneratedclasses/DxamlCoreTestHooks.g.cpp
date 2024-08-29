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

#include "DxamlCoreTestHooks.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::DxamlCoreTestHooksGenerated::DxamlCoreTestHooksGenerated()
{
}

DirectUI::DxamlCoreTestHooksGenerated::~DxamlCoreTestHooksGenerated()
{
}

HRESULT DirectUI::DxamlCoreTestHooksGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::DxamlCoreTestHooks)))
    {
        *ppObject = static_cast<DirectUI::DxamlCoreTestHooks*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDxamlCoreTestHooks)))
    {
        *ppObject = ctl::interface_cast<ABI::Microsoft::UI::Xaml::IDxamlCoreTestHooks>(this);
    }
    else
    {
        RRETURN(ctl::WeakReferenceSource::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.

// Events.

// Methods.

HRESULT DirectUI::DxamlCoreTestHooksFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::IDxamlCoreTestHooksStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::IDxamlCoreTestHooksStatics*>(this);
    }
    else
    {
        RRETURN(ctl::ActivationFactory<DirectUI::DxamlCoreTestHooks>::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::DxamlCoreTestHooksFactory::GetForCurrentThread(_Outptr_ ABI::Microsoft::UI::Xaml::IDxamlCoreTestHooks** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "DxamlCoreTestHooks_GetForCurrentThread", 0);
    }
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    IFC(CheckActivationAllowed());
    IFC(GetForCurrentThreadImpl(ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "DxamlCoreTestHooks_GetForCurrentThread", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::DxamlCoreTestHooksFactory::PerformProcessWideLeakDetection(_In_ INT threshold)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "DxamlCoreTestHooks_PerformProcessWideLeakDetection", 0);
    }
    
    
    IFC(PerformProcessWideLeakDetectionImpl(threshold));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "DxamlCoreTestHooks_PerformProcessWideLeakDetection", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_DxamlCoreTestHooks()
    {
        RRETURN(ctl::ActivationFactoryCreator<DxamlCoreTestHooksFactory>::CreateActivationFactory());
    }
}