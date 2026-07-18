
int * FUN_00753920(LPCSTR param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 ***local_50;
  undefined4 local_4c [16];
  int *local_c;
  uint local_8;
  
  piVar2 = FUN_006aac10(0x28);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar2 = DAT_007f2c38;
  piVar2[1] = 0x101;
  local_c = piVar2;
  uVar3 = FUN_00755180((int)piVar2,param_1,param_2,param_3);
  local_8 = uVar3;
  if (uVar3 == 0) {
    local_50 = DAT_00858df8;
    DAT_00858df8 = &local_50;
    uVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
    piVar2 = local_c;
    uVar1 = uVar3;
    if (uVar3 == 0) {
      FUN_006d49f0(local_c[2],0,(undefined4 *)(local_c[2] + 0x10),0x20);
      iVar4 = piVar2[2];
      if (*(int *)(iVar4 + 0x10) == *piVar2) {
        if ((char)((ushort)*(undefined2 *)(iVar4 + 0x14) >> 8) !=
            (char)((ushort)(short)piVar2[1] >> 8)) {
          local_8 = 0xffffffcb;
        }
      }
      else {
        local_8 = 0xfffffffb;
      }
      uVar3 = local_8;
      uVar1 = local_8;
      if (local_8 == 0) {
        if (*(int *)(iVar4 + 0x22) == 0) {
          *(undefined4 *)(iVar4 + 0x22) = 0x20;
        }
        iVar4 = piVar2[2];
        DVar5 = *(DWORD *)(iVar4 + 0x22);
        if (DVar5 == 0xffffffff) {
          DVar5 = 0x20;
          iVar4 = FUN_00755330(iVar4,piVar2[5] + 4,0x20);
          *(int *)(piVar2[2] + 0x26) = iVar4;
          FUN_006d49f0(piVar2[2],0x20,(undefined4 *)(*(int *)(piVar2[2] + 0x4c) + 0x20),0x20);
          FUN_007550c0(*(int *)(piVar2[2] + 0x4c),param_2);
          uVar3 = FUN_00754fd0((int)piVar2,0x20,*(undefined2 *)(*(int *)(piVar2[2] + 0x4c) + 0x2e));
          local_8 = uVar3;
          if (uVar3 != 0) goto LAB_00753aac;
          iVar4 = FUN_007552d0(piVar2[2],piVar2[5],0x20);
          *(int *)(piVar2[2] + 0x22) = iVar4;
        }
        else {
          FUN_006d49f0(iVar4,DVar5,(undefined4 *)(*(int *)(iVar4 + 0x4c) + 0x20),0x20);
        }
        *(DWORD *)(*(int *)(piVar2[2] + 0x4c) + 0x18) = DVar5;
        FUN_00750f20((int)piVar2,0,0);
        uVar1 = local_8;
      }
    }
    local_8 = uVar1;
    DAT_00858df8 = (undefined4 ****)local_50;
    if (uVar3 == 0) {
      return piVar2;
    }
  }
LAB_00753aac:
  FUN_007532a0(piVar2);
  FUN_006a5e40(uVar3,DAT_007ed77c,0x7f2c40,0x4e);
  return (int *)0x0;
}

