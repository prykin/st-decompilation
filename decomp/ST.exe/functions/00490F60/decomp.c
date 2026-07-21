
void __fastcall FUN_00490f60(STBoatC *param_1)

{
  DArrayTy *array;
  int iVar1;
  undefined4 local_c;
  undefined2 local_8;

  if (((param_1->field_045D != CASE_14) || (param_1->field_07C2 != 0)) &&
     (param_1->field_0459 != CASE_78)) {
    iVar1 = param_1->field_07C2;
    if (param_1->field_045D != CASE_14) {
      if (iVar1 == 0) {
        local_8 = param_1->field_0030;
        local_c = PTR_00802a38->field_00E4;
        array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)array,(undefined4 *)&param_1->field_0032);
        STAllPlayersC::AddObjsToGroup
                  (g_sTAllPlayers_007FA174,*(char *)&param_1->field_0024,0xfffe,(uint *)array,
                   (undefined2 *)0x0);
        DArrayDestroy(array);
        STBoatC::CmdToObj(param_1,CASE_14,&local_c);
      }
      iVar1 = param_1->field_07C2;
    }
    param_1->field_07C2 = iVar1 + 1;
    return;
  }
  local_8 = param_1->field_0030;
  local_c = PTR_00802a38->field_00E4;
  STBoatC::CmdToObj(param_1,CASE_14,&local_c);
  return;
}

