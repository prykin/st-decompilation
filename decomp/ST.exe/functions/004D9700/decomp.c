
undefined4 __fastcall FUN_004d9700(int param_1)

{
  uint uVar1;
  int local_8;
  
  if (PTR_007fa16c != (DArrayTy *)0x0) {
    uVar1 = 0;
    local_8 = param_1;
    if (0 < (int)PTR_007fa16c->count) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa16c,uVar1,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)PTR_007fa16c,uVar1);
          break;
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)PTR_007fa16c->count);
    }
    if (PTR_007fa16c->count == 0) {
      FUN_006ae110((byte *)PTR_007fa16c);
      PTR_007fa16c = (DArrayTy *)0x0;
    }
  }
  return 0;
}

