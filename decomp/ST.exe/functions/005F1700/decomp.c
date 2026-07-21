
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_005f1700(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     uint param_7)

{
  AnonNested_005F1700_003C_057131A3 *pAVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  AnonShape_005F1700_3FAAC417 *local_14;
  ushort *local_10;
  char *local_c;
  uint local_8;

  local_10 = (ushort *)0x0;
  if (param_1 == 1) {
    local_c = (&PTR_s_basis_40_007ce534)[param_2];
  }
  else {
    local_c = (&PTR_s_basis_10_007ce530)[param_2];
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return local_10;
  }
  puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,local_c,0xffffffff,0,1,0,(undefined4 *)0x0);
  if (param_3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return puVar3;
  }
  if (-1 < (int)param_7) {
    pAVar1 = local_14->field_003C;
    if (param_7 < pAVar1->field_000C) {
      iVar2 = pAVar1->field_0008 * param_7 + pAVar1->field_001C;
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (param_1 == 0) {
        uVar5 = 0x45;
        uVar4 = 0x5a;
      }
      else {
        uVar5 = 100;
        uVar4 = 0x78;
      }
      FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),uVar4,uVar5,0);
      *(uint *)(iVar2 + 0x18) = local_8;
      FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,local_8,0,*(uint *)(iVar2 + 0xe));
      FUN_006ea3e0(PTR_00807598,local_8,-1);
      FUN_006e9210(PTR_00807598,local_8);
      if (param_1 != 0) {
        param_5 = param_5 + 100;
        param_4 = param_4 + 100;
        local_18 = param_4;
      }
      FUN_006ea960(PTR_00807598,local_8,(float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_5 * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(PTR_00807598,local_8,0);
      *(undefined1 *)(iVar2 + 6) = 1;
      g_currentExceptionFrame = local_5c.previous;
      return puVar3;
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

