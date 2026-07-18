
void __fastcall thunk_FUN_00664760(int param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  short sStack_10;
  short asStack_e [5];
  
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x22f);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  bVar5 = *(int *)(iVar3 + 0xc) != 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      if (bVar5) {
        psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        psVar2 = (short *)0x0;
      }
      thunk_FUN_006756d0(psVar2,psVar2 + 1,psVar2 + 3,psVar2 + 4);
      iVar3 = *(int *)(param_1 + 0x22f);
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
  }
  iVar3 = *(int *)(param_1 + 0x223);
  uVar4 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    bVar5 = *(int *)(iVar3 + 0xc) != 0;
    do {
      if (bVar5) {
        psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        psVar2 = (short *)0x0;
      }
      psVar1 = psVar2 + 1;
      thunk_FUN_00675950(CONCAT22((short)((uint)psVar2 >> 0x10),*psVar2),
                         CONCAT22((short)((uint)psVar1 >> 0x10),*psVar1),psVar2[2],psVar2,psVar1,
                         psVar2 + 2,0);
      iVar3 = *(int *)(param_1 + 0x223);
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
  }
  if (((*(char *)(param_1 + 0x163) == '\x01') && (*(int *)(*(int *)(param_1 + 0x22f) + 0xc) == 0))
     && (iVar3 = *(int *)(param_1 + 0x284), iVar3 != 0)) {
    sStack_10 = *(short *)(iVar3 + 0x82) + -4;
    asStack_e[0] = *(short *)(iVar3 + 0x84) + -4;
    asStack_e[2] = 9;
    asStack_e[3] = 9;
    asStack_e[1] = 0;
    asStack_e[4] = 5;
    thunk_FUN_006756d0(&sStack_10,asStack_e,asStack_e + 2,asStack_e + 3);
    thunk_FUN_0065f1d0(&sStack_10);
  }
  if ((*(char *)(param_1 + 0x122) == '\x01') && (*(int *)(*(int *)(param_1 + 0x223) + 0xc) == 0)) {
    iVar3 = *(int *)(param_1 + 0x22f);
    uVar4 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar5 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar5) {
          psVar2 = (short *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          psVar2 = (short *)0x0;
        }
        thunk_FUN_0065f660(psVar2,5);
        iVar3 = *(int *)(param_1 + 0x22f);
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
  }
  return;
}

