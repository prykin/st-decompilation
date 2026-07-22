#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AddMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0044238E MOVSX EAX,byte ptr [EBP + 0x8] | 004424C4 MOVSX
   EAX,byte ptr [EBP + 0x8] | 0044275F MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall STAllPlayersC::_AddMDPairs(STAllPlayersC *this,char param_1,uint param_2)

{
  code *pcVar1;
  STAllPlayersC *pSVar2;
  byte bVar3;
  int iVar4;
  STGameObjC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  STAllPlayersC_GetTOBJList_param_2Enum SVar13;
  STAllPlayersC_GetTOBJList_param_2Enum SVar14;
  InternalExceptionFrame local_d4;
  undefined1 local_90 [6];
  short local_8a;
  short local_82;
  STAllPlayersC_GetTOBJList_param_2Enum local_6c [4];
  STAllPlayersC *local_5c;
  STAllPlayersC_GetTOBJList_param_2Enum local_58;
  undefined1 local_54 [4];
  uint local_50;
  int local_4c;
  dword local_48;
  STGameObjC *local_44;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  short local_38;
  short local_36;
  short local_34;
  undefined2 local_32;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_4c = 4;
  local_6c[0] = CASE_38;
  local_6c[1] = 0x39;
  local_6c[2] = 0x4f;
  local_6c[3] = 0x5e;
  local_5c = this;
  local_44 = GetObjPtr(this,param_1,param_2,CASE_1);
  local_58 = (*local_44->vtable->vfunc_2C)();
  local_10 = 0;
  local_d4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d4;
  iVar4 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0);
  iVar6 = local_4c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_d4.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2454,0,iVar4,
                                 "%s","STAllPlayersC::_AddMDPairs");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2455);
    }
    return local_10;
  }
  if (0 < local_4c) {
    piVar10 = &g_playerRuntime[param_1].field6_0xf;
    iVar4 = local_4c;
    do {
      if (*piVar10 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x23dd);
      }
      piVar10 = piVar10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  pSVar5 = local_44;
  pSVar2 = local_5c;
  if ((local_58 == 0x3b) || (local_58 == 0x60)) {
    STFishC::sub_004162B0((STFishC *)local_44,&local_38,&local_36,&local_34);
    local_32 = pSVar5->field_0032;
    uVar8 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar11 = g_pathingGrid.cells;
    psVar12 = g_pathingScratchGrid.cells;
    for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      psVar12 = psVar12 + 2;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(char *)psVar12 = (char)*psVar11;
      psVar11 = (short *)((int)psVar11 + 1);
      psVar12 = (short *)((int)psVar12 + 1);
    }
    FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                 (int)g_pathingGrid.sizeZ,(int)local_38,(int)local_36,(int)local_34,-1,-1,-1);
    pSVar2 = local_5c;
    local_14 = 0;
    if (0 < iVar6) {
      do {
        iVar6 = local_14 * 4;
        local_c = (DArrayTy *)GetTOBJList(pSVar2,param_1,local_6c[local_14],0,-1);
        local_48 = local_c->count;
        if (local_48 != 0) {
          /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
          local_8 = *(DArrayTy **)(iVar6 + 0x7f4e2f + param_1 * 0xa62);
          local_18 = 0;
          if (0 < (int)local_48) {
            do {
              DArrayGetElement(local_c,local_18,&local_1c);
              pSVar5 = GetObjPtr(pSVar2,param_1,local_1c,CASE_1);
              local_44 = pSVar5;
              iVar6 = (*pSVar5->vtable->vfunc_88)(local_54);
              if (0 < iVar6) {
                STFishC::sub_004162B0((STFishC *)pSVar5,&local_40,&local_3e,&local_3c);
                local_3a = pSVar5->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_3c + 1) * (int)g_pathingGrid.planeStride +
                                 (int)local_3e * (int)g_pathingGrid.sizeX + (int)local_40];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    DArrayGetElement(local_8,uVar9,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      Library::DKW::TBL::FUN_006ae140(&local_8->flags,uVar9,(undefined4 *)&local_40)
                      ;
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)&local_40);
                  local_10 = 1;
                }
              }
              local_18 = local_18 + 1;
            } while ((int)local_18 < (int)local_48);
          }
        }
        DArrayDestroy(local_c);
        local_14 = local_14 + 1;
      } while (local_14 < local_4c);
    }
  }
  else {
    local_14 = 0;
    SVar13 = local_58;
    if (0 < iVar6) {
      do {
        iVar6 = local_14;
        if (SVar13 == local_6c[local_14]) {
          iVar4 = GetPlayerRaceId(param_1);
          if ((char)iVar4 == '\x03') {
            SVar14 = 0x60;
          }
          else {
            SVar14 = 0x3b;
          }
          local_c = (DArrayTy *)GetTOBJList(pSVar2,param_1,SVar14,0,-1);
          pSVar5 = local_44;
          local_48 = local_c->count;
          if (local_48 != 0) {
            STFishC::sub_004162B0((STFishC *)local_44,&local_40,&local_3e,&local_3c);
            local_3a = pSVar5->field_0032;
            uVar8 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
            psVar11 = g_pathingGrid.cells;
            psVar12 = g_pathingScratchGrid.cells;
            for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)psVar12 = *(undefined4 *)psVar11;
              psVar11 = psVar11 + 2;
              psVar12 = psVar12 + 2;
            }
            for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(char *)psVar12 = (char)*psVar11;
              psVar11 = (short *)((int)psVar11 + 1);
              psVar12 = (short *)((int)psVar12 + 1);
            }
            FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                         (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,
                         (int)local_3e,(int)local_3c,-1,-1,-1);
            local_18 = 0;
            /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
            local_8 = *(DArrayTy **)(local_14 * 4 + 0x7f4e2f + param_1 * 0xa62);
            iVar6 = local_14;
            SVar13 = local_58;
            if (0 < (int)local_48) {
              do {
                DArrayGetElement(local_c,local_18,&local_1c);
                pSVar5 = GetObjPtr(pSVar2,param_1,local_1c,CASE_1);
                local_44 = pSVar5;
                STFishC::sub_004162B0((STFishC *)pSVar5,&local_38,&local_36,&local_34);
                local_32 = pSVar5->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_34 + 1) * (int)g_pathingGrid.planeStride +
                                 (int)g_pathingGrid.sizeX * (int)local_36 + (int)local_38];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar3;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar9 = 0;
                uVar8 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar8) {
                  do {
                    DArrayGetElement(local_8,uVar9,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {
                      Library::DKW::TBL::FUN_006ae140(&local_8->flags,uVar9,(undefined4 *)&local_40)
                      ;
                      local_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)&local_40);
                  local_10 = 1;
                }
                local_18 = local_18 + 1;
                iVar6 = local_14;
                SVar13 = local_58;
              } while ((int)local_18 < (int)local_48);
            }
          }
          DArrayDestroy(local_c);
        }
        local_14 = iVar6 + 1;
        if (local_4c <= iVar6 + 1) {
          g_currentExceptionFrame = local_d4.previous;
          return local_10;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_d4.previous;
  return local_10;
}

