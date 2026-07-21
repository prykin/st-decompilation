
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00664540.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=1; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00664540::FUN_00664540
          (AnonReceiver_00664540 *this,undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint index;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)&this->field_0x217;
  index = 0;
  uVar5 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar6 = uVar2 != 0;
      do {
        if (bVar6) {
          iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (uVar5 < *(uint *)(iVar3 + 4)) {
          index = uVar4;
          uVar5 = *(uint *)(iVar3 + 4);
        }
        uVar4 = uVar4 + 1;
        bVar6 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = index;
    }
    DArrayGetElement(*(DArrayTy **)&this->field_0x217,index,param_1);
    FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)&this->field_0x217,index);
    return *(undefined4 *)(*(int *)&this->field_0x217 + 0xc);
  }
  return 0xffffffff;
}

