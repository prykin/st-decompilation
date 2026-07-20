
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCursorType */

short __thiscall
STAllPlayersC::GetCursorType
          (STAllPlayersC *this,Global_sub_00435B90_param_3Enum param_1,int *param_2,
          undefined4 param_3,int *param_4,undefined4 param_5,undefined4 param_6)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  uint uVar2;
  code *pcVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  uint uVar8;
  uint local_8;
  
  if ((param_2 != (int *)0x0) &&
     ((((iVar6 = param_2[8], iVar6 == 0x14 || (iVar6 == 1000)) || (iVar6 == 0x3e9)) ||
      ((iVar6 == 0x172 || (iVar6 == 0x1a4)))))) {
    thunk_FUN_0041f390((int)param_2);
    in_EDX = extraout_EDX;
  }
  uVar5 = (uint)DAT_0080874d;
  if (g_playerRuntime[uVar5].field442_0x203 == 0) {
    if (g_playerRuntime[uVar5].field326_0x163 != 0) {
      if (g_playerRuntime[uVar5].field326_0x163 != 0x3c) {
        return 0;
      }
      if (g_playerRuntime[uVar5].field327_0x167 != uVar5) {
        return 0;
      }
      sVar4 = thunk_FUN_00435b90(CONCAT31((int3)((uint)in_EDX >> 8),DAT_0080874d),
                                 (DArrayTy *)g_playerRuntime[uVar5].field329_0x16d,param_1,param_2,
                                 param_3,param_4);
      return sVar4;
    }
  }
  else if (g_playerRuntime[uVar5].field442_0x203 == 1) {
    if (g_playerRuntime[uVar5].field384_0x1b3 != 0) {
      if (g_playerRuntime[uVar5].field384_0x1b3 != 0x19a) {
        return 0;
      }
      if (g_playerRuntime[uVar5].field385_0x1b7 != uVar5) {
        return 0;
      }
      if (g_playerRuntime[uVar5].field388_0x1c1 != 1) {
        return 0;
      }
      pAVar1 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar5].field387_0x1bd;
      uVar8 = 0;
      uVar2 = pAVar1->field_000C;
      if ((int)uVar2 < 1) {
        return 0;
      }
      do {
        FUN_006acc70(pAVar1,uVar8,&local_8);
        if ((short)local_8 != -1) {
          piVar7 = (int *)GetObjPtr(this,CONCAT31((int3)(local_8 >> 8),
                                                  *(undefined1 *)
                                                   &g_playerRuntime[uVar5].field385_0x1b7),local_8,
                                    CASE_1);
          sVar4 = (**(code **)(*piVar7 + 0x28))(param_1,param_2,param_3,param_4);
          return sVar4;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
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
  if ((param_2 != (int *)0x0) && (param_2[9] == (uint)DAT_0080874d)) {
    if ((param_2[8] == 0x14) && (iVar6 = (**(code **)(*param_2 + 0xec))(), iVar6 == 1)) {
      return 3;
    }
    if (((param_2[8] == 1000) || (param_2[8] == 0x3e9)) &&
       (iVar6 = (**(code **)(*param_2 + 0xec))(), iVar6 == 1)) {
      return 4;
    }
  }
  return 0;
}

