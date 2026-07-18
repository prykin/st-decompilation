
undefined4 __thiscall CGenerate::_saveObj(CGenerate *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffb8;
  
  iVar2 = __setjmp3((undefined4 *)&stack0xffffffb8,0,DAT_00858df8,in_stack_ffffffb8);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = FUN_006ad4d0(s_E____titans_Maps_generate_cpp_007d864c,0xe0,0,iVar2,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

