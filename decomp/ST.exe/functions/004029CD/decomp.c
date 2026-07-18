
void thunk_FUN_005d8160(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 auStack_44 [16];
  
  iVar2 = __setjmp3(auStack_44,0,unaff_ESI,DAT_00858df8);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x6b,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd5c4,0x6b);
  return;
}

