
void thunk_FUN_004f95b0(char *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_4c [17];
  uint *puStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb0;
  iVar2 = __setjmp3(auStack_4c,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    puStack_8 = FUN_006b54f0((uint *)0x0,1,1);
    thunk_FUN_005411a0((int)puStack_8,param_1,s____s__007c221c);
    thunk_FUN_004f92b0((int *)&puStack_8,param_2);
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x351,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c1bd8,0x351);
  return;
}

