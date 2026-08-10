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
  InternalExceptionFrame *pIVar8;
  undefined1 uVar9;
  int local_EAX_48;
  DWORD DVar10;
  uint uVar12;
  byte *puVar11;
  uint *puVar12;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  LPSTR pCVar13;
  int local_EAX_4707;
  int local_EAX_4896;
  int local_EAX_6893;
  cMf32 *pcVar14;
  byte *pbVar15;
  int local_EAX_8594;
  int local_EAX_8848;
  int local_EAX_9241;
  int iVar10;
  int iVar29;
  uint uVar16;
  OptPanelTy *this_00;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  byte *puVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  uint uVar24;
  char *pcVar25;
  undefined4 uVar26;
  byte bVar27;
  int iVar28;
  code *pcVar29;
  ccFntTy *pcVar30;
  int iVar31;
  UINT UVar32;
  code *pcVar33;
  ulong uVar34;
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
    PreInitOptPanel(local_10);
  }
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
       ((uVar18 = *(uint *)((message->arg2).u32 + 4), uVar18 == 2 || ((3 < uVar18 && (uVar18 < 6))))
       )) {
      thunk_FUN_005252c0(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar33 = thunk_FUN_00529fe0;
      pCVar13 = thunk_FUN_00571240("BUT_MINUS",0);
      bVar27 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              puVar19 = this_00->field_01E5;
              uVar18 = *(uint *)(puVar19 + 10);
              if (uVar18 == 0) {
                uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar19 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (byte *)FUN_006b4fa0((int *)puVar19);
              uVar9 = (undefined1)local_8;
              for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar11 = (byte *)(puVar11 + 1);
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined1 *)puVar11 = uVar9;
                puVar11 = (byte *)((int)puVar11 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar7 = this_00->field_02FD;
                uVar18 = (uint)(message->arg0).words.low;
                if (uVar18 < pOVar7->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, uVar18);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar18 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar18 = (uint)(message->arg0).words.low;
                if ((int)uVar18 < (int)this_00->field_01E9->elementSize) {
                  puVar12 = *(uint **)(this_00->field_01E9->growCapacity + uVar18 * 4);
                  uVar18 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar12 = nullptr;
                  uVar18 = (uint)((message->arg0).words.high == 0);
                }
              }
              ccFntTy::WrStr(this_00->field_017C,(char *)puVar12,2,-1,uVar18);
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
                  pcVar25 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar25 = nullptr;
                }
                Library::DKW::TBL::FUN_006b6020(this_00->field_01F1,0,pcVar25);
                uVar18 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_0x2c = this_00->field_01F1;
                FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                puVar19 = this_00->field_01E5;
                uVar18 = *(uint *)(puVar19 + 10);
                if (uVar18 == 0) {
                  uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                           *(int *)(puVar19 + 4);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar11 = (byte *)FUN_006b4fa0((int *)puVar19);
                uVar9 = (undefined1)local_8;
                for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                  puVar11 = (byte *)(puVar11 + 1);
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)puVar11 = uVar9;
                  puVar11 = (byte *)((int)puVar11 + 1);
                }
                this_00->field_0028 = 0x26;
                FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
                ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
                  pcVar25 = *(char **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_0x2c * 4);
                }
                else {
                  pcVar25 = nullptr;
                }
                ccFntTy::WrStr(this_00->field_017C,pcVar25,0,-1,0);
                puVar19 = this_00->field_01E5;
                Library::DKW::WGR::FUN_006b55f0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                           (byte *)puVar19,0,0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              puVar19 = this_00->field_01E5;
              uVar18 = *(uint *)(puVar19 + 10);
              if (uVar18 == 0) {
                uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar19 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (byte *)FUN_006b4fa0((int *)puVar19);
              uVar9 = (undefined1)local_8;
              for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar11 = (byte *)(puVar11 + 1);
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined1 *)puVar11 = uVar9;
                puVar11 = (byte *)((int)puVar11 + 1);
              }
              ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              iVar17 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar18 = 0;
              iVar31 = -1;
              iVar28 = 0;
              if (iVar17 == 0) {
                pcVar25 = LoadResourceString(0x2711,g_hINSTANCE_00807618);
              }
              else {
                pcVar25 = (char *)&DAT_0080f33a;
              }
              ccFntTy::WrStr(this_00->field_017C,pcVar25,iVar28,iVar31,uVar18);
              puVar19 = this_00->field_01E5;
              Library::DKW::WGR::FUN_006b55f0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                         (byte *)puVar19,0,0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
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
            pcVar30 = this_00->field_017C;
            if (pcVar30->field_00A0 != 0) {
              FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar30);
            }
            local_8 = *(uint *)&pcVar30->field_0x8a;
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar16 = (uint)(message->arg0).words.high;
            uVar18 = uVar16;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((int)uVar16 < (int)(*(int *)(local_18 + 0x1e0) + uVar16)) {
              do {
                if ((int)uVar18 < (int)this_00->field_02F9[2]) {
                  local_1c = *(char **)(this_00->field_02F9[5] + uVar18 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {
                  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar18 - uVar16) * local_8 + 0x1b,0xca,local_8);
                  ccFntTy::WrStr(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar16 = (uint)(message->arg0).words.high;
                uVar18 = uVar18 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              } while ((int)uVar18 < (int)(*(int *)(local_18 + 0x1e0) + uVar16));
            }
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 == MESS_SHARED_0003) {
            DoneOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_ID_NONE) {
            if (SVar6 != MESS_ID_CREATE) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            InitOptPanel(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          temp_5fc7a8e9f1 = this_00->field_01A4;
          if ((2 < temp_5fc7a8e9f1) &&
             ((((temp_5fc7a8e9f1 < 5 || (temp_5fc7a8e9f1 == 7)) &&
               (this_00->field_01DD != (HANDLE)0x0)) &&
              (DVar10 = WaitForSingleObject(this_00->field_01DD,0), DVar10 == 0)))) {
            FindNextChangeNotification(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              PrepFiles(this_00,this_00->field_01E1);
            }
            this_00->field_0028 = 5;
            puVar12 = this_00->field_01B5;
            iVar17 = 10;
            do {
              if (*puVar12 != 0) {
                FUN_006e6080(this_00,2,*puVar12,(undefined4 *)&this_00->field_0x18);
              }
              puVar12 = puVar12 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar17 = this_00->field_0050;
            if (this_00->field_0044 < iVar17) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar17 <= this_00->field_0044) {
              this_00->field_0044 = iVar17;
              this_00->field_0172 = CASE_1;
              ShiftControls(this_00,1);
            }
            uVar18 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar24 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar17 = this_00->field_0050 - this_00->field_0048;
            if (iVar17 < this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if (this_00->field_0044 <= iVar17) {
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
                  *(undefined4 *)&this_00->field_0x2c = 6;
                }
                AppClassTy::PostNextMessage(this_00->field_0010,(undefined4 *)&this_00->field_0x18);
                this_00->field_019C = 0;
              }
            }
            uVar18 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar24 = this_00->field_0060;
          }
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,uVar24,0xffffffff,uVar16,uVar18);
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
        pcVar25 = "BUT_SLUP";
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
            SetOptControls(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_OPTPANELTY_C004) {
            if (SVar6 != MESS_SHARED_C005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar33 = thunk_FUN_00529fe0;
            pCVar13 = thunk_FUN_00571240("BUT_PLUS",0);
            bVar27 = 1;
            goto LAB_00534654;
          }
          UVar32 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar32 = 0x274e;
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
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
          this_00->GetMessage(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (SVar6 != MESS_OPTPANELTY_8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar25 = "BUT_SLDN";
      }
      pcVar33 = thunk_FUN_00529fe0;
      pCVar13 = thunk_FUN_00571240(pcVar25,0);
      bVar27 = 6;
    }
LAB_00534654:
    UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar27,pCVar13,
                       pcVar33);
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
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_7;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_5:
      switch(this_00->field_01AB) {
      case CASE_1:
        goto switchD_00534835_caseD_1;
      case CASE_2:
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = (char *)&DAT_0080ee1a;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mg30 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar25 = pcVar26_mg30;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mg30 + 1;
          cVar2 = *pcVar26_mg30;
          pcVar26_mg30 = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_3:
        wsprintfA((LPSTR)&DAT_0080ee1a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        SwitchOptPanel(this_00,-1);
        uVar18 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &CHAR_00h_0080ed16;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        STAppC::sub_0056E9E0((STAppC *)&DAT_00807620,0);
        puVar11 = (byte *)(&DAT_0080a14f);
        puVar20 = (byte *)(&DAT_008087b6);
        memmove(puVar20, puVar11, 0x1999); /* compiler REP MOVS byte copy */
        iVar17 = 0;
        puVar11 = (byte *)&DAT_0080baec;
        puVar20 = (byte *)(&DAT_0080e43b);
        memmove(puVar20, puVar11, 0x400); /* compiler REP MOVS byte copy */
        iVar17 = 0;
        if (DAT_0080ed12 != nullptr) {
          FreeAndNull(&DAT_0080ed12);
        }
        DAT_0080ed12 = Library::DKW::LIB::MemAlloc(0x8db);
        puVar11 = (byte *)(&DAT_0080bae8);
        puVar20 = (byte *)(DAT_0080ed12);
        memmove(puVar20, puVar11, 0x8db); /* compiler REP MOVS byte copy */
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_4:
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
          uVar34 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
                   2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case CASE_5:
        SwitchOptPanel(this_00,-1);
        this_00->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case CASE_6:
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mgC = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar25 = pcVar26_mgC;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mgC + 1;
          cVar2 = *pcVar26_mgC;
          pcVar26_mgC = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = &this_00->field_006C;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = PTR_CHAR___0079acf4;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        DeleteFileA(&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mg1D = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar25 = pcVar26_mg1D;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mg1D + 1;
          cVar2 = *pcVar26_mg1D;
          pcVar26_mg1D = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = &this_00->field_006C;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        FUN_006b8280(&this_00->field_006C,&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = PTR_CHAR___0079acf8;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        DeleteFileA(&this_00->field_006C);
        OVar4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        this_00->field_01A4 = OVar4;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_7:
        this_00->field_0028 = 0x44ff;
        g_playSystem_00802A38->GetMessage((int)&this_00->field_0x18);
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
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
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar17 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar17 == 3) {
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
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar18 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,3,local_3c + 3,&local_28);
          }
          uVar18 = local_3c[3] + local_28 >> 1;
        }
        else {
          uVar18 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = g_sndContext_0080765C->field_0080 & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar16 == 0) {
LAB_005350ba:
          uVar16 = 0;
        }
        else {
          uVar16 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
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
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar18 != 0) {
            Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,2,&local_24,&local_2c);
          }
          uVar18 = local_24 + local_2c >> 1;
        }
        else {
          uVar18 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = g_sndContext_0080765C->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar16 == 0) goto LAB_005350ba;
        uVar16 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar18 * 0x1f) / uVar16);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar14 = local_c;
      PaintVolume(this_00,0,(byte)local_c);
      uVar18 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_0x2c = pcVar14;
      FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      uVar18 = this_00->field_01B5[4];
      *(uint *)&this_00->field_0x2c = (uint)((char)DAT_00807300 != '\x01');
      FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      thunk_FUN_00571320(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar17 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 0x14);
      }
      else {
        iVar17 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 8);
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
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 0x10),
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar18 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
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
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_6;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
switchD_00535190_caseD_3:
      this_00->field_0028 = 0xc0a1;
      this_00->field_0034 = 0;
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
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (OVar4 == CASE_5) {
        this_00->field_01A4 = CASE_1;
        SetOptControls(this_00);
        SwitchOptPanel(this_00,-1);
        if (this_00->field_01AB != CASE_7) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
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
      SwitchOptPanel(this_00,-1);
      this_00->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar34 = 4;
LAB_00535271:
    CFsgsConnection::GameResult((CFsgsConnection *)&DAT_00802a90,uVar34);
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
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_8;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      uVar18 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar25 = nullptr;
      }
      else {
        pcVar25 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &this_00->field_0x1f5;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = puVar1;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      pcVar25 = &CHAR_00h_008016a0;
      pbVar15 = puVar1;
      do {
        bVar27 = *pbVar15;
        bVar23 = bVar27 < (byte)*pcVar25;
        if (bVar27 != *pcVar25) {
LAB_0053556a:
          iVar17 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_0053556f;
        }
        if (bVar27 == 0) break;
        bVar27 = pbVar15[1];
        bVar23 = bVar27 < (byte)pcVar25[1];
        if (bVar27 != pcVar25[1]) goto LAB_0053556a;
        pbVar15 = pbVar15 + 2;
        pcVar25 = pcVar25 + 2;
      } while (bVar27 != 0);
      iVar17 = 0;
LAB_0053556f:
      if (iVar17 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        SetOptControls(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      iVar17 = CheckFiles(this_00,puVar1);
      if (iVar17 != 0) {
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A5 = 0x3f49;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_5;
        this_00->field_01AB = CASE_1;
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
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
        pcVar25 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar25 = nullptr;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      this_00->field_01E1 = *(undefined4 *)&this_00->field_0x2c;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_2;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 4;
      thunk_FUN_00568010(&g_sound,CASE_4);
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
      if (*(uint *)&this_00->field_0x2c < pOVar7->count) {
        element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_0x2c);
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
          wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079acf0
                    ,PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;
        local_EAX_6893 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0);
        this_00 = local_10;
        pcVar14 = local_c;
        if (local_EAX_6893 == 0) {
          pcVar14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pOVar7 = this_00->field_02FD;
          if (*(uint *)&this_00->field_0x2c < pOVar7->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_0x2c);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar14;
          local_20 = LoadStrategData((int)pcVar14,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar18 = local_8;
          if (local_20 != nullptr) {
            local_14 = Library::DKW::LIB::MemAllocClear(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar15 = (byte *)((int)local_14 + uVar18);
            *pbVar15 = DAT_0080874d;
            puVar19 = local_20;
            pbVar15 = pbVar15 + uVar18;
            for (uVar16 = local_18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pbVar15 = *(undefined4 *)puVar19;
              puVar19 = puVar19 + 2;
              pbVar15 = pbVar15 + 4;
            }
            for (uVar18 = local_18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
              *pbVar15 = (byte)*puVar19;
              puVar19 = (ushort *)((int)puVar19 + 1);
              pbVar15 = pbVar15 + 1;
            }
            thunk_FUN_0054edf0((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (char *)0x1;
            pcVar14 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar14 != nullptr) {
          cMf32::delete(pcVar14);
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
        iVar17 = 0x3e84;
      }
      else {
        iVar17 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar17;
      this_00->field_01AB = CASE_4;
      this_00->field_01A4 = CASE_5;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_9;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
    case CASE_4:
      this_00->field_0028 = 0x26;
      FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
        pcVar25 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar25 = nullptr;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      this_00->field_01E1 = *(undefined4 *)&this_00->field_0x2c;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_6;
      this_00->field_01A4 = CASE_5;
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
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
             (byte *)this_00->field_018C);
      wsprintfA(&this_00->field_006C,"%d",(uint)(byte)DAT_00807346);
      ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      ccFntTy::WrTxt(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      if (g_popUp_008016D8 != nullptr) {
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
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_D;
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_0080730e = ((message->arg0).u32 * 4000) / 0x1e - 4000;
      thunk_FUN_005682c0(&g_sound,DAT_0080730e);
      PaintVolume(this_00,0,*(byte *)&message->arg0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0080 & 1;
        }
        if (uVar18 != 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar18 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          local_EAX_8848 = Library::MSVCRT::__setjmp3(local_158.jumpBuffer,0);
          pIVar8 = local_158.previous;
          if (local_EAX_8848 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar18 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar8 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar8;
          PaintVolume(local_10,0,*(byte *)&message->arg0);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0068 & 1;
        }
        if (uVar18 != 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar18 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          local_EAX_8594 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0);
          pIVar8 = local_114.previous;
          if (local_EAX_8594 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar18 != 0) {
              Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar8 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = ((message->arg0).u32 * 4000) / 0x1e - 4000;
        thunk_FUN_005686c0(&g_sound,DAT_0080730a);
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
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
             (byte *)this_00->field_018C);
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
      SetOptControls(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((5 < temp_5fabcf5a4c) && (temp_5fabcf5a4c < 8)) {
      if (g_sound == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = g_sndContext_0080765C->field_0050 & 1;
      }
      if (uVar18 != 0) {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar18 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        local_EAX_9241 = Library::MSVCRT::__setjmp3(local_1e0.jumpBuffer,0);
        if (local_EAX_9241 == 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0050 & 1;
          }
          if (uVar18 != 0) {
            Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,1,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_1e0.previous;
        PaintVolume(local_10,2,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    if ((CASE_5 < this_00->field_01A4) && (this_00->field_01A4 < CASE_8)) {
      if (g_sound == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = g_sndContext_0080765C->field_0038 & 1;
      }
      if (uVar18 != 0) {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar18 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar10 = Library::MSVCRT::__setjmp3(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0038 & 1;
          }
          if (uVar18 != 0) {
            Library::DKW::SND::FUN_006b7f00((int)g_sndContext_0080765C,0,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_268.previous;
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
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e81;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        UVar32 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e8b;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar32 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efc;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = thunk_FUN_0052a640;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee7;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          iVar17 = 1;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee7;
        }
      }
      else if (iVar17 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = thunk_FUN_0052a640;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee5;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          iVar17 = 1;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee5;
        }
      }
      else {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = thunk_FUN_0052a640;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee6;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          iVar17 = 1;
          pcVar29 = thunk_FUN_0052a4d0;
          UVar32 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
        }
        iVar17 = 1;
        pcVar29 = thunk_FUN_0052a4d0;
        UVar32 = 0x3ef1;
        pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 != 2) {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
        }
        iVar17 = 1;
        pcVar29 = thunk_FUN_0052a4d0;
        UVar32 = 0x3ef2;
        pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a640;
      }
      else {
joined_r0x0053686a:
        pcVar33 = thunk_FUN_0052a540;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a5c0;
        }
      }
LAB_00536434:
      UVar32 = 0x3ef0;
cf_common_exit_00536441:
      iVar17 = 1;
      pcVar29 = thunk_FUN_0052a4d0;
      pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
      PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                  iVar17);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef4;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
        }
        iVar17 = 1;
        pcVar29 = thunk_FUN_0052a4d0;
        UVar32 = 0x3e90;
        pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
        }
        iVar17 = 1;
        pcVar29 = thunk_FUN_0052a4d0;
        UVar32 = 0x3e91;
        pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
        }
        iVar17 = 1;
        pcVar29 = thunk_FUN_0052a4d0;
        UVar32 = 0x3e92;
        pCVar13 = thunk_FUN_00571240("BUT_BUTOPT1",0);
        PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar26 = 0;
    iVar28 = 1;
    pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
    pCVar13 = FUN_006f2c00(pCVar13,iVar28,uVar26);
    PaintDblBut(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,iVar17
               );
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e82;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e8a;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        UVar32 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      puVar19 = this_00->field_01E5;
      uVar18 = *(uint *)(puVar19 + 10);
      if (uVar18 == 0) {
        uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar19 + 4);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar11 = (byte *)FUN_006b4fa0((int *)puVar19);
      uVar9 = (undefined1)local_24;
      for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
        puVar11 = (byte *)(puVar11 + 1);
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar11 = uVar9;
        puVar11 = (byte *)((int)puVar11 + 1);
      }
      ccFntTy::SetSurf(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
      ccFntTy::WrStr(this_00->field_017C,*(char **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar18 = (uint)(message->arg1).words.high;
        FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar18,
                     (uint)uVar5,uVar18 + 10,0x6c,0xd);
      }
      puVar19 = this_00->field_01E5;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,(byte *)puVar19,0,
                 0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar32 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efd;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
          UVar32 = 0x3ef1;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          UVar32 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar17 != 2) {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
          UVar32 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar33 = thunk_FUN_0052a640;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef5;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar32 = 0x2751;
cf_common_exit_00536DB5:
      pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar13,UVar32);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e93;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e83;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e8c;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        UVar32 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efe;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
          UVar32 = 0x3f02;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          UVar32 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
          UVar32 = 0x3f03;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          UVar32 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef6;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef8;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar32 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a280;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar32 = 0x3e84;
      }
      else {
        UVar32 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e8d;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar32 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3eff;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = thunk_FUN_0052a640;
          UVar32 = 0x3f06;
        }
        else {
          pcVar33 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a5c0;
          }
          UVar32 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a640;
        UVar32 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar33 = thunk_FUN_0052a540;
      if (DAT_0080874e != '\x01') {
        pcVar33 = thunk_FUN_0052a5c0;
      }
      UVar32 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = thunk_FUN_0052a770;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef7;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
        iVar17 = 0;
        pcVar29 = thunk_FUN_0052a6c0;
        UVar32 = 0x3ef7;
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
          iVar17 = 0;
          pcVar33 = thunk_FUN_0052a770;
          pcVar29 = thunk_FUN_0052a6c0;
          UVar32 = 0x3f04;
        }
        else {
          pcVar33 = thunk_FUN_0052a6f0;
          if (DAT_0080874e != '\x01') {
            pcVar33 = thunk_FUN_0052a730;
          }
          iVar17 = 0;
          pcVar29 = thunk_FUN_0052a6c0;
          UVar32 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a280;
        UVar32 = 0x3e8f;
      }
      else {
        pcVar33 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a230;
        }
        UVar32 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar30 = this_00->field_0180;
      pcVar33 = thunk_FUN_0052a280;
      UVar32 = 0x3e85;
    }
    else {
      pcVar33 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar33 = thunk_FUN_0052a230;
      }
      pcVar30 = this_00->field_0180;
      UVar32 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = thunk_FUN_0052a770;
      }
      else {
        pcVar33 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar33 = thunk_FUN_0052a730;
        }
      }
      iVar17 = 0;
      pcVar29 = thunk_FUN_0052a6c0;
      UVar32 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar30 = this_00->field_0180;
      pcVar33 = thunk_FUN_0052a280;
      UVar32 = 0x3e86;
    }
    else {
      pcVar33 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar33 = thunk_FUN_0052a230;
      }
      pcVar30 = this_00->field_0180;
      UVar32 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar33 = thunk_FUN_0052a280;
    }
    else {
      pcVar33 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar33 = thunk_FUN_0052a230;
      }
    }
    UVar32 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar30 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar26 = 0;
    iVar17 = 1;
    pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
    pCVar13 = FUN_006f2c00(pCVar13,iVar17,uVar26);
    UPanelTy::PaintTxtBut
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar13,pcVar30,UVar32,
               pcVar33);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

