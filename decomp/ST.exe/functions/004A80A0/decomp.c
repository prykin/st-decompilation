
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetPatrolCmdToBoat */

void __thiscall STGroupBoatC::SetPatrolCmdToBoat(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  undefined4 local_34;
  uint local_30 [3];
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_c;
  uint *local_8;
  
  iVar4 = *(int *)(*(int *)(this + 0x22e) + 0xc);
  local_c = iVar4;
  local_8 = FUN_006ae290((uint *)0x0,0,2,1);
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      FUN_006acc70(*(int *)(this + 0x22e),uVar5,&local_34);
      if ((short)local_30[0] != -1) {
        local_34 = 0;
        local_22 = 0;
        FUN_006ae140(*(uint **)(this + 0x22e),uVar5,&local_34);
        uVar3 = thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),this[0x24]),local_30[0],
                                   1);
        if (uVar3 == 0) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x16c9,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__SetPatrolCmdToBoat_007ac4bc);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x16ca);
        }
        FUN_006ae1c0(local_8,local_30);
        *(undefined4 *)(uVar3 + 0x493) = 1;
        iVar4 = local_c;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  FUN_006acc70(*(int *)(this + 0x22a),*(uint *)(this + 0x232),(undefined4 *)&local_1c);
  puVar2 = local_8;
  if (local_8[3] != 0) {
    InitWay(this,(int)local_8,(int)local_1c,(int)local_1a,(int)local_18);
  }
  FUN_006ae110((byte *)puVar2);
  return;
}

