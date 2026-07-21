
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0065ED90.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=7;
   ecx_pointer_setup=7; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1; adopt_untyped_existing_thiscall */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::FUN_0065ed90
          (AnonReceiver_0065ED90 *this,short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  AnonReceiver_0065ED90 *local_10;
  int local_c;
  int local_8;

  psVar1 = param_2;
  local_10 = this;
  iVar3 = thunk_FUN_0065e700((AnonShape_0065DA10_8B0AA883 *)this,&local_c,&local_8,&local_c,
                             &local_1c);
  if (iVar3 != 0) {
    return -4;
  }
  iVar7 = (int)param_1[3] / 2 + (int)*param_1;
  iVar5 = (int)param_1[4] / 2 + (int)param_1[1];
  local_18 = iVar5;
  iVar3 = FUN_006aced8(local_8,local_c,iVar7,iVar5);
  if (iVar3 < 8) {
    return -4;
  }
  local_14 = iVar7 - local_8;
  param_2[2] = 0;
  param_2[3] = 3;
  param_2[4] = 3;
  param_2[5] = 5;
  uVar4 = *(int *)&local_10->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&local_10->field_0x1c = uVar4;
  param_2 = (short *)param_3;
  iVar6 = (uVar4 >> 0x10) % 6 + 0x14;
  if (param_3 != 0x200) {
    if (param_3 != 0x400) {
      uVar4 = *(int *)&local_10->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&local_10->field_0x1c = uVar4;
      param_3 = (-(uint)((uVar4 & 0x10000) != 0) & 0x200) + 0x200;
    }
    param_2 = (short *)param_3;
    if ((short *)param_3 != (short *)0x200) {
      *psVar1 = ((short)iVar7 - (short)((iVar6 * (local_c - iVar5)) / iVar3)) + -1;
      sVar2 = ((short)local_18 - (short)((iVar6 * local_14) / iVar3)) + -1;
      goto LAB_0065eedf;
    }
  }
  *psVar1 = (short)((iVar6 * (local_c - iVar5)) / iVar3) + -1 + (short)iVar7;
  sVar2 = (short)((iVar6 * local_14) / iVar3) + -1 + (short)local_18;
LAB_0065eedf:
  psVar1[1] = sVar2;
  thunk_FUN_006756d0(psVar1,psVar1 + 1,psVar1 + 3,psVar1 + 4);
  return (int)param_2;
}

