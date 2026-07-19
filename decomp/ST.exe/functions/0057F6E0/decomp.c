
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::CreateRes */

int __thiscall STDcResourcC::CreateRes(STDcResourcC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  STDcResourcC *this_00;
  bool bVar5;
  int iVar6;
  STT3DSprC *pSVar7;
  byte *pbVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar12;
  byte bVar13;
  InternalExceptionFrame local_5c;
  STDcResourcC *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 1;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Igor_To_gold_cpp_007cb19c,0x2b3,0,iVar6,&DAT_007a4ccc,
                                s_STDcResourcC__CreateRes_007cb28c);
    if (iVar10 != 0) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Igor_To_gold_cpp_007cb19c,0x2b4);
    return 0xffff;
  }
  switch(local_18->field_0255) {
  case 0xdc:
    local_c = -1;
    local_14 = 0;
    do {
      iVar6 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = *(int *)&this_00->field_0x245 + iVar6;
      if (((((iVar10 < DAT_007fb240) && (-1 < iVar10)) &&
           (iVar10 = *(int *)&this_00->field_0x249 + local_10, iVar10 < DAT_007fb242)) &&
          ((-1 < iVar10 && (-1 < *(int *)&this_00->field_0x24d)))) &&
         (*(int *)&this_00->field_0x24d < 5)) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar7 = (STT3DSprC *)0x0;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((3 < local_14) &&
           (pSVar7 = (STT3DSprC *)Init(this_00,(uint)unaff_EDI), pSVar7 == (STT3DSprC *)0x0))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pbVar8 = (byte *)thunk_FUN_0057f3a0(this_00,local_c,0);
        iVar10 = STT3DSprC::LoadSequence(pSVar7,0xe,DAT_00806774,pbVar8,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pbVar8 = (byte *)thunk_FUN_0057f3a0(this_00,local_c,1);
        iVar10 = STT3DSprC::LoadSequence(pSVar7,0xd,DAT_00806774,pbVar8,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        STT3DSprC::StartShow(pSVar7,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004acef0(pSVar7,DAT_008073cc);
        thunk_FUN_004acf50(pSVar7,'\r');
        STT3DSprC::StartShow(pSVar7,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
        iVar10 = *(int *)&this_00->field_0x249 + local_10;
        local_10 = *(int *)&this_00->field_0x245 + iVar6;
        thunk_FUN_004ad3c0(pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                           (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                           (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                           _DAT_007904fc);
        FUN_006ea3e0((void *)this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case 0xdd:
    local_c = -1;
    local_14 = 0;
    do {
      iVar6 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = *(int *)&this_00->field_0x245 + iVar6;
      if ((((iVar10 < DAT_007fb240) && (-1 < iVar10)) &&
          (iVar10 = *(int *)&this_00->field_0x249 + local_10, iVar10 < DAT_007fb242)) &&
         (((-1 < iVar10 && (-1 < *(int *)&this_00->field_0x24d)) &&
          (*(int *)&this_00->field_0x24d < 5)))) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar7 = (STT3DSprC *)0x0;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((3 < local_14) &&
           (pSVar7 = (STT3DSprC *)Init(this_00,(uint)unaff_EDI), pSVar7 == (STT3DSprC *)0x0))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pbVar8 = (byte *)thunk_FUN_0057f2e0(this_00,local_c,0);
        iVar10 = STT3DSprC::LoadSequence(pSVar7,0xe,DAT_00806774,pbVar8,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pbVar8 = (byte *)thunk_FUN_0057f2e0(this_00,local_c,1);
        iVar10 = STT3DSprC::LoadSequence(pSVar7,0xd,DAT_00806774,pbVar8,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        STT3DSprC::StartShow(pSVar7,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004acef0(pSVar7,DAT_008073cc);
        thunk_FUN_004acf50(pSVar7,'\r');
        STT3DSprC::StartShow(pSVar7,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
        iVar10 = *(int *)&this_00->field_0x249 + local_10;
        local_10 = *(int *)&this_00->field_0x245 + iVar6;
        thunk_FUN_004ad3c0(pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                           (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                           (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                           _DAT_007904fc);
        FUN_006ea3e0((void *)this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case 0xde:
    iVar6 = -1;
    do {
      if (iVar6 == 1) {
        iVar6 = 0;
      }
      local_c = (&DAT_007cb0bc)[iVar6];
      local_10 = (&DAT_007cb0e0)[iVar6];
      iVar10 = local_c + *(int *)&this_00->field_0x245;
      if ((((iVar10 < DAT_007fb240) && (-1 < iVar10)) &&
          ((iVar10 = *(int *)&this_00->field_0x249 + local_10, iVar10 < DAT_007fb242 &&
           ((-1 < iVar10 && (-1 < *(int *)&this_00->field_0x24d)))))) &&
         (*(int *)&this_00->field_0x24d < 5)) {
        if (this_00 == (STDcResourcC *)0x0) {
          pSVar7 = (STT3DSprC *)0x0;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((iVar6 < 0) ||
           (pSVar7 = (STT3DSprC *)Init(this_00,(uint)unaff_EDI), pSVar7 != (STT3DSprC *)0x0)) {
          bVar13 = 0x1d;
          pbVar8 = (byte *)thunk_FUN_0057f470(this_00,iVar6,0);
          iVar10 = STT3DSprC::LoadSequence(pSVar7,0xe,DAT_00806774,pbVar8,bVar13);
          if (iVar10 == 0) {
            bVar13 = 0x1d;
            pbVar8 = (byte *)thunk_FUN_0057f470(this_00,iVar6,1);
            iVar10 = STT3DSprC::LoadSequence(pSVar7,0xd,DAT_00806774,pbVar8,bVar13);
            if (iVar10 == 0) {
              STT3DSprC::StartShow(pSVar7,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
              thunk_FUN_004acef0(pSVar7,DAT_008073cc);
              thunk_FUN_004acf50(pSVar7,'\r');
              STT3DSprC::StartShow(pSVar7,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
              local_14 = *(int *)&this_00->field_0x245 + local_c;
              thunk_FUN_004ad3c0(pSVar7,(float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                                 (float)(*(int *)&this_00->field_0x249 + local_10) * _DAT_007904f8 +
                                 _DAT_007904f4,
                                 (float)*(int *)&this_00->field_0x24d * _DAT_00790504 +
                                 _DAT_00790500 + _DAT_007904fc);
              FUN_006ea3e0((void *)this_00->field_0211,pSVar7->field_0018,-1);
              goto LAB_0057fc59;
            }
          }
        }
        local_8 = 0;
        break;
      }
LAB_0057fc59:
      iVar6 = iVar6 + 2;
    } while (iVar6 < 7);
    if (iVar6 != 8) {
      local_8 = 0;
    }
    goto LAB_0057fd72;
  default:
    goto switchD_0057f734_caseD_df;
  case 0xe0:
    if (((((*(int *)&local_18->field_0x245 < (int)DAT_007fb240) &&
          (-1 < *(int *)&local_18->field_0x245)) &&
         (*(int *)&local_18->field_0x249 < (int)DAT_007fb242)) &&
        ((-1 < *(int *)&local_18->field_0x249 &&
         (iVar6 = *(int *)&local_18->field_0x24d, -1 < iVar6)))) &&
       ((iVar6 < 5 &&
        (bVar5 = thunk_FUN_004961b0(*(short *)&local_18->field_0x245,
                                    *(short *)&local_18->field_0x249,(short)iVar6),
        CONCAT31(extraout_var,bVar5) != 0)))) {
      sVar1 = *(short *)&this_00->field_0x245;
      sVar2 = *(short *)&this_00->field_0x24d;
      sVar3 = *(short *)&this_00->field_0x249;
      if ((((sVar1 < 0) || (DAT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
         (((DAT_007fb242 <= sVar3 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(DAT_007fb248 +
                        ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                        (int)sVar1) * 8);
      }
      if (iVar6 == 0) {
        thunk_FUN_005805c0(this_00);
        goto LAB_0057fd72;
      }
    }
    goto switchD_0057f734_caseD_df;
  }
LAB_0057faac:
  if (local_c != 8) {
    local_8 = 0;
  }
LAB_0057fd72:
  if (local_8 != 0) {
    iVar6 = thunk_FUN_004ab050();
    local_c = 0;
    if (0 < (int)this_00->field_0265) {
      iVar10 = iVar6 * 2 + 1;
      local_10 = iVar6 * 8 + -0x1c;
      iVar6 = iVar10 * 4;
      do {
        iVar9 = iVar6;
        if (8 < iVar10) {
          iVar9 = local_10;
        }
        local_14 = *(int *)((int)&DAT_007cb0b8 + iVar9) + *(int *)&this_00->field_0x245;
        thunk_FUN_004ad3c0(*(void **)(this_00->field_026D + local_c * 4),
                           (float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                           (float)(*(int *)((int)&DAT_007cb0dc + iVar9) +
                                  *(int *)&this_00->field_0x249) * _DAT_007904f8 + _DAT_007904f4,
                           (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                           _DAT_007904fc);
        iVar11 = iVar6 + 4;
        iVar12 = iVar10 + 1;
        iVar9 = local_10 + 4;
        if (this_00->field_0255 == 0xde) {
          iVar11 = iVar6 + 8;
          iVar12 = iVar10 + 2;
          iVar9 = local_10 + 8;
        }
        local_10 = iVar9;
        local_c = local_c + 1;
        iVar6 = iVar11;
        iVar10 = iVar12;
      } while (local_c < (int)this_00->field_0265);
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
switchD_0057f734_caseD_df:
  local_8 = 0;
  goto LAB_0057fd72;
cf_break_loop_0057FAA5:
  local_8 = 0;
  goto LAB_0057faac;
}

