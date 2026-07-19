
int __cdecl
FUN_00677be0(short param_1,short param_2,byte *param_3,short param_4,short param_5,short param_6,
            short param_7,short param_8,short param_9,undefined *param_10,undefined4 param_11)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  void *unaff_EDI;
  bool bVar9;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_18 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x3ba,0,iVar3,&DAT_007a4ccc,
                               s__EnumRCCont_007d2e14);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x3bb);
    return iVar3;
  }
  if (DAT_007fa160 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x39c);
  }
  uVar7 = *(int *)(DAT_007fa160 + 0xc) - 1;
  iVar3 = DAT_007fa160;
  if ((int)uVar7 < 0) {
    g_currentExceptionFrame = local_70.previous;
    return local_18;
  }
  do {
    if (uVar7 < *(uint *)(iVar3 + 0xc)) {
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (int *)*puVar4;
    if (((this != (int *)0x0) &&
        (local_10 = uVar7, local_1c = (**(code **)(*this + 300))(), iVar3 = DAT_007fa160,
        (short)local_1c == param_1)) &&
       ((param_2 == 0 ||
        (iVar5 = (**(code **)(*this + 0x130))(), iVar3 = DAT_007fa160, iVar5 == param_2)))) {
      iVar5 = 1;
      local_14 = 1;
      if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
        (**(code **)(*this + 0x74))(local_2c);
        pbVar8 = local_2c;
        pbVar6 = param_3;
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00677ce9:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00677cee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00677ce9;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00677cee:
        if (iVar3 != 0) {
          iVar5 = 0;
          local_14 = 0;
        }
      }
      iVar3 = DAT_007fa160;
      uVar7 = local_10;
      if (iVar5 != 0) {
        if ((((0 < param_7) && (0 < param_8)) && (0 < param_9)) &&
           ((((thunk_FUN_004162f0(this,&local_6,&local_8,&local_a), local_6 < param_4 ||
              (local_8 < param_5)) ||
             ((local_a < param_6 ||
              (((int)param_4 + (int)param_7 <= (int)local_6 ||
               ((int)param_5 + (int)param_8 <= (int)local_8)))))) ||
            (iVar5 = local_14, (int)param_6 + (int)param_9 <= (int)local_a)))) {
          iVar5 = 0;
        }
        iVar3 = DAT_007fa160;
        uVar7 = local_10;
        if (((iVar5 != 0) && (param_10 != (undefined *)0x0)) &&
           (iVar5 = (*(code *)param_10)(local_1c,local_10,this,param_11), iVar3 = DAT_007fa160,
           uVar7 = local_10, iVar5 != 0)) {
          g_currentExceptionFrame = local_70.previous;
          return -1;
        }
      }
    }
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_18;
    }
  } while( true );
}

