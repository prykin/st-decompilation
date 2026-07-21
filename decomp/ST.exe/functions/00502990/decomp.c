#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoatSI

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::PaintCtrlBoatSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  ushort *puVar6;
  byte bVar7;
  AnonShape_006B5B10_E0D06CF1 *pAVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed,0,iVar3,"%s"
                               ,"CPanelTy::PaintCtrlBoatSI");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed);
    return;
  }
  switch(local_c->field_0B9E) {
  case CASE_0:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_018C,0,0x46,'\x01',
           (byte *)local_c->field_0974);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,0x31,0,'\x06',
           (byte *)pCVar2->field_097C);
    break;
  case CASE_1:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_018C,0,0x46,'\x01',
           (byte *)local_c->field_0988);
    if (pCVar2->field_0B99 == 0xbd) {
      puVar6 = pCVar2->field_097C;
LAB_00502b2d:
      pAVar8 = (AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C;
    }
    else {
      puVar6 = pCVar2->field_098C;
      pAVar8 = (AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C;
    }
    goto LAB_00502b3b;
  case CASE_2:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_018C,0,0x46,'\x01',
           (byte *)local_c->field_0988);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,0x31,0,'\x06',
           (byte *)pCVar2->field_098C);
    break;
  case CASE_3:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_018C,0,0x46,'\x01',
           (byte *)local_c->field_0974);
    switch(pCVar2->field_0B99) {
    case 9:
    case 0x15:
    case 0xa6:
    case 0xa7:
    case 0xaf:
    case 0xbd:
      puVar6 = pCVar2->field_097C;
      pAVar8 = (AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C;
      break;
    default:
      puVar6 = pCVar2->field_0990;
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    DibPut(pAVar8,0x31,0,'\x06',(byte *)puVar6);
    break;
  case CASE_4:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_c->field_018C,0,0x46,'\x01',
           (byte *)local_c->field_0974);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,0x31,0,'\x06',
           (byte *)pCVar2->field_097C);
  }
  if (pCVar2->field_0B9E == CASE_1) {
    switch(pCVar2->field_0B99) {
    case CASE_1A:
      pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
      bVar7 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((pCVar2->field_0BB6 & 0xfe) != 0) {
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,
                 '\x01',pbVar4);
          bVar7 = bVar7 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar7);
        } while (bVar7 < (byte)pCVar2->field_0BB6 >> 1);
      }
      if (bVar7 < 0x14) {
        iVar5 = 0x14 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_23:
    case CASE_24:
      if (pCVar2->field_0BCD != -1) {
        pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,0x3c,0x84,'\x01',pbVar4);
        bVar7 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCVar2->field_0BCD != '\0') {
          do {
            pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1
                                         );
            DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,
                   0x87,'\x01',pbVar4);
            bVar7 = bVar7 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = CONCAT31(local_8._1_3_,bVar7);
          } while (bVar7 < (byte)pCVar2->field_0BCD);
        }
        if (bVar7 < 0x14) {
          iVar5 = 0x14 - (local_8 & 0xff);
          iVar3 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0
                                         );
            DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_018C,iVar3,0x87,'\x01',pbVar4);
            iVar3 = iVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  if (-1 < (int)pCVar2->field_0154) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,pCVar2->field_0154,0xffffffff,pCVar2->field_0048,pCVar2->field_00A0);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

