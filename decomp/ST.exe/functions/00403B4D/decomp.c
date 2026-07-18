
void thunk_FUN_00596cc0(char param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  UINT UStack_8;
  
  UStack_8 = 0;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_ESI,unaff_EBX);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x1c8,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7cbf70,0x1c8);
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(iStack_c + 0x5d));
  switch(*(undefined1 *)(iStack_c + 0x1a5f)) {
  case 1:
    if (UStack_8 == 0) {
      UStack_8 = 0x2563;
      goto LAB_00596d58;
    }
    break;
  case 2:
LAB_00596d58:
    if (UStack_8 == 0) {
      UStack_8 = 0x2553;
      goto LAB_00596d69;
    }
    break;
  case 3:
    if (*(int *)(iStack_c + 0x1f23) != 0) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    if (param_1 != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    thunk_FUN_005b68b0(DAT_0080759c,0,0,0x22,0x72,0x2e1,0x14c,
                       (undefined4 *)(*(int *)(iStack_c + 0x1a5b) + 0x140));
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  case 4:
LAB_00596d69:
    if (UStack_8 == 0) {
      UStack_8 = 0x2552;
      goto LAB_00596d7a;
    }
    break;
  case 5:
LAB_00596d7a:
    if (UStack_8 == 0) {
      UStack_8 = 0x2562;
      goto LAB_00596d8b;
    }
    break;
  case 6:
    if ((*(int *)(iStack_c + 0x1f27) == 0) && (param_1 == '\0')) {
      thunk_FUN_00594b90(DAT_0080759c,0,0,0x13,0x5e,0x1bf,0x175,
                         (undefined4 *)(*(int *)(iStack_c + 0x1a5b) + 0x140));
    }
    if (*(int *)(iStack_c + 0x1f2b) != 0) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    if (param_1 != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    thunk_FUN_00594eb0(DAT_0080759c,0,0,0x1e9,0x5e,0x124,0x175,*(int *)(iStack_c + 0x1a5b) + 0x140);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  case 7:
LAB_00596d8b:
    if (UStack_8 == 0) {
      UStack_8 = 0x255b;
      goto LAB_00596d9c;
    }
    break;
  case 8:
    if ((*(int *)(iStack_c + 0x1f2f) == 0) && (param_1 == '\0')) {
      thunk_FUN_005952b0(DAT_0080759c,0,0,0x199,0x5e,0x174,0x175,*(int *)(iStack_c + 0x1a5b) + 0x140
                        );
    }
    if (*(int *)(iStack_c + 0x1f2b) != 0) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    if (param_1 != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    thunk_FUN_005b68b0(DAT_0080759c,0,0,0x13,0x5e,0x174,0x175,
                       (undefined4 *)(*(int *)(iStack_c + 0x1a5b) + 0x140));
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  case 9:
    if (*(int *)(iStack_c + 0x1f23) != 0) {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    if (param_1 != '\0') {
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    thunk_FUN_005956c0(DAT_0080759c,0,0,0x22,0x5e,0x2e1,0x175);
    thunk_FUN_0059b2c0(iStack_c);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  case 10:
LAB_00596d9c:
    if (UStack_8 == 0) {
      UStack_8 = 0x259c;
    }
    break;
  default:
    goto switchD_00596d3d_default;
  }
  if ((*(int *)(iStack_c + 0x1f23) == 0) && (param_1 == '\0')) {
    thunk_FUN_00594d40(DAT_0080759c,0,0,0xb4,
                       (-(uint)(*(char *)(iStack_c + 0x1abb) != '\0') & 0xffffffb4) + 0xaa,0x1b8,
                       (-(uint)(*(char *)(iStack_c + 0x1abb) != '\0') & 0x74) + 0x106,UStack_8);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
switchD_00596d3d_default:
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

