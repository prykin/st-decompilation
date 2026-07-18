
void thunk_FUN_004f9480(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  uint *puStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puStack_8 = FUN_006b54f0((uint *)0x0,10,10);
    iVar2 = param_1 + param_2;
    if (param_2 < 1) {
      iVar2 = *(int *)(DAT_0080c4c7 + 8);
    }
    for (; param_1 < iVar2; param_1 = param_1 + 1) {
      if (param_1 < *(int *)(DAT_0080c4c7 + 8)) {
        pcVar3 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + param_1 * 4);
      }
      else {
        pcVar3 = (char *)0x0;
      }
      thunk_FUN_005411a0((int)puStack_8,pcVar3,s____s__007c221c);
    }
    thunk_FUN_004f92b0((int *)&puStack_8,param_3);
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x342,0,iVar2,&DAT_007a4ccc);
  if (iVar4 == 0) {
    FUN_006a5e40(iVar2,0,0x7c1bd8,0x342);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

