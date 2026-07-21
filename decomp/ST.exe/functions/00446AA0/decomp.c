
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::OptimizeGuardBoats */

void __thiscall STAllPlayersC::OptimizeGuardBoats(STAllPlayersC *this,char param_1)

{
  dword dVar1;
  code *pcVar2;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar5;
  uint index;
  DArrayTy *array;
  undefined4 unaff_ESI;
  uint index_00;
  uint uVar6;
  dword index_01;
  void *unaff_EDI;
  InternalExceptionFrame local_90;
  DArrayTy *local_4c;
  DArrayTy *local_48;
  DArrayTy *local_44;
  DArrayTy *local_40;
  DArrayTy *local_3c;
  DArrayTy *local_38;
  int local_30;
  dword local_2c;
  short local_28;
  DArrayTy *local_26;
  undefined4 local_22;
  DArrayTy *local_1c;
  uint local_18;
  short local_12;
  uint local_10;
  uint local_c;
  short local_6;
  
  local_1c = g_playerRuntime[param_1].pgPairs;
  local_40 = g_playerRuntime[param_1].field2175_0x9fa;
  if (local_1c != (DArrayTy *)0x0) {
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar3 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_18 = local_1c->count;
      array = local_1c;
      if (1 < local_18) {
        iVar3 = local_18 - 1;
        local_c = 0;
        if (0 < iVar3) {
          do {
            DArrayGetElement(array,local_c,&local_3c);
            local_10 = local_c + 1;
            if ((int)local_10 <= iVar3) {
              do {
                local_30 = iVar3;
                DArrayGetElement(array,local_10,&local_4c);
                uVar6 = local_3c->count;
                if (uVar6 == local_4c->count) {
                  index = 0;
                  local_2c = 1;
                  if (0 < (int)uVar6) {
                    do {
                      DArrayGetElement(local_3c,index,&local_6);
                      index_00 = 0;
                      do {
                        DArrayGetElement(local_4c,index_00,&local_12);
                        if (local_6 == local_12) break;
                        index_00 = index_00 + 1;
                      } while ((int)index_00 < (int)uVar6);
                      if (index_00 == uVar6) {
                        local_2c = 0;
                        break;
                      }
                      index = index + 1;
                    } while ((int)index < (int)uVar6);
                  }
                  if (local_2c == 1) {
                    uVar6 = 0;
                    if (0 < (int)local_48->count) {
                      do {
                        DArrayGetElement(local_48,uVar6,&local_12);
                        Library::DKW::TBL::FUN_006ae1c0(&local_38->flags,(undefined4 *)&local_12);
                        uVar6 = uVar6 + 1;
                      } while ((int)uVar6 < (int)local_48->count);
                    }
                    DArrayDestroy(local_4c);
                    DArrayDestroy(local_48);
                    if (local_44 != (DArrayTy *)0x0) {
                      DArrayDestroy(local_44);
                    }
                    FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_1c,local_10);
                    local_18 = local_18 - 1;
                    local_30 = local_30 + -1;
                    local_10 = local_10 - 1;
                  }
                }
                local_10 = local_10 + 1;
                array = local_1c;
                iVar3 = local_30;
              } while ((int)local_10 <= local_30);
            }
            local_c = local_c + 1;
            iVar3 = local_18 - 1;
          } while ((int)local_c < iVar3);
        }
      }
      pDVar4 = local_40;
      if (local_40 != (DArrayTy *)0x0) {
        dVar1 = local_40->count;
        local_c = 0;
        if (0 < (int)dVar1) {
          do {
            DArrayGetElement(pDVar4,local_c,&local_28);
            if (local_26 != (DArrayTy *)0x0) {
              DArrayDestroy(local_26);
            }
            local_c = local_c + 1;
          } while ((int)local_c < (int)dVar1);
        }
        DArrayDestroy(pDVar4);
        local_40 = (DArrayTy *)0x0;
      }
      DArrayGetElement(array,0,&local_3c);
      uVar6 = local_3c->count;
      pDVar4 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar6,10,1);
      g_playerRuntime[param_1].field2175_0x9fa = pDVar4;
      local_10 = 0;
      local_c = 0;
      local_40 = pDVar4;
      if (0 < (int)uVar6) {
        do {
          DArrayGetElement(local_3c,local_c,&local_6);
          local_28 = local_6;
          local_26 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
          local_22 = 0;
          Library::DKW::TBL::FUN_006ae1c0((uint *)local_26,&local_10);
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar4,(undefined4 *)&local_28);
          local_c = local_c + 1;
        } while ((int)local_c < (int)uVar6);
      }
      if ((1 < local_18) && (local_c = 1, 1 < (int)local_18)) {
        do {
          DArrayGetElement(array,local_c,&local_3c);
          local_2c = local_3c->count;
          local_10 = 0;
          if (0 < (int)local_2c) {
            do {
              DArrayGetElement(local_3c,local_10,&local_6);
              dVar1 = pDVar4->count;
              index_01 = 0;
              if (0 < (int)dVar1) {
                do {
                  DArrayGetElement(pDVar4,index_01,&local_28);
                  if (local_28 == local_6) {
                    Library::DKW::TBL::FUN_006ae1c0(&local_26->flags,&local_c);
                    break;
                  }
                  index_01 = index_01 + 1;
                } while ((int)index_01 < (int)dVar1);
              }
              if (index_01 == dVar1) {
                local_28 = local_6;
                local_26 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
                local_22 = 0;
                Library::DKW::TBL::FUN_006ae1c0((uint *)local_26,&local_c);
                Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar4,(undefined4 *)&local_28);
              }
              local_10 = local_10 + 1;
            } while ((int)local_10 < (int)local_2c);
          }
          local_c = local_c + 1;
          array = local_1c;
        } while ((int)local_c < (int)local_18);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    if (iVar3 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a25,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__OptimizeGuardBoat_007a8430);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a26);
    }
  }
  return;
}

