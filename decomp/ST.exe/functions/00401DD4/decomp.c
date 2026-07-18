
undefined4 __thiscall thunk_FUN_004d0a80(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x245)) {
    piVar1 = *(int **)((int)this + 0x24d);
    piVar2 = piVar1;
    while (((*piVar2 != param_1 || (piVar2[1] != param_2)) || (piVar2[2] != param_3))) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 3;
      if (*(int *)((int)this + 0x245) <= iVar5) {
        return 0;
      }
    }
    iVar3 = thunk_FUN_00495ff0((short)piVar1[iVar5 * 3],(short)piVar1[iVar5 * 3 + 1],
                               (short)piVar1[iVar5 * 3 + 2],0,(int)this);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7bf39c,0x305);
    }
    if (iVar5 < *(int *)((int)this + 0x245) + -1) {
      puVar6 = (undefined4 *)(*(int *)((int)this + 0x24d) + (iVar5 * 3 + 3) * 4);
      puVar7 = (undefined4 *)(iVar5 * 0xc + *(int *)((int)this + 0x24d));
      for (uVar4 = ((*(int *)((int)this + 0x245) - iVar5) + -1) * 3 & 0x3fffffff; uVar4 != 0;
          uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    *(int *)((int)this + 0x245) = *(int *)((int)this + 0x245) + -1;
  }
  return 0;
}

