
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GenSwitch */

void __thiscall STGroupBoatC::GenSwitch(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int *this_00;
  int iVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  uint local_8;
  
  uVar5 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)this->field_0029,uVar4,&local_8);
      if ((short)local_8 != -1) {
        this_00 = (int *)STAllPlayersC::GetObjPtr
                                   (g_sTAllPlayers_007FA174,
                                    CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),
                                    local_8,CASE_1);
        if (this_00 == (int *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1742,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__GenSwitch_NULL_007ac540);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x1743);
        }
        iVar3 = (**(code **)(*this_00 + 0x2c))();
        if ((iVar3 == 0x16) || (iVar3 = (**(code **)(*this_00 + 0x2c))(), iVar3 == 0x25)) {
          thunk_FUN_00494160(this_00,param_1);
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < uVar1);
  }
  return;
}

