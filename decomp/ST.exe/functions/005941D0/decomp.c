
void FUN_005941d0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (*(uint *)((int)local_8 + 0x10c) != 0) {
      FUN_006e56b0(*(void **)((int)local_8 + 0xc),*(uint *)((int)local_8 + 0x10c));
    }
    puVar1 = (undefined4 *)((int)local_8 + 0x18);
    *(undefined4 *)((int)local_8 + 0x10c) = 0;
    puVar5 = puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x28) = 0x11;
    *(int *)((int)local_8 + 0x2c) = (int)local_8 + 0x38;
    FUN_006e6000(local_8,3,1,puVar1);
    puVar5 = puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x2c) = *(undefined4 *)((int)local_8 + 8);
    *(undefined4 *)((int)local_8 + 0x28) = 0x14;
    FUN_006e6000(local_8,3,1,puVar1);
    puVar5 = puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x28) = 0x19;
    FUN_006e6000(local_8,3,1,puVar1);
    puVar5 = puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)local_8 + 0x28) = 0x1b;
    FUN_006e6000(local_8,3,1,puVar1);
    if (*(uint *)((int)local_8 + 0x108) != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)((int)local_8 + 0x108));
    }
    *(undefined4 *)((int)local_8 + 0x108) = 0xffffffff;
    if (*(int *)((int)local_8 + 0xfc) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0xfc));
    }
    if (*(int *)((int)local_8 + 0x100) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x100));
    }
    if (*(int *)((int)local_8 + 0x104) != 0) {
      FUN_006ab060((undefined4 *)((int)local_8 + 0x104));
    }
    if (*(int *)((int)local_8 + 0x98) != 0) {
      FUN_006e3b50((undefined4 *)((int)local_8 + 0x88));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_combo_cpp_007cbeec,0x7f,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cbeec,0x7f);
  return;
}

