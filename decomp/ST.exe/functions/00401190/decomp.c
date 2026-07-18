
void thunk_FUN_00503bb0(uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 auStack_9c [9];
  undefined4 auStack_78 [9];
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar4 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x2ff,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7c2524,0x2ff);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_005252c0(0xae);
  *(undefined4 *)((int)pvStack_10 + 300) = 0;
  if (*(char *)((int)pvStack_10 + 0xb64) == '\0') {
    thunk_FUN_004f8020(pvStack_10,'\x01',0);
  }
  *(undefined4 *)((int)pvStack_10 + 300) = 1;
  if (DAT_008016e8 != (void *)0x0) {
    thunk_FUN_0053f650(DAT_008016e8,'\0');
  }
  if (DAT_0080167c != (void *)0x0) {
    thunk_FUN_0053f650(DAT_0080167c,'\0');
  }
  if (DAT_00801680 != (void *)0x0) {
    thunk_FUN_0053f650(DAT_00801680,'\0');
  }
  if (DAT_00801698 != (int *)0x0) {
    (**(code **)(*DAT_00801698 + 0x1c))(0);
  }
  if (DAT_00802a44 != (void *)0x0) {
    thunk_FUN_00552160(DAT_00802a44,'\0','\0');
  }
  if (DAT_00801684 != (void *)0x0) {
    thunk_FUN_0053f650(DAT_00801684,'\0');
  }
  if (DAT_00801678 != (int *)0x0) {
    (**(code **)(*DAT_00801678 + 0x1c))(0);
  }
  if (DAT_008016ec != (int *)0x0) {
    (**(code **)(*DAT_008016ec + 0x1c))(0);
  }
  if (DAT_00802a48 != (int *)0x0) {
    (**(code **)(*DAT_00802a48 + 0x1c))(0);
  }
  if (DAT_0080168c != (int *)0x0) {
    (**(code **)(*DAT_0080168c + 0x1c))(0);
  }
  thunk_FUN_0054a8d0(DAT_00802a30);
  bVar1 = *(byte *)((param_1 & 0xff) + 0xba2 + (int)pvStack_10);
  switch((uint)bVar1) {
  case 1:
    uStack_5 = 0;
    thunk_FUN_0054edf0((undefined4 *)0xa,(undefined4 *)&uStack_5,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x18:
    thunk_FUN_0054b630(DAT_00802a30,(uint)bVar1,0);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  case 4:
    puVar6 = auStack_78;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)puVar6 = 0;
    auStack_78[0]._0_1_ = 10;
    thunk_FUN_0054edf0((undefined4 *)0x17,auStack_78,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  case 0xb:
  case 0xc:
    uStack_6 = bVar1 == 0xb;
    thunk_FUN_0054edf0((undefined4 *)0x28,(undefined4 *)&uStack_6,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  case 0xe:
    if ((DAT_00801684 != (void *)0x0) && (*(short *)((int)DAT_00801684 + 0x172) == 2)) {
      thunk_FUN_0053f650(DAT_00801684,'\x01');
    }
    break;
  case 0x14:
    uStack_8 = 0;
    uStack_c = 3;
    thunk_FUN_0054edf0((undefined4 *)0x21,&uStack_c,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  default:
    goto switchD_00503d36_caseD_15;
  case 0x2f:
    if ((DAT_00801678 != (int *)0x0) && (*(short *)((int)DAT_00801678 + 0x172) == 2)) {
      (**(code **)(*DAT_00801678 + 0x1c))(1);
    }
    break;
  case 0x48:
    puVar6 = auStack_9c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined1 *)puVar6 = 0;
    auStack_9c[0]._0_1_ = 0x14;
    thunk_FUN_0054edf0((undefined4 *)0x17,auStack_9c,0,0xffffffff);
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  case 0x4c:
    if ((DAT_008016ec != (int *)0x0) && (*(short *)((int)DAT_008016ec + 0x172) == 2)) {
      (**(code **)(*DAT_008016ec + 0x1c))(1);
    }
  }
  thunk_FUN_004fad20(pvStack_10);
switchD_00503d36_caseD_15:
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

