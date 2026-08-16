#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpGetDistrPoint */

uint * STGroupBoatC::Way3DGrpGetDistrPoint
                 (STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6,int param_7,int param_8)

{
  ushort uVar2;
  DArrayTy *array;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar4;
  int local_EBX_18;
  int iVar6;
  InternalExceptionFrame local_58;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  int local_c;
  DArrayTy *local_8;

  uVar2 = (ushort)param_2->count;
  local_EBX_18 = 0;
  local_c = 0;
  param_1->field_0027 = uVar2;
  if (uVar2 == 0) {
    return nullptr;
  }
  array = Library::DKW::TBL::DArrayCreate(nullptr,(uint)uVar2,6,1);
  local_8 = array;
  uVar2 = thunk_FUN_004233c0(param_1);
  DAT_007f4d4c = (uint)uVar2;
  if ((DAT_007f4d4c < 2) && (param_1->field_0027 == 1)) {
    local_14 = (undefined2)param_6;
    local_12 = (undefined2)param_7;
    local_10 = (undefined2)param_8;
    Library::DKW::TBL::DArrayAppend(array,&local_14);
    goto LAB_004157f0;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_EBX_18 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (local_EBX_18 == 0) {
    if (param_1->field_004D != 0) {
      iVar4 = FUN_006db910(param_3,param_4,param_6,param_7);
      iVar3 = ((iVar4 * 4 + 0x2d) / 0x5a) * 0x5a;
      iVar3 = STSignedDiv4(iVar3);
      param_1->field_0055 = iVar3;
      if (iVar3 == 0x168) {
        param_1->field_0055 = 0;
      }
      param_1->field_0049 = param_1->field_0049 | 1;
    }
    iVar3 = thunk_FUN_00413af0(param_1,param_2,param_6,param_7,param_8);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (0 < DAT_007f4d40) {
        iVar6 = 0;
        do {
          local_14 = *(undefined2 *)(iVar6 + 0xc + (int)PTR_007f4d04);
          local_12 = *(undefined2 *)(iVar6 + 0x10 + (int)PTR_007f4d04);
          local_10 = *(undefined2 *)(iVar6 + 0x14 + (int)PTR_007f4d04);
          Library::DKW::TBL::DArrayPut
                    (local_8,*(uint *)(iVar6 + 0x18 + (int)PTR_007f4d04),&local_14);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar3 < DAT_007f4d40);
      }
      iVar3 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          iVar6 = (uint)(ushort)param_1->field_0027 - iVar3;
          local_14 = *(undefined2 *)(PTR_007f4d04 + iVar6 * 7 + -4);
          local_12 = *(undefined2 *)(PTR_007f4d04 + iVar6 * 7 + -3);
          local_10 = *(undefined2 *)(PTR_007f4d04 + iVar6 * 7 + -2);
          Library::DKW::TBL::DArrayPut(local_8,PTR_007f4d04[iVar6 * 7 + -1],&local_14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_007f4cf8);
        g_currentExceptionFrame = local_58.previous;
        local_EBX_18 = local_c;
        goto LAB_004157e1;
      }
    }
    else {
      iVar3 = 0;
      local_10 = (undefined2)param_8;
      local_14 = (undefined2)param_6;
      local_12 = (undefined2)param_7;
      if (param_1->field_0027 != 0) {
        do {
          Library::DKW::TBL::DArrayAppend(local_8,&local_14);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)(ushort)param_1->field_0027);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    local_EBX_18 = local_c;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    local_c = local_EBX_18;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\Grpway3d.cpp",0xeae,0,local_EBX_18,
                               "%s","STGroupBoatC::Way3DGrpGetDistrPoint");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_004157e1:
  FUN_006a5e90((short *)PTR_007f4d04);
  array = local_8;
LAB_004157f0:
  if (local_EBX_18 != 0) {
    DArrayDestroy(array);
    local_8 = nullptr;
    RaiseInternalException
              (local_EBX_18,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Grpway3d.cpp",
               0xeb8);
    return nullptr;
  }
  return &array->flags;
}

