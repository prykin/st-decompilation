
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=006226C0 @ 006226FB
   -> TEST TEST EAX,EAX | 00627AA0 @ 00627CA1 -> MOV MOV dword ptr [EBP + -0x4],EAX

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=6; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STMineSetC::sub_0041D6C0(STMineSetC *this,uint param_1)

{
  int iVar1;
  int iVar2;

  if ((g_visibleClass_00802A88 == (VisibleClassTy *)0x0) || (DAT_0080874d == -1)) {
    return 0;
  }
  iVar1 = (int)this->field_005B;
  iVar2 = (int)this->field_005D;
  if ((((-1 < iVar1) && (iVar1 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      ((&g_visibleClass_00802A88->field_00D4)[param_1] != 0)))) {
    return (uint)(*(char *)(g_visibleClass_00802A88->field_0020 * iVar2 +
                            (&g_visibleClass_00802A88->field_00D4)[param_1] + iVar1) != '\0');
  }
  return 0;
}

