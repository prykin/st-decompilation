
void FUN_005b6220(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_ESI;
  uint *puVar3;
  void *unaff_EDI;
  int iVar4;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = 0xd;
    puVar3 = (uint *)(local_8 + 0x66);
    do {
      if (*puVar3 != 0) {
        FUN_006e56b0(*(void **)(local_8 + 0xc),*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = local_8 + 0x174;
    iVar4 = 0xd;
    do {
      FUN_00715ab0();
      FUN_00715ab0();
      if (*(char *)(iVar2 + -0x92) != '\0') {
        FUN_00715ab0();
      }
      iVar2 = iVar2 + 0x1fb;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Start_mmenuobj_cpp_007cca38,0xe5,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cca38,0xe5);
  return;
}

