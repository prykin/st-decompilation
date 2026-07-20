
void FUN_004353b0(uint param_1,uint param_2,uint param_3)

{
  uint objPtr;
  int iVar1;
  int *piVar2;
  STGameObjC *this;
  STAllPlayersC *in_ECX;
  int *piVar3;
  
  objPtr = param_1;
  iVar1 = (uint)DAT_0080874d * 0xa62;
  if (((*(int *)((int)&DAT_007f5023 + iVar1) == 1) &&
      (*(int *)((int)&DAT_007f4fd3 + iVar1) == 0x19a)) &&
     (*(int *)((int)&DAT_007f4fd7 + iVar1) == (int)(char)param_1)) {
    FUN_006acc70(*(int *)((int)&DAT_007f4fdd + iVar1),0,(undefined4 *)((int)&param_1 + 2));
    if (param_1._2_2_ == (short)param_2) {
      piVar2 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_2,CASE_1);
      piVar3 = (int *)0x0;
      (**(code **)(*piVar2 + 0xe8))();
      Library::DKW::TBL::FUN_006ae140
                (*(uint **)((int)&DAT_007f4fdd + (uint)DAT_0080874d * 0xa62),0,&param_3);
      this = (STGameObjC *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_3,CASE_1);
      STGameObjC::SetSelfCheckFlag(this,piVar3);
      (**(code **)(this->field_0000 + 0xe8))(1);
      thunk_FUN_0043fc50(CASE_4,0);
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  return;
}

