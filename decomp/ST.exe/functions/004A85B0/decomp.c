
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::StartReceiveOrderSound */

void __thiscall STGroupBoatC::StartReceiveOrderSound(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  undefined4 extraout_EDX;
  uint uVar5;
  uint local_8;
  
  uVar5 = 0;
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&local_8);
      if ((short)local_8 != -1) {
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_0024),local_8,
                            CASE_1);
        if (pSVar3 == (STGameObjC *)0x0) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x172d,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__StartReceiveOrderS_007ac50c);
          if (iVar4 != 0) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x172e);
        }
        thunk_FUN_00493d10((int *)pSVar3);
      }
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

