
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_DeleteGuardBoat */

undefined4 __thiscall
STAllPlayersC::_DeleteGuardBoat(STAllPlayersC *this,uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  int exceptionCode;
  STBoatC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_6c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  STAllPlayersC *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0xffffffff;
  local_6c.previous = g_currentExceptionFrame;
  local_10 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  exceptionCode = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar3 = local_10;
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (exceptionCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2906,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC___DeleteGuardBoat_007a8390);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(exceptionCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2907);
    }
    return local_18;
  }
  if (local_10 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x28ba);
  }
  local_8 = *(int *)(iVar3 + 0xc);
  if (param_3 == 1) {
    uVar5 = 0;
    if (0 < local_8) {
      do {
        FUN_006acc70(iVar3,uVar5,&local_28);
        uVar6 = 0;
        uVar7 = *(uint *)(local_24 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)local_24,uVar6,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70((int)local_24,uVar6);
              pSVar2 = (STBoatC *)GetObjPtr(local_1c,param_1,local_c,CASE_1);
              local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              STBoatC::CmdToObj(pSVar2,CASE_21,&local_14);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            FUN_006ae110(local_28);
            FUN_006ae110(local_24);
            FUN_006ae110(local_20);
            FUN_006b0c70(local_10,uVar5);
            local_8 = local_8 + -1;
          }
          local_18 = 0;
          break;
        }
        uVar5 = uVar5 + 1;
        iVar3 = local_10;
      } while ((int)uVar5 < local_8);
    }
  }
  else {
    uVar5 = 0;
    if (0 < local_8) {
      do {
        FUN_006acc70(iVar3,uVar5,&local_28);
        uVar6 = 0;
        uVar7 = *(uint *)(local_28 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)local_28,uVar6,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70((int)local_28,uVar6);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            uVar7 = 0;
            iVar3 = *(int *)(local_24 + 0xc);
            if (0 < iVar3) {
              do {
                FUN_006acc70((int)local_24,uVar7,&local_c);
                pSVar2 = (STBoatC *)GetObjPtr(local_1c,param_1,local_c,CASE_1);
                local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                STBoatC::CmdToObj(pSVar2,CASE_21,&local_14);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < iVar3);
            }
            FUN_006ae110(local_28);
            FUN_006ae110(local_24);
            FUN_006ae110(local_20);
            FUN_006b0c70(local_10,uVar5);
            local_8 = local_8 + -1;
            uVar5 = uVar5 - 1;
          }
          local_18 = 0;
        }
        uVar5 = uVar5 + 1;
        iVar3 = local_10;
      } while ((int)uVar5 < local_8);
    }
  }
  if (local_8 == 0) {
    DeletePGPairs(local_1c,(char)param_1);
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_18;
}

