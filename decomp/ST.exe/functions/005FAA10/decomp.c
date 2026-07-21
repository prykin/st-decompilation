
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00416270.
   Evidence: incoming_receiver_captures=1; receiver_accesses=9; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=4; single_call_corroborated_by_receiver_family */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00416270::FUN_005faa10
          (AnonReceiver_00416270 *this,int param_1)

{
  AnonShape_005FAA10_427149EB *pAVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_54;
  AnonShape_005FAA10_427149EB *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (AnonShape_005FAA10_427149EB *)this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar1 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  if (local_10->field_02E6 != 0) {
    if (param_1 == 1) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_rubb3_007ce700,0xffffffff,0,1,0,(undefined4 *)0x0);
      uVar5 = *(uint *)((int)puVar3 + 0xd);
      uVar4 = *(uint *)((int)puVar3 + 9);
      uVar7 = 8;
      uVar6 = 8;
    }
    else {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806774,CASE_1D,s_bulb_tel_007ce708,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      uVar5 = *(uint *)((int)puVar3 + 0xd);
      uVar4 = *(uint *)((int)puVar3 + 9);
      uVar7 = 0x2f;
      uVar6 = 0x5a;
    }
    FUN_006e8660(pAVar1->field_0211,(int *)&local_8,1,0,uVar4,uVar5,uVar6,uVar7,0);
    FUN_006e98e0(pAVar1->field_0211,local_8,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
    FUN_006ea270(pAVar1->field_0211,local_8,0,0);
    iVar2 = pAVar1->field_02E6;
    FUN_006ea960(pAVar1->field_0211,local_8,
                 (float)*(int *)(iVar2 + 0x14) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x18) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 0x1c) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006e9ef0(pAVar1->field_0211,local_8,0,1,0,0,30000);
    FUN_006eaaa0(pAVar1->field_0211,local_8,0);
    *(uint *)(pAVar1->field_02E6 + 4) = local_8;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

