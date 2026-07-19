
uint __fastcall FUN_006d5ed0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  InternalExceptionFrame local_5c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  LPCRITICAL_SECTION local_8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + 0x288);
  if (param_1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  }
  local_10 = iVar4;
  local_c = param_1;
  local_8 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  uVar2 = FUN_00749415(param_1);
  local_18 = uVar2;
  if ((int)uVar2 < 0) {
    LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x58) + 0x44) + 0x30;
      local_14 = iVar5;
      if (*(int *)(*(int *)(param_1 + 0x5c) + 0x310) == 0) {
        local_5c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_5c;
        uVar2 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
        param_1 = local_c;
        iVar4 = local_10;
        iVar5 = local_14;
        if (uVar2 != 0) {
          g_currentExceptionFrame = local_5c.previous;
          LeaveCriticalSection(local_8);
          return uVar2;
        }
        if (*(int *)(local_c + 0x70) == 0) {
          uVar2 = (int)*(uint *)(local_14 + 8) >> 0x1f;
          FUN_006c4350(*(int *)(local_10 + 0x28),(undefined4 *)(local_c + 100),
                       *(undefined4 *)(local_14 + 4),(*(uint *)(local_14 + 8) ^ uVar2) - uVar2,0,
                       *(uint *)(local_10 + 4) & 0xc);
        }
        g_currentExceptionFrame = local_5c.previous;
      }
      else {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x40);
      }
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 0x2000000;
      this = (void *)FUN_0072e530(0x48);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_006d6160(this,param_1,0,&local_18,*(undefined4 *)(param_1 + 100),
                              *(undefined4 *)(iVar5 + 0x14));
      }
      *(undefined4 **)(param_1 + 0x60) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        if ((*(int *)(*(int *)(param_1 + 0x5c) + 0x310) == 0) &&
           (piVar1 = *(int **)(param_1 + 100), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(param_1 + 100) = 0;
        }
        LeaveCriticalSection(local_8);
        return 0x8007000e;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      puVar3[7] = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 **)(param_1 + 0x28) = puVar3;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      iVar5 = *(int *)(param_1 + 0x3c) + 1;
      *(int *)(param_1 + 0x3c) = iVar5;
    } while (iVar5 < *(int *)(param_1 + 0x38));
  }
  LeaveCriticalSection(local_8);
  return 0;
}

