#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelSI

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::Update2PanelSI(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  char cVar2;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  BITMAPINFO *pBVar5;
  int iVar7;
  int iVar6;
  CPanelTy_field_0B99State *pCVar7;
  RecoveredRecord_CPanelTy_00501D00 *pRVar8;
  int iVar9;
  InternalExceptionFrame local_ac;
  RecoveredRecord_CPanelTy_00501D00 local_68;
  CPanelTy *local_c;
  uint local_8;

  local_8 = local_8 & 0xffffff00;
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x234,0,iVar5,"%s"
                               ,"CPanelTy::Update2PanelSI");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x234);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_c->field_0B99;
  pCVar7 = pCVar1;
  pRVar8 = &local_68;
  memmove(pRVar8, pCVar7, 0x5c); /* compiler REP MOVS byte copy */
  memset(pCVar1, 0, 0x5c); /* compiler bulk-zero initialization */
  /* ST_CALLSITE[0050302C]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  if (STPiece<5,1>(local_68) == this_00->field_0B9E) {
    switch(this_00->field_0B9E) {
    case CASE_1:
      if ((STPiece<0,4>(local_68) == this_00->field_0B99) && (STPiece<4,1>(local_68) == this_00->field_0B9D)) {
        thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        switch(this_00->field_0B99) {
        case CASE_1A:
          goto switchD_005030a2_caseD_1a;
        case CASE_1B:
        case CASE_1D:
        case CASE_23:
        case CASE_24:
          cVar2 = this_00->field_0BCD;
          if (cVar2 == STPiece<52,1>(local_68)) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          if ((cVar2 != -1) && (local_8 = (uint)STPiece<1,3>(local_8) << 8, cVar2 != '\0')) {
            do {
              pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
              /* ST_CALLSITE[005031D7]: CALL 0x00403229; direct=00403229 DibPut */
              DibPut(this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',(byte *)pBVar5);
              bVar4 = (byte)local_8 + 1;
              local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
            } while (bVar4 < (byte)this_00->field_0BCD);
          }
          if ((byte)local_8 < 0x14) {
            iVar9 = 0x14 - (local_8 & 0xff);
            iVar6 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
              /* ST_CALLSITE[0050322B]: CALL 0x00403229; direct=00403229 DibPut */
              DibPut(this_00->field_018C,iVar6,0x87,'\x01',(byte *)pBVar5);
              iVar6 = iVar6 + 4;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          if ((int)this_00->field_0148[3] < 0) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[3],0xffffffff,
                     this_00->field_0048,this_00->field_00A0);
          g_currentExceptionFrame = local_ac.previous;
          return;
        default:
          g_currentExceptionFrame = local_ac.previous;
          return;
        }
      }
      break;
    case CASE_2:
    case CASE_3:
      if ((STPiece<0,4>(local_68) == this_00->field_0B99) && (STPiece<4,1>(local_68) == this_00->field_0B9D)) {
        thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    case CASE_4:
      if (STPiece<0,4>(local_68) == this_00->field_0B99) {
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  /* ST_CALLSITE[005032BF]: CALL 0x00401aeb; direct=00401AEB CPanelTy::PaintCtrlBoatSI */
  PaintCtrlBoatSI(this_00);
  /* ST_CALLSITE[005032C6]: CALL 0x0040296e; direct=0040296E CPanelTy::SetControlBoatSI */
  SetControlBoatSI(this_00);
  /* ST_CALLSITE[005032CD]: CALL 0x0040135c; direct=0040135C CPanelTy::sub_00501A10 */
  sub_00501A10(this_00);
switchD_00503051_default:
  g_currentExceptionFrame = local_ac.previous;
  return;
switchD_005030a2_caseD_1a:
  if (this_00->field_0BB6 == STPiece<29,1>(local_68)) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  local_8 = (uint)STPiece<1,3>(local_8) << 8;
  if ((this_00->field_0BB6 & 0xfe) != 0) {
    do {
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
      /* ST_CALLSITE[005030EF]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',(byte *)pBVar5);
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < (byte)this_00->field_0BB6 >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar9 = 0x14 - (local_8 & 0xff);
    iVar6 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pBVar5 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
      /* ST_CALLSITE[00503145]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(this_00->field_018C,iVar6,0x87,'\x01',(byte *)pBVar5);
      iVar6 = iVar6 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)this_00->field_0148[3] < 0) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[3],0xffffffff,
             this_00->field_0048,this_00->field_00A0);
  g_currentExceptionFrame = local_ac.previous;
  return;
}

