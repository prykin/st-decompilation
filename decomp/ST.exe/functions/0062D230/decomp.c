
uint __thiscall FUN_0062d230(void *this,int *param_1)

{
  AnonShape_006B0C70_7C4FE646 *groupContent;
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  groupContent = *(AnonShape_006B0C70_7C4FE646 **)((int)this + *param_1 * 4 + 0x30);
  if (groupContent != (AnonShape_006B0C70_7C4FE646 *)0x0) {
    uVar1 = groupContent->field_000C;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      while ((((!bVar4 ||
               (iVar2 = groupContent->field_0008 * uVar3 + groupContent->field_001C, iVar2 == 0)) ||
              (*(int *)(iVar2 + 4) != param_1[1])) ||
             (((*(int *)(iVar2 + 8) != param_1[2] || (*(int *)(iVar2 + 0xc) != param_1[3])) ||
              (*(int *)(iVar2 + 0x14) != param_1[5]))))) {
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
        if ((int)uVar1 <= (int)uVar3) {
          return 0xffffffff;
        }
      }
      FUN_006b0c70(groupContent,uVar3);
      return uVar3;
    }
  }
  return 0xffffffff;
}

