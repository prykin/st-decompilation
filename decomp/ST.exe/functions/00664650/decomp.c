
undefined4 __thiscall FUN_00664650(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  uint uVar3;
  bool bVar4;
  
  groupContent = *(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x217);
  iVar1 = groupContent->field_000C;
  if (iVar1 != 0) {
    uVar3 = 0;
    if (0 < iVar1) {
      bVar4 = iVar1 != 0;
      do {
        if (bVar4) {
          piVar2 = (int *)(groupContent->field_0008 * uVar3 + groupContent->field_001C);
        }
        else {
          piVar2 = (int *)0x0;
        }
        if (*piVar2 == param_1) {
          FUN_006b0c70(groupContent,uVar3);
        }
        groupContent = *(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x217);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < (uint)groupContent->field_000C;
      } while ((int)uVar3 < (int)groupContent->field_000C);
    }
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}

