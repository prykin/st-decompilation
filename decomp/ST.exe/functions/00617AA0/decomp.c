
void __thiscall FUN_00617aa0(void *this,int param_1)

{
  int iVar1;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  uint uVar2;
  bool bVar3;
  
  groupContent = *(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x5e);
  if (groupContent != (AnonShape_006B0C70_7C4FE646 *)0x0) {
    uVar2 = 0;
    if (0 < (int)groupContent->field_000C) {
      bVar3 = groupContent->field_000C != 0;
      do {
        if (bVar3) {
          iVar1 = groupContent->field_0008 * uVar2 + groupContent->field_001C;
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0x1c) == param_1) {
          FUN_006b0c70(groupContent,uVar2);
        }
        groupContent = *(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x5e);
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < (uint)groupContent->field_000C;
      } while ((int)uVar2 < (int)groupContent->field_000C);
    }
  }
  return;
}

