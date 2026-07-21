
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f4a30(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_58;
  AnonShape_005F4A30_D28DC55A *local_14;
  undefined **local_10;
  int local_c;
  undefined4 local_8;

  local_c = param_1;
  local_8 = 0;
  local_10 = &PTR_s_pics_g_007ce5f8;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  iVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  if (local_c != 0) {
    uVar4 = param_2 & 0xff;
    local_14 = (AnonShape_005F4A30_D28DC55A *)
               Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,local_10[uVar4],0xffffffff,0,1,0,(undefined4 *)0x0);
    puVar1 = (uint *)(iVar2 + 0x1f);
    FUN_006e8660(PTR_00807598,(int *)puVar1,1,0,local_14->field_0009,local_14->field_000D,
                 *(int *)(&DAT_007ce5b0 + uVar4 * 8) / 2,
                 *(int *)(&DAT_007ce5b4 + uVar4 * 8) / 2 - 0xe,0);
    FUN_006e98e0(PTR_00807598,*puVar1,0,*(undefined4 *)local_14,local_14->field_0021,1);
    FUN_006ea270(PTR_00807598,*puVar1,0,*(uint *)(iVar2 + 0xe));
    FUN_006ea960(PTR_00807598,*puVar1,(float)*(int *)(iVar2 + 2) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 6) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)(iVar2 + 10) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(PTR_00807598,*puVar1,0);
    *(undefined1 *)(iVar2 + 0x1e) = 1;
    if (param_3 != 0) {
      FUN_006eab60(PTR_00807598,*puVar1);
      *(undefined1 *)(iVar2 + 0x1e) = 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 1;
  }
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}

