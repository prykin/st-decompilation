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
  undefined1 *puVar1;
  char cVar2;
  OptPanelTy_field_01A4State OVar4;
  ushort uVar5;
  STMessageId SVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  undefined2 uVar8;
  InternalExceptionFrame *pIVar9;
  undefined1 uVar10;
  int local_EAX_48;
  DWORD DVar11;
  uint uVar12;
  byte *puVar12;
  uint *puVar13;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  LPSTR pCVar14;
  int local_EAX_4707;
  int local_EAX_4896;
  int local_EAX_6893;
  cMf32 *pcVar15;
  byte *pbVar16;
  int local_EAX_8594;
  int local_EAX_8848;
  int local_EAX_9241;
  int iVar10;
  int iVar29;
  uint uVar17;
  OptPanelTy *this_00;
  int iVar18;
  uint uVar19;
  ushort *puVar20;
  byte *puVar21;
  char *pcVar22;
  char *pcVar23;
  bool bVar24;
  uint uVar25;
  char *pcVar26;
  undefined4 uVar27;
  byte bVar28;
  int iVar30;
  code *pcVar31;
  ccFntTy *pcVar32;
  int iVar33;
  UINT UVar34;
  code *pcVar35;
  ulong uVar36;
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
       ((uVar19 = *(uint *)((message->arg2).u32 + 4), uVar19 == 2 || ((3 < uVar19 && (uVar19 < 6))))
       )) {
      thunk_FUN_005252c0(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar35 = thunk_FUN_00529fe0;
      pCVar14 = thunk_FUN_00571240("BUT_MINUS",0);
      bVar28 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              puVar20 = this_00->field_01E5;
              uVar19 = *(uint *)(puVar20 + 10);
              if (uVar19 == 0) {
                uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar20 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar12 = (byte *)FUN_006b4fa0((int *)puVar20);
              uVar10 = (undefined1)local_8;
              for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *(undefined1 *)puVar12 = uVar10;
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar7 = this_00->field_02FD;
                uVar19 = (uint)(message->arg0).words.low;
                if (uVar19 < pOVar7->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, uVar19);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar19 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar19 = (uint)(message->arg0).words.low;
                if ((int)uVar19 < (int)this_00->field_01E9->elementSize) {
                  puVar13 = *(uint **)(this_00->field_01E9->growCapacity + uVar19 * 4);
                  uVar19 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar13 = nullptr;
                  uVar19 = (uint)((message->arg0).words.high == 0);
                }
              }
              ccFntTy::WrStr(this_00->field_017C,(char *)puVar13,2,-1,uVar19);
              Library::DKW::WGR::FUN_006b55f0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,
                         (message->arg1).words.low + 0x26,(message->arg1).words.high + 0x31,
                         (byte *)this_00->field_01E5,0,0,0,200,*(int *)(this_00->field_01E5 + 4));
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
                  pcVar26 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar26 = nullptr;
                }
                Library::DKW::TBL::FUN_006b6020(this_00->field_01F1,0,pcVar26);
                uVar19 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_002C = this_00->field_01F1;
                FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                puVar20 = this_00->field_01E5;
                uVar19 = *(uint *)(puVar20 + 10);
                if (uVar19 == 0) {
                  uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                           *(int *)(puVar20 + 4);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar12 = (byte *)FUN_006b4fa0((int *)puVar20);
                uVar10 = (undefined1)local_8;
                for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                  puVar12 = (byte *)(puVar12 + 1);
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *(undefined1 *)puVar12 = uVar10;
                  puVar12 = (byte *)((int)puVar12 + 1);
                }
                this_00->field_0028 = 0x26;
                FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
                ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
                  pcVar26 = *(char **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_002C * 4);
                }
                else {
                  pcVar26 = nullptr;
                }
                ccFntTy::WrStr(this_00->field_017C,pcVar26,0,-1,0);
                puVar20 = this_00->field_01E5;
                Library::DKW::WGR::FUN_006b55f0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                           (byte *)puVar20,0,0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              puVar20 = this_00->field_01E5;
              uVar19 = *(uint *)(puVar20 + 10);
              if (uVar19 == 0) {
                uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar20 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar12 = (byte *)FUN_006b4fa0((int *)puVar20);
              uVar10 = (undefined1)local_8;
              for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *(undefined1 *)puVar12 = uVar10;
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              iVar18 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar19 = 0;
              iVar33 = -1;
              iVar30 = 0;
              if (iVar18 == 0) {
                pcVar26 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
              }
              else {
                pcVar26 = (char *)&DAT_0080f33a;
              }
              ccFntTy::WrStr(this_00->field_017C,pcVar26,iVar30,iVar33,uVar19);
              puVar20 = this_00->field_01E5;
              Library::DKW::WGR::FUN_006b55f0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                         (byte *)puVar20,0,0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
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
            pcVar32 = this_00->field_017C;
            if (pcVar32->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar32);
            }
            local_8 = *(uint *)&pcVar32->field_0x8a;
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar17 = (uint)(message->arg0).words.high;
            uVar19 = uVar17;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((int)uVar17 < (int)(*(int *)(local_18 + 0x1e0) + uVar17)) {
              do {
                if ((int)uVar19 < (int)this_00->field_02F9[2]) {
                  local_1c = *(char **)(this_00->field_02F9[5] + uVar19 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {
                  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar19 - uVar17) * local_8 + 0x1b,0xca,local_8);
                  ccFntTy::WrStr(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar17 = (uint)(message->arg0).words.high;
                uVar19 = uVar19 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              } while ((int)uVar19 < (int)(*(int *)(local_18 + 0x1e0) + uVar17));
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
              (DVar11 = WaitForSingleObject(this_00->field_01DD,0), DVar11 == 0)))) {
            /* ST_CALLSITE[00533E52]: CALL dword ptr [0x0085bce4] */
            FindNextChangeNotification(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              STPiece<0,2>(uVar19) = this_00->field_01E1;
              STPiece<2,2>(uVar19) = this_00->field_01E3;
              /* ST_CALLSITE[00533E6A]: CALL 0x00403fbc; direct=00403FBC OptPanelTy::PrepFiles */
              PrepFiles(this_00,uVar19);
            }
            this_00->field_0028 = 5;
            puVar13 = this_00->field_01B5;
            iVar18 = 10;
            do {
              if (*puVar13 != 0) {
                FUN_006e6080(this_00,2,*puVar13,(undefined4 *)&this_00->field_0x18);
              }
              puVar13 = puVar13 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar18 = this_00->field_0050;
            if (this_00->field_0044 < iVar18) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar18 <= this_00->field_0044) {
              this_00->field_0044 = iVar18;
              this_00->field_0172 = CASE_1;
              /* ST_CALLSITE[00533FF8]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
              ShiftControls(this_00,1);
            }
            uVar19 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar18 = this_00->field_0050 - this_00->field_0048;
            if (iVar18 < this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if (this_00->field_0044 <= iVar18) {
              DAT_0080878c = 0;
              local_3c[1] = 0;
              local_3c[2] = 0;
              local_3c[0] = 1;
              if (this_00->field_019C != 0x6102) {
                thunk_FUN_0054edf0((undefined4 *)0x5,local_3c,1,0xffffffff);
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
            uVar19 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,uVar25,0xffffffff,uVar17,uVar19);
LAB_00534016:
          if ((uint)(this_00->field_0038 - this_00->field_0301) < 0x7d1) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          this_00->field_0301 = this_00->field_0038;
          uVar12 = thunk_FUN_00567060(0x807658);
          if (uVar12 != 0) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar26 = "BUT_SLUP";
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
            pcVar35 = thunk_FUN_00529fe0;
            pCVar14 = thunk_FUN_00571240("BUT_PLUS",0);
            bVar28 = 1;
            goto LAB_00534654;
          }
          UVar34 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar34 = 0x274e;
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
          /* ST_CALLSITE[005346F1]: CALL dword ptr [EAX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)g_cursorClass_00802A30->field_0000)(message);
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
          /* ST_CALLSITE[0053469B]: CALL dword ptr [EDX] */
          this_00->GetMessage(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (SVar6 != MESS_OPTPANELTY_8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar26 = "BUT_SLDN";
      }
      pcVar35 = thunk_FUN_00529fe0;
      pCVar14 = thunk_FUN_00571240(pcVar26,0);
      bVar28 = 6;
    }
LAB_00534654:
    /* ST_CALLSITE[00534657]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
    UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar28,pCVar14,
                       pcVar35);
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
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
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
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = (char *)&DAT_0080ee1a;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mg30 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar26 = pcVar26_mg30;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mg30 + 1;
          cVar2 = *pcVar26_mg30;
          pcVar26_mg30 = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar19 = 0xffffffff;
        pcVar26 = PTR_DAT_0079ad00;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
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
        uVar19 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &CHAR_00h_0080ed16;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534940]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
        STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,0);
        puVar12 = (byte *)(&DAT_0080a14f);
        puVar21 = (byte *)(&DAT_008087b6);
        memmove(puVar21, puVar12, 0x1999); /* compiler REP MOVS byte copy */
        iVar18 = 0;
        puVar12 = (byte *)&DAT_0080baec;
        puVar21 = (byte *)(&DAT_0080e43b);
        memmove(puVar21, puVar12, 0x400); /* compiler REP MOVS byte copy */
        iVar18 = 0;
        if (DAT_0080ed12 != nullptr) {
          FreeAndNull(&DAT_0080ed12);
        }
        DAT_0080ed12 = Library::DKW::LIB::MemAlloc(0x8db);
        puVar12 = (byte *)(&DAT_0080bae8);
        puVar21 = (byte *)(DAT_0080ed12);
        memmove(puVar21, puVar12, 0x8db); /* compiler REP MOVS byte copy */
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
          uVar36 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
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
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_006C;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mgC = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar26 = pcVar26_mgC;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mgC + 1;
          cVar2 = *pcVar26_mgC;
          pcVar26_mgC = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = &this_00->field_006C;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar19 = 0xffffffff;
        pcVar26 = PTR_DAT_0079ad00;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = PTR_CHAR___0079acf4;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        /* ST_CALLSITE[00534AC7]: CALL dword ptr [0x0085bce8] */
        DeleteFileA(&this_00->field_006C);
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_006C;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mg1D = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar26 = pcVar26_mg1D;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mg1D + 1;
          cVar2 = *pcVar26_mg1D;
          pcVar26_mg1D = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = &this_00->field_006C;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar19 = 0xffffffff;
        pcVar26 = PTR_DAT_0079ad00;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = PTR_CHAR___0079acf8;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
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
        /* ST_CALLSITE[00534D55]: CALL dword ptr [EDX] */
        this_00->GetMessage((STMessage *)&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 1;
      thunk_FUN_00568010(&g_sound,CASE_1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      thunk_FUN_005713b0(0x807620);
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar18 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar18 == 3) {
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
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar19 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,3,local_3c + 3,&local_28);
          }
          uVar19 = local_3c[3] + local_28 >> 1;
        }
        else {
          uVar19 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = g_sndContext_0080765C->field_0080 & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar17 == 0) {
LAB_005350ba:
          uVar17 = 0;
        }
        else {
          uVar17 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
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
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar19 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,2,&local_24,&local_2c);
          }
          uVar19 = local_24 + local_2c >> 1;
        }
        else {
          uVar19 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = g_sndContext_0080765C->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar17 == 0) goto LAB_005350ba;
        uVar17 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar19 * 0x1f) / uVar17);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar15 = local_c;
      /* ST_CALLSITE[00535104]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      PaintVolume(this_00,0,(byte)local_c);
      uVar19 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_002C = pcVar15;
      FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      bVar24 = (char)DAT_00807300 != '\x01';
      uVar19 = this_00->field_01B5[4];
      this_00->field_002C = (short)(uint)bVar24;
      this_00->field_002E = (short)((uint)bVar24 >> 0x10);
      FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar18 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar18 + 0x14);
      }
      else {
        iVar18 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar18 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        thunk_FUN_0054edf0((undefined4 *)0x5,&local_48,1,0xffffffff);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        ST3DSMAPContext::sub_006E8640
                  (g_sT3DSMAPContext_00807598,
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar18 + 0x10),
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar18 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar19 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      this_00->field_002C = 1;
      this_00->field_002E = 0;
      FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
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
      /* ST_CALLSITE[00534487]: CALL dword ptr [EAX] */
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
      thunk_FUN_00568010(&g_sound,CASE_2);
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
    uVar36 = 4;
LAB_00535271:
    /* ST_CALLSITE[00535276]: CALL dword ptr [0x0085c060] */
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar36);
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
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
      this_00->field_01A4 = CASE_8;
      /* ST_CALLSITE[00535426]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      uVar19 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar26 = nullptr;
      }
      else {
        pcVar26 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      puVar1 = &this_00->field_0x1f5;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = puVar1;
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      pcVar26 = &CHAR_00h_008016a0;
      pbVar16 = puVar1;
      do {
        bVar28 = *pbVar16;
        bVar24 = bVar28 < (byte)*pcVar26;
        if (bVar28 != *pcVar26) {
LAB_0053556a:
          iVar18 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
          goto LAB_0053556f;
        }
        if (bVar28 == 0) break;
        bVar28 = pbVar16[1];
        bVar24 = bVar28 < (byte)pcVar26[1];
        if (bVar28 != pcVar26[1]) goto LAB_0053556a;
        pbVar16 = pbVar16 + 2;
        pcVar26 = pcVar26 + 2;
      } while (bVar28 != 0);
      iVar18 = 0;
LAB_0053556f:
      if (iVar18 == 0) {
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
      iVar18 = CheckFiles(this_00,puVar1);
      if (iVar18 != 0) {
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
        pcVar26 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar26 = nullptr;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1f5;
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = this_00->field_002E;
      uVar10 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar8;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = uVar10;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_2;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005356C5]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 4;
      thunk_FUN_00568010(&g_sound,CASE_4);
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
      pOVar7 = this_00->field_02FD;
      if (*(uint *)&this_00->field_002C < pOVar7->count) {
        element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_002C);
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
        pcVar15 = local_c;
        if (local_EAX_6893 == 0) {
          pcVar15 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pOVar7 = this_00->field_02FD;
          if (*(uint *)&this_00->field_002C < pOVar7->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_002C);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar15;
          /* ST_CALLSITE[00535852]: CALL 0x004012ad; direct=004012AD LoadStrategData */
          local_20 = LoadStrategData((int)pcVar15,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar19 = local_8;
          if (local_20 != nullptr) {
            local_14 = Library::DKW::LIB::MemAllocClear(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar16 = (byte *)((int)local_14 + uVar19);
            *pbVar16 = DAT_0080874d;
            puVar20 = local_20;
            pbVar16 = pbVar16 + uVar19;
            for (uVar17 = local_18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pbVar16 = *(undefined4 *)puVar20;
              puVar20 = puVar20 + 2;
              pbVar16 = pbVar16 + 4;
            }
            for (uVar19 = local_18 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pbVar16 = (byte)*puVar20;
              puVar20 = (ushort *)((int)puVar20 + 1);
              pbVar16 = pbVar16 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (char *)0x1;
            pcVar15 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar15 != nullptr) {
          cMf32::delete(pcVar15);
        }
        if (local_20 != nullptr) {
          FreeAndNull(&local_20);
        }
        if (local_14 != nullptr) {
          FreeAndNull(&local_14);
        }
      }
      else {
        local_14 = Library::DKW::LIB::MemAllocClear(2);
        if (local_14 != nullptr) {
          *(undefined1 *)local_14 = 0;
          STField<byte>(local_14,1) = DAT_0080874d;
          thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,2);
          FreeAndNull(&local_14);
          local_1c = (char *)0x1;
        }
      }
      if (local_1c != nullptr) {
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        /* ST_CALLSITE[0053591F]: CALL dword ptr [EAX] */
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
        iVar18 = 0x3e84;
      }
      else {
        iVar18 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar18;
      this_00->field_01AB = CASE_4;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005359A2]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
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
        pcVar26 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar26 = nullptr;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1f5;
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = this_00->field_002E;
      uVar10 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar8;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = uVar10;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_6;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[00535BBB]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 8;
      thunk_FUN_00568010(&g_sound,CASE_8);
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
             (byte *)this_00->field_018C);
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
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
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
          uVar19 = 0;
        }
        else {
          uVar19 = g_sndContext_0080765C->field_0080 & 1;
        }
        if (uVar19 != 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar19 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          local_EAX_8848 = Library::MSVCRT::__setjmp3(local_158.jumpBuffer,0);
          pIVar9 = local_158.previous;
          if (local_EAX_8848 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar19 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar9 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar9;
          /* ST_CALLSITE[00535EFD]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
          PaintVolume(local_10,0,*(byte *)&message->arg0);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = g_sndContext_0080765C->field_0068 & 1;
        }
        if (uVar19 != 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar19 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          local_EAX_8594 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0);
          pIVar9 = local_114.previous;
          if (local_EAX_8594 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar19 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar9 = g_currentExceptionFrame;
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
             (byte *)this_00->field_018C);
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
        uVar19 = 0;
      }
      else {
        uVar19 = g_sndContext_0080765C->field_0050 & 1;
      }
      if (uVar19 != 0) {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar19 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        local_EAX_9241 = Library::MSVCRT::__setjmp3(local_1e0.jumpBuffer,0);
        if (local_EAX_9241 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0050 & 1;
          }
          if (uVar19 != 0) {
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
        uVar19 = 0;
      }
      else {
        uVar19 = g_sndContext_0080765C->field_0038 & 1;
      }
      if (uVar19 != 0) {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar19 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar10 = Library::MSVCRT::__setjmp3(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = g_sndContext_0080765C->field_0038 & 1;
          }
          if (uVar19 != 0) {
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
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e81;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        UVar34 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e8b;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efc;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = thunk_FUN_0052a640;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee7;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          iVar18 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee7;
        }
      }
      else if (iVar18 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = thunk_FUN_0052a640;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee5;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          iVar18 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee5;
        }
      }
      else {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = thunk_FUN_0052a640;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee6;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          iVar18 = 1;
          pcVar31 = thunk_FUN_0052a4d0;
          UVar34 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
        }
        iVar18 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar34 = 0x3ef1;
        pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005364AC]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 != 2) {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
        }
        iVar18 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar34 = 0x3ef2;
        pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005363FA]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a640;
      }
      else {
joined_r0x0053686a:
        pcVar35 = thunk_FUN_0052a540;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a5c0;
        }
      }
LAB_00536434:
      UVar34 = 0x3ef0;
cf_common_exit_00536441:
      iVar18 = 1;
      pcVar31 = thunk_FUN_0052a4d0;
      pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
      /* ST_CALLSITE[00536453]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
      PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                  iVar18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef4;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
        }
        iVar18 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e90;
        pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[005365CD]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
        }
        iVar18 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e91;
        pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[00536574]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
        }
        iVar18 = 1;
        pcVar31 = thunk_FUN_0052a4d0;
        UVar34 = 0x3e92;
        pCVar14 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        /* ST_CALLSITE[0053651B]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar27 = 0;
    iVar30 = 1;
    pCVar14 = thunk_FUN_00571240("BUT_BUTOPT",0);
    pCVar14 = FUN_006f2c00(pCVar14,iVar30,uVar27);
    /* ST_CALLSITE[00536F06]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
    PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,iVar18
               );
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e82;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e8a;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        UVar34 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      puVar20 = this_00->field_01E5;
      uVar19 = *(uint *)(puVar20 + 10);
      if (uVar19 == 0) {
        uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar20 + 4);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar12 = (byte *)FUN_006b4fa0((int *)puVar20);
      uVar10 = (undefined1)local_24;
      for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
        puVar12 = (byte *)(puVar12 + 1);
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar12 = uVar10;
        puVar12 = (byte *)((int)puVar12 + 1);
      }
      ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
      ccFntTy::WrStr(this_00->field_017C,*(char **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar19 = (uint)(message->arg1).words.high;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar19,
                     (uint)uVar5,uVar19 + 10,0x6c,0xd);
      }
      puVar20 = this_00->field_01E5;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,(byte *)puVar20,0,
                 0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efd;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
          UVar34 = 0x3ef1;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          UVar34 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar18 != 2) {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
          UVar34 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar35 = thunk_FUN_0052a640;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef5;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar34 = 0x2751;
cf_common_exit_00536DB5:
      pCVar14 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[00536DC7]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar14,UVar34);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e93;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e83;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e8c;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        UVar34 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efe;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
          UVar34 = 0x3f02;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          UVar34 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
          UVar34 = 0x3f03;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          UVar34 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef6;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef8;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar34 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a280;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar34 = 0x3e84;
      }
      else {
        UVar34 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e8d;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar34 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3eff;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = thunk_FUN_0052a640;
          UVar34 = 0x3f06;
        }
        else {
          pcVar35 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a5c0;
          }
          UVar34 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a640;
        UVar34 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar35 = thunk_FUN_0052a540;
      if (DAT_0080874e != '\x01') {
        pcVar35 = thunk_FUN_0052a5c0;
      }
      UVar34 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = thunk_FUN_0052a770;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef7;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
        iVar18 = 0;
        pcVar31 = thunk_FUN_0052a6c0;
        UVar34 = 0x3ef7;
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
          iVar18 = 0;
          pcVar35 = thunk_FUN_0052a770;
          pcVar31 = thunk_FUN_0052a6c0;
          UVar34 = 0x3f04;
        }
        else {
          pcVar35 = thunk_FUN_0052a6f0;
          if (DAT_0080874e != '\x01') {
            pcVar35 = thunk_FUN_0052a730;
          }
          iVar18 = 0;
          pcVar31 = thunk_FUN_0052a6c0;
          UVar34 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a280;
        UVar34 = 0x3e8f;
      }
      else {
        pcVar35 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a230;
        }
        UVar34 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar32 = this_00->field_0180;
      pcVar35 = thunk_FUN_0052a280;
      UVar34 = 0x3e85;
    }
    else {
      pcVar35 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar35 = thunk_FUN_0052a230;
      }
      pcVar32 = this_00->field_0180;
      UVar34 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = thunk_FUN_0052a770;
      }
      else {
        pcVar35 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar35 = thunk_FUN_0052a730;
        }
      }
      iVar18 = 0;
      pcVar31 = thunk_FUN_0052a6c0;
      UVar34 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar32 = this_00->field_0180;
      pcVar35 = thunk_FUN_0052a280;
      UVar34 = 0x3e86;
    }
    else {
      pcVar35 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar35 = thunk_FUN_0052a230;
      }
      pcVar32 = this_00->field_0180;
      UVar34 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar35 = thunk_FUN_0052a280;
    }
    else {
      pcVar35 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar35 = thunk_FUN_0052a230;
      }
    }
    UVar34 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar32 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar27 = 0;
    iVar18 = 1;
    pCVar14 = thunk_FUN_00571240("BUT_BUTOPT",0);
    pCVar14 = FUN_006f2c00(pCVar14,iVar18,uVar27);
    /* ST_CALLSITE[00536FB2]: CALL 0x00401ea1; direct=00401EA1 UPanelTy::PaintTxtBut */
    UPanelTy::PaintTxtBut
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar14,pcVar32,UVar34,
               pcVar35);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

