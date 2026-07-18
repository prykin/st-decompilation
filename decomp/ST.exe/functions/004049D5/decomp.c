
void thunk_FUN_005c4e20(char param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar3 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(iStack_8 + 0x5d));
    cVar1 = *(char *)(iStack_8 + 0x1e26);
    if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) {
      if ((*(int *)(iStack_8 + 0x21f0) == 0) && (param_1 == '\0')) {
        thunk_FUN_005b67a0(DAT_0080759c,0,0,10,0xb4,0xf9,0x123,
                           (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
      }
    }
    else if (((*(int *)(iStack_8 + 0x21ec) == 0) && (param_1 == '\0')) ||
            ((param_1 != '\0' && (*(char *)(iStack_8 + 0x21e2) == '\0')))) {
      thunk_FUN_005b68b0(DAT_0080759c,0,0,10,0xb4,0xf9,0x121,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    cVar1 = *(char *)(iStack_8 + 0x1e26);
    if ((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       (((*(int *)(iStack_8 + 0x21f8) == 0 && (param_1 == '\0')) ||
        ((param_1 != '\0' && (*(char *)(iStack_8 + 0x21e6) == '\0')))))) {
      thunk_FUN_005b69f0(DAT_0080759c,0,0,200,0x1f1,400,0x62,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    if ((*(int *)(iStack_8 + 0x21e8) == 0) && (param_1 == '\0')) {
      thunk_FUN_005b68b0(DAT_0080759c,0,0,0x112,0x38,0x205,0x104,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    if ((*(int *)(iStack_8 + 0x21f4) == 0) && (param_1 == '\0')) {
      thunk_FUN_005b67a0(DAT_0080759c,0,0,0x112,0x149,0x205,0x8c,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    uVar9 = 0;
    pvVar8 = *(void **)(DAT_0081176c + 0x30);
    uVar7 = 0xffffffff;
    uVar6 = 0xfffffffe;
    puVar4 = (uint *)FUN_006b0140(0x26b2,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar4,uVar6,uVar7,pvVar8,uVar9);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar5 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x1ee,0,iVar3,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd0e8,0x1ee);
  return;
}

