
void FUN_004353b0(uint param_1,uint param_2,uint param_3)

{
  uint objPtr;
  int *piVar1;
  STGameObjC *this;
  STAllPlayersC *in_ECX;
  uint uVar2;
  int *piVar3;
  
  objPtr = param_1;
  uVar2 = (uint)DAT_0080874d;
  if (((g_playerRuntime[uVar2].field324_0x203 == 1) &&
      (g_playerRuntime[uVar2].tempSlots[1][0].objectType == 0x19a)) &&
     (g_playerRuntime[uVar2].tempSlots[1][0].playerId == (int)(char)param_1)) {
    FUN_006acc70((AnonShape_006ACC70_C8641025 *)g_playerRuntime[uVar2].tempSlots[1][0].objectIds,0,
                 (undefined4 *)((int)&param_1 + 2));
    if (param_1._2_2_ == (short)param_2) {
      piVar1 = (int *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_2,CASE_1);
      piVar3 = (int *)0x0;
      (**(code **)(*piVar1 + 0xe8))();
      Library::DKW::TBL::FUN_006ae140
                (&(g_playerRuntime[DAT_0080874d].tempSlots[1][0].objectIds)->flags,0,&param_3);
      this = (STGameObjC *)STAllPlayersC::GetObjPtr(in_ECX,objPtr,param_3,CASE_1);
      STGameObjC::SetSelfCheckFlag(this,piVar3);
      (**(code **)&this->field_0000[1].field_0x18)(1);
      thunk_FUN_0043fc50(CASE_4,0);
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  return;
}

