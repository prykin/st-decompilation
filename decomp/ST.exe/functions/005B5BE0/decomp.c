
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005B5BE0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=11; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[8];
   expected_stack=8; receiver_family_members=16; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B5BE0::FUN_005b5be0
          (AnonReceiver_005B5BE0 *this,AnonShape_006B5B10_E0D06CF1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*param_2 + -1) * param_2[5];
  FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2,0,param_2[5] + -2,param_1->field_0008,
               0xff);
  if (param_2[1] == 1) {
    FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2,0,param_2[5] + -2,0x14,0);
    FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2 + 1,0x14,param_2[5] + -5,2,0);
    FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2 + 3,0x16,param_2[5] + -9,2,0);
    FUN_006b5b10(param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,0x14,
                 (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2,0x14,iVar2 + 3,0x17,
                 (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2 + 3,0x17,param_2[5] + -6 + iVar2,0x17,
                 (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
    FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,0x17,param_2[5] + iVar2 + -3,0x14,
                 (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
    iVar2 = param_2[5] + -3 + iVar2;
    FUN_006b5b10(param_1,0,iVar2,0x14,iVar2,2,
                 (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
    return;
  }
  FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2,0,param_2[5] + -2,0x13,0);
  FUN_006b4170((AnonShape_006C7610_838EDECF *)param_1,0,iVar2 + 2,0x13,param_2[5] + -6,3,0);
  FUN_006b5b10(param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,0x13,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,0x13,iVar2 + 3,0x16,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2 + 3,0x16,param_2[5] + -6 + iVar2,0x16,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,0x16,param_2[5] + iVar2 + -3,0x13,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  iVar1 = param_2[5] + -3 + iVar2;
  FUN_006b5b10(param_1,0,iVar1,0x13,iVar1,2,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,1,param_2[5] + -3 + iVar2,1,
               (byte)*(undefined4 *)(*(int *)&this->field_0x1a5b + 0x140),0xd);
  return;
}

