
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeleteGuardBoat */

void __thiscall
STAllPlayersC::DeleteGuardBoat(STAllPlayersC *this,uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  STAllPlayersC *this_00;
  int iVar2;
  STBoatC *pSVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  STAllPlayersC *local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_68.previous = g_currentExceptionFrame;
  local_18 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar4 = local_18;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar2 != -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x296d,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DeleteGuardBoat_007a83b8);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x296e);
    }
    return;
  }
  if (local_18 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x291d)
    ;
  }
  local_c = *(int *)(iVar4 + 0xc);
  if (param_3 == 1) {
    uVar5 = 0;
    if (0 < local_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&local_24);
        uVar6 = 0;
        uVar7 = *(uint *)(local_20 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)local_20,uVar6,&local_8);
            if ((short)local_8 == param_2) {
              FUN_006b0c70((int)local_20,uVar6);
              pSVar3 = (STBoatC *)GetObjPtr(local_14,param_1,local_8,1);
              local_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              STBoatC::CmdToObj(pSVar3,0x21,&local_10);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            FUN_006ae110(local_24);
            FUN_006ae110(local_20);
            FUN_006ae110(local_1c);
            FUN_006b0c70(local_18,uVar5);
            local_c = local_c + -1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = local_18;
      } while ((int)uVar5 < local_c);
    }
    if (local_c == 0) {
      DeletePGPairs(local_14,(char)param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  else {
    uVar5 = 0;
    if (0 < local_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&local_24);
        uVar6 = 0;
        uVar7 = *(uint *)(local_24 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)local_24,uVar6,&local_8);
            if ((short)local_8 == param_2) {
              FUN_006b0c70((int)local_24,uVar6);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if ((uVar6 != uVar7) && (uVar7 == 1)) {
          uVar7 = 0;
          iVar4 = *(int *)(local_20 + 0xc);
          if (0 < iVar4) {
            do {
              FUN_006acc70((int)local_20,uVar7,&local_8);
              pSVar3 = (STBoatC *)GetObjPtr(local_14,param_1,local_8,1);
              if (pSVar3 == (STBoatC *)0x0) {
                iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2955,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC__DeleteGuardBoat_N_007a83e0
                                          );
                if (iVar2 != 0) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              else {
                local_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                STBoatC::CmdToObj(pSVar3,0x21,&local_10);
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar4);
          }
          FUN_006ae110(local_24);
          FUN_006ae110(local_20);
          FUN_006ae110(local_1c);
          FUN_006b0c70(local_18,uVar5);
          local_c = local_c + -1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = local_18;
      } while ((int)uVar5 < local_c);
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

