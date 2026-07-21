#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintTab */

void __thiscall MReportTy::PaintTab(MReportTy *this,AnonShape_005C1610_B64592CA *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  AnonNested_005C1610_0014_572A8044 *pAVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  byte bVar11;
  InternalExceptionFrame local_8c;
  int local_48;
  AnonNested_005C1610_0014_572A8044 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  MReportTy *local_8;

  local_44 = param_1->field_0014;
  local_40 = local_44->field_0010 - 0x46;
  local_48 = local_44->field_000C - 0x1a;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  pAVar4 = local_44;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x369,0,iVar5,"%s",
                               "MReportTy::PaintTab");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x369);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006b5f80(DAT_008075a8,local_44->field_000C,local_44->field_0010,local_44->field_0014,
               local_44->field_0018);
  iVar7 = local_40;
  iVar5 = local_48;
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,local_48,local_40,
               pAVar4->field_0014,pAVar4->field_0018,0xff);
  uVar2 = pAVar4->field_0004;
  if (uVar2 == 0) {
    local_3c = iVar5 + 5;
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 7;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -3 + pAVar4->field_0014;
    local_24 = iVar5 + -3 + pAVar4->field_0014;
    local_20 = (pAVar4->field_0018 - 1) + iVar7;
    local_18 = (pAVar4->field_0018 - 1) + iVar7;
    local_10 = (pAVar4->field_0018 - 3) + iVar7;
    local_1c = local_34;
    local_14 = local_3c;
    FUN_006c7ea0(local_8->field_0073,0,&local_3c,6,0x4c);
    FUN_006c7f10((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,&local_3c,6,0x18);
    iVar6 = iVar5 + -1 + pAVar4->field_0014;
LAB_005c17e9:
    bVar11 = 0x18;
    iVar1 = pAVar4->field_0018 - 1;
    iVar10 = iVar7;
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 != 2) goto LAB_005c1806;
      iVar6 = iVar5 + -1 + pAVar4->field_0014;
      goto LAB_005c17e9;
    }
    local_38 = iVar7 + 2;
    local_34 = iVar5 + 2;
    local_3c = iVar5;
    local_30 = iVar7;
    local_28 = iVar7;
    local_2c = iVar5 + -1 + pAVar4->field_0014;
    local_24 = iVar5 + -1 + pAVar4->field_0014;
    local_20 = (pAVar4->field_0018 - 1) + iVar7;
    local_14 = iVar5;
    local_18 = (pAVar4->field_0018 - 1) + iVar7;
    local_10 = (pAVar4->field_0018 - 3) + iVar7;
    local_1c = local_34;
    FUN_006c7ea0(local_8->field_0073,0,&local_3c,6,0x4c);
    FUN_006c7f10((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,&local_3c,6,0x18);
    bVar11 = 0x4c;
    iVar6 = iVar5 + -1 + pAVar4->field_0014;
    iVar1 = pAVar4->field_0018 - 2;
    iVar10 = iVar7 + 1;
  }
  FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,iVar6,iVar10,iVar6,iVar1 + iVar7
               ,bVar11,0xd);
LAB_005c1806:
  if (pAVar4->field_0004 < 2) {
    uVar2 = pAVar4->field_0000;
    cVar9 = -1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,0xff);
    if (1 < uVar2) {
      cVar9 = DAT_0080c846;
      if (uVar2 != 2) {
        cVar9 = *(char *)((int)&DAT_0080c83a + uVar2 + 2);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31(local_c._1_3_,cVar9);
    }
    if (cVar9 != -1) {
      switch(local_c & 0xff) {
      case 0:
        uVar8 = 0xfc;
        break;
      case 1:
        uVar8 = 0xfa;
        break;
      case 2:
        uVar8 = 0xfb;
        break;
      case 3:
        uVar8 = 0xf9;
        break;
      case 4:
        uVar8 = 0xfd;
        break;
      case 5:
        uVar8 = 0xfe;
        break;
      case 6:
        uVar8 = 0xf3;
        break;
      case 7:
        uVar8 = 7;
        break;
      default:
        uVar8 = 0xff;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,
                   (-(uint)(pAVar4->field_0004 != 0) & 0xfffffffb) + 0xc + iVar5,iVar7 + 0xb,0x1a,
                   0xd,uVar8);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0073,0,
                   (-(uint)(pAVar4->field_0004 != 0) & 0xfffffffb) + 0xc + iVar5,iVar7 + 0xb,0x1a,
                   0xd,0,0xd);
    }
  }
  Library::DKW::DDX::FUN_006b48e0
            (DAT_0080759c,pAVar4->field_000C,pAVar4->field_0010,(int)local_8->field_0073,0,iVar5,
             iVar7,pAVar4->field_0014,pAVar4->field_0018,(int)&local_8->field_0xa3,0x4c,0x10000ff);
  g_currentExceptionFrame = local_8c.previous;
  return;
}

