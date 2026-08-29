#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AddMDPairs
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0044238E MOVSX EAX,byte ptr [EBP + 0x8] | 004424C4 MOVSX
   EAX,byte ptr [EBP + 0x8] | 0044275F MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall STAllPlayersC::_AddMDPairs(STAllPlayersC *this,char param_1,uint param_2)

{
  STAllPlayersC *pSVar2;
  STGameObjC *pSVar3;
  byte bVar4;
  int iVar4;
  STGameObjC *pSVar4_mg3;
  STGameObjC *pSVar4_mg1;
  int iVar5;
  int iVar6;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  short *psVar10;
  int iVar11;
  short *psVar12;
  STAllPlayersC_GetTOBJList_param_2Enum SVar13;
  STAllPlayersC_GetTOBJList_param_2Enum SVar14;
  InternalExceptionFrame local_d4;
  byte local_90 [6];
  short local_8a;
  short local_82;
  STAllPlayersC_GetTOBJList_param_2Enum local_6c [4];
  STAllPlayersC *local_5c;
  STAllPlayersC_GetTOBJList_param_2Enum local_58;
  byte local_54 [4];
  uint local_50;
  int local_4c;
  dword local_48;
  STGameObjC *local_44;
  short local_40;
  short local_3e;
  short local_3c;
  ushort local_3a;
  short local_38;
  short local_36;
  short local_34;
  ushort local_32;
  int local_30;
  uint local_2c;
  uint local_28;
  byte local_1c [4];
  uint local_18;
  int local_14;
  uint local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;

  local_4c = 4;
  local_6c[0] = CASE_38;
  local_6c[1] = 0x39;
  local_6c[2] = 0x4f;
  local_6c[3] = 0x5e;
  local_5c = this;
  /* ST_CALLSITE[0044233C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
  local_44 = GetObjPtr(this,param_1,(ushort)param_2,CASE_1);
  /* ST_CALLSITE[00442348]: CALL dword ptr [EDX + 0x2c] */
  local_58 = local_44->vfunc_2C();
  local_10 = 0;
  local_d4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_d4;

  iVar4 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0);
  iVar5 = local_4c;
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
    piVar9 = &g_packedRecords_A62x8[param_1].field5_0xf;
    iVar11 = local_4c;
    do {
      if (*piVar9 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x23dd);
      }
      piVar9 = piVar9 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  pSVar3 = local_44;
  pSVar2 = local_5c;
  if ((local_58 == 0x3b) || (local_58 == 0x60)) {
    /* ST_CALLSITE[004426A4]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
    STFishC::sub_004162B0((STFishC *)local_44,&local_38,&local_36,&local_34);
    local_32 = pSVar3->field_0032;
    uVar7 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar10 = g_pathingGrid.cells;
    psVar12 = g_pathingScratchGrid.cells;
    for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)psVar12 = *(undefined4 *)psVar10;
      psVar10 = psVar10 + 2;
      psVar12 = psVar12 + 2;
    }
    for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)psVar12 = (char)*psVar10;
      psVar10 = (short *)((int)psVar10 + 1);
      psVar12 = (short *)((int)psVar12 + 1);
    }

    FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                 (int)g_pathingGrid.sizeZ,(int)local_38,(int)local_36,(int)local_34,-1,-1,-1);
    pSVar2 = local_5c;
    local_14 = 0;
    if (0 < iVar5) {
      do {
        iVar5 = local_14 * 4;
        /* ST_CALLSITE[00442747]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
        local_c = (DArrayTy *)GetTOBJList(pSVar2,param_1,local_6c[local_14],0,-1);
        local_48 = local_c->count;
        if (local_48 != 0) {
          local_8 = *(DArrayTy **)(iVar5 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
          local_18 = 0;
          if (0 < (int)local_48) {
            do {

              DArrayGetElement(local_c,local_18,local_1c);
              /* ST_CALLSITE[0044279F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
              pSVar4_mg1 = GetObjPtr(pSVar2,param_1,STPiece<0,2>(local_1c),CASE_1);
              local_44 = pSVar4_mg1;
              /* ST_CALLSITE[004427B1]: CALL dword ptr [EDX + 0x88] */
              iVar5 = (*pSVar4_mg1->vtable->vfunc_88)(local_54);
              if (0 < iVar5) {
                /* ST_CALLSITE[004427CD]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                STFishC::sub_004162B0((STFishC *)pSVar4_mg1,&local_40,&local_3e,&local_3c);
                local_3a = pSVar4_mg1->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_3c + 1) * (int)g_pathingGrid.planeStride +
                                 (int)local_3e * (int)g_pathingGrid.sizeX + (int)local_40];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar4 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar4;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar8 = 0;
                uVar7 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar7) {
                  do {

                    DArrayGetElement(local_8,uVar8,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {

                      Library::DKW::TBL::DArrayPut(local_8,uVar8,&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)uVar7);
                }
                if (uVar8 == uVar7) {

                  Library::DKW::TBL::DArrayAppend(local_8,&local_40);
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
    if (0 < iVar5) {
      do {
        iVar5 = local_14;
        if (SVar13 == local_6c[local_14]) {
          /* ST_CALLSITE[00442404]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
          bVar4 = LookupRecordByte(param_1);
          if (bVar4 == 3) {
            SVar14 = 0x60;
          }
          else {
            SVar14 = 0x3b;
          }
          /* ST_CALLSITE[00442421]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
          local_c = (DArrayTy *)GetTOBJList(pSVar2,param_1,SVar14,0,-1);
          pSVar3 = local_44;
          local_48 = local_c->count;
          if (local_48 != 0) {
            /* ST_CALLSITE[00442448]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0((STFishC *)local_44,&local_40,&local_3e,&local_3c);
            local_3a = pSVar3->field_0032;
            uVar7 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
            psVar10 = g_pathingGrid.cells;
            psVar12 = g_pathingScratchGrid.cells;
            for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)psVar12 = *(undefined4 *)psVar10;
              psVar10 = psVar10 + 2;
              psVar12 = psVar12 + 2;
            }
            for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(char *)psVar12 = (char)*psVar10;
              psVar10 = (short *)((int)psVar10 + 1);
              psVar12 = (short *)((int)psVar12 + 1);
            }

            FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,
                         (int)g_pathingGrid.sizeY,(int)g_pathingGrid.sizeZ,(int)local_40,
                         (int)local_3e,(int)local_3c,-1,-1,-1);
            local_18 = 0;
            local_8 = *(DArrayTy **)(local_14 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xF));
            iVar5 = local_14;
            SVar13 = local_58;
            if (0 < (int)local_48) {
              do {

                DArrayGetElement(local_c,local_18,local_1c);
                /* ST_CALLSITE[00442517]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
                pSVar4_mg3 = GetObjPtr(pSVar2,param_1,STPiece<0,2>(local_1c),CASE_1);
                local_44 = pSVar4_mg3;
                /* ST_CALLSITE[0044252F]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                STFishC::sub_004162B0((STFishC *)pSVar4_mg3,&local_38,&local_36,&local_34);
                local_32 = pSVar4_mg3->field_0032;
                local_30 = (int)g_pathingScratchGrid.cells
                                [(local_34 + 1) * (int)g_pathingGrid.planeStride +
                                 (int)g_pathingGrid.sizeX * (int)local_36 + (int)local_38];
                if (local_30 == 0) {
                  local_30 = 1000000;
                  local_28 = 100;
                }
                else {
                  bVar4 = thunk_FUN_00430750(CASE_8);
                  local_50 = (uint)bVar4;
                  local_30 = ((((local_30 * 0xc9) / 3) / (int)local_50) * 0xc) / 10 + 800;
                  local_28 = (undefined4)(40000 / (longlong)local_30);
                }
                uVar8 = 0;
                uVar7 = local_8->count;
                local_2c = local_28;
                if (0 < (int)uVar7) {
                  do {

                    DArrayGetElement(local_8,uVar8,local_90);
                    if ((local_8a == -1) && (local_82 == -1)) {

                      Library::DKW::TBL::DArrayPut(local_8,uVar8,&local_40);
                      local_10 = 1;
                      break;
                    }
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)uVar7);
                }
                if (uVar8 == uVar7) {

                  Library::DKW::TBL::DArrayAppend(local_8,&local_40);
                  local_10 = 1;
                }
                local_18 = local_18 + 1;
                iVar5 = local_14;
                SVar13 = local_58;
              } while ((int)local_18 < (int)local_48);
            }
          }
          DArrayDestroy(local_c);
        }
        local_14 = iVar5 + 1;
        if (local_4c <= iVar5 + 1) {
          g_currentExceptionFrame = local_d4.previous;
          return local_10;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_d4.previous;
  return local_10;
}

