#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00533D10; family_names=OptPanelTy::GetMessage; ret4=78;
   direct_offsets={10:6,14:39,18:17,1c:6}

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10;CASE_B=11 */

int __thiscall OptPanelTy::GetMessage(OptPanelTy *this,STMessage *message)

{
  byte *puVar1;
  char cVar2;
  OptPanelTy_field_01A4State OVar4;
  ushort uVar5;
  STMessageId SVar6;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar7;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar8;
  OptPanelTy_field_02FDDArray *pOVar9;
  ushort uVar10;
  InternalExceptionFrame *pIVar11;
  byte uVar13;
  int local_EAX_48;
  DWORD DVar14;
  uint uVar12;
  byte *puVar15;
  uint *puVar16;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  LPSTR pCVar17;
  int local_EAX_4707;
  int local_EAX_4896;
  int local_EAX_6893;
  cMf32 *pcVar18;
  byte *pbVar19;
  int local_EAX_8594;
  int local_EAX_8848;
  int local_EAX_9241;
  int iVar10;
  int iVar29;
  uint uVar20;
  OptPanelTy *this_00;
  int iVar21;
  uint uVar22;
  ushort *puVar23;
  byte *puVar24;
  char *pcVar25;
  char *pcVar26;
  bool bVar27;
  uint uVar28;
  char *pcVar29;
  uint uVar30;
  byte bVar31;
  int iVar32;
  code *pcVar33;
  ccFntTy *pcVar34;
  int iVar35;
  UINT UVar36;
  code *pcVar37;
  ulong uVar38;
  InternalExceptionFrame local_268;
  InternalExceptionFrame local_224;
  InternalExceptionFrame local_1e0;
  InternalExceptionFrame local_19c;
  InternalExceptionFrame local_158;
  InternalExceptionFrame local_114;
  InternalExceptionFrame local_d0;
  InternalExceptionFrame local_8c;
  uint local_48;
  uint local_44;
  uint local_3c [4];
  int local_2c;
  int local_28;
  uint local_24;
  ushort *local_20;
  char *local_1c;
  dword local_18;
  uint *local_14;
  OptPanelTy *local_10;
  cMf32 *local_c;
  uint local_8;
  byte OVar3;
  byte temp_5fc7a8e9f1;
  byte temp_5fabcf5a4c;
  char *pcVar26_mg1D;
  char *pcVar26_mgC;
  char *pcVar26_mg30;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_10 = this;

  local_EAX_48 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_8c.previous;

    iVar29 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x7f4,0,local_EAX_48,
                                "%s","OptPanelTy::GetMessage");
    if (iVar29 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_48,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x7f4);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[00533D62]: CALL 0x00403a3a; direct=00403A3A OptPanelTy::PreInitOptPanel */
    PreInitOptPanel(local_10);
  }
  /* ST_CALLSITE[00533D6A]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  PanelTy::GetMessage((PanelTy *)this_00,message);
  switch(message->id) {
  case MESS_OPTPANELTY_C001:
  case MESS_OPTPANELTY_C003:
  case MESS_SHARED_C09F:
  case MESS_BEHPANELTY_C0A0:
  case MESS_FSGSTY_C0A1:
  case MESS_SHARED_C0A2:
  case MESS_SHARED_C0A3:
  case MESS_BLDLABPANELTY_C0A4:
  case MESS_FRMPANELTY_C0A5:
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
  case MESS_BLDLABPANELTY_C0A4|MESS_SHARED_0003:
  case MESS_BEHPANELTY_C0A0|MESS_SHARED_0008:
  case MESS_BEHPANELTY_C0A0|MESS_CURSORCLASSTY_0009:
  case MESS_BEHPANELTY_C0A0|MESS_SYSTEMCLASSTY_000A:
  case 0xc0ab:
  case 0xc0ac:
  case MESS_BEHPANELTY_C0A0|MESS_SHARED_0008|MESS_SHARED_0005:
  case MESS_OPTPANELTY_C0AE:
    if (((message->arg2).u32 != 0) &&
       ((uVar22 = *(uint *)((message->arg2).u32 + 4), uVar22 == 2 || ((3 < uVar22 && (uVar22 < 6))))
       )) {
      thunk_FUN_005252c0(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar37 = thunk_FUN_00529fe0;
      pCVar17 = thunk_FUN_00571240("BUT_MINUS",0);
      bVar31 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_01E5;
              uVar22 = *(uint *)&pRVar7[1].field_0x4;
              if (uVar22 == 0) {
                uVar22 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)&pRVar7->field_0x8;
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;

              puVar15 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar7));
              uVar13 = (undefined1)local_8;
              for (uVar20 = uVar22 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *puVar15 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
                puVar15 = (byte *)(puVar15 + 1);
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined1 *)puVar15 = uVar13;
                puVar15 = (byte *)((int)puVar15 + 1);
              }

              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar9 = this_00->field_02FD;
                uVar22 = (uint)(message->arg0).words.low;
                if (uVar22 < pOVar9->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar9, uVar22);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar22 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar22 = (uint)(message->arg0).words.low;
                if ((int)uVar22 < (int)this_00->field_01E9->elementSize) {
                  puVar16 = *(uint **)(this_00->field_01E9->growCapacity + uVar22 * 4);
                  uVar22 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar16 = nullptr;
                  uVar22 = (uint)((message->arg0).words.high == 0);
                }
              }

              ccFntTy::WrStr(this_00->field_017C,(char *)puVar16,2,-1,uVar22);

              Library::DKW::WGR::FUN_006b55f0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,
                         (message->arg1).words.low + 0x26,(message->arg1).words.high + 0x31,
                         (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01E5,0,0,0,200,
                         *(int *)&((RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01E5)->
                                  field_0x8);

              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                         this_00->field_003C,this_00->field_0044);
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if (SVar6 != MESS_OPTPANELTY_8162) {
              if (SVar6 != MESS_SIDTY_8163) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              OVar4 = this_00->field_01A4;
              if (OVar4 == CASE_3) {
                if ((message->arg0).i32 < (int)this_00->field_01E9->elementSize) {
                  pcVar29 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar29 = nullptr;
                }

                Library::DKW::TBL::FUN_006b6020(this_00->field_01F1,0,pcVar29);
                uVar22 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_002C = this_00->field_01F1;
                FUN_006e6080(this_00,2,uVar22,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_01E5;
                uVar22 = *(uint *)&pRVar7[1].field_0x4;
                if (uVar22 == 0) {
                  uVar22 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 &
                           0x1ffffffc) * *(int *)&pRVar7->field_0x8;
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;

                puVar15 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar7));
                uVar13 = (undefined1)local_8;
                for (uVar20 = uVar22 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *puVar15 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
                  puVar15 = (byte *)(puVar15 + 1);
                }
                for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                  *(undefined1 *)puVar15 = uVar13;
                  puVar15 = (byte *)((int)puVar15 + 1);
                }
                this_00->field_0028 = 0x26;
                FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);

                ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
                  pcVar29 = *(char **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_002C * 4);
                }
                else {
                  pcVar29 = nullptr;
                }

                ccFntTy::WrStr(this_00->field_017C,pcVar29,0,-1,0);
                pRVar8 = (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01E5;

                Library::DKW::WGR::FUN_006b55f0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,pRVar8,0
                           ,0,0,*(int *)&pRVar8->field_0x4,*(int *)&pRVar8->field_0x8);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_01E5;
              uVar22 = *(uint *)&pRVar7[1].field_0x4;
              if (uVar22 == 0) {
                uVar22 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)&pRVar7->field_0x8;
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;

              puVar15 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar7));
              uVar13 = (undefined1)local_8;
              for (uVar20 = uVar22 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *puVar15 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
                puVar15 = (byte *)(puVar15 + 1);
              }
              for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                *(undefined1 *)puVar15 = uVar13;
                puVar15 = (byte *)((int)puVar15 + 1);
              }

              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);

              iVar21 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar22 = 0;
              iVar35 = -1;
              iVar32 = 0;
              if (iVar21 == 0) {
                /* ST_CALLSITE[005342AD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
                pcVar29 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
              }
              else {
                pcVar29 = (char *)&DAT_0080f33a;
              }

              ccFntTy::WrStr(this_00->field_017C,pcVar29,iVar32,iVar35,uVar22);
              pRVar8 = (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01E5;

              Library::DKW::WGR::FUN_006b55f0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,pRVar8,0,0
                         ,0,*(int *)&pRVar8->field_0x4,*(int *)&pRVar8->field_0x8);
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            OVar3 = this_00->field_01A4;
            if (OVar3 < 3) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if ((4 < OVar3) && (OVar3 != 0xe)) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            goto switchD_00535190_caseD_3;
          }
          if (SVar6 == MESS_SHARED_8160) {
            message->arg1 = *(STMessageArg *)(this_00->field_01E5 + 4);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (MESS_SHARED_0003 < SVar6) {
            if (SVar6 != MESS_SHARED_6332) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            local_18 = (message->arg2).u32;
            pcVar34 = this_00->field_017C;
            if (pcVar34->field_00A0 != 0) {
              FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar34);
            }
            local_8 = *(uint *)&pcVar34->field_0x8a;
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar20 = (uint)(message->arg0).words.high;
            uVar22 = uVar20;
            if ((int)uVar20 < (int)(STField<int>(local_18,0x1E0) + uVar20)) {
              do {
                if ((int)uVar22 < (int)this_00->field_02F9[2]) {
                  local_1c = *(char **)(this_00->field_02F9[5] + uVar22 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {

                  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar22 - uVar20) * local_8 + 0x1b,0xca,local_8);

                  ccFntTy::WrStr(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar20 = (uint)(message->arg0).words.high;
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (int)(STField<int>(local_18,0x1E0) + uVar20));
            }

            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 == MESS_SHARED_0003) {
            /* ST_CALLSITE[00534071]: CALL 0x00403887; direct=00403887 OptPanelTy::DoneOptPanel */
            DoneOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_ID_NONE) {
            if (SVar6 != MESS_ID_CREATE) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            /* ST_CALLSITE[00533E07]: CALL 0x004058e9; direct=004058E9 OptPanelTy::InitOptPanel */
            InitOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          temp_5fc7a8e9f1 = this_00->field_01A4;
          if ((2 < temp_5fc7a8e9f1) &&
             ((((temp_5fc7a8e9f1 < 5 || (temp_5fc7a8e9f1 == 7)) &&
               (this_00->field_01DD != (HANDLE)0x0)) &&
              /* ST_CALLSITE[00533E41]: CALL dword ptr [0x0085bce0] */
              (DVar14 = WaitForSingleObject(this_00->field_01DD,0), DVar14 == 0)))) {
            /* ST_CALLSITE[00533E52]: CALL dword ptr [0x0085bce4] */
            FindNextChangeNotification(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              STPiece<0,2>(uVar22) = this_00->field_01E1;
              STPiece<2,2>(uVar22) = this_00->field_01E3;
              /* ST_CALLSITE[00533E6A]: CALL 0x00403fbc; direct=00403FBC OptPanelTy::PrepFiles */
              PrepFiles(this_00,uVar22);
            }
            this_00->field_0028 = 5;
            puVar16 = this_00->field_01B5;
            iVar21 = 10;
            do {
              if (*puVar16 != 0) {
                FUN_006e6080(this_00,2,*puVar16,(undefined4 *)&this_00->field_0x18);
              }
              puVar16 = puVar16 + 1;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar21 = this_00->field_0050;
            if (this_00->field_0044 < iVar21) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar21 <= this_00->field_0044) {
              this_00->field_0044 = iVar21;
              this_00->field_0172 = CASE_1;
              /* ST_CALLSITE[00533FF8]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
              ShiftControls(this_00,1);
            }
            uVar22 = this_00->field_0044;
            uVar20 = this_00->field_003C;
            uVar28 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar21 = this_00->field_0050 - this_00->field_0048;
            if (iVar21 < this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if (this_00->field_0044 <= iVar21) {
              DAT_0080878c = 0;
              local_3c[1] = 0;
              local_3c[2] = 0;
              local_3c[0] = 1;
              if (this_00->field_019C != 0x6102) {
                /* ST_CALLSITE[00533F09]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
                STPlaySystemC::sub_0054EDF0
                          (g_playSystem_00802A38,(undefined4 *)0x5,local_3c,1,0xffffffff);
              }
              this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
              this_00->field_0172 = CASE_2;
              if (this_00->field_01A0 != 0) {
                this_00->field_01A4 = CASE_1;
                /* ST_CALLSITE[00533F35]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
                SetOptControls(this_00);
                this_00->field_01A0 = 0;
              }
              if (this_00->field_019C != 0) {
                if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_2)) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    DAT_008087a0 = STReplaceLowByte((uint32_t)(DAT_008087a0), (uint8_t)(9));
                  }
                  else if (DAT_00808783 == '\x02') {
                    DAT_008087a0 = STReplaceLowByte((uint32_t)(DAT_008087a0), (uint8_t)(10));
                  }
                }
                memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
                this_00->field_0024 = 1;
                this_00->field_0028 = this_00->field_019C;
                if (this_00->field_019C == 0x610a) {
                  this_00->field_002C = 6;
                  this_00->field_002E = 0;
                }

                AppClassTy::PostNextMessage(this_00->field_0010,(undefined4 *)&this_00->field_0x18);
                this_00->field_019C = 0;
              }
            }
            uVar22 = this_00->field_0044;
            uVar20 = this_00->field_003C;
            uVar28 = this_00->field_0060;
          }

          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,uVar28,0xffffffff,uVar20,uVar22);
LAB_00534016:
          if ((uint)(this_00->field_0038 - this_00->field_0301) < 0x7d1) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          this_00->field_0301 = this_00->field_0038;

          uVar12 = thunk_FUN_00567060((RecoveredRecord_00567060_20B54E08 *)&g_sound);
          if (uVar12 != 0) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar29 = "BUT_SLUP";
      }
      else {
        if (MESS_OPTPANELTY_C002 < SVar6) {
          if (SVar6 == MESS_OPTPANELTY_C003) {
            if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_7)) {
              DAT_00808788 = 0;
            }
            if (this_00->field_01A9 == 0) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            this_00->field_01A4 = this_00->field_01A9;
            this_00->field_01A9 = this_00->field_01AA;
            this_00->field_01AA = 0;
            /* ST_CALLSITE[0053478B]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
            SetOptControls(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_OPTPANELTY_C004) {
            if (SVar6 != MESS_SHARED_C005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar37 = thunk_FUN_00529fe0;
            pCVar17 = thunk_FUN_00571240("BUT_PLUS",0);
            bVar31 = 1;
            goto LAB_00534654;
          }
          UVar36 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar36 = 0x274e;
          goto cf_common_exit_00536DB5;
        }
        if (MESS_OPTPANELTY_A106 < SVar6) {
          if (SVar6 != MESS_OPTPANELTY_C001) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_7)) {
            DAT_00808788 = 0;
          }
          this_00->field_01A0 = 1;
          message->id = MESS_CURSORCLASSTY_A101;
          /* ST_CALLSITE[005346F1]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (0xa104 < SVar6) {
          if (this_00->field_01A4 != CASE_5) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          (message->arg2).u32 = 0;
          message->id = (SVar6 != MESS_OPTPANELTY_A105) + MESS_SHARED_C09F;
          /* ST_CALLSITE[0053469B]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/OptPanelTy;pointer:/SubmarineTitans/Recovered/STMessage */
          this_00->GetMessage(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (SVar6 != MESS_OPTPANELTY_8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar29 = "BUT_SLDN";
      }
      pcVar37 = thunk_FUN_00529fe0;
      pCVar17 = thunk_FUN_00571240(pcVar29,0);
      bVar31 = 6;
    }
LAB_00534654:
    /* ST_CALLSITE[00534657]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
    UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar31,pCVar17,
                       pcVar37);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  switch(SVar6) {
  case MESS_SHARED_C09F:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_3;
      /* ST_CALLSITE[00534807]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar13 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar13;
      this_00->field_01A4 = CASE_7;
      /* ST_CALLSITE[00534EAF]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_5:
      switch(this_00->field_01AB) {
      case CASE_1:
        goto switchD_00534835_caseD_1;
      case CASE_2:
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807680;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = (char *)&DAT_0080ee1a;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar26_mg30 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar29 = pcVar26_mg30;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar29 = pcVar26_mg30 + 1;
          cVar2 = *pcVar26_mg30;
          pcVar26_mg30 = pcVar29;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar25 = pcVar26;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar29 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807ddd;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = (char *)&DAT_0080ee1a;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar22 = 0xffffffff;
        pcVar29 = PTR_DAT_0079ad00;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = (char *)&DAT_0080ee1a;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &this_00->field_0x1f5;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = (char *)&DAT_0080ee1a;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534D00]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_3:
        /* ST_CALLSITE[005348F5]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080ee1a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        /* ST_CALLSITE[00534905]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        SwitchOptPanel(this_00,-1);
        uVar22 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar29 = (char *)&DAT_0080ee1a;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = &CHAR_00h_0080ed16;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534940]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
        STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,0);
        puVar15 = (byte *)(&DAT_0080a14f);
        puVar24 = (byte *)(&DAT_008087b6);
        memmove(puVar24, puVar15, 0x1999); /* compiler REP MOVS byte copy */
        iVar21 = 0;
        puVar15 = (byte *)&DAT_0080baec;
        puVar24 = (byte *)(&DAT_0080e43b);
        memmove(puVar24, puVar15, 0x400); /* compiler REP MOVS byte copy */
        iVar21 = 0;
        if (DAT_0080ed12 != nullptr) {
          FreeAndNull(&DAT_0080ed12);
        }

        DAT_0080ed12 = Library::DKW::LIB::MemAlloc(0x8db);
        puVar15 = (byte *)(&DAT_0080bae8);
        puVar24 = (byte *)(DAT_0080ed12);
        memmove(puVar24, puVar15, 0x8db); /* compiler REP MOVS byte copy */
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_4:
        /* ST_CALLSITE[00534887]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x6102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
        }
        if (DAT_008067a0 == '\0') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (g_playSystem_00802A38 != nullptr) {
          uVar38 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
                   2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case CASE_5:
        /* ST_CALLSITE[00534843]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case CASE_6:
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807680;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = &this_00->field_006C;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar26_mgC = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar29 = pcVar26_mgC;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar29 = pcVar26_mgC + 1;
          cVar2 = *pcVar26_mgC;
          pcVar26_mgC = pcVar29;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar25 = pcVar26;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar29 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807ddd;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar22 = 0xffffffff;
        pcVar29 = PTR_DAT_0079ad00;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &this_00->field_0x1f5;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = PTR_CHAR___0079acf4;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        /* ST_CALLSITE[00534AC7]: CALL dword ptr [0x0085bce8] */
        DeleteFileA(&this_00->field_006C);
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807680;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = &this_00->field_006C;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar26_mg1D = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar29 = pcVar26_mg1D;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar29 = pcVar26_mg1D + 1;
          cVar2 = *pcVar26_mg1D;
          pcVar26_mg1D = pcVar29;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar25 = pcVar26;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar29 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &CHAR_00h_00807ddd;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar22 = 0xffffffff;
        pcVar29 = PTR_DAT_0079ad00;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = &this_00->field_0x1f5;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        uVar22 = 0xffffffff;
        pcVar29 = PTR_CHAR___0079acf8;
        do {
          pcVar26 = pcVar29;
          if (uVar22 == 0) break;
          uVar22 = uVar22 - 1;
          pcVar26 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar26;
        } while (cVar2 != '\0');
        uVar22 = ~uVar22;
        iVar21 = -1;
        pcVar29 = &this_00->field_006C;
        do {
          pcVar25 = pcVar29;
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar25 = pcVar29 + 1;
          cVar2 = *pcVar29;
          pcVar29 = pcVar25;
        } while (cVar2 != '\0');
        pcVar29 = pcVar26 + -uVar22;
        pcVar26 = pcVar25 + -1;
        memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534BD8]: CALL dword ptr [0x0085bce8] */
        DeleteFileA(&this_00->field_006C);
        OVar4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        this_00->field_01A4 = OVar4;
        /* ST_CALLSITE[00534BF8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_7:
        this_00->field_0028 = 0x44ff;
        /* ST_CALLSITE[00534D43]: CALL dword ptr [EAX + 0x20] */
        g_playSystem_00802A38->GetMessage((int)&this_00->field_0x18);
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        /* ST_CALLSITE[00534D55]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/OptPanelTy;pointer:/SubmarineTitans/Recovered/STMessage */
        this_00->GetMessage((STMessage *)&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 1;
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568010::thunk_FUN_00568010
                ((RecoveredReceiver_00568010 *)&g_sound,CASE_1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      thunk_FUN_005713b0(0x807620);
      iVar21 = *(int *)(message->arg0).ptr;
      if (iVar21 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar21 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar21 == 3) {
        STPiece<0,1>(DAT_00807300) = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = nullptr;
        break;
      case '\x02':
        local_d0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d0;

        local_EAX_4707 = Library::MSVCRT::__setjmp3(local_d0.jumpBuffer,0);
        if (local_EAX_4707 == 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar22 != 0) {

            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,3,local_3c + 3,&local_28);
          }
          uVar22 = local_3c[3] + local_28 >> 1;
        }
        else {
          uVar22 = 0;
        }
        if (g_sound == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = g_sndContext_0080765C->field_0080 & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar20 == 0) {
LAB_005350ba:
          uVar20 = 0;
        }
        else {
          uVar20 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
        }
        goto LAB_005350bc;
      default:
        break;
      case '\x04':
        local_224.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_224;

        local_EAX_4896 = Library::MSVCRT::__setjmp3(local_224.jumpBuffer,0);
        if (local_EAX_4896 == 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar22 != 0) {

            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,2,&local_24,&local_2c);
          }
          uVar22 = local_24 + local_2c >> 1;
        }
        else {
          uVar22 = 0;
        }
        if (g_sound == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = g_sndContext_0080765C->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar20 == 0) goto LAB_005350ba;
        uVar20 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar22 * 0x1f) / uVar20);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar18 = local_c;
      /* ST_CALLSITE[00535104]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      PaintVolume(this_00,0,(byte)local_c);
      uVar22 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_002C = pcVar18;
      FUN_006e6080(this_00,2,uVar22,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      bVar27 = (char)DAT_00807300 != '\x01';
      uVar22 = this_00->field_01B5[4];
      this_00->field_002C = (short)(uint)bVar27;
      this_00->field_002E = (short)((uint)bVar27 >> 0x10);
      FUN_006e6080(this_00,2,uVar22,(undefined4 *)&this_00->field_0x18);
      thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar21 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar21 + 0x14);
      }
      else {
        iVar21 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar21 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        /* ST_CALLSITE[00534E40]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
        STPlaySystemC::sub_0054EDF0(g_playSystem_00802A38,(undefined4 *)0x5,&local_48,1,0xffffffff);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        ST3DSMAPContext::sub_006E8640
                  (g_sT3DSMAPContext_00807598,
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar21 + 0x10),
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar21 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar22 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      this_00->field_002C = 1;
      this_00->field_002E = 0;
      FUN_006e6080(this_00,2,uVar22,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case MESS_BEHPANELTY_C0A0:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_4;
      /* ST_CALLSITE[005351A6]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_6;
      /* ST_CALLSITE[00535360]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
switchD_00535190_caseD_3:
      this_00->field_0028 = 0xc0a1;
      this_00->field_0034 = 0;
      /* ST_CALLSITE[00534487]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/OptPanelTy;pointer:/SubmarineTitans/Recovered/STMessage */
      this_00->GetMessage((STMessage *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
    case CASE_B:
      if (this_00->field_01A9 != 0) {
        this_00->field_01A4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        /* ST_CALLSITE[005351E0]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (OVar4 == CASE_5) {
        this_00->field_01A4 = CASE_1;
        /* ST_CALLSITE[00535209]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        SetOptControls(this_00);
        /* ST_CALLSITE[00535215]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        SwitchOptPanel(this_00,-1);
        if (this_00->field_01AB != CASE_7) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      /* ST_CALLSITE[0053524B]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
      SwitchOptPanel(this_00,-1);
      if (this_00->field_01AB < CASE_A) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (CASE_B < this_00->field_01AB) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_008067a0 == '\0') {
        this_00->field_019C = 0x6102;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 2;
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568010::thunk_FUN_00568010
                ((RecoveredReceiver_00568010 *)&g_sound,CASE_2);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733a = '\x03' - *(char *)(message->arg0).ptr;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_00807322 = (uint)(DAT_00807322 == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807348 = this_00->field_0305;
      /* ST_CALLSITE[0053531F]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
      SwitchOptPanel(this_00,-1);
      this_00->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar38 = 4;
LAB_00535271:
    /* ST_CALLSITE[00535276]: CALL dword ptr [0x0085c060] */
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar38);
    this_00->field_019C = 0x610a;
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case MESS_FSGSTY_C0A1:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A5 = 0x3e83;
      this_00->field_01A9 = OVar4;
      this_00->field_01AB = CASE_3;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005353EF]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar13 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar13;
      this_00->field_01A4 = CASE_8;
      /* ST_CALLSITE[00535426]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      uVar22 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      FUN_006e6080(this_00,2,uVar22,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar29 = nullptr;
      }
      else {
        pcVar29 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar22 = 0xffffffff;
      do {
        pcVar26 = pcVar29;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar26 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar26;
      } while (cVar2 != '\0');
      uVar22 = ~uVar22;
      puVar1 = &this_00->field_0x1f5;
      pcVar29 = pcVar26 + -uVar22;
      pcVar26 = puVar1;
      memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
      pcVar29 = &CHAR_00h_008016a0;
      pbVar19 = puVar1;
      do {
        bVar31 = *pbVar19;
        bVar27 = bVar31 < (byte)*pcVar29;
        if (bVar31 != *pcVar29) {
LAB_0053556a:
          iVar21 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
          goto LAB_0053556f;
        }
        if (bVar31 == 0) break;
        bVar31 = pbVar19[1];
        bVar27 = bVar31 < (byte)pcVar29[1];
        if (bVar31 != pcVar29[1]) goto LAB_0053556a;
        pbVar19 = pbVar19 + 2;
        pcVar29 = pcVar29 + 2;
      } while (bVar31 != 0);
      iVar21 = 0;
LAB_0053556f:
      if (iVar21 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        /* ST_CALLSITE[0053559E]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      /* ST_CALLSITE[005355BD]: CALL 0x00402874; direct=00402874 OptPanelTy::CheckFiles */
      iVar21 = CheckFiles(this_00,puVar1);
      if (iVar21 != 0) {
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A5 = 0x3f49;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_5;
        this_00->field_01AB = CASE_1;
        /* ST_CALLSITE[005355F8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
switchD_00534835_caseD_1:
      thunk_FUN_005335e0();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_4:
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
        pcVar29 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar29 = nullptr;
      }
      uVar22 = 0xffffffff;
      do {
        pcVar26 = pcVar29;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar26 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar26;
      } while (cVar2 != '\0');
      uVar22 = ~uVar22;
      pcVar29 = pcVar26 + -uVar22;
      pcVar26 = &this_00->field_0x1f5;
      memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
      uVar10 = this_00->field_002E;
      uVar13 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar10;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = uVar13;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_2;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005356C5]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 4;
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568010::thunk_FUN_00568010
                ((RecoveredReceiver_00568010 *)&g_sound,CASE_4);
      /* ST_CALLSITE[005354D1]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
      SoundClassTy::PlaySound
                ((SoundClassTy *)&g_sound,SOUND_MODE_1,nullptr,0x4b7,nullptr,0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_0080731e = (uint)(DAT_0080731e == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807342 = (uint)(DAT_00807342 == 0);
      if (g_popUp_008016D8 != nullptr) {
        /* ST_CALLSITE[0053548B]: CALL 0x00401fe6; direct=00401FE6 PopUpTy::ChangeState */
        PopUpTy::ChangeState(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_E:
      local_c = nullptr;
      local_14 = nullptr;
      local_20 = nullptr;
      local_8 = 1;
      local_1c = nullptr;
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      pOVar9 = this_00->field_02FD;
      if (*(uint *)&this_00->field_002C < pOVar9->count) {
        element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar9, *(uint *)&this_00->field_002C);
      }
      else {
        element_02fd_2 = nullptr;
      }
      if (element_02fd_2->field_006C == 0) {
        switch(DAT_008087a0 & 0xff) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 0xd:
        case 0xe:
        case 0x13:
          /* ST_CALLSITE[005357B6]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079acf0
                    ,PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          /* ST_CALLSITE[005357D5]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;

        local_EAX_6893 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0);
        this_00 = local_10;
        pcVar18 = local_c;
        if (local_EAX_6893 == 0) {

          pcVar18 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0));
          pOVar9 = this_00->field_02FD;
          if (*(uint *)&this_00->field_002C < pOVar9->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar9, *(uint *)&this_00->field_002C);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar18;
          /* ST_CALLSITE[00535852]: CALL 0x004012ad; direct=004012AD LoadStrategData */
          local_20 = LoadStrategData((int)pcVar18,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar22 = local_8;
          if (local_20 != nullptr) {

            local_14 = Library::DKW::LIB::MemAllocClear(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar19 = (byte *)((int)local_14 + uVar22);
            *pbVar19 = DAT_0080874d;
            puVar23 = local_20;
            pbVar19 = pbVar19 + uVar22;
            for (uVar20 = local_18 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined4 *)pbVar19 = *(undefined4 *)puVar23;
              puVar23 = puVar23 + 2;
              pbVar19 = pbVar19 + 4;
            }
            for (uVar22 = local_18 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
              *pbVar19 = (byte)*puVar23;
              puVar23 = (ushort *)((int)puVar23 + 1);
              pbVar19 = pbVar19 + 1;
            }
            /* ST_CALLSITE[005358AE]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
            STPlaySystemC::sub_0054EDF0
                      (g_playSystem_00802A38,(undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (char *)0x1;
            pcVar18 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar18 != nullptr) {
          cMf32::delete(pcVar18);
        }
        if (local_20 != nullptr) {
          FreeAndNull(&local_20);
        }
        if (local_14 != nullptr) {
          FreeAndNull(&local_14);
        }
      }
      else {
        /* ST_CALLSITE[00535731]: CALL 0x006aac10; direct=006AAC10 Library::DKW::LIB::MemAllocClear; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/undefined4; source view only; no Ghidra override */
        local_14 = Library::DKW::LIB::MemAllocClear(2);
        if (local_14 != nullptr) {
          *(undefined1 *)local_14 = 0;
          STField<byte>(local_14,1) = DAT_0080874d;
          /* ST_CALLSITE[0053575D]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
          STPlaySystemC::sub_0054EDF0(g_playSystem_00802A38,(undefined4 *)0x32,local_14,1,2);
          FreeAndNull(&local_14);
          local_1c = (char *)0x1;
        }
      }
      if (local_1c != nullptr) {
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        /* ST_CALLSITE[0053591F]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/OptPanelTy;pointer:/SubmarineTitans/Recovered/STMessage */
        this_00->GetMessage((STMessage *)&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_SHARED_C0A2:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      if (DAT_008067a0 == '\0') {
        iVar21 = 0x3e84;
      }
      else {
        iVar21 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar21;
      this_00->field_01AB = CASE_4;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005359A2]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar13 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar13;
      this_00->field_01A4 = CASE_9;
      /* ST_CALLSITE[005359D9]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
    case CASE_4:
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
        pcVar29 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar29 = nullptr;
      }
      uVar22 = 0xffffffff;
      do {
        pcVar26 = pcVar29;
        if (uVar22 == 0) break;
        uVar22 = uVar22 - 1;
        pcVar26 = pcVar29 + 1;
        cVar2 = *pcVar29;
        pcVar29 = pcVar26;
      } while (cVar2 != '\0');
      uVar22 = ~uVar22;
      pcVar29 = pcVar26 + -uVar22;
      pcVar26 = &this_00->field_0x1f5;
      memmove(pcVar26, pcVar29, uVar22); /* compiler REP MOVS byte copy */
      uVar10 = this_00->field_002E;
      uVar13 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar10;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = uVar13;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_6;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[00535BBB]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 8;
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00568010::thunk_FUN_00568010
                ((RecoveredReceiver_00568010 *)&g_sound,CASE_8);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      g_currentExceptionFrame = local_8c.previous;
      DAT_00807349 = *(char *)(message->arg0).ptr + -1;
      return 0;
    case CASE_9:
      DAT_00807326 = DAT_00807326 == '\0';
      thunk_FUN_00440700((uint)(byte)DAT_00807326);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807346 = (*(char *)&message->arg0 + '\x01') * '\x05';
      /* ST_CALLSITE[00535A4E]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_018C);
      /* ST_CALLSITE[00535A65]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_006C,"%d",(uint)(byte)DAT_00807346);

      ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));

      ccFntTy::WrTxt(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      if (g_popUp_008016D8 != nullptr) {
        /* ST_CALLSITE[00535AB6]: CALL 0x00401334; direct=00401334 PopUpTy::ChangeNumStr */
        PopUpTy::ChangeNumStr(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_SHARED_C0A3:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A5 = 0x3e85;
      this_00->field_01A9 = OVar4;
      this_00->field_01AB = CASE_5;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[00535C20]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar13 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar13;
      this_00->field_01A4 = CASE_D;
      /* ST_CALLSITE[00535C57]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_0080730e = ((message->arg0).u32 * 4000) / 0x1e - 4000;
      thunk_FUN_005682c0(&g_sound,DAT_0080730e);
      /* ST_CALLSITE[00535D96]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      PaintVolume(this_00,0,*(byte *)&message->arg0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = g_sndContext_0080765C->field_0080 & 1;
        }
        if (uVar22 != 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar22 == 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar21 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;

          local_EAX_8848 = Library::MSVCRT::__setjmp3(local_158.jumpBuffer,0);
          pIVar11 = local_158.previous;
          if (local_EAX_8848 == 0) {
            if (g_sound == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar22 != 0) {

              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar11 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar11;
          /* ST_CALLSITE[00535EFD]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
          PaintVolume(local_10,0,*(byte *)&message->arg0);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = g_sndContext_0080765C->field_0068 & 1;
        }
        if (uVar22 != 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar22 == 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar21 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;

          local_EAX_8594 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0);
          pIVar11 = local_114.previous;
          if (local_EAX_8594 == 0) {
            if (g_sound == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar22 != 0) {

              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar11 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = ((message->arg0).u32 * 4000) / 0x1e - 4000;
        thunk_FUN_005686c0(&g_sound,DAT_0080730a);
        /* ST_CALLSITE[00535E0B]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        PaintVolume(this_00,0,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_00807328 = (uint)(DAT_00807328 == 0);
      if (DAT_00807328 != 0) {
        ST3DSMAPContext::sub_006DDB70(g_sT3DSMAPContext_00807598);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      ST3DSMAPContext::sub_006DDBB0(g_sT3DSMAPContext_00807598);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807347 = *(byte *)&message->arg0;
      /* ST_CALLSITE[00535C93]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_018C);
      /* ST_CALLSITE[00535CAB]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_006C,"%d",DAT_00807347 + 1);

      ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));

      ccFntTy::WrTxt(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case MESS_BLDLABPANELTY_C0A4:
    if (this_00->field_01A4 == CASE_1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_C;
      /* ST_CALLSITE[00536075]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (this_00->field_01A4 == CASE_9) {
      DAT_0080732c = (uint)(DAT_0080732c == 0);
      this_00->field_0028 = 0x440f;

      FUN_006e6000(this_00,0xf,0,(undefined4 *)&this_00->field_0x18);
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        ST3DSMAPContext::sub_006E8630(g_sT3DSMAPContext_00807598,DAT_0080732c);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_FRMPANELTY_C0A5:
    temp_5fabcf5a4c = this_00->field_01A4;
    if (temp_5fabcf5a4c == 1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_2;
      /* ST_CALLSITE[005361B0]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((5 < temp_5fabcf5a4c) && (temp_5fabcf5a4c < 8)) {
      if (g_sound == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = g_sndContext_0080765C->field_0050 & 1;
      }
      if (uVar22 != 0) {
        if (g_sound == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar22 == 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar21 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;

        local_EAX_9241 = Library::MSVCRT::__setjmp3(local_1e0.jumpBuffer,0);
        if (local_EAX_9241 == 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0050 & 1;
          }
          if (uVar22 != 0) {

            Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,1,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_1e0.previous;
        /* ST_CALLSITE[00536184]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        PaintVolume(local_10,2,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    if ((CASE_5 < this_00->field_01A4) && (this_00->field_01A4 < CASE_8)) {
      if (g_sound == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = g_sndContext_0080765C->field_0038 & 1;
      }
      if (uVar22 != 0) {
        if (g_sound == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar22 == 0) {
          iVar21 = 0;
        }
        else {
          iVar21 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar21 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;

        iVar10 = Library::MSVCRT::__setjmp3(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = g_sndContext_0080765C->field_0038 & 1;
          }
          if (uVar22 != 0) {

            Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,0,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_268.previous;
        /* ST_CALLSITE[005362B8]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        PaintVolume(local_10,3,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_INTERCOMPANELTY_C0AF:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e81;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        UVar36 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar34 = this_00->field_0180;
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e8b;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        pcVar34 = this_00->field_0180;
        UVar36 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar36 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efc;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar21 = *(int *)(message->arg0).ptr;
      if (iVar21 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar21 = 1;
          pcVar37 = thunk_FUN_0052a640;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee7;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          iVar21 = 1;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee7;
        }
      }
      else if (iVar21 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar21 = 1;
          pcVar37 = thunk_FUN_0052a640;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee5;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          iVar21 = 1;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee5;
        }
      }
      else {
        if (iVar21 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar21 = 1;
          pcVar37 = thunk_FUN_0052a640;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee6;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          iVar21 = 1;
          pcVar33 = thunk_FUN_0052a4d0;
          UVar36 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar21 = *(int *)(message->arg0).ptr;
      if (iVar21 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
        }
        iVar21 = 1;
        pcVar33 = thunk_FUN_0052a4d0;
        UVar36 = 0x3ef1;
        /* ST_CALLSITE[005364A0]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
        pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005364AC]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                    pcVar37,iVar21);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar21 != 2) {
        if (iVar21 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
        }
        iVar21 = 1;
        pcVar33 = thunk_FUN_0052a4d0;
        UVar36 = 0x3ef2;
        /* ST_CALLSITE[005363EE]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
        pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005363FA]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                    pcVar37,iVar21);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a640;
      }
      else {
joined_r0x0053686a:
        pcVar37 = thunk_FUN_0052a540;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a5c0;
        }
      }
LAB_00536434:
      UVar36 = 0x3ef0;
cf_common_exit_00536441:
      iVar21 = 1;
      pcVar33 = thunk_FUN_0052a4d0;
      /* ST_CALLSITE[00536447]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
      pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
      /* ST_CALLSITE[00536453]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
      PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                  pcVar37,iVar21);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef4;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar21 = *(int *)(message->arg0).ptr;
      if (iVar21 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
        }
        iVar21 = 1;
        pcVar33 = thunk_FUN_0052a4d0;
        UVar36 = 0x3e90;
        /* ST_CALLSITE[005365C1]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
        pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005365CD]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                    pcVar37,iVar21);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar21 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
        }
        iVar21 = 1;
        pcVar33 = thunk_FUN_0052a4d0;
        UVar36 = 0x3e91;
        /* ST_CALLSITE[00536568]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
        pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[00536574]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                    pcVar37,iVar21);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar21 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
        }
        iVar21 = 1;
        pcVar33 = thunk_FUN_0052a4d0;
        UVar36 = 0x3e92;
        /* ST_CALLSITE[0053650F]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
        pCVar17 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[0053651B]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                    pcVar37,iVar21);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar30 = 0;
    iVar32 = 1;
    /* ST_CALLSITE[00536EF1]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar17 = thunk_FUN_00571240("BUT_BUTOPT",0);
    /* ST_CALLSITE[00536EFA]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_0052EFB0_FCA27FA7; source view only; no Ghidra override */
    pCVar17 = FUN_006f2c00(pCVar17,iVar32,uVar30);
    /* ST_CALLSITE[00536F06]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
    PaintDblBut(this_00,(RecoveredRecordView_0052EFB0_FCA27FA7 *)message,pCVar17,UVar36,pcVar33,
                pcVar37,iVar21);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar34 = this_00->field_0180;
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e82;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        pcVar34 = this_00->field_0180;
        UVar36 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e8a;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        UVar36 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      pRVar7 = (RecoveredRecord_006B4FA0_DAC3A217 *)this_00->field_01E5;
      uVar22 = *(uint *)&pRVar7[1].field_0x4;
      if (uVar22 == 0) {
        uVar22 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)&pRVar7->field_0x8;
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;

      puVar15 = STPointerBoundaryCast<byte *>(FUN_006b4fa0(pRVar7));
      uVar13 = (undefined1)local_24;
      for (uVar20 = uVar22 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar15 = CONCAT22(CONCAT11(uVar13,uVar13),CONCAT11(uVar13,uVar13));
        puVar15 = (byte *)(puVar15 + 1);
      }
      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined1 *)puVar15 = uVar13;
        puVar15 = (byte *)((int)puVar15 + 1);
      }

      ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);

      ccFntTy::WrStr(this_00->field_017C,*(char **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar22 = (uint)(message->arg1).words.high;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar22,
                     (uint)uVar5,uVar22 + 10,0x6c,0xd);
      }
      pRVar8 = (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01E5;

      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,pRVar8,0,0,0,
                 *(int *)&pRVar8->field_0x4,*(int *)&pRVar8->field_0x8);

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar36 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efd;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar21 = *(int *)(message->arg0).ptr;
      if (iVar21 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
          UVar36 = 0x3ef1;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          UVar36 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar21 != 2) {
        if (iVar21 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
          UVar36 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar37 = thunk_FUN_0052a640;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef5;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar36 = 0x2751;
cf_common_exit_00536DB5:
      /* ST_CALLSITE[00536DBB]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0053DAF0_3BDC2979; source view only; no Ghidra override */
      pCVar17 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[00536DC7]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar17,UVar36);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar34 = this_00->field_0180;
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e93;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        pcVar34 = this_00->field_0180;
        UVar36 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar34 = this_00->field_0180;
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e83;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        pcVar34 = this_00->field_0180;
        UVar36 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e8c;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        UVar36 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efe;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
          UVar36 = 0x3f02;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          UVar36 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
          UVar36 = 0x3f03;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          UVar36 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef6;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef8;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar36 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a280;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar36 = 0x3e84;
      }
      else {
        UVar36 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar34 = this_00->field_0180;
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e8d;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        pcVar34 = this_00->field_0180;
        UVar36 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar36 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3eff;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar37 = thunk_FUN_0052a640;
          UVar36 = 0x3f06;
        }
        else {
          pcVar37 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a5c0;
          }
          UVar36 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a640;
        UVar36 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar37 = thunk_FUN_0052a540;
      if (DAT_0080874e != '\x01') {
        pcVar37 = thunk_FUN_0052a5c0;
      }
      UVar36 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar21 = 0;
        pcVar37 = thunk_FUN_0052a770;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef7;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
        iVar21 = 0;
        pcVar33 = thunk_FUN_0052a6c0;
        UVar36 = 0x3ef7;
      }
    }
    goto cf_common_exit_00536EE8;
  case MESS_BLDLABPANELTY_C0B3:
    OVar4 = this_00->field_01A4;
    if (OVar4 != CASE_1) {
      if (OVar4 != CASE_2) {
        if (OVar4 != CASE_9) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar21 = 0;
          pcVar37 = thunk_FUN_0052a770;
          pcVar33 = thunk_FUN_0052a6c0;
          UVar36 = 0x3f04;
        }
        else {
          pcVar37 = thunk_FUN_0052a6f0;
          if (DAT_0080874e != '\x01') {
            pcVar37 = thunk_FUN_0052a730;
          }
          iVar21 = 0;
          pcVar33 = thunk_FUN_0052a6c0;
          UVar36 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a280;
        UVar36 = 0x3e8f;
      }
      else {
        pcVar37 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a230;
        }
        UVar36 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar34 = this_00->field_0180;
      pcVar37 = thunk_FUN_0052a280;
      UVar36 = 0x3e85;
    }
    else {
      pcVar37 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar37 = thunk_FUN_0052a230;
      }
      pcVar34 = this_00->field_0180;
      UVar36 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar37 = thunk_FUN_0052a770;
      }
      else {
        pcVar37 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar37 = thunk_FUN_0052a730;
        }
      }
      iVar21 = 0;
      pcVar33 = thunk_FUN_0052a6c0;
      UVar36 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar34 = this_00->field_0180;
      pcVar37 = thunk_FUN_0052a280;
      UVar36 = 0x3e86;
    }
    else {
      pcVar37 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar37 = thunk_FUN_0052a230;
      }
      pcVar34 = this_00->field_0180;
      UVar36 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar37 = thunk_FUN_0052a280;
    }
    else {
      pcVar37 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar37 = thunk_FUN_0052a230;
      }
    }
    UVar36 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar34 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar30 = 0;
    iVar21 = 1;
    /* ST_CALLSITE[00536F9B]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar17 = thunk_FUN_00571240("BUT_BUTOPT",0);
    pCVar17 = FUN_006f2c00(pCVar17,iVar21,uVar30);
    /* ST_CALLSITE[00536FB2]: CALL 0x00401ea1; direct=00401EA1 UPanelTy::PaintTxtBut */
    UPanelTy::PaintTxtBut
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar17,pcVar34,UVar36,
               pcVar37);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

