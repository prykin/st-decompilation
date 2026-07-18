
int FUN_005f94c0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_c = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_006aac70(0x6c);
    *(undefined4 **)(local_8 + 0x2e6) = puVar3;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(*(int *)(local_8 + 0x2e6) + 4) = 0xffffffff;
    DAT_00858df8 = (undefined4 *)local_50;
    return local_c + 2;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_coll3_cpp_007ce868,0x5d8,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ce868,0x5da);
  return 0xffff;
}

