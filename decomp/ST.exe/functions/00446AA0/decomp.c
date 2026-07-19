
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::OptimizeGuardBoats */

void __thiscall STAllPlayersC::OptimizeGuardBoats(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_90;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  uint *local_40;
  int local_3c;
  uint *local_38;
  int local_30;
  int local_2c;
  short local_28;
  uint *local_26;
  undefined4 local_22;
  int local_1c;
  uint local_18;
  short local_12;
  uint local_10;
  uint local_c;
  short local_6;
  
  local_1c = *(int *)((int)&DAT_007f5816 + param_1 * 0xa62);
  local_40 = *(uint **)((int)&DAT_007f581a + param_1 * 0xa62);
  if (local_1c != 0) {
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar2 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      local_18 = *(uint *)(local_1c + 0xc);
      iVar2 = local_1c;
      if (1 < local_18) {
        iVar5 = local_18 - 1;
        local_c = 0;
        if (0 < iVar5) {
          do {
            FUN_006acc70(iVar2,local_c,&local_3c);
            local_10 = local_c + 1;
            if ((int)local_10 <= iVar5) {
              do {
                local_30 = iVar5;
                FUN_006acc70(iVar2,local_10,&local_4c);
                uVar7 = *(uint *)(local_3c + 0xc);
                if (uVar7 == *(uint *)(local_4c + 0xc)) {
                  uVar4 = 0;
                  local_2c = 1;
                  if (0 < (int)uVar7) {
                    do {
                      FUN_006acc70(local_3c,uVar4,(undefined4 *)&local_6);
                      uVar6 = 0;
                      do {
                        FUN_006acc70((int)local_4c,uVar6,(undefined4 *)&local_12);
                        if (local_6 == local_12) break;
                        uVar6 = uVar6 + 1;
                      } while ((int)uVar6 < (int)uVar7);
                      if (uVar6 == uVar7) {
                        local_2c = 0;
                        break;
                      }
                      uVar4 = uVar4 + 1;
                    } while ((int)uVar4 < (int)uVar7);
                  }
                  if (local_2c == 1) {
                    uVar7 = 0;
                    if (0 < *(int *)(local_48 + 0xc)) {
                      do {
                        FUN_006acc70((int)local_48,uVar7,(undefined4 *)&local_12);
                        Library::DKW::TBL::FUN_006ae1c0(local_38,(undefined4 *)&local_12);
                        uVar7 = uVar7 + 1;
                      } while ((int)uVar7 < *(int *)(local_48 + 0xc));
                    }
                    FUN_006ae110(local_4c);
                    FUN_006ae110(local_48);
                    if (local_44 != (byte *)0x0) {
                      FUN_006ae110(local_44);
                    }
                    FUN_006b0c70(local_1c,local_10);
                    local_18 = local_18 - 1;
                    local_30 = local_30 + -1;
                    local_10 = local_10 - 1;
                  }
                }
                local_10 = local_10 + 1;
                iVar2 = local_1c;
                iVar5 = local_30;
              } while ((int)local_10 <= local_30);
            }
            local_c = local_c + 1;
            iVar5 = local_18 - 1;
          } while ((int)local_c < iVar5);
        }
      }
      puVar3 = local_40;
      if (local_40 != (uint *)0x0) {
        iVar5 = *(int *)((int)local_40 + 0xc);
        local_c = 0;
        if (0 < iVar5) {
          do {
            FUN_006acc70((int)puVar3,local_c,(undefined4 *)&local_28);
            if (local_26 != (uint *)0x0) {
              FUN_006ae110((byte *)local_26);
            }
            local_c = local_c + 1;
          } while ((int)local_c < iVar5);
        }
        FUN_006ae110((byte *)puVar3);
        local_40 = (uint *)0x0;
      }
      FUN_006acc70(iVar2,0,&local_3c);
      uVar7 = *(uint *)(local_3c + 0xc);
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar7,10,1);
      *(uint **)((int)&DAT_007f581a + param_1 * 0xa62) = puVar3;
      local_10 = 0;
      local_c = 0;
      local_40 = puVar3;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70(local_3c,local_c,(undefined4 *)&local_6);
          local_28 = local_6;
          local_26 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
          local_22 = 0;
          Library::DKW::TBL::FUN_006ae1c0(local_26,&local_10);
          Library::DKW::TBL::FUN_006ae1c0(puVar3,(undefined4 *)&local_28);
          local_c = local_c + 1;
        } while ((int)local_c < (int)uVar7);
      }
      if ((1 < local_18) && (local_c = 1, 1 < (int)local_18)) {
        do {
          FUN_006acc70(iVar2,local_c,&local_3c);
          local_2c = *(int *)(local_3c + 0xc);
          local_10 = 0;
          if (0 < local_2c) {
            do {
              FUN_006acc70(local_3c,local_10,(undefined4 *)&local_6);
              uVar7 = puVar3[3];
              uVar4 = 0;
              if (0 < (int)uVar7) {
                do {
                  FUN_006acc70((int)puVar3,uVar4,(undefined4 *)&local_28);
                  if (local_28 == local_6) {
                    Library::DKW::TBL::FUN_006ae1c0(local_26,&local_c);
                    break;
                  }
                  uVar4 = uVar4 + 1;
                } while ((int)uVar4 < (int)uVar7);
              }
              if (uVar4 == uVar7) {
                local_28 = local_6;
                local_26 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
                local_22 = 0;
                Library::DKW::TBL::FUN_006ae1c0(local_26,&local_c);
                Library::DKW::TBL::FUN_006ae1c0(puVar3,(undefined4 *)&local_28);
              }
              local_10 = local_10 + 1;
            } while ((int)local_10 < local_2c);
          }
          local_c = local_c + 1;
          iVar2 = local_1c;
        } while ((int)local_c < (int)local_18);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    if (iVar2 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a25,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__OptimizeGuardBoat_007a8430);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2a26);
    }
  }
  return;
}

