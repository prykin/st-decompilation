
undefined4 __cdecl FUN_00553060(int param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;

  if (PTR_00802a4c != (AnonShape_GLOBAL_00802A4C_E3045C67 *)0x0) {
    uVar1 = PTR_00802a4c->field_000C;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar4 = uVar1 != 0;
      do {
        if ((((bVar4) &&
             (psVar2 = (short *)(PTR_00802a4c->field_0008 * uVar3 + PTR_00802a4c->field_001C),
             psVar2 != (short *)0x0)) && (*(int *)(psVar2 + 1) != 0)) && (*psVar2 == param_1)) {
          return *(undefined4 *)(psVar2 + 1);
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return 0;
}

