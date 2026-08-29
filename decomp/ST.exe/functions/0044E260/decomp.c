#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=undefined __stdcall
   FUN_0044e260(STAllPlayersC * context, uint param_2, uint param_3, uint param_4, int * param_5)
   previous_return_type=/undefined Evidence: incoming ECX reaches only unadjusted __thiscall
   receivers of /STAllPlayersC; receiver_calls=1; exact RET purge=16 matches declared stack
   bytes=16; sites=0044E2CD -> STAllPlayersC::GetObjPtr receiver=/STAllPlayersC */

void FUN_0044e260(STAllPlayersC *context,uint param_2,uint param_3,uint param_4,int *param_5)

{
  STGameObjCVTable *pSVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  DArrayTy *pDVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  STGameObjC *pSVar13;
  byte local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  DArrayTy *local_18;
  STGameObjC *local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar4 = param_5;
  /* ST_CALLSITE[0044E275]: CALL 0x00405cf9; direct=00405CF9 thunk_FUN_0042b760; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STGroupC; signature=__stdcall;pointer:/STGroupC;/char;/ushort */
  local_14 = (STGameObjC *)thunk_FUN_0042b760((char)param_2,(ushort)param_3);
  if (local_14 != nullptr) {
    /* ST_CALLSITE[0044E287]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__thiscall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupC */
    pDVar5 = STGroupC::GetGroupContent((STGroupC *)local_14);
    auto param_3_after_write = pDVar5->count; /* compiler stack-slot lifetime split */
    if (param_3_after_write != 0) {
      local_18 = Library::DKW::TBL::DArrayCreate(nullptr,param_3_after_write,4,1);
      uVar12 = 0;
      if (0 < (int)param_3_after_write) {
        do {

          DArrayGetElement(pDVar5,uVar12,local_2c);
          /* ST_CALLSITE[0044E2CD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
          local_14 = STAllPlayersC::GetObjPtr(context,(char)param_2,STPiece<0,2>(local_2c),CASE_1);
          if ((local_14 == nullptr) ||
             /* ST_CALLSITE[0044E2DD]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
             (iVar6 = (*local_14->vtable[1].vfunc_24)(local_14), iVar6 == 0)) {

            DArrayRemoveAt(pDVar5,uVar12);
            param_3_after_write = param_3_after_write - 1;
            uVar12 = uVar12 - 1;
          }
          else {

            Library::DKW::TBL::DArrayPut(local_18,uVar12,&local_14);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)param_3_after_write);
      }
      DArrayDestroy(pDVar5);
      if (param_3_after_write != 0) {
        local_8 = 10000;
        local_c = 0;
        local_14 = local_18->data;
        auto param_2_after_write = 10000; /* compiler stack-slot lifetime split */
        local_10 = 0;
        uVar12 = param_3_after_write;
        pSVar13 = local_14;
        if (0 < (int)param_3_after_write) {
          do {
            pSVar1 = pSVar13->vtable;
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_58 + 3);
            iVar9 = *(int *)((int)&pSVar1[1].vfunc_2C + 1);
            iVar7 = iVar6 - iVar9;
            if (iVar7 < local_8) {
              local_8 = iVar7;
            }
            iVar6 = iVar9 + iVar6;
            if (local_c < iVar6) {
              local_c = iVar6;
            }
            iVar6 = (int)*(short *)((int)&pSVar1->vfunc_5C + 1);
            uVar8 = iVar6 - iVar9;
            if ((int)uVar8 < (int)param_2_after_write) {
              param_2_after_write = uVar8;
            }
            iVar6 = iVar6 + iVar9;
            if (local_10 < iVar6) {
              local_10 = iVar6;
            }
            uVar12 = uVar12 - 1;
            pSVar13 = (STGameObjC *)&pSVar13->field_0x4;
          } while (uVar12 != 0);
          if (local_8 < 0) {
            local_8 = 0;
          }
        }
        iVar6 = g_worldGrid.sizeX + -1;
        if (iVar6 < local_c) {
          local_c = iVar6;
        }
        if ((int)param_2_after_write < 0) {
          param_2_after_write = 0;
        }
        if (g_worldGrid.sizeY + -1 < local_10) {
          local_10 = g_worldGrid.sizeY + -1;
        }
        local_28 = 5;
        iVar7 = ((int)g_worldGrid.sizeX * param_2_after_write - (int)g_worldGrid.planeStride) + local_8;
        iVar6 = local_c;
        iVar9 = local_8;
        do {
          iVar7 = iVar7 + g_worldGrid.planeStride;
          iVar11 = iVar7 - g_worldGrid.sizeX;
          if ((int)param_2_after_write <= local_10) {
            local_24 = (local_10 - param_2_after_write) + 1;
            do {
              iVar11 = iVar11 + g_worldGrid.sizeX;
              if (iVar9 <= iVar6) {
                local_20 = (iVar6 - iVar9) + 1;
                iVar6 = iVar11 * 8 + -8;
                do {
                  piVar2 = *(int **)((int)g_worldGrid.cells[1].objects + iVar6);
                  if (((piVar2 != nullptr) &&
                      (((iVar9 = piVar2[8], iVar9 == 0x14 || (iVar9 == 1000)) || (iVar9 == 0x3e9))))
                     && ((((param_4 & 1 << ((byte)piVar2[9] & 0x1f)) != 0 &&
                          /* ST_CALLSITE[0044E488]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
                          (iVar9 = STStructuralVirtualCall<undefined4>(piVar2, 0xF8), iVar9 != 0)) &&
                         (local_1c = 0, 0 < (int)param_3_after_write)))) {
                    auto param_5_after_write = (int *)local_14; /* compiler stack-slot lifetime split */
                    do {
                      iVar9 = *param_5_after_write;
                      iVar10 = (int)STField<short>(piVar2,0x5b) - (int)STField<short>(iVar9,0x5B);
                      iVar3 = STField<int>(iVar9,0x101);
                      if (iVar10 < 1) {
                        if (iVar10 < -iVar3) goto LAB_0044e4d5;
LAB_0044e508:
                        iVar9 = piVar4[piVar2[9]];
joined_r0x0044e51a:
                        if (iVar9 == 0) {
                          pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
                          piVar4[piVar2[9]] = (int)pDVar5;
                        }

                        Library::DKW::TBL::DArrayAppend
                                  ((DArrayTy *)piVar4[piVar2[9]],(void *)((int)piVar2 + 0x32));
                        break;
                      }
                      if (iVar10 <= iVar3) goto LAB_0044e508;
LAB_0044e4d5:
                      iVar9 = (int)STField<short>(piVar2,0x5d) - (int)STField<short>(iVar9,0x5D);
                      if (iVar9 < 1) {
                        if (iVar9 < -iVar3) goto LAB_0044e4ef;
                        iVar9 = piVar4[piVar2[9]];
                        goto joined_r0x0044e51a;
                      }
                      if (iVar9 <= iVar3) goto LAB_0044e508;
LAB_0044e4ef:
                      local_1c = local_1c + 1;
                      param_5_after_write = param_5_after_write + 1;
                    } while (local_1c < (int)param_3_after_write);
                  }
                  local_20 = local_20 + -1;
                  iVar6 = iVar6 + 8;
                } while (local_20 != 0);
                local_20 = 0;
                iVar6 = local_c;
                iVar9 = local_8;
              }
              local_24 = local_24 + -1;
            } while (local_24 != 0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      DArrayDestroy(local_18);
    }
  }
  return;
}

