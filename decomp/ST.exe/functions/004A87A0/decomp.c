
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::IsAgAtt */

undefined4 __thiscall STGroupBoatC::IsAgAtt(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  uint local_8;
  
  uVar6 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)this->field_0029,uVar5,&local_8);
      if ((short)local_8 != -1) {
        uVar5 = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),local_8,CASE_1
                          );
        if (uVar5 == 0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1758,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__IsAgAtt_007ac564);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x1759);
        }
        if (*(int *)(uVar5 + 0x7ea) == 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < uVar1);
  }
  return 1;
}

