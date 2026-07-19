
short __fastcall
thunk_FUN_00435930(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  int iVar6;
  uint uVar7;
  uint uStack_8;
  
  if ((param_4 != (int *)0x0) &&
     ((((iVar6 = param_4[8], iVar6 == 0x14 || (iVar6 == 1000)) || (iVar6 == 0x3e9)) ||
      ((iVar6 == 0x172 || (iVar6 == 0x1a4)))))) {
    thunk_FUN_0041f390((int)param_4);
    param_2 = extraout_EDX;
  }
  uVar7 = (uint)DAT_0080874d;
  iVar6 = uVar7 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar6) == 0) {
    if (*(int *)((int)&DAT_007f4f83 + iVar6) != 0) {
      if (*(int *)((int)&DAT_007f4f83 + iVar6) != 0x3c) {
        return 0;
      }
      if (*(uint *)((int)&DAT_007f4f87 + iVar6) != uVar7) {
        return 0;
      }
      sVar4 = thunk_FUN_00435b90(CONCAT31((int3)((uint)param_2 >> 8),DAT_0080874d),
                                 *(int *)((int)&DAT_007f4f8d + iVar6),param_3,param_4,param_5,
                                 param_6);
      return sVar4;
    }
  }
  else if (*(int *)((int)&DAT_007f5023 + iVar6) == 1) {
    if (*(int *)((int)&DAT_007f4fd3 + iVar6) != 0) {
      if (*(int *)((int)&DAT_007f4fd3 + iVar6) != 0x19a) {
        return 0;
      }
      if (*(uint *)((int)&DAT_007f4fd7 + iVar6) != uVar7) {
        return 0;
      }
      if ((&DAT_007f4fe1)[uVar7 * 0x531] != 1) {
        return 0;
      }
      iVar1 = *(int *)((int)&DAT_007f4fdd + iVar6);
      uVar7 = 0;
      iVar2 = *(int *)(iVar1 + 0xc);
      if (iVar2 < 1) {
        return 0;
      }
      do {
        FUN_006acc70(iVar1,uVar7,&uStack_8);
        if ((short)uStack_8 != -1) {
          piVar5 = (int *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_8 >> 8),
                                                      *(undefined1 *)((int)&DAT_007f4fd7 + iVar6)),
                                             uStack_8,1);
          sVar4 = (**(code **)(*piVar5 + 0x28))(param_3,param_4,param_5,param_6);
          return sVar4;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar2);
      return 0;
    }
  }
  else {
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x11ea,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__GetCursorType_inv_007a73a4);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      sVar4 = (*pcVar3)();
      return sVar4;
    }
  }
  if ((param_4 != (int *)0x0) && (param_4[9] == (uint)DAT_0080874d)) {
    if ((param_4[8] == 0x14) && (iVar6 = (**(code **)(*param_4 + 0xec))(), iVar6 == 1)) {
      return 3;
    }
    if (((param_4[8] == 1000) || (param_4[8] == 0x3e9)) &&
       (iVar6 = (**(code **)(*param_4 + 0xec))(), iVar6 == 1)) {
      return 4;
    }
  }
  return 0;
}

