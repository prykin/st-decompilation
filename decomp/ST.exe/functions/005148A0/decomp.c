
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005148A0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=2; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=1; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005148A0::FUN_005148a0
          (AnonReceiver_005148A0 *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 < 1) {
    return;
  }
  iVar6 = param_1;
  do {
    piVar5 = (int *)(*(int *)&this->field_0x1c7 + iVar6 * 0x11);
    if ((*piVar5 == *(int *)(param_1 * 0x11 + 4 + *(int *)&this->field_0x1c7)) || (piVar5[1] == 0))
    {
      iVar1 = *(int *)&this->field_0x1b3;
      uVar4 = 0;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 != 0) {
        if (uVar2 == 0) {
          piVar3 = (int *)0x0;
          goto LAB_0051490d;
        }
        do {
          piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
LAB_0051490d:
          if ((*piVar3 == *piVar5) && (piVar3[1] == piVar5[1])) {
            if (*(char *)((int)piVar3 + 0x12) != '\0') {
              return;
            }
            HelpPanelTy::ChangeTree((HelpPanelTy *)this,piVar3,uVar4);
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      thunk_FUN_005148a0(this,iVar6);
      iVar6 = param_1;
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return;
    }
  } while( true );
}

