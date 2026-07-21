
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeleteGuardBoat
   
   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 00446520 @ 0045A2BF | 0044EE30 -> 00446520 @ 0045A2D4 | 0044EE30 ->
   00446520 @ 0045AAC8 | 0044EE30 -> 00446520 @ 0045AADD | 0045EF00 -> 00446520 @ 0045EF2A |
   00490E00 -> 00446520 @ 00490E46 */

void __thiscall
STAllPlayersC::DeleteGuardBoat(STAllPlayersC *this,uint param_1,short param_2,int param_3)

{
  dword dVar1;
  code *pcVar2;
  STAllPlayersC *this_00;
  int iVar3;
  STBoatC *pSVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  STAllPlayersC *local_14;
  undefined4 local_10;
  dword local_c;
  uint local_8;
  
  local_68.previous = g_currentExceptionFrame;
  local_18 = g_playerRuntime[(char)param_1].pgPairs;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  array = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x296d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DeleteGuardBoat_007a83b8);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x296e);
    }
    return;
  }
  if (local_18 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x291d);
  }
  local_c = array->count;
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {
        DArrayGetElement(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_20->count;
        if (0 < (int)uVar8) {
          do {
            DArrayGetElement(local_20,uVar7,&local_8);
            if ((short)local_8 == param_2) {
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_20,uVar7);
              pSVar4 = (STBoatC *)GetObjPtr(local_14,param_1,local_8,CASE_1);
              local_10 = PTR_00802a38->field_00E4;
              STBoatC::CmdToObj(pSVar4,CASE_21,&local_10);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            DArrayDestroy(local_24);
            DArrayDestroy(local_20);
            DArrayDestroy(local_1c);
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_18,uVar6);
            local_c = local_c - 1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      DeletePGPairs(local_14,(char)param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {
        DArrayGetElement(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_24->count;
        if (0 < (int)uVar8) {
          do {
            DArrayGetElement(local_24,uVar7,&local_8);
            if ((short)local_8 == param_2) {
              FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_24,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if ((uVar7 != uVar8) && (uVar8 == 1)) {
          uVar8 = 0;
          dVar1 = local_20->count;
          if (0 < (int)dVar1) {
            do {
              DArrayGetElement(local_20,uVar8,&local_8);
              pSVar4 = (STBoatC *)GetObjPtr(local_14,param_1,local_8,CASE_1);
              if (pSVar4 == (STBoatC *)0x0) {
                iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2955,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__DeleteGuardBoat_N_007a83e0
                                          );
                if (iVar3 != 0) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                local_10 = PTR_00802a38->field_00E4;
                STBoatC::CmdToObj(pSVar4,CASE_21,&local_10);
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)dVar1);
          }
          DArrayDestroy(local_24);
          DArrayDestroy(local_20);
          DArrayDestroy(local_1c);
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_18,uVar6);
          local_c = local_c - 1;
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      DeletePGPairs(local_14,(char)param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  this_00 = local_14;
  OptimizeGuardBoats(local_14,(char)param_1);
  DistributeGuardBoats(this_00,param_1);
  g_currentExceptionFrame = local_68.previous;
  return;
}

