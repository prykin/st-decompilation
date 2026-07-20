
/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall cLoadingTy::sub_00555570(cLoadingTy *this)

{
  int iVar1;
  tagMSG local_20;
  
  if (this->field_0048 != 0) {
    iVar1 = PeekMessageA(&local_20,g_hWnd_00806748,0,0,1);
    while (iVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
      iVar1 = PeekMessageA(&local_20,g_hWnd_00806748,0,0,1);
    }
  }
  return;
}

