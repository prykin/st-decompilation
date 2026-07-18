
void FUN_005521b0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 local_58 [16];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffa4;
  iVar2 = __setjmp3(local_58,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    local_18 = *(int *)((int)local_8 + 0x1ab);
    local_14 = *(undefined4 *)((int)local_8 + 0x1af);
    local_10 = *(undefined4 *)((int)local_8 + 0x1b3);
    local_c = *(undefined4 *)((int)local_8 + 0x1b7);
    thunk_FUN_0043beb0(DAT_007fa174,10,(int *)((int)local_8 + 0x1ab));
    thunk_FUN_00551b10(local_8);
    thunk_FUN_00551ba0();
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tradecen_cpp_007c8624,300,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c8624,300);
  return;
}

