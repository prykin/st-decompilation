
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DCBomb */

undefined4 __thiscall STGroupBoatC::DCBomb(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  uint *puVar3;
  int iVar4;
  STBoatC *pSVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = *(int *)(this->field_0029 + 0xc);
  local_c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_24 = 2;
  local_18 = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_28;
  if (iVar4 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar10 = (undefined4 *)&local_28->field_0x89;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      local_28->field_0065 = 0;
      local_20 = 0;
      *(undefined4 *)&local_28->field_0x2bd = local_28->field_018C;
      local_28->field_02C1 = local_28->field_0190;
      local_30 = *(undefined2 *)&local_28->field_0x2bd;
      local_34 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_2c = local_28->field_02C1;
      local_2e = local_28->field_02BF;
      puVar6 = local_14;
      local_1c = local_34;
      if (0 < local_10) {
        do {
          FUN_006acc70(pSVar2->field_0029,local_20,&local_8);
          if ((short)local_8 != -1) {
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_8
                                ,CASE_1);
            if (pSVar5 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb6b);
            }
            if ((pSVar5->field_06F7 == CASE_4) && (0 < *(int *)&pSVar5->field_0x7be)) {
              if (puVar6 == (uint *)0x0) {
                puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_14 = puVar6;
              }
              Library::DKW::TBL::FUN_006ae1c0(puVar6,&local_8);
              STBoatC::CmdToObj(pSVar5,CASE_A,&local_34);
            }
            else {
              iVar4 = thunk_FUN_00490d90((int)pSVar5);
              if (iVar4 == 0) {
                STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
              }
              else {
                if (local_c == (uint *)0x0) {
                  local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                }
                Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              }
            }
          }
          local_20 = local_20 + 1;
        } while ((int)local_20 < local_10);
      }
      puVar3 = local_c;
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)local_10 >> 8),pSVar2->field_0024),puVar6,
                 local_c);
      if (puVar6 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar6);
      }
      if (puVar3 != (uint *)0x0) {
        FUN_006ae110((byte *)puVar3);
      }
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb84)
      ;
    }
    uVar11 = 0;
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 10) {
      if (0 < local_10) {
        do {
          FUN_006acc70(pSVar2->field_0029,uVar11,&local_8);
          if ((short)local_8 != -1) {
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),
                                local_8,CASE_1);
            if (pSVar5 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb8b);
            }
            iVar4 = thunk_FUN_0045ff10((int)pSVar5);
            if ((iVar4 == 10) || (uVar7 = STBoatC::CheckPBoxCmd(pSVar5,CASE_A), uVar7 == 1)) {
              local_18 = local_18 + 1;
              break;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < local_10);
      }
      if (local_18 == 0) {
        local_24 = 0;
      }
    }
    g_currentExceptionFrame = local_78.previous;
  }
  else {
    g_currentExceptionFrame = local_78.previous;
    if (iVar4 != -0x5001fff7) {
      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb94,0,iVar4,&DAT_007a4ccc
                                 ,s_STGroupBoatC__DCBomb_007ac0d0);
      if (iVar8 == 0) {
        RaiseInternalException(iVar4,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb95);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
  }
  return local_24;
}

