#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjFromTmps
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042C7D0 MOVSX EDX,byte ptr [EBP + 0x10] | 0042CB31 MOVSX
   EDX,byte ptr [EBP + 0x10] */

undefined4 __thiscall
STAllPlayersC::DelObjFromTmps
          (STAllPlayersC *this,char param_1,int param_2,char param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  DArrayTy *pDVar3;
  dword dVar4;
  STGameObjC *pSVar6;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  Global_sub_0043FC50_param_1Enum GVar10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0xffffffff;
  if (param_2 < 0x1a5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1a4) {
      iVar8 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar2);
        if (((*(int *)(iVar8 * 0x10 + iVar2) == 0x1a4) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_5);
          (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x14) {
      param_2 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
      do {
        puVar1 = (undefined4 *)(param_2 * 0x10 + iVar2);
        if ((*(int *)(param_2 * 0x10 + iVar2) == 0x3c) && (puVar1[1] == (int)param_3)) {
          pDVar3 = STField<DArrayTy *>(puVar1,10);
          uVar9 = 0;
          dVar4 = pDVar3->count;
          if (0 < (int)dVar4) {
            do {
              DArrayGetElement(pDVar3,uVar9,&local_8);
              if ((ushort)local_8 == (ushort)param_4) {
                pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_1);
                (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
                local_8 = 0xffff;
                Library::DKW::TBL::DArrayPut(pDVar3,uVar9,&local_8);
                STField<short>(puVar1,0xe) = STField<short>(puVar1,0xe) + -1;
                if (STField<short>(puVar1,0xe) == 0) {
                  DArrayDestroy(STField<DArrayTy *>(puVar1,10));
                  STField<undefined4>(puVar1,10) = 0;
                  *puVar1 = 0;
                }
                if (param_2 == 0) {
                  thunk_FUN_0043fc50(CASE_1,0);
                  GVar10 = CASE_2;
                }
                else {
                  GVar10 = CASE_E;
                }
                thunk_FUN_0043fc50(GVar10,0);
                local_c = 0;
                break;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)dVar4);
          }
        }
        param_2 = param_2 + 1;
        if (4 < param_2) {
          return local_c;
        }
      } while( true );
    }
    if (param_2 == 0x5a) {
      iVar8 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar2);
        if (((*(int *)(iVar8 * 0x10 + iVar2) == 0x5a) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_4);
          (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x172) {
      iVar8 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar2);
        if (((*(int *)(iVar8 * 0x10 + iVar2) == 0x172) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_2);
          (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if (param_2 < 0x1b9) {
    if (param_2 == 0x1b8) {
      iVar8 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar2);
        if (((*(int *)(iVar8 * 0x10 + iVar2) == 0x1b8) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_6);
          (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar10 = CASE_5;
          }
          else {
            GVar10 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
    if (param_2 == 0x1ae) {
      iVar8 = 0;
      iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
      do {
        puVar1 = (undefined4 *)(iVar8 * 0x10 + iVar2);
        if (((*(int *)(iVar8 * 0x10 + iVar2) == 0x1ae) && (puVar1[1] == (int)param_3)) &&
           (*(ushort *)(puVar1 + 2) == (ushort)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_3);
          (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar8 == 0) {
            thunk_FUN_0043fc50(CASE_1,0);
            GVar10 = CASE_2;
          }
          else {
            GVar10 = CASE_E;
          }
          thunk_FUN_0043fc50(GVar10,0);
          local_c = 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      return local_c;
    }
  }
  else if ((999 < param_2) && (param_2 < 0x3ea)) {
    param_2 = 0;
    iVar2 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
    do {
      puVar1 = (undefined4 *)(param_2 * 0x10 + iVar2);
      if ((*(int *)(param_2 * 0x10 + iVar2) == 0x19a) && (puVar1[1] == (int)param_3)) {
        pDVar3 = STField<DArrayTy *>(puVar1,10);
        uVar9 = 0;
        dVar4 = pDVar3->count;
        if (0 < (int)dVar4) {
          do {
            DArrayGetElement(pDVar3,uVar9,&local_8);
            if ((ushort)local_8 == (ushort)param_4) {
              pSVar6 = GetObjPtr(this,param_3,(ushort)param_4,CASE_1);
              (*pSVar6->vtable[1].vfunc_14)(pSVar6,0);
              local_8 = 0xffff;
              Library::DKW::TBL::DArrayPut(pDVar3,uVar9,&local_8);
              STField<short>(puVar1,0xe) = STField<short>(puVar1,0xe) + -1;
              if (STField<short>(puVar1,0xe) == 0) {
                DArrayDestroy(STField<DArrayTy *>(puVar1,10));
                STField<undefined4>(puVar1,10) = 0;
                *puVar1 = 0;
              }
              if (param_2 == 0) {
                thunk_FUN_0043fc50(CASE_4,0);
                GVar10 = CASE_5;
              }
              else {
                GVar10 = CASE_F;
              }
              thunk_FUN_0043fc50(GVar10,0);
              local_c = 0;
              break;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)dVar4);
        }
      }
      param_2 = param_2 + 1;
      if (4 < param_2) {
        return local_c;
      }
    } while( true );
  }
  iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x352,0,0,"%s",
                             "STAllPlayersC::DelObjFromTmps invalid game type");
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

