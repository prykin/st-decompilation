
undefined4 __thiscall FUN_00630ac0(void *this,uint param_1)

{
  int iVar1;
  short sVar2;
  DArrayTy *groupContent;
  short *psVar3;
  int iVar4;
  int iVar5;

  groupContent = *(DArrayTy **)((int)this + 0x38);
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(groupContent, param_1) (runtime stride) */
  if ((groupContent->count <= param_1) ||
     (psVar3 = (short *)(groupContent->elementSize * param_1 + (int)groupContent->data),
     psVar3 == (short *)0x0)) {
    return 0;
  }
  sVar2 = psVar3[3];
  iVar5 = ((int)psVar3[2] * (int)g_worldGrid.sizeX + (int)psVar3[1]) * (int)g_worldGrid.sizeY +
          (int)*psVar3;
  iVar1 = g_worldGrid.sizeY + iVar5;
  iVar4 = FUN_006b0c70(groupContent,param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if (sVar2 == 1) {
    *(undefined1 *)(*(int *)((int)this + 0x34) + iVar5) = 0;
    return 1;
  }
  *(undefined1 *)(iVar5 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar5 + 1 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar1 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar1 + 1 + *(int *)((int)this + 0x34)) = 0;
  return 1;
}

