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

#include "ConnectedAnimation.g.h"
#include "ConnectedAnimationConfiguration.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ConnectedAnimationGenerated::ConnectedAnimationGenerated()
{
}

DirectUI::ConnectedAnimationGenerated::~ConnectedAnimationGenerated()
{
}

HRESULT DirectUI::ConnectedAnimationGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ConnectedAnimation)))
    {
        *ppObject = static_cast<DirectUI::ConnectedAnimation*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimation)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimation*>(this);
    }
    else
    {
        RRETURN(DirectUI::DependencyObject::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::get_Configuration(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    *ppValue={};
    IFC(CheckThread());
    IFC(static_cast<ConnectedAnimation*>(this)->get_ConfigurationImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::put_Configuration(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration* pValue)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->put_ConfigurationImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::get_IsScaleAnimationEnabled(_Out_ BOOLEAN* pValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(pValue);
    *pValue={};
    IFC(CheckThread());
    IFC(static_cast<ConnectedAnimation*>(this)->get_IsScaleAnimationEnabledImpl(pValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::put_IsScaleAnimationEnabled(_In_ BOOLEAN value)
{
    HRESULT hr = S_OK;
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->put_IsScaleAnimationEnabledImpl(value));
Cleanup:
    RRETURN(hr);
}

// Events.
_Check_return_ HRESULT DirectUI::ConnectedAnimationGenerated::GetCompletedEventSourceNoRef(_Outptr_ CompletedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::ConnectedAnimation_Completed, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<CompletedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::ConnectedAnimation_Completed, this, /* bUseEventManager */ true);
        IFC(StoreEventSource(KnownEventIndex::ConnectedAnimation_Completed, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::add_Completed(_In_ ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Media::Animation::ConnectedAnimation*, IInspectable*>* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    CompletedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::remove_Completed(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    CompletedEventSourceType* pEventSource = nullptr;
    ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Media::Animation::ConnectedAnimation*, IInspectable*>* pValue = (ABI::Windows::Foundation::ITypedEventHandler<ABI::Microsoft::UI::Xaml::Media::Animation::ConnectedAnimation*, IInspectable*>*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::ConnectedAnimation_Completed));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::Cancel()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_Cancel", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->CancelImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_Cancel", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::SetAnimationComponent(_In_ ABI::Microsoft::UI::Xaml::Media::Animation::ConnectedAnimationComponent component, _In_opt_ ABI::Microsoft::UI::Composition::ICompositionAnimationBase* pAnimation)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_SetAnimationComponent", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->SetAnimationComponentImpl(component, pAnimation));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_SetAnimationComponent", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::TryStart(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pDestination, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_TryStart", 0);
    }
    ARG_NOTNULL(pDestination, "destination");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    *pReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->TryStartImpl(pDestination, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_TryStart", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ConnectedAnimationGenerated::TryStartWithCoordinatedElements(_In_ ABI::Microsoft::UI::Xaml::IUIElement* pDestination, _In_ ABI::Windows::Foundation::Collections::IIterable<ABI::Microsoft::UI::Xaml::UIElement*>* pCoordinatedElements, _Out_ BOOLEAN* pReturnValue)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_TryStartWithCoordinatedElements", 0);
    }
    ARG_NOTNULL(pDestination, "destination");
    ARG_NOTNULL(pCoordinatedElements, "coordinatedElements");
    ARG_VALIDRETURNPOINTER(pReturnValue);
    *pReturnValue={};
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ConnectedAnimation*>(this)->TryStartWithCoordinatedElementsImpl(pDestination, pCoordinatedElements, pReturnValue));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ConnectedAnimation_TryStartWithCoordinatedElements", hr);
    }
    RRETURN(hr);
}


namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ConnectedAnimation()
    {
        RRETURN(ctl::BetterActivationFactoryCreator::GetForDO(KnownTypeIndex::ConnectedAnimation));
    }
}