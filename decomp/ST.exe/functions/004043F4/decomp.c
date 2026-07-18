
void thunk_FUN_005e79b0(char param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,unaff_EBX);
  if (iVar2 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(iStack_8 + 0x5d));
    if ((*(int *)(iStack_8 + 0x1af8) == 0) && (param_1 == '\0')) {
      thunk_FUN_005b67a0(DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    if (((*(int *)(iStack_8 + 0x1b00) == 0) && (param_1 == '\0')) ||
       ((param_1 != '\0' &&
        ((*(int *)(iStack_8 + 0x1a64) != 0 && (*(int *)(iStack_8 + 0x1a68) == 0)))))) {
      thunk_FUN_005b68b0(DAT_0080759c,0,0,10,0xb4,0xf9,0x121,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    if (((*(int *)(iStack_8 + 0x1afc) == 0) && (param_1 == '\0')) ||
       ((param_1 != '\0' && (*(int *)(iStack_8 + 0x1a64) != 0)))) {
      thunk_FUN_005b69f0(DAT_0080759c,0,0,200,0x1f1,400,0x62,
                         (undefined4 *)(*(int *)(iStack_8 + 0x1a5b) + 0x140));
    }
    uVar8 = 0;
    pvVar7 = *(void **)(DAT_0081176c + 0x30);
    uVar6 = 0xffffffff;
    uVar5 = 0xfffffffe;
    puVar3 = (uint *)FUN_006b0140(0x26ae,DAT_00807618);
    thunk_FUN_00540890(0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pvVar7,uVar8);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xeb,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cdd5c,0xeb);
  return;
}

