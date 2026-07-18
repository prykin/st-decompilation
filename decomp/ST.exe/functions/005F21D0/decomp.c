
int __fastcall FUN_005f21d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0xc);
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x38);
        if ((uVar5 < *(uint *)(iVar2 + 0xc)) &&
           (psVar4 = (short *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c)),
           psVar4 != (short *)0x0)) {
          puVar3 = thunk_FUN_005f1e40((uint)*(byte *)(psVar4 + 3),(int)*(short *)((int)psVar4 + 7),
                                      (int)(short)(*psVar4 * 0xc9 + 100),
                                      (int)(short)(psVar4[1] * 0xc9 + 100),
                                      (int)(short)(psVar4[2] * 200 + 100));
          *(undefined4 **)((int)psVar4 + 0xd) = puVar3;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + 0x3c);
        if (((uVar5 < *(uint *)(iVar2 + 0xc)) &&
            (psVar4 = (short *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c)),
            psVar4 != (short *)0x0)) && (*(int *)(psVar4 + 0xc) != -1)) {
          thunk_FUN_005f1700((uint)*(byte *)(psVar4 + 3),(int)*(short *)((int)psVar4 + 7),0,
                             (int)(short)(*psVar4 * 0xc9 + 100),(int)(short)(psVar4[1] * 0xc9 + 100)
                             ,(int)(short)(psVar4[2] * 200 + 100),uVar5);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
    return iVar1;
  }
  return 0;
}

