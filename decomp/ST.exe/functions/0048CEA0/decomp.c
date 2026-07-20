
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::_CheckDefenceShots */

void __thiscall STBoatC::_CheckDefenceShots(STBoatC *this,int param_1)

{
  code *pcVar1;
  STBoatC *pSVar2;
  int iVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar7;
  InternalExceptionFrame local_68;
  uint local_24;
  uint local_20;
  int local_1a;
  uint local_14;
  STBoatC *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_14 = (int)this->field_0816 * (int)this->field_0816 * 0x9dd1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bb4,0,iVar3,&DAT_007a4ccc,
                               s_STBoatC___CheckDefenceShots_007aba00);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4bb5);
    return;
  }
  iVar3 = local_10->field_047B;
  if ((iVar3 != 0) && (uVar6 = 0, 0 < *(int *)(iVar3 + 0xc))) {
    do {
      FUN_006acc70(iVar3,uVar6,&local_24);
      if ((short)local_20 != -1) {
        local_1a = local_1a - param_1;
        if (local_1a < 1) {
          puVar7 = (uint *)pSVar2->field_047B;
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
        else {
          this_00 = (int *)STAllPlayersC::GetObjPtr
                                     (g_sTAllPlayers_007FA174,local_24,local_20,CASE_1);
          if (this_00 != (int *)0x0) {
            iVar3 = (**(code **)(*this_00 + 0xf8))();
            if (iVar3 == 1) {
              iVar3 = (**(code **)(*this_00 + 0xf0))();
              if (iVar3 == 1) {
                iVar3 = (**(code **)(*this_00 + 0xf4))(*(undefined4 *)&pSVar2->field_0x24);
                if (iVar3 == 1) {
                  thunk_FUN_00416270(this_00,&local_a,(int *)&local_8,(int *)&local_6);
                  iVar3 = (int)pSVar2->field_0041 - (int)local_a;
                  iVar4 = (int)pSVar2->field_0043 - (int)local_8;
                  iVar5 = (int)pSVar2->field_0045 - (int)local_6;
                  if (local_14 < (uint)(iVar4 * iVar4 + iVar3 * iVar3 + iVar5 * iVar5)) {
                    local_20 = CONCAT22(local_20._2_2_,0xffff);
                  }
                  puVar7 = (uint *)pSVar2->field_047B;
                  goto LAB_0048d016;
                }
              }
            }
          }
          puVar7 = (uint *)pSVar2->field_047B;
          local_20 = CONCAT22(local_20._2_2_,0xffff);
        }
LAB_0048d016:
        Library::DKW::TBL::FUN_006ae140(puVar7,uVar6,&local_24);
      }
      iVar3 = pSVar2->field_047B;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(iVar3 + 0xc));
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

