
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetPatrolCmdToBoat */

void __thiscall STGroupBoatC::SetPatrolCmdToBoat(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  uint *groupContent;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  undefined4 local_34;
  uint local_30 [3];
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_c;
  uint *local_8;
  
  iVar3 = *(int *)(this->field_022E + 0xc);
  local_c = iVar3;
  local_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      FUN_006acc70(this->field_022E,uVar4,&local_34);
      if ((short)local_30[0] != -1) {
        local_34 = 0;
        local_22 = 0;
        Library::DKW::TBL::FUN_006ae140((uint *)this->field_022E,uVar4,&local_34);
        uVar2 = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),local_30[0],
                           CASE_1);
        if (uVar2 == 0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x16c9,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__SetPatrolCmdToBoat_007ac4bc);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x16ca);
        }
        Library::DKW::TBL::FUN_006ae1c0(local_8,local_30);
        *(undefined4 *)(uVar2 + 0x493) = 1;
        iVar3 = local_c;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar3);
  }
  FUN_006acc70(this->field_022A,this->field_0232,(undefined4 *)&local_1c);
  groupContent = local_8;
  if (local_8[3] != 0) {
    InitWay(this,(int)local_8,(int)local_1c,(int)local_1a,(int)local_18);
  }
  FUN_006ae110((byte *)groupContent);
  return;
}

