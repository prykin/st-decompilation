
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::StartReceiveOrderSound */

void __thiscall STGroupBoatC::StartReceiveOrderSound(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  uint local_8;
  
  uVar6 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      FUN_006acc70(this->field_0029,uVar5,&local_8);
      if ((short)local_8 != -1) {
        piVar3 = (int *)STAllPlayersC::GetObjPtr
                                  (DAT_007fa174,
                                   CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),
                                   local_8,CASE_1);
        if (piVar3 == (int *)0x0) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x172d,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__StartReceiveOrderS_007ac50c);
          if (iVar4 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x172e);
        }
        thunk_FUN_00493d10(piVar3);
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar6 & 0xffff;
    } while (uVar5 < uVar1);
  }
  return;
}

