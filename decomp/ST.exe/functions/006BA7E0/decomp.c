
int FUN_006ba7e0(uint param_1,uint *param_2,uint param_3)

{
  int exceptionCode;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar1;
  uint uVar2;
  undefined4 local_d4 [9];
  uint *local_b0;
  byte local_80;
  InternalExceptionFrame local_58;
  COLORREF local_14;
  int local_10;
  uint local_c;
  HDC local_8;
  
  exceptionCode = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  if (((param_3 & 0xff000000) == 0x1000000) && (*(int *)(param_1 + 0x20) == 8)) {
    local_c = param_3 & 0xff;
    uVar2 = local_c;
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
      return 0;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      return 0;
    }
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    exceptionCode = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (exceptionCode == 0) {
      FUN_006ce770(param_1,&local_8);
      local_14 = GetPixel(local_8,0,0);
      SetPixel(local_8,0,0,param_3);
      FUN_006ce8c0(param_1,local_8);
      if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
      }
      local_d4[0] = 0x7c;
      iVar1 = 0;
      do {
        exceptionCode =
             (**(code **)(**(int **)(param_1 + 0x40) + 100))
                       (*(int **)(param_1 + 0x40),0,local_d4,0,0);
        local_10 = exceptionCode;
        if (exceptionCode == 0) goto LAB_006ba923;
        if (exceptionCode == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else if (exceptionCode != -0x7789fde4) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 40000);
      if (exceptionCode == 0) {
LAB_006ba923:
        uVar2 = (1 << (local_80 & 0x1f)) - 1U & *local_b0;
        local_c = uVar2;
        (**(code **)(**(int **)(param_1 + 0x40) + 0x80))(*(int **)(param_1 + 0x40),0);
        if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
        }
        FUN_006ce770(param_1,&local_8);
        SetPixel(local_8,0,0,local_14);
        FUN_006ce8c0(param_1,local_8);
        g_currentExceptionFrame = local_58.previous;
      }
      else {
        uVar2 = local_c;
        if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
          uVar2 = local_c;
        }
      }
    }
    else {
      g_currentExceptionFrame = local_58.previous;
      uVar2 = local_c;
      local_10 = exceptionCode;
    }
  }
  *param_2 = uVar2;
  if (exceptionCode == 0) {
    return 0;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddx_c_007edc48,0x2b7);
  return exceptionCode;
}

