
void __fastcall FUN_00490f60(STBoatC *param_1)

{
  uint *groupContent;
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 local_c;
  undefined2 local_8;
  
  if (((param_1->field_045D != CASE_14) || (param_1->field_07C2 != 0)) &&
     (param_1->field_0459 != CASE_78)) {
    iVar1 = param_1->field_07C2;
    if (param_1->field_045D != CASE_14) {
      if (iVar1 == 0) {
        local_8 = param_1->field_0030;
        local_c = PTR_00802a38->field_00E4;
        groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(groupContent,(undefined4 *)&param_1->field_0032);
        STAllPlayersC::AddObjsToGroup
                  (g_sTAllPlayers_007FA174,
                   CONCAT31((int3)((uint)extraout_EDX >> 8),param_1->field_0x24),0xfffe,groupContent
                   ,(undefined2 *)0x0);
        FUN_006ae110((byte *)groupContent);
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

