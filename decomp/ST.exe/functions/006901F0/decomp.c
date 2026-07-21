
int __thiscall FUN_006901f0(void *this,int param_1,uint *param_2)

{
  AiFltClassTy *this_00;
  int iVar1;

  this_00 = (AiFltClassTy *)thunk_FUN_0068e190(this,param_1);
  if (this_00 != (AiFltClassTy *)0x0) {
    iVar1 = AiFltClassTy::GetAiMess(this_00,param_2);
    return iVar1;
  }
  return -4;
}

