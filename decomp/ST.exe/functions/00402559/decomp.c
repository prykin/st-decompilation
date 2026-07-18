
int __thiscall thunk_FUN_005ec850(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_24 [8];
  
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x2d6) = 0xffffffff;
  *(undefined1 *)((int)this + 0x316) = 0;
  iVar1 = *param_1;
  aiStack_24[7] = iVar1;
  aiStack_24[0] = FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + aiStack_24[0]) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  *(undefined4 *)(aiStack_24[0] + 0x24) = DAT_00806764;
  aiStack_24[1] = 0;
  aiStack_24[2] = 0;
  aiStack_24[3] = 0;
  aiStack_24[4] = 0;
  aiStack_24[5] = 0x10;
  aiStack_24[6] = 0;
  thunk_FUN_004adba0(aiStack_24,param_1 + 1);
  uVar3 = thunk_FUN_004ad650((int)this + 0x1d5);
  *(undefined4 *)((int)this + 0x2d6) = uVar3;
  FUN_006ab060(aiStack_24);
  if ((((*(int *)((int)this + 0x23a) == 8) && (*(char *)((int)this + 0x2b9) != '\0')) &&
      (uVar4 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x28f)) + 0x15, 0 < (int)uVar4)
      ) && ((int)uVar4 < 0x15)) {
    iVar2 = *(int *)((int)this + 0x2c6);
    iVar8 = *(int *)((int)this + 0x2be);
    iVar9 = *(int *)((int)this + 0x2c2);
    iVar7 = 1;
    uVar5 = thunk_FUN_004ad650((int)this + 0x1d5);
    thunk_FUN_006377b0(uVar5,iVar7,iVar8,iVar9,iVar2,uVar4);
  }
  piVar6 = (int *)((int)(param_1 + 1) + iVar1);
  iVar1 = *piVar6;
  thunk_FUN_00422210(piVar6 + 1);
  return iVar1 + aiStack_24[7];
}

