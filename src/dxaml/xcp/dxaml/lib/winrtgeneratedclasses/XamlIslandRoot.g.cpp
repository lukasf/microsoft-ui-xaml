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

#include "XamlIslandRoot.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::XamlIslandRootGenerated::XamlIslandRootGenerated()
{
}

DirectUI::XamlIslandRootGenerated::~XamlIslandRootGenerated()
{
}

HRESULT DirectUI::XamlIslandRootGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::XamlIslandRoot)))
    {
        *ppObject = static_cast<DirectUI::XamlIslandRoot*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot*>(this);
    }
    else
    {
        RRETURN(DirectUI::Panel::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::XamlIslandRootGenerated::get_Content(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    
    IFC(static_cast<XamlIslandRoot*>(this)->get_ContentImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlIslandRootGenerated::put_Content(_In_opt_ ABI::Microsoft::UI::Xaml::IUIElement* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<XamlIslandRoot*>(this)->put_ContentImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlIslandRootGenerated::get_FocusController(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    HRESULT hr = S_OK;

    IUnknown* pValueCore = nullptr;

    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};

    

    IFC(static_cast<CXamlIslandRoot*>(GetHandle())->get_FocusController(&pValueCore));

    IFC(CValueBoxer::ConvertToFramework(pValueCore, ppValue, /* fReleaseCoreValue */ TRUE));

Cleanup:
    RRETURN(hr);
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::XamlIslandRootGenerated::SetScreenOffsetOverride(_In_ ABI::Windows::Foundation::Point offsetOnScreen)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlIslandRoot_SetScreenOffsetOverride", 0);
    }

    ABI::Windows::Foundation::Point offsetOnScreenCore = offsetOnScreen;

    

    IFC(DefaultStrictApiCheck(this));

    IFC(static_cast<CXamlIslandRoot*>(GetHandle())->SetScreenOffsetOverride(offsetOnScreenCore));


Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlIslandRoot_SetScreenOffsetOverride", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::XamlIslandRootGenerated::TrySetFocus(_Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "XamlIslandRoot_TrySetFocus", 0);
    }

    BOOLEAN resultCore;

    ARG_VALIDRETURNPOINTER(pResult);
    *pResult={};

    IFC(DefaultStrictApiCheck(this));

    IFC(static_cast<CXamlIslandRoot*>(GetHandle())->TrySetFocus(&resultCore));

    IFC(CValueBoxer::ConvertToFramework(resultCore, pResult, /* fReleaseCoreValue */ TRUE));

Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "XamlIslandRoot_TrySetFocus", hr);
    }
    RRETURN(hr);
}

HRESULT DirectUI::XamlIslandRootFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRootStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRootStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

_Check_return_ HRESULT DirectUI::XamlIslandRootFactory::CheckActivationAllowed()
{
    RRETURN(S_OK);
}

// Factory methods.

// Dependency properties.

// Attached properties.

// Static properties.

// Static methods.
IFACEMETHODIMP DirectUI::XamlIslandRootFactory::GetIslandFromElement(_In_ ABI::Microsoft::UI::Xaml::IDependencyObject* pElement, _Outptr_ ABI::Microsoft::UI::Xaml::Hosting::IXamlIslandRoot** ppResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, 0, "XamlIslandRoot_GetIslandFromElement", 0);
    }
    ARG_NOTNULL(pElement, "element");
    ARG_VALIDRETURNPOINTER(ppResult);
    *ppResult={};
    
    IFC(GetIslandFromElementImpl(pElement, ppResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, 0, "XamlIslandRoot_GetIslandFromElement", hr);
    }
    RRETURN(hr);
}

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_XamlIslandRoot()
    {
        RRETURN(ctl::ActivationFactoryCreator<XamlIslandRootFactory>::CreateActivationFactory());
    }
}