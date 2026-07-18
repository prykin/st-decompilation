
undefined * __thiscall thunk_FUN_0057f530(void *this,int param_1)

{
  undefined1 uVar1;
  int3 extraout_var;
  int iVar2;
  
  uVar1 = thunk_FUN_0057f240(0xe0,*(int *)((int)this + 0x259));
  iVar2 = CONCAT31(extraout_var,uVar1);
  if (((param_1 == 0) && (iVar2 != 0 && -1 < extraout_var)) && (iVar2 < 5)) {
    return (&PTR_s_term0_007cb0a4)[iVar2];
  }
  return PTR_s_term0_007cb0a4;
}

