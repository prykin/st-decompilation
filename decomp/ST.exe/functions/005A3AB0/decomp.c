
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetInfo */

void __thiscall FSGSTy::SetInfo(FSGSTy *this,byte *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  AnonPointee_FSGSTy_1B0C *pAVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  uint local_88 [8];
  InternalExceptionFrame local_68;
  _SYSTEMTIME local_24;
  FSGSTy *local_14;
  uint *local_10;
  FILETIME local_c;
  
  this_00 = PTR_00802a30;
  local_14 = this;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,this_00->field_00C5,this_00->field_00C9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  if ((this->field_1A5F == CASE_A) &&
     (pAVar3 = this->field_1B0C, pAVar3 != (AnonPointee_FSGSTy_1B0C *)0x0)) {
    do {
      bVar1 = pAVar3->field_0000;
      bVar10 = bVar1 < *param_1;
      if (bVar1 != *param_1) {
LAB_005a3b5e:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005a3b63;
      }
      if (bVar1 == 0) break;
      bVar1 = pAVar3->field_0001;
      bVar10 = bVar1 < param_1[1];
      if (bVar1 != param_1[1]) goto LAB_005a3b5e;
      pAVar3 = (AnonPointee_FSGSTy_1B0C *)&pAVar3->field_0x2;
      param_1 = param_1 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a3b63:
    if (iVar4 == 0) {
      local_68.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_68;
      iVar4 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
      if (iVar4 == 0) {
        pbVar5 = thunk_FUN_0055d590(s_Profile_Age_007cc1a8,param_2,param_3);
        this_01 = local_14;
        if (pbVar5 != (byte *)0x0) {
          Library::DKW::TBL::FUN_006b6020((uint *)local_14->field_1AF8,0,(char *)pbVar5);
          *(AnonPointee_FSGSTy_1AF8 **)&this_01->field_0x31 = this_01->field_1AF8;
          this_01->field_002D = 0x33;
          FUN_006e6080(this_01,2,this_01->field_1AD8,(undefined4 *)&this_01->field_0x1d);
        }
        pbVar5 = thunk_FUN_0055d590(s_Profile_Sex_007cc198,param_2,param_3);
        if (pbVar5 != (byte *)0x0) {
          Library::DKW::TBL::FUN_006b6020((uint *)this_01->field_1AFC,0,(char *)pbVar5);
          this_01->field_002D = 0x33;
          *(AnonPointee_FSGSTy_1AFC **)&this_01->field_0x31 = this_01->field_1AFC;
          FUN_006e6080(this_01,2,this_01->field_1ADC,(undefined4 *)&this_01->field_0x1d);
        }
        pbVar5 = thunk_FUN_0055d590(s_Profile_Location_007cc184,param_2,param_3);
        if (pbVar5 != (byte *)0x0) {
          Library::DKW::TBL::FUN_006b6020((uint *)this_01->field_1B00,0,(char *)pbVar5);
          this_01->field_002D = 0x33;
          *(AnonPointee_FSGSTy_1B00 **)&this_01->field_0x31 = this_01->field_1B00;
          FUN_006e6080(this_01,2,this_01->field_1AE0,(undefined4 *)&this_01->field_0x1d);
        }
        local_10 = (uint *)thunk_FUN_0055d590(s_Profile_Description_007cc16c,param_2,param_3);
        if (local_10 != (uint *)0x0) {
          if ((AnonShape_006B5570_4D68B99C *)this_01->field_1B04 !=
              (AnonShape_006B5570_4D68B99C *)0x0) {
            FUN_006b5570((AnonShape_006B5570_4D68B99C *)this_01->field_1B04);
          }
          puVar6 = ccFntTy::_TxtToSarr(this_01->field_1A73,local_10);
          this_01->field_1B04 = puVar6;
          if (puVar6 == (uint *)0x0) {
            puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
            this_01->field_1B04 = puVar6;
            Library::DKW::TBL::FUN_006b5aa0(puVar6,&DAT_008016a0);
          }
          this_01->field_002D = 0x33;
          *(uint **)&this_01->field_0x31 = this_01->field_1B04;
          FUN_006e6080(this_01,2,this_01->field_1AE4,(undefined4 *)&this_01->field_0x1d);
        }
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_1_Wins_007cc134,param_2,param_3,
                           0x1a,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_1_Losses_007cc128,param_2,
                           param_3,0x7e,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_1_Draws_007cc11c,param_2,param_3
                           ,0xe2,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_1_Disconnects_007cc10c,param_2,
                           param_3,0x146,0xf3,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7B,s_1_Rating_007cc0f8,param_2,
                           param_3,0x1a,0x11b,0x4e,0x17);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7B,s_1_Rank_007cc104,param_2,param_3,
                           0x7e,0x11b,0x4e,0x17);
        pbVar5 = thunk_FUN_0055d590(s_1_Last_Game_007cc0e8,param_2,param_3);
        if (pbVar5 != (byte *)0x0) {
          iVar4 = -1;
          pbVar9 = pbVar5;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar1 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar1 != 0);
          if (iVar4 != -2) {
            iVar4 = Library::MSVCRT::FUN_0072ee80((char *)pbVar5,(byte *)s__d__d_007cc5b8);
            if (iVar4 != 2) {
              local_c.dwHighDateTime = 0;
              local_c.dwLowDateTime = 0;
            }
            BVar7 = FileTimeToSystemTime(&local_c,&local_24);
            if (BVar7 != 0) {
              wsprintfA((LPSTR)local_88,s__2d__2d__4d_007cc5a8,local_24._6_4_ & 0xffff,
                        local_24.wMonth,local_24.wYear);
              FUN_006b4170((AnonShape_006C7610_838EDECF *)this_01->field_1AC0,0,0xe2,0x11b,0xb2,0x17
                           ,0xff);
              ccFntTy::SetSurf(this_01->field_1A73,(int)this_01->field_1AC0,0,0xe2,0x11b,0xb2,0x17);
              ccFntTy::WrStr(this_01->field_1A73,local_88,-1,-1,0);
            }
          }
        }
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_0_Wins_007cc164,param_2,param_3,
                           0x1a,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_0_Losses_007cc158,param_2,
                           param_3,0x7e,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_0_Draws_007cc14c,param_2,param_3
                           ,0xe2,0x161,0x4e,0x12);
        thunk_FUN_005a39a0(this_01,(ccFntTy *)this_01->field_1A7F,s_0_Disconnects_007cc13c,param_2,
                           param_3,0x146,0x161,0x4e,0x12);
        FUN_006b35d0(DAT_008075a8,this_01->field_1ABC);
        g_currentExceptionFrame = local_68.previous;
        return;
      }
      g_currentExceptionFrame = local_68.previous;
      iVar8 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb4e,0,iVar4,
                                 &DAT_007a4ccc,s_FSGSTy__SetInfo_007cc594);
      if (iVar8 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb4e);
    }
  }
  return;
}

