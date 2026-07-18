
undefined4 __fastcall FUN_00631450(void *param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  short *psVar4;
  
  if ((*(int *)((int)param_1 + 0x38) != 0) &&
     (uVar3 = *(int *)(*(int *)((int)param_1 + 0x38) + 0xc) - 1, -1 < (int)uVar3)) {
    do {
      iVar1 = *(int *)((int)param_1 + 0x38);
      if (uVar3 < *(uint *)(iVar1 + 0xc)) {
        psVar4 = (short *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c));
      }
      else {
        psVar4 = (short *)0x0;
      }
      thunk_FUN_00630bb0(param_1,*psVar4,psVar4[1],psVar4[2],*(undefined4 *)(psVar4 + 4),
                         (int)psVar4[3],*(undefined4 *)(psVar4 + 10));
      puVar2 = thunk_FUN_00630c50(*(undefined4 *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x4c)
                                  ,0,1,*(int *)(psVar4 + 10));
      *(ushort **)(psVar4 + 8) = puVar2;
      if (puVar2 == (ushort *)0x0) {
        FUN_006b0c70(*(int *)((int)param_1 + 0x38),uVar3);
      }
      uVar3 = uVar3 - 1;
    } while (-1 < (int)uVar3);
    return 0;
  }
  return 0;
}

