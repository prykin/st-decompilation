
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006308F0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=12; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[20];
   expected_stack=20; receiver_family_members=8 */

ushort * __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006308F0::FUN_00630c50
          (AnonReceiver_006308F0 *this,undefined4 param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  undefined1 *puVar1;
  AnonShape_00630C50_5716D423 *pAVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  int local_14;
  AnonShape_00630C50_5716D423 *local_10;
  ushort *local_c;
  undefined **local_8;
  
  local_c = (ushort *)0x0;
  if (param_2 == 1) {
    if (param_5 == 3) {
      local_8 = &PTR_s_ruin_s10_007d1850;
    }
    else {
      local_8 = &PTR_s_ruin_10_007d1818;
    }
  }
  else {
    local_8 = &PTR_s_ruin_s40_007d186c;
    if (param_5 != 3) {
      local_8 = &PTR_s_ruin_40_007d1834;
    }
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = (AnonShape_00630C50_5716D423 *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,local_8[local_10->field_0040],0xffffffff,0,1,0,
                      (undefined4 *)0x0);
  if (param_3 == 0) {
    if (param_2 == 1) {
      local_c = (ushort *)
                FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar4 + 0x21),0x5a,0x45,
                             (float)pAVar2->field_0054 * _DAT_007904f8 * _DAT_007904f0,
                             (float)pAVar2->field_0058 * _DAT_007904f8 * _DAT_007904f0,
                             (float)pAVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_007904fc,0);
    }
    if (param_2 == 4) {
      local_14 = pAVar2->field_0054 + 100;
      local_c = (ushort *)
                FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar4 + 0x21),0x78,0x56,
                             (float)local_14 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(pAVar2->field_0058 + 100) * _DAT_007904f8 * _DAT_007904f0,
                             (float)pAVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_0079d1a0,0);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar1 = &pAVar2[1].field_0x1;
  if (param_2 == 1) {
    uVar7 = *(uint *)((int)puVar4 + 0xd);
    uVar6 = *(uint *)((int)puVar4 + 9);
    uVar9 = 0x45;
    uVar8 = 0x5a;
  }
  else {
    uVar7 = *(uint *)((int)puVar4 + 0xd);
    uVar6 = *(uint *)((int)puVar4 + 9);
    uVar9 = 100;
    uVar8 = 0x78;
  }
  FUN_006e8660(PTR_00807598,(int *)puVar1,1,0,uVar6,uVar7,uVar8,uVar9,0);
  FUN_006e98e0(PTR_00807598,*(uint *)puVar1,0,*(undefined4 *)puVar4,*(int *)((int)puVar4 + 0x21),1);
  FUN_006ea270(PTR_00807598,*(uint *)puVar1,0,0);
  FUN_006ea3e0(PTR_00807598,*(uint *)puVar1,-1);
  FUN_006e9210(PTR_00807598,*(uint *)puVar1);
  if (param_2 == 1) {
    iVar3 = pAVar2->field_0058;
    iVar5 = pAVar2->field_0054;
  }
  else {
    iVar3 = pAVar2->field_0058 + 100;
    iVar5 = pAVar2->field_0054 + 100;
    local_14 = iVar5;
  }
  FUN_006ea960(PTR_00807598,*(uint *)puVar1,(float)iVar5 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar3 * _DAT_007904f8 * _DAT_007904f0,
               (float)pAVar2->field_005C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  if (param_4 != 0) {
    FUN_006eaaa0(PTR_00807598,*(uint *)puVar1,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return puVar4;
}

