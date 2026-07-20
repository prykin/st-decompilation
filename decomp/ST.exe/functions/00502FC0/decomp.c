
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelSI
   
   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
    */

void __thiscall CPanelTy::Update2PanelSI(CPanelTy *this)

{
  CPanelTy_field_0B99State *pCVar1;
  char cVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  CPanelTy_field_0B99State *pCVar8;
  void *unaff_EDI;
  AnonShape_00501D00_04A7E309 *pAVar9;
  InternalExceptionFrame local_ac;
  AnonShape_00501D00_04A7E309 local_68;
  CPanelTy *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234,0,iVar5,&DAT_007a4ccc
                               ,s_CPanelTy__Update2PanelSI_007c2620);
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pCVar1 = &local_c->field_0B99;
  pCVar8 = pCVar1;
  pAVar9 = &local_68;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(CPanelTy_field_0B99State *)pAVar9 = *pCVar8;
    pCVar8 = pCVar8 + 1;
    pAVar9 = (AnonShape_00501D00_04A7E309 *)&pAVar9->field_0x4;
  }
  pCVar8 = pCVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pCVar8 = 0;
    pCVar8 = pCVar8 + 1;
  }
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  if (local_68._5_1_ == this_00->field_0B9E) {
    switch(this_00->field_0B9E) {
    case CASE_1:
      if ((local_68._0_4_ == this_00->field_0B99) && (local_68._4_1_ == this_00->field_0B9D)) {
        thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        switch(this_00->field_0B99) {
        case CASE_1A:
          goto switchD_005030a2_caseD_1a;
        case CASE_1B:
        case CASE_1D:
        case CASE_23:
        case CASE_24:
          cVar2 = this_00->field_0BCD;
          if (cVar2 == local_68._52_1_) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          if ((cVar2 != -1) && (local_8 = (uint)local_8._1_3_ << 8, cVar2 != '\0')) {
            do {
              pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,1);
              DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,
                     0x87,'\x01',pbVar6);
              bVar4 = (byte)local_8 + 1;
              local_8 = CONCAT31(local_8._1_3_,bVar4);
            } while (bVar4 < (byte)this_00->field_0BCD);
          }
          if ((byte)local_8 < 0x14) {
            iVar7 = 0x14 - (local_8 & 0xff);
            iVar5 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
              DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)this_00->field_0154 < 0) {
            g_currentExceptionFrame = local_ac.previous;
            return;
          }
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_0154,0xffffffff,this_00->field_0048,
                     this_00->field_00A0);
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
      if ((local_68._0_4_ == this_00->field_0B99) && (local_68._4_1_ == this_00->field_0B9D)) {
        thunk_FUN_00501d00(this_00,(AnonShape_00501D00_3942B646 *)&this_00->field_0B99,&local_68);
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    case CASE_4:
      if (local_68._0_4_ == this_00->field_0B99) {
        g_currentExceptionFrame = local_ac.previous;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  PaintCtrlBoatSI(this_00);
  SetControlBoatSI(this_00);
  thunk_FUN_00501a10((AnonShape_00501A10_7BD31715 *)this_00);
switchD_00503051_default:
  g_currentExceptionFrame = local_ac.previous;
  return;
switchD_005030a2_caseD_1a:
  if (this_00->field_0BB6 == local_68._29_1_) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if ((this_00->field_0BB6 & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,
             '\x01',pbVar6);
      bVar4 = (byte)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar4);
    } while (bVar4 < (byte)this_00->field_0BB6 >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar7 = 0x14 - (local_8 & 0xff);
    iVar5 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_018C,iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)this_00->field_0154 < 0) {
    g_currentExceptionFrame = local_ac.previous;
    return;
  }
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_00->field_0154,0xffffffff,this_00->field_0048,this_00->field_00A0);
  g_currentExceptionFrame = local_ac.previous;
  return;
}

