
void thunk_FUN_005be310(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)((int)pvStack_8 + 0x1d);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)pvStack_8 + 0x2d) = 0x14;
    *(undefined4 *)((int)pvStack_8 + 0x31) = *(undefined4 *)((int)pvStack_8 + 8);
    FUN_006e6000(pvStack_8,3,1,(undefined4 *)((int)pvStack_8 + 0x1d));
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (DAT_00802a30 != 0) {
      thunk_FUN_00544940(DAT_00802a30);
    }
    puVar4 = (undefined4 *)((int)pvStack_8 + 0x347);
    iVar2 = 3;
    do {
      if ((byte *)*puVar4 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)((int)pvStack_8 + 0x453) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)((int)pvStack_8 + 0x453));
      *(undefined4 *)((int)pvStack_8 + 0x453) = 0;
    }
    if (*(int *)((int)pvStack_8 + 0x457) != 0) {
      thunk_FUN_005aafb0();
      FUN_0072e2b0(*(undefined4 **)((int)pvStack_8 + 0x457));
      *(undefined4 *)((int)pvStack_8 + 0x457) = 0;
    }
    FUN_006f20e0((uint *)((int)pvStack_8 + 0x5d));
    FUN_006f20e0((uint *)((int)pvStack_8 + 0x6f));
    if (*(int *)((int)pvStack_8 + 0x77) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_8 + 0x77));
    }
    if (*(int *)((int)pvStack_8 + 0x7b) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_8 + 0x7b));
    }
    if (*(int *)((int)pvStack_8 + 0x73) != 0) {
      FUN_006ab060((undefined4 *)((int)pvStack_8 + 0x73));
    }
    if (*(uint **)((int)pvStack_8 + 0x83) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_8 + 0x83));
      *(undefined4 *)((int)pvStack_8 + 0x83) = 0;
    }
    if (*(uint **)((int)pvStack_8 + 0x87) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_8 + 0x87));
      *(undefined4 *)((int)pvStack_8 + 0x87) = 0;
      *(undefined4 *)(DAT_0081176c + 0x38) = 0;
    }
    if (*(uint **)((int)pvStack_8 + 0x8b) != (uint *)0x0) {
      FUN_00710560(*(uint **)((int)pvStack_8 + 0x8b));
      *(undefined4 *)((int)pvStack_8 + 0x8b) = 0;
    }
    *(undefined4 *)((int)pvStack_8 + 0x7f) = 0;
    if (*(int *)((int)pvStack_8 + 0x4d) != 0) {
      FUN_006e3b50((undefined4 *)((int)pvStack_8 + 0x3d));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0xe5,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7ccec8,0xe5);
  return;
}

