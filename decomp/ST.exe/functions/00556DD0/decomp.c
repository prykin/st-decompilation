
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreateCollection */

undefined4 __thiscall TraksClassTy::TraksCreateCollection(TraksClassTy *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  TraksClassTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  cMf32 *pcVar11;
  char cVar12;
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
  
  if (((((*(byte *)(param_1 + 0x1b) & 1) == 0) && (DAT_0080731e == 0)) || (this->field_0024 == 0))
     || ((param_1 == (int *)0x0 || (PTR_00806770 == (cMf32 *)0x0)))) {
    return 0;
  }
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_34 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    local_8 = FUN_006acf0d(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    if (local_8 == 0) {
      iVar3 = param_1[0x18];
      local_10 = param_1[0xf];
      if (0 < iVar3) {
        iVar4 = local_10 - iVar3;
        if (iVar4 < 0) {
          iVar7 = local_34->field_001C;
        }
        else {
          iVar7 = local_34->field_001C;
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar5;
        local_10 = (uVar5 >> 0x10) % (((local_10 + iVar3) - iVar4) + 1U) + iVar4;
      }
      local_8 = param_1[0x17];
      if (local_8 < 1) {
        local_8 = param_1[0xe];
      }
      else {
        iVar3 = param_1[0xe] + local_8;
        local_8 = param_1[0xe] - local_8;
        if (local_8 < 0) {
          uVar5 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar5;
          local_8 = (uVar5 >> 0x10) % ((iVar3 - local_8) + 1U) + local_8;
        }
        else {
          uVar5 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar5;
          local_8 = (uVar5 >> 0x10) % ((iVar3 - local_8) + 1U) + local_8;
        }
      }
      local_14 = param_1[0xd];
      iVar3 = param_1[0x16];
      if (0 < iVar3) {
        iVar4 = local_14 - iVar3;
        if (iVar4 < 0) {
          iVar7 = local_34->field_001C;
        }
        else {
          iVar7 = local_34->field_001C;
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar5;
        local_14 = (uVar5 >> 0x10) % (((local_14 + iVar3) - iVar4) + 1U) + iVar4;
      }
      local_18 = param_1[0x15];
      if (local_18 < 1) {
        local_18 = param_1[0xc];
      }
      else {
        iVar3 = param_1[0xc] + local_18;
        local_18 = param_1[0xc] - local_18;
        if (local_18 < 0) {
          uVar5 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar5;
          local_18 = (uVar5 >> 0x10) % ((iVar3 - local_18) + 1U) + local_18;
        }
        else {
          uVar5 = local_34->field_001C * 0x41c64e6d + 0x3039;
          local_34->field_001C = uVar5;
          local_18 = (uVar5 >> 0x10) % ((iVar3 - local_18) + 1U) + local_18;
        }
      }
      iVar3 = param_1[0x14];
      if (iVar3 < 1) {
        sVar10 = (short)param_1[0xb];
      }
      else {
        iVar4 = param_1[0xb];
        local_c = iVar4 - iVar3;
        if (local_c < 0) {
          iVar7 = local_34->field_001C;
        }
        else {
          iVar7 = local_34->field_001C;
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar5;
        sVar10 = (short)((uVar5 >> 0x10) % (((iVar4 + iVar3) - local_c) + 1U)) + (short)local_c;
      }
      iVar3 = param_1[0x13];
      if (iVar3 < 1) {
        sVar9 = (short)param_1[10];
      }
      else {
        iVar4 = param_1[10];
        local_c = iVar4 - iVar3;
        if (local_c < 0) {
          iVar7 = local_34->field_001C;
        }
        else {
          iVar7 = local_34->field_001C;
        }
        uVar5 = iVar7 * 0x41c64e6d + 0x3039;
        local_34->field_001C = uVar5;
        sVar9 = (short)((uVar5 >> 0x10) % (((iVar4 + iVar3) - local_c) + 1U)) + (short)local_c;
      }
      TraksCreate(local_34,(short)*param_1,(short)param_1[1],0,param_1[4],param_1[5],param_1[6],
                  sVar9,sVar10,(short)local_18,(short)local_14,(short)local_8,(short)local_10,
                  param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
    }
    else {
      pcVar11 = g_cMf32_00806760;
      if (*(int *)(&DAT_007c900c + *param_1 * 0x18) != 1) {
        pcVar11 = PTR_00806770;
      }
      iVar3 = 1;
      cVar12 = '\x1d';
      pcVar6 = thunk_FUN_00555840(*param_1);
      local_38 = Library::Ourlib::MFTSPR::mfTSprGetNumFas(pcVar11,pcVar6,cVar12,iVar3);
      if (param_1[3] < 0) {
        iVar3 = FUN_006acf0d(0,0,0,(param_1[0x13] * local_38) / 10 +
                                   (param_1[0x16] * local_38 * local_38) / 0x14 + param_1[0x10],
                             (param_1[0x14] * local_38) / 10 +
                             (param_1[0x17] * local_38 * local_38) / 0x14 + param_1[0x11],
                             (param_1[0x15] * local_38) / 10 +
                             (param_1[0x18] * local_38 * local_38) / 0x14 + param_1[0x12]);
        if (*(int *)(&DAT_007c9008 + *param_1 * 0x18) < iVar3 / 2) {
          iVar3 = ((iVar3 / 2) * 100) / *(int *)(&DAT_007c9008 + *param_1 * 0x18);
        }
        else {
          iVar3 = 100;
        }
        param_1[3] = iVar3;
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
        iVar3 = param_1[0x18];
        if (iVar3 < 1) {
          local_18 = param_1[0xf];
        }
        else {
          iVar4 = param_1[0xf];
          local_18 = iVar4 - iVar3;
          if (local_18 < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_18 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_18) + 1U) + local_18;
        }
        iVar3 = param_1[0x17];
        if (iVar3 < 1) {
          local_14 = param_1[0xe];
        }
        else {
          iVar4 = param_1[0xe];
          local_14 = iVar4 - iVar3;
          if (local_14 < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_14 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_14) + 1U) + local_14;
        }
        iVar3 = param_1[0x16];
        if (iVar3 < 1) {
          local_1c = param_1[0xd];
        }
        else {
          iVar4 = param_1[0xd];
          local_1c = iVar4 - iVar3;
          if (local_1c < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_1c = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_1c) + 1U) + local_1c;
        }
        iVar3 = param_1[0x15];
        if (iVar3 < 1) {
          local_20 = param_1[0xc];
        }
        else {
          iVar4 = param_1[0xc];
          local_20 = iVar4 - iVar3;
          if (local_20 < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_20 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_20) + 1U) + local_20;
        }
        iVar3 = param_1[0x14];
        if (iVar3 < 1) {
          local_24 = param_1[0xb];
        }
        else {
          iVar4 = param_1[0xb];
          local_24 = iVar4 - iVar3;
          if (local_24 < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_24 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_24) + 1U) + local_24;
        }
        iVar3 = param_1[0x13];
        if (iVar3 < 1) {
          local_28 = param_1[10];
        }
        else {
          iVar4 = param_1[10];
          local_28 = iVar4 - iVar3;
          if (local_28 < 0) {
            iVar7 = this_00->field_001C;
          }
          else {
            iVar7 = this_00->field_001C;
          }
          uVar5 = iVar7 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_28 = (uVar5 >> 0x10) % (((iVar4 + iVar3) - local_28) + 1U) + local_28;
        }
        if (param_1[0x12] < 1) {
          iVar3 = local_8 - local_c;
          local_2c = (param_1[6] * iVar3 + param_1[9] * local_c) / local_8;
        }
        else {
          iVar3 = local_8 - local_c;
          iVar7 = (param_1[6] * iVar3 + param_1[9] * local_c) / local_8;
          iVar4 = param_1[0x12];
          local_2c = iVar7 - iVar4;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          local_2c = (uVar5 >> 0x10) % (((iVar7 + iVar4) - local_2c) + 1U) + local_2c;
        }
        if (param_1[0x11] < 1) {
          iVar4 = (iVar3 * param_1[5] + param_1[8] * local_c) / local_8;
        }
        else {
          iVar7 = (iVar3 * param_1[5] + param_1[8] * local_c) / local_8;
          iVar4 = param_1[0x11];
          local_10 = iVar7 - iVar4;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          iVar4 = (uVar5 >> 0x10) % (((iVar7 + iVar4) - local_10) + 1U) + local_10;
        }
        if (param_1[0x10] < 1) {
          iVar3 = (iVar3 * param_1[4] + local_c * param_1[7]) / local_8;
        }
        else {
          iVar7 = (iVar3 * param_1[4] + local_c * param_1[7]) / local_8;
          iVar3 = param_1[0x10];
          local_10 = iVar7 - iVar3;
          if (local_10 < 0) {
            iVar1 = this_00->field_001C;
          }
          else {
            iVar1 = this_00->field_001C;
          }
          uVar5 = iVar1 * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          iVar3 = (uVar5 >> 0x10) % (((iVar7 + iVar3) - local_10) + 1U) + local_10;
        }
        TraksCreate(this_00,(short)*param_1,(short)param_1[1],
                    (param_1[2] * local_c * local_38) / (local_8 * 100),iVar3,iVar4,local_2c,
                    (short)local_28,(short)local_24,(short)local_20,(short)local_1c,(short)local_14,
                    (short)local_18,param_1[0x19],(short)param_1[0x1a],(byte)param_1[0x1b]);
        local_30 = local_30 + 1;
      }
    }
    g_currentExceptionFrame = local_7c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_7c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x1f7,0,iVar3,&DAT_007a4ccc,
                             s_TraksClassTy__TraksCreateCollect_007c925c);
  if (iVar4 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_grig_traks_cpp_007c9104,0x1f8);
    return 0xffffffff;
  }
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}

