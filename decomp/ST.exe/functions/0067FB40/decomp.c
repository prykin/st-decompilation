
void FUN_0067fb40(void)

{
  int *piVar1;
  AnonShape_GLOBAL_00848A38_AD917B6C *groupContent;
  uint uVar2;
  bool bVar3;
  
  if (PTR_00848a38 != (AnonShape_GLOBAL_00848A38_AD917B6C *)0x0) {
    uVar2 = 0;
    groupContent = PTR_00848a38;
    if (0 < (int)PTR_00848a38->field_000C) {
      bVar3 = PTR_00848a38->field_000C != 0;
      do {
        if (((bVar3) &&
            (piVar1 = (int *)(groupContent->field_0008 * uVar2 + groupContent->field_001C),
            piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
          thunk_FUN_0064a800(piVar1);
          groupContent = PTR_00848a38;
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < (uint)groupContent->field_000C;
      } while ((int)uVar2 < (int)groupContent->field_000C);
    }
    FUN_006ae110((byte *)groupContent);
    PTR_00848a38 = (AnonShape_GLOBAL_00848A38_AD917B6C *)0x0;
  }
  if (DAT_00848a3c != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570(DAT_00848a3c);
  }
  DAT_00848a3c = (AnonShape_006B5570_4D68B99C *)0x0;
  return;
}

