
void __thiscall FUN_00578560(void *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (7 < param_1) {
    iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_crab_cpp_007cad4c,0x7a,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1 = 0;
  }
  iVar2 = param_1 * 6;
  *(short *)((int)this + 0x6c) = (short)iVar2;
  thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xe,iVar2,iVar2 + 5,'\0');
  return;
}

