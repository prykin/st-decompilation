
int __thiscall FUN_00679f90(void *this,int param_1,uint *param_2,int param_3)

{
  AiTactClassTy *this_00;
  int iVar1;

  this_00 = (AiTactClassTy *)thunk_FUN_00678d90(this,param_1);
  if ((this_00 != (AiTactClassTy *)0x0) && (param_2 != (uint *)0x0)) {
    if (param_3 < 0) {
      iVar1 = AiTactClassTy::GetAiMess(this_00,(AnonShape_0068FD00_A5257008 *)param_2);
      return iVar1;
    }
    iVar1 = thunk_FUN_0068fc70(this_00,(int)param_2,(short)param_3);
    return iVar1;
  }
  return -0x34;
}

