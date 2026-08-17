#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreateCollection */

undefined4 __thiscall TraksClassTy::TraksCreateCollection(TraksClassTy *this,int *param_1)

{
  int iVar1;
  TraksClassTy *this_00;
  int local_EAX_96;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar3;
  int iVar8;
  int iVar4;
  undefined4 uVar9;
  short sVar10;
  short sVar11;
  cMf32 *pcVar12;
  char cVar13;
  int iVar14;
  InternalExceptionFrame local_7c;
  int local_38;
  TraksClassTy *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (((((((byte *)param_1)[0x1b] & 1) == 0) && (DAT_0080731e == 0)) ||
      (this->field_0024 == nullptr)) ||
     ((param_1 == nullptr || (PTR_00806770 == nullptr)))) {
    return 0;
  }
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_34 = this;
  local_EAX_96 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  if (local_EAX_96 == 0) {
    local_8 = FUN_006acf0d(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    if (local_8 == 0) {
      iVar14 = param_1[0x18];
      local_10 = param_1[0xf];
      if (0 < iVar14) {
        iVar5 = local_10 - iVar14;
        if (iVar5 < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        local_10 = (uVar6 >> 0x10) % (((local_10 + iVar14) - iVar5) + 1U) + iVar5;
      }
      local_8 = param_1[0x17];
      if (local_8 < 1) {
        local_8 = param_1[0xe];
      }
      else {
        iVar14 = param_1[0xe] + local_8;
        local_8 = param_1[0xe] - local_8;
        if (local_8 < 0) {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_8 = (uVar6 >> 0x10) % ((iVar14 - local_8) + 1U) + local_8;
        }
        else {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_8 = (uVar6 >> 0x10) % ((iVar14 - local_8) + 1U) + local_8;
        }
      }
      local_14 = param_1[0xd];
      iVar14 = param_1[0x16];
      if (0 < iVar14) {
        iVar5 = local_14 - iVar14;
        if (iVar5 < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        local_14 = (uVar6 >> 0x10) % (((local_14 + iVar14) - iVar5) + 1U) + iVar5;
      }
      local_18 = param_1[0x15];
      if (local_18 < 1) {
        local_18 = param_1[0xc];
      }
      else {
        iVar14 = param_1[0xc] + local_18;
        local_18 = param_1[0xc] - local_18;
        if (local_18 < 0) {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % ((iVar14 - local_18) + 1U) + local_18;
        }
        else {
          uVar6 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % ((iVar14 - local_18) + 1U) + local_18;
        }
      }
      iVar14 = param_1[0x14];
      if (iVar14 < 1) {
        sVar11 = (short)param_1[0xb];
      }
      else {
        iVar5 = param_1[0xb];
        local_c = iVar5 - iVar14;
        if (local_c < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        sVar11 = (short)((uVar6 >> 0x10) % (((iVar5 + iVar14) - local_c) + 1U)) + (short)local_c;
      }
      iVar14 = param_1[0x13];
      if (iVar14 < 1) {
        sVar10 = (short)param_1[10];
      }
      else {
        iVar5 = param_1[10];
        local_c = iVar5 - iVar14;
        if (local_c < 0) {
          iVar8 = local_34->field_001C;
        }
        else {
          iVar8 = local_34->field_001C;
        }
        uVar6 = iVar8 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar6;
        sVar10 = (short)((uVar6 >> 0x10) % (((iVar5 + iVar14) - local_c) + 1U)) + (short)local_c;
      }
      /* ST_CALLSITE[00557082]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksCreate(local_34,(short)*param_1,(short)param_1[1],0,param_1[4],param_1[5],param_1[6],
                  sVar10,sVar11,(short)local_18,(short)local_14,(short)local_8,(short)local_10,
                  param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
    }
    else {
      pcVar12 = g_cMf32_00806760;
      if (*(int *)(&DAT_007c900c + *param_1 * 0x18) != 1) {
        pcVar12 = PTR_00806770;
      }
      iVar14 = 1;
      cVar13 = '\x1d';
      pcVar7 = thunk_FUN_00555840(*param_1);
      local_38 = Library::Ourlib::MFTSPR::mfTSprGetNumFas(pcVar12,pcVar7,cVar13,iVar14);
      if (param_1[3] < 0) {
        iVar3 = FUN_006acf0d(0,0,0,(param_1[0x13] * local_38) / 10 +
                                   (param_1[0x16] * local_38 * local_38) / 0x14 + param_1[0x10],
                             (param_1[0x14] * local_38) / 10 +
                             (param_1[0x17] * local_38 * local_38) / 0x14 + param_1[0x11],
                             (param_1[0x15] * local_38) / 10 +
                             (param_1[0x18] * local_38 * local_38) / 0x14 + param_1[0x12]);
        if (*(int *)(&DAT_007c9008 + *param_1 * 0x18) < iVar3 / 2) {
          iVar14 = ((iVar3 / 2) * 100) / *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          iVar14 = 100;
        }
        param_1[3] = iVar14;
      }
      this_00 = local_34;
      local_30 = 0;
      while( true ) {
        if (param_1[3] < 1) {
          local_c = *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          local_c = (*(int *)(&DAT_007c9008 + *param_1 * 0x18) * 100) / param_1[3];
        }
        local_c = local_c * local_30;
        if (local_8 <= local_c) break;
        iVar14 = param_1[0x18];
        if (iVar14 < 1) {
          local_18 = param_1[0xf];
        }
        else {
          iVar5 = param_1[0xf];
          local_18 = iVar5 - iVar14;
          if (local_18 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_18 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_18) + 1U) + local_18;
        }
        iVar14 = param_1[0x17];
        if (iVar14 < 1) {
          local_14 = param_1[0xe];
        }
        else {
          iVar5 = param_1[0xe];
          local_14 = iVar5 - iVar14;
          if (local_14 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_14 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_14) + 1U) + local_14;
        }
        iVar14 = param_1[0x16];
        if (iVar14 < 1) {
          local_1c = param_1[0xd];
        }
        else {
          iVar5 = param_1[0xd];
          local_1c = iVar5 - iVar14;
          if (local_1c < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_1c = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_1c) + 1U) + local_1c;
        }
        iVar14 = param_1[0x15];
        if (iVar14 < 1) {
          local_20 = param_1[0xc];
        }
        else {
          iVar5 = param_1[0xc];
          local_20 = iVar5 - iVar14;
          if (local_20 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_20 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_20) + 1U) + local_20;
        }
        iVar14 = param_1[0x14];
        if (iVar14 < 1) {
          local_24 = param_1[0xb];
        }
        else {
          iVar5 = param_1[0xb];
          local_24 = iVar5 - iVar14;
          if (local_24 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_24 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_24) + 1U) + local_24;
        }
        iVar14 = param_1[0x13];
        if (iVar14 < 1) {
          local_28 = param_1[10];
        }
        else {
          iVar5 = param_1[10];
          local_28 = iVar5 - iVar14;
          if (local_28 < 0) {
            iVar8 = this_00->field_001C;
          }
          else {
            iVar8 = this_00->field_001C;
          }
          uVar6 = iVar8 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_28 = (uVar6 >> 0x10) % (((iVar5 + iVar14) - local_28) + 1U) + local_28;
        }
        if (param_1[0x12] < 1) {
          iVar14 = local_8 - local_c;
          local_2c = (param_1[6] * iVar14 + param_1[9] * local_c) / local_8;
        }
        else {
          iVar14 = local_8 - local_c;
          iVar8 = (param_1[6] * iVar14 + param_1[9] * local_c) / local_8;
          iVar5 = param_1[0x12];
          local_2c = iVar8 - iVar5;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          local_2c = (uVar6 >> 0x10) % (((iVar8 + iVar5) - local_2c) + 1U) + local_2c;
        }
        if (param_1[0x11] < 1) {
          iVar5 = (iVar14 * param_1[5] + param_1[8] * local_c) / local_8;
        }
        else {
          iVar8 = (iVar14 * param_1[5] + param_1[8] * local_c) / local_8;
          iVar5 = param_1[0x11];
          local_10 = iVar8 - iVar5;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          iVar5 = (uVar6 >> 0x10) % (((iVar8 + iVar5) - local_10) + 1U) + local_10;
        }
        if (param_1[0x10] < 1) {
          iVar14 = (iVar14 * param_1[4] + local_c * param_1[7]) / local_8;
        }
        else {
          iVar8 = (iVar14 * param_1[4] + local_c * param_1[7]) / local_8;
          iVar14 = param_1[0x10];
          local_10 = iVar8 - iVar14;
          if (local_10 < 0) {
            iVar1 = this_00->field_001C;
          }
          else {
            iVar1 = this_00->field_001C;
          }
          uVar6 = iVar1 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          iVar14 = (uVar6 >> 0x10) % (((iVar8 + iVar14) - local_10) + 1U) + local_10;
        }
        /* ST_CALLSITE[00557557]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksCreate(this_00,(short)*param_1,(short)param_1[1],
                    (param_1[2] * local_c * local_38) / (local_8 * 100),iVar14,iVar5,local_2c,
                    (short)local_28,(short)local_24,(short)local_20,(short)local_1c,(short)local_14,
                    (short)local_18,param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
        local_30 = local_30 + 1;
      }
    }
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_7c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x1f7,0,local_EAX_96,
                             "%s","TraksClassTy::TraksCreateCollection error ");
  if (iVar4 == 0) {
    RaiseInternalException(local_EAX_96,0,"E:\\__titans\\grig\\traks.cpp",0x1f8);
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

