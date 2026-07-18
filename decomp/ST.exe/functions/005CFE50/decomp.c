
void FUN_005cfe50(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 in_stack_ffffff24;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_ESI,in_stack_ffffff24);
  if (iVar2 == 0) {
    thunk_FUN_00571a30(&DAT_008087b6,(undefined4 *)&stack0xffffff24,'\0');
    FUN_00715360(DAT_00811764,param_1,'\x1c',&stack0xffffff24,0x94,1,0xffffffff);
    DAT_00858df8 = (undefined4 *)local_48;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x4c9,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd258,0x4c9);
  return;
}

