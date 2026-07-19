
int FUN_006c44e0(int param_1,undefined4 *param_2)

{
  int exceptionCode;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_38;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  local_80 = 0x7c;
  local_7c = 0x1006;
  local_38 = 0x20;
  exceptionCode = (**(code **)(*(int *)*param_2 + 0x58))((int *)*param_2,&local_80);
  if (exceptionCode == 0) {
    *(undefined4 *)(param_1 + 0x40) = *param_2;
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    if (*(int *)(param_1 + 0x20) == 0x10) {
      FUN_006ab060((undefined4 *)(param_1 + 0x4c0));
    }
    *(undefined4 *)(param_1 + 0x4c0) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = local_74;
    *(int *)(param_1 + 0x1c) = local_78;
    *(int *)(param_1 + 0x20) = local_2c;
    if (local_2c == 0x10) {
      iVar3 = 0;
      *(uint *)(param_1 + 0x4c4) = local_28;
      *(uint *)(param_1 + 0x4c8) = local_24;
      *(uint *)(param_1 + 0x4cc) = local_20;
      for (; (local_28 & 0x8000) == 0; local_28 = local_28 << 1) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = 0;
      for (; (local_24 & 0x8000) == 0; local_24 = local_24 << 1) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = 0;
      for (; (local_20 & 0x8000) == 0; local_20 = local_20 << 1) {
        iVar1 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x4d4) = iVar2;
      *(int *)(param_1 + 0x4d8) = iVar1;
      *(int *)(param_1 + 0x4d0) = iVar3;
    }
    *(undefined4 *)(param_1 + 0x50) = local_74;
    *(int *)(param_1 + 0x54) = -local_78;
    *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x20);
  }
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if (exceptionCode == 0) {
    return 0;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcreats_c_007edef4,0x59);
  return exceptionCode;
}

