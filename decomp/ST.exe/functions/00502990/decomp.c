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

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintCtrlBoatSI(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  RecoveredSourceFamily_dibcopy *pRVar8;
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
    DibPut(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    DibPut(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[2]);
    break;
  case CASE_1:
    DibPut(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[5]);
    if (pCVar2->field_0B99 == CASE_BD) {
      pbVar4 = (byte *)pCVar2->field_0974[2];
LAB_00502b2d:
      pRVar8 = pCVar2->field_018C;
    }
    else {
      pbVar4 = (byte *)pCVar2->field_0974[6];
      pRVar8 = pCVar2->field_018C;
    }
    goto LAB_00502b3b;
  case CASE_2:
    DibPut(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[5]);
    DibPut(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[6]);
    break;
  case CASE_3:
    DibPut(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    switch(pCVar2->field_0B99) {
    case CASE_9:
    case CASE_15:
    case CASE_A6:
    case CASE_A7:
    case CASE_AF:
    case CASE_BD:
      pbVar4 = (byte *)pCVar2->field_0974[2];
      pRVar8 = pCVar2->field_018C;
      break;
    default:
      pbVar4 = (byte *)pCVar2->field_0974[7];
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    DibPut(pRVar8,0x31,0,'\x06',pbVar4);
    break;
  case CASE_4:
    DibPut(local_c->field_018C,0,0x46,'\x01',(byte *)local_c->field_0974[0]);
    DibPut(pCVar2->field_018C,0x31,0,'\x06',(byte *)pCVar2->field_0974[2]);
  }
  if (pCVar2->field_0B9E == CASE_1) {
    switch(pCVar2->field_0B99) {
    case CASE_1A:
      pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
      DibPut(pCVar2->field_018C,0x3c,0x84,'\x01',(byte *)pBVar3);
      bVar5 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((pCVar2->field_0BB6 & 0xfe) != 0) {
        do {
          pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,3);
          DibPut(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',(byte *)pBVar3);
          bVar5 = bVar5 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        } while (bVar5 < (byte)pCVar2->field_0BB6 >> 1);
      }
      if (bVar5 < 0x14) {
        iVar6 = 0x14 - (local_8 & 0xff);
        iVar7 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          DibPut(pCVar2->field_018C,iVar7,0x87,'\x01',(byte *)pBVar3);
          iVar7 = iVar7 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_23:
    case CASE_24:
      if (pCVar2->field_0BCD != -1) {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,3);
        DibPut(pCVar2->field_018C,0x3c,0x84,'\x01',(byte *)pBVar3);
        bVar5 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCVar2->field_0BCD != '\0') {
          do {
            pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
            DibPut(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',(byte *)pBVar3);
            bVar5 = bVar5 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
          } while (bVar5 < (byte)pCVar2->field_0BCD);
        }
        if (bVar5 < 0x14) {
          iVar6 = 0x14 - (local_8 & 0xff);
          iVar7 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
            DibPut(pCVar2->field_018C,iVar7,0x87,'\x01',(byte *)pBVar3);
            iVar7 = iVar7 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
  }
  if (-1 < (int)pCVar2->field_0148[3]) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[3],0xffffffff,
               pCVar2->field_0048,pCVar2->field_00A0);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

