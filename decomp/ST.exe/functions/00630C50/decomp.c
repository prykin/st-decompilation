
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_00630c50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
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
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,local_8[local_10->field_0040],0xffffffff,0,1,0,
                      (undefined4 *)0x0);
  if (param_3 == 0) {
    if (param_2 == 1) {
      local_c = (ushort *)
                FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar3 + 0x21),0x5a,0x45,
                             (float)local_10->field_0054 * _DAT_007904f8 * _DAT_007904f0,
                             (float)local_10->field_0058 * _DAT_007904f8 * _DAT_007904f0,
                             (float)local_10->field_005C * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_007904fc,0);
    }
    if (param_2 == 4) {
      local_14 = local_10->field_0054 + 100;
      local_c = (ushort *)
                FUN_006e9000(PTR_00807598,**(undefined4 **)((int)puVar3 + 0x21),0x78,0x56,
                             (float)local_14 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(local_10->field_0058 + 100) * _DAT_007904f8 * _DAT_007904f0,
                             (float)local_10->field_005C * _DAT_007904f8 * _DAT_007904f0 +
                             _DAT_0079d1a0,0);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  puVar1 = &local_10[1].field_0x1;
  if (param_2 == 1) {
    uVar6 = *(uint *)((int)puVar3 + 0xd);
    uVar5 = *(uint *)((int)puVar3 + 9);
    uVar8 = 0x45;
    uVar7 = 0x5a;
  }
  else {
    uVar6 = *(uint *)((int)puVar3 + 0xd);
    uVar5 = *(uint *)((int)puVar3 + 9);
    uVar8 = 100;
    uVar7 = 0x78;
  }
  FUN_006e8660(PTR_00807598,(int *)puVar1,1,0,uVar5,uVar6,uVar7,uVar8,0);
  FUN_006e98e0(PTR_00807598,*(uint *)puVar1,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
  FUN_006ea270(PTR_00807598,*(uint *)puVar1,0,0);
  FUN_006ea3e0(PTR_00807598,*(uint *)puVar1,-1);
  FUN_006e9210(PTR_00807598,*(uint *)puVar1);
  if (param_2 == 1) {
    iVar2 = local_10->field_0058;
    iVar4 = local_10->field_0054;
  }
  else {
    iVar2 = local_10->field_0058 + 100;
    iVar4 = local_10->field_0054 + 100;
    local_14 = iVar4;
  }
  FUN_006ea960(PTR_00807598,*(uint *)puVar1,(float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
               (float)local_10->field_005C * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  if (param_4 != 0) {
    FUN_006eaaa0(PTR_00807598,*(uint *)puVar1,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return puVar3;
}

