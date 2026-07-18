
int FUN_006ba7e0(uint param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar2;
  uint uVar3;
  undefined4 local_d4 [9];
  uint *local_b0;
  byte local_80;
  undefined4 *****local_58;
  undefined4 local_54 [16];
  COLORREF local_14;
  int local_10;
  uint local_c;
  HDC local_8;
  
  iVar1 = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  if (((param_3 & 0xff000000) == 0x1000000) && (*(int *)(param_1 + 0x20) == 8)) {
    local_c = param_3 & 0xff;
    uVar3 = local_c;
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
      return 0;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      return 0;
    }
    local_58 = DAT_00858df8;
    DAT_00858df8 = &local_58;
    iVar1 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
    if (iVar1 == 0) {
      FUN_006ce770(param_1,&local_8);
      local_14 = GetPixel(local_8,0,0);
      SetPixel(local_8,0,0,param_3);
      FUN_006ce8c0(param_1,local_8);
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
      local_d4[0] = 0x7c;
      iVar2 = 0;
      do {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 100))
                          (*(int **)(param_1 + 0x40),0,local_d4,0,0);
        local_10 = iVar1;
        if (iVar1 == 0) goto LAB_006ba923;
        if (iVar1 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else if (iVar1 != -0x7789fde4) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 40000);
      if (iVar1 == 0) {
LAB_006ba923:
        uVar3 = (1 << (local_80 & 0x1f)) - 1U & *local_b0;
        local_c = uVar3;
        (**(code **)(**(int **)(param_1 + 0x40) + 0x80))(*(int **)(param_1 + 0x40),0);
        if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
        }
        FUN_006ce770(param_1,&local_8);
        SetPixel(local_8,0,0,local_14);
        FUN_006ce8c0(param_1,local_8);
        DAT_00858df8 = (undefined4 ******)local_58;
      }
      else {
        uVar3 = local_c;
        if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
          uVar3 = local_c;
        }
      }
    }
    else {
      DAT_00858df8 = (undefined4 ******)local_58;
      uVar3 = local_c;
      local_10 = iVar1;
    }
  }
  *param_2 = uVar3;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_006a5e40(iVar1,DAT_007ed77c,0x7edc48,0x2b7);
  return iVar1;
}

