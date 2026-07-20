
void FUN_00553270(void)

{
  int iVar1;
  AnonShape_GLOBAL_00802A4C_E3045C67 *groupContent;
  uint uVar2;
  bool bVar3;
  
  if (PTR_00802a4c != (AnonShape_GLOBAL_00802A4C_E3045C67 *)0x0) {
    uVar2 = 0;
    groupContent = PTR_00802a4c;
    if (0 < (int)PTR_00802a4c->field_000C) {
      bVar3 = PTR_00802a4c->field_000C != 0;
      do {
        if (((bVar3) &&
            (iVar1 = groupContent->field_0008 * uVar2 + groupContent->field_001C, iVar1 != 0)) &&
           (*(int *)(iVar1 + 2) != 0)) {
          FUN_006ab060((LPVOID *)(iVar1 + 2));
          groupContent = PTR_00802a4c;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < (uint)groupContent->field_000C;
      } while ((int)uVar2 < (int)groupContent->field_000C);
    }
    FUN_006ae110((byte *)groupContent);
    PTR_00802a4c = (AnonShape_GLOBAL_00802A4C_E3045C67 *)0x0;
  }
  return;
}

