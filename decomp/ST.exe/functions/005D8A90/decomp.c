
void FUN_005d8a90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  uint *puVar4;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = 4;
    puVar4 = (uint *)(local_8 + 0x1af1);
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)(local_8 + 0xc),*puVar4);
      }
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_006b3af0(DAT_008075a8,*(uint *)(local_8 + 0x1cb4));
    if (*(uint *)(local_8 + 0x1b05) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x1b49),*(uint *)(local_8 + 0x1b05));
    }
    if (*(uint *)(local_8 + 0x1b96) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x1bda),*(uint *)(local_8 + 0x1b96));
    }
    if (*(uint *)(local_8 + 0x1c27) != 0xffffffff) {
      FUN_006b3af0(*(int **)(local_8 + 0x1c6b),*(uint *)(local_8 + 0x1c27));
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x110,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd5c4,0x110);
  return;
}

