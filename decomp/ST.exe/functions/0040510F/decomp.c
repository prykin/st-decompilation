
void __thiscall thunk_FUN_00568010(void *this,undefined1 param_1)

{
  void *this_00;
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar2;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  if (*(int *)((int)this + 0xf8b) != 0) {
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    pvStack_c = this;
    iVar1 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    this_00 = pvStack_c;
    if (iVar1 == 0) {
      switch(param_1) {
      case 1:
        iVar1 = 2;
        puVar2 = (undefined4 *)((int)pvStack_c + 0xe23);
        do {
          if ((((0x1a < iVar1) && (iVar1 < 0x1e)) || ((0x11 < iVar1 && (iVar1 < 0x15)))) &&
             (FUN_006c1f00(iVar1,&uStack_8,(uint *)0x0), uStack_8 == 1)) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x20);
        DAT_00858df8 = (undefined4 *)uStack_50;
        return;
      case 2:
        iVar1 = 4;
        puVar2 = (undefined4 *)((int)pvStack_c + 0xe3b);
        do {
          FUN_006c1f00(iVar1,&uStack_8,(uint *)0x0);
          if (uStack_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0xb);
        DAT_00858df8 = (undefined4 *)uStack_50;
        return;
      case 4:
        iVar1 = 2;
        do {
          if (((((1 < iVar1) && (iVar1 < 4)) || ((0x1d < iVar1 && (iVar1 < 0x20)))) ||
              ((10 < iVar1 && (iVar1 < 0x12)))) &&
             (FUN_006c1f00(iVar1,&uStack_8,(uint *)0x0), uStack_8 == 1)) {
            *(undefined4 *)((int)this_00 + iVar1 * 0xc + 0xe0b) = 0;
            *(undefined4 *)((int)this_00 + iVar1 * 0xc + 0xe0f) = 0;
            *(undefined4 *)((int)this_00 + iVar1 * 0xc + 0xe13) = 0;
            FUN_006c1ba0(iVar1);
            if (iVar1 == 2) {
              thunk_FUN_00568dd0(this_00,1,(char *)0x0,0x4b7,(int *)0x0,0);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 0x20);
        DAT_00858df8 = (undefined4 *)uStack_50;
        return;
      case 8:
        iVar1 = 0x15;
        puVar2 = (undefined4 *)((int)pvStack_c + 0xf07);
        do {
          FUN_006c1f00(iVar1,&uStack_8,(uint *)0x0);
          if (uStack_8 == 1) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_006c1ba0(iVar1);
          }
          iVar1 = iVar1 + 1;
          puVar2 = puVar2 + 3;
        } while (iVar1 < 0x1a);
      }
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
  }
  return;
}

