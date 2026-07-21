
undefined4 __fastcall FUN_004d9700(int param_1)

{
  uint index;
  int local_8;
  
  if (PTR_007fa16c != (DArrayTy *)0x0) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)PTR_007fa16c->count) {
      do {
        DArrayGetElement(PTR_007fa16c,index,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)PTR_007fa16c,index);
          break;
        }
        index = index + 1;
      } while ((int)index < (int)PTR_007fa16c->count);
    }
    if (PTR_007fa16c->count == 0) {
      DArrayDestroy(PTR_007fa16c);
      PTR_007fa16c = (DArrayTy *)0x0;
    }
  }
  return 0;
}

