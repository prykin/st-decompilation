
int FUN_006041a0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  int iVar4;
  void *unaff_EDI;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  iVar4 = 0;
  local_8 = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (0 < param_1) {
      piVar5 = (int *)(local_c + 0x219);
      do {
        puVar3 = thunk_FUN_00629010();
        *piVar5 = (int)puVar3;
        *(int *)((int)puVar3 + 0xce) = local_c;
        iVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        *(int *)(iVar2 + 0xd2) = iVar4;
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  if (0 < local_8) {
    puVar3 = (undefined4 *)(local_c + 0x219);
    iVar4 = local_8;
    do {
      FUN_0072e2b0((undefined4 *)*puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_006ad4d0(s_E____titans_nick_to_Expl_cpp_007cf630,0x1f6,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7cf630,0x1f8);
  return 0xffff;
}

