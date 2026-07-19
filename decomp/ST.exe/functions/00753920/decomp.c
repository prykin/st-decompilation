
int * FUN_00753920(LPCSTR param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint exceptionCode;
  int iVar3;
  DWORD DVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int *local_c;
  uint local_8;
  
  piVar2 = FUN_006aac10(0x28);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar2 = DAT_007f2c38;
  piVar2[1] = 0x101;
  local_c = piVar2;
  exceptionCode = FUN_00755180((int)piVar2,param_1,param_2,param_3);
  local_8 = exceptionCode;
  if (exceptionCode == 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    exceptionCode = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    piVar2 = local_c;
    uVar1 = exceptionCode;
    if (exceptionCode == 0) {
      FUN_006d49f0(local_c[2],0,(undefined4 *)(local_c[2] + 0x10),0x20);
      iVar3 = piVar2[2];
      if (*(int *)(iVar3 + 0x10) == *piVar2) {
        if ((char)((ushort)*(undefined2 *)(iVar3 + 0x14) >> 8) !=
            (char)((ushort)(short)piVar2[1] >> 8)) {
          local_8 = 0xffffffcb;
        }
      }
      else {
        local_8 = 0xfffffffb;
      }
      exceptionCode = local_8;
      uVar1 = local_8;
      if (local_8 == 0) {
        if (*(int *)(iVar3 + 0x22) == 0) {
          *(undefined4 *)(iVar3 + 0x22) = 0x20;
        }
        iVar3 = piVar2[2];
        DVar4 = *(DWORD *)(iVar3 + 0x22);
        if (DVar4 == 0xffffffff) {
          DVar4 = 0x20;
          iVar3 = FUN_00755330(iVar3,piVar2[5] + 4,0x20);
          *(int *)(piVar2[2] + 0x26) = iVar3;
          FUN_006d49f0(piVar2[2],0x20,(undefined4 *)(*(int *)(piVar2[2] + 0x4c) + 0x20),0x20);
          FUN_007550c0(*(int *)(piVar2[2] + 0x4c),param_2);
          exceptionCode =
               FUN_00754fd0((int)piVar2,0x20,*(undefined2 *)(*(int *)(piVar2[2] + 0x4c) + 0x2e));
          local_8 = exceptionCode;
          if (exceptionCode != 0) goto LAB_00753aac;
          iVar3 = FUN_007552d0(piVar2[2],piVar2[5],0x20);
          *(int *)(piVar2[2] + 0x22) = iVar3;
        }
        else {
          FUN_006d49f0(iVar3,DVar4,(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x20),0x20);
        }
        *(DWORD *)(*(int *)(piVar2[2] + 0x4c) + 0x18) = DVar4;
        FUN_00750f20((int)piVar2,0,0);
        uVar1 = local_8;
      }
    }
    local_8 = uVar1;
    g_currentExceptionFrame = local_50.previous;
    if (exceptionCode == 0) {
      return piVar2;
    }
  }
LAB_00753aac:
  FUN_007532a0(piVar2);
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btopen_c_007f2c40,0x4e);
  return (int *)0x0;
}

