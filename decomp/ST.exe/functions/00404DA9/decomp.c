
uint * __cdecl thunk_FUN_00676170(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  STGroupC *this;
  uint *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  uint *puStack_8;
  
  uVar5 = DAT_00858df8;
  puStack_8 = (uint *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x125,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
    FUN_006a5e40(iVar2,0,0x7d2d58,0x126);
    return (uint *)0x0;
  }
  if (DAT_007fa174 == 0) {
    this = (STGroupC *)0x0;
  }
  else {
    this = (STGroupC *)thunk_FUN_0042b760(param_1,0);
  }
  if (this != (STGroupC *)0x0) {
    puVar3 = STGroupC::GetGroupContent(this,(int)unaff_ESI);
    DAT_00858df8 = (undefined1 *)uVar5;
    return puVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  return puStack_8;
}

