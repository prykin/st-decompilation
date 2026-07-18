
void thunk_FUN_00590580(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  void *unaff_ESI;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar11 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar11);
  if (iVar2 == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    thunk_FUN_005403c0(0,0,'\x01',*(BITMAPINFO **)(iStack_8 + 0x5e));
    pvVar9 = *(void **)(DAT_0081176c + 0x30);
    uVar10 = 1;
    uVar8 = 0xffffffff;
    if (*(char *)(iStack_8 + 0x5d) == '\0') {
      uVar7 = 0xfffffffe;
      puVar3 = (uint *)FUN_006b0140(0x25e4,DAT_00807618);
      thunk_FUN_00540890(0,0,0x1b8,800,0x14,puVar3,uVar7,uVar8,pvVar9,uVar10);
      pvVar9 = *(void **)(DAT_0081176c + 0x30);
      uVar10 = 1;
      uVar7 = 0xffffffff;
      uVar8 = 0xffffffff;
      puVar3 = (uint *)FUN_006b0140(0x25e8,DAT_00807618);
      iVar6 = 0x8c;
      iVar5 = 800;
      iVar4 = 0x1cc;
      iVar2 = 0;
    }
    else {
      uVar7 = 0xffffffff;
      puVar3 = (uint *)FUN_006b0140(0x25e5,DAT_00807618);
      thunk_FUN_00540890(0,10,10,0x30c,0x32,puVar3,uVar7,uVar8,pvVar9,uVar10);
      pvVar9 = *(void **)(DAT_0081176c + 0x30);
      uVar10 = 1;
      uVar7 = 0xffffffff;
      uVar8 = 0;
      puVar3 = (uint *)FUN_006b0140(0x25e6,DAT_00807618);
      thunk_FUN_00540890(0,0x10e,0x3c,0x20d,0xfa,puVar3,uVar8,uVar7,pvVar9,uVar10);
      pvVar9 = *(void **)(DAT_0081176c + 0x30);
      uVar10 = 1;
      uVar7 = 0xffffffff;
      uVar8 = 0;
      puVar3 = (uint *)FUN_006b0140(0x25e7,DAT_00807618);
      iVar6 = 0xe6;
      iVar5 = 0x302;
      iVar4 = 0x172;
      iVar2 = 0x14;
    }
    thunk_FUN_00540890(0,iVar2,iVar4,iVar5,iVar6,puVar3,uVar8,uVar7,pvVar9,uVar10);
    DAT_00858df8 = (undefined1 *)uVar11;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar11;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_adv_obj_cpp_007cbc24,0x4d,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cbc24,0x4d);
  return;
}

