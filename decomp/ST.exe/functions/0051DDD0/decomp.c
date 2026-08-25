#include "../../pseudocode_runtime.h"


/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::GetMessage

   [STSwitchEnumApplier] Switch target field_01A1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_01A1State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_B=11;CASE_C=12

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404458|0051DDD0; family_names=HelpPanelTy::GetMessage; ret4=40;
   direct_offsets={10:3,14:10,18:5,1c:12}

   [STSwitchEnumApplier] Switch target field_01A1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_01A1State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_A=10;CASE_B=11;CASE_C=12
    */

int __thiscall HelpPanelTy::GetMessage(HelpPanelTy *this,STMessage *message)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  STMessageId SVar3;
  ccFntTy *pcVar4;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  void *pvVar6;
  ushort *puVar7;
  UINT *pUVar8;
  HelpPanelTy *this_00;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  HelpPanelTy_field_01D7Element *pHVar12;
  BITMAPINFO *pBVar13;
  char *pcVar13_mg1;
  uint *puVar14;
  int iVar16;
  LPSTR pCVar17;
  int iVar15;
  uint uVar18;
  HelpPanelTy_field_01BBDArray *pHVar19;
  uint uVar20;
  ushort uVar21;
  byte bVar22;
  char *pcVar23;
  bool bVar24;
  char *pcVar25;
  code *pcVar26;
  UINT UVar27;
  InternalExceptionFrame local_84;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  HelpPanelTy *local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8_mg0;

  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xac7,0,iVar8,
                                "%s","HelpPanelTy::GetMessage");
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\helppan.cpp",0xac7);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    puVar11 = &local_20->field_004C;
    FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,puVar11);
    this_00->field_003C = *puVar11;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  /* ST_CALLSITE[0051DE46]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  PanelTy::GetMessage((PanelTy *)this_00,message);
  SVar3 = message->id;
  if (SVar3 < MESS_OPTPANELTY_C001) {
    if (SVar3 == MESS_SHARED_C000) {
      UVar27 = 0x274e;
      pCVar17 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[0051F034]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar17,UVar27);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 < MESS_SIDTY_8161) {
      if (SVar3 == MESS_SHARED_8160) {
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        (message->arg1).ptr = (void *)(*(int *)&pcVar4->field_0x8a + 1);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (MESS_SHARED_0060 < SVar3) {
        if (SVar3 == MESS_SHARED_0061) {
          local_c = (uint)(message->arg1).words.low;
          local_8_mg0 = (UINT *)(uint)(message->arg1).words.high;
          if (this_00->field_0172 != CASE_1) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          switch(this_00->field_01A1) {
          case CASE_1:
          case CASE_2:
          case CASE_3:
          case CASE_4:
          case CASE_5:
          case CASE_B:
          case CASE_C:
            local_1c = nullptr;
            local_14 = this_00->field_01D7->count;
            if (local_14 == 0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3;
            while( true ) {
              if (local_1c < local_14) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                piVar10 = (int *)((int)&this_00->field_01D7->data->field_0000 +
                                 this_00->field_01D7->elementSize * (int)local_1c);
              }
              else {
                piVar10 = nullptr;
              }
              local_24 = piVar10[3];
              local_30 = this_00->field_003C + 0x21 + *piVar10;
              local_2c = piVar10[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar10[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8_mg0 < local_2c)) || (local_24 + local_2c <= (int)local_8_mg0)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_8_mg0 < this_00->field_0044 + 300)) break;
              local_1c = (int *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            /* ST_CALLSITE[0051E6F4]: CALL 0x004054c5; direct=004054C5 HelpPanelTy::LinkAct */
            LinkAct(this_00,STField<int>(piVar10,0x11),STField<undefined4>(piVar10,0x15));
            uVar18 = STField<undefined4>(piVar10,0x15);
            pvVar6 = STField<void *>(piVar10,0x11);
            switch((char)piVar10[4]) {
            case '\x01':
              /* ST_CALLSITE[0051E75E]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
              RCProc(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E765]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              /* ST_CALLSITE[0051E7F4]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
              ObjProc(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E7FB]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              /* ST_CALLSITE[0051E7CE]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
              SubProc(this_00,(int)pvVar6,'\0');
              /* ST_CALLSITE[0051E7D5]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              /* ST_CALLSITE[0051E81A]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
              ArmProc(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E821]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              /* ST_CALLSITE[0051E7A9]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
              TechProc(this_00,(uint)pvVar6,(byte)uVar18,'\0');
              /* ST_CALLSITE[0051E7B0]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              /* ST_CALLSITE[0051E783]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
              TTreeProc(this_00,(uint)pvVar6,'\0');
              /* ST_CALLSITE[0051E78A]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              /* ST_CALLSITE[0051E738]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
              MObjProc(this_00);
              /* ST_CALLSITE[0051E73F]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              /* ST_CALLSITE[0051E88B]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
              TipProc(this_00,pvVar6,uVar18,'\0');
              break;
            case '\n':
              /* ST_CALLSITE[0051E716]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
              IndexBut(this_00);
              /* ST_CALLSITE[0051E71D]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              /* ST_CALLSITE[0051E840]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
              SpecProc(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E847]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              /* ST_CALLSITE[0051E865]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
              NatProc(this_00,(int)pvVar6,'\0');
              /* ST_CALLSITE[0051E86C]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              PutToSHlp(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            /* ST_CALLSITE[0051E892]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
            PutToSHlp(this_00);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_8:
            if (this_00->field_01D7->count == 0) {
              pHVar12 = nullptr;
            }
            else {
              pHVar12 = this_00->field_01D7->data;
            }
            local_30 = this_00->field_003C + 0x21 + pHVar12->field_0000;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) +
                       pHVar12->field_0004 + 0x16 + this_00->field_0044;
            local_28 = pHVar12->field_0008;
            local_24 = pHVar12->field_000C;
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8_mg0 < local_2c)) || (local_24 + local_2c <= (int)local_8_mg0)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (!bVar24) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (this_00->field_0044 + 300 <= (int)local_8_mg0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            /* ST_CALLSITE[0051E951]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
            sub_00515180(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (SVar3 == MESS_SHARED_6200) {
          this_00->field_01C3 = message->arg0;
          iVar9 = (ushort)this_00->field_01AF + 0x16;
          Library::DKW::WGR::FUN_006b55f0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,iVar9,
                     (byte *)this_00->field_01DC,0,0x21,iVar9,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF);
          Library::DKW::WGR::FUN_006b5110
                    ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
                     (BITMAPINFO *)this_00->field_0218,0,0,
                     (uint)(ushort)this_00->field_01B1 * this_00->field_01C3,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF,0xff);
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_6332) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        local_10 = (undefined4 *)(message->arg2).u32;
        if (local_10 == nullptr) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (this_00->field_01D3 == nullptr) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        local_18 = *(uint *)&pcVar4->field_0x8a;
        if (DAT_0080874e == '\x03') {
          local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(5));
        }
        else {
          local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)((-(DAT_0080874e != '\x01') & 6U) + 1));
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
                   (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
        pAVar5 = this_00->field_0218;
        local_1c = (int *)pAVar5->field_0014;
        if (local_1c == nullptr) {
          local_1c = (int *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                             0x1ffffffc) * pAVar5->field_0008);
        }
        puVar11 = (undefined4 *)FUN_006b4fa0((int *)pAVar5);
        for (uVar18 = (uint)local_1c >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar18 = (uint)local_1c & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        uVar20 = (uint)(message->arg0).words.high;
        uVar18 = uVar20;
        if ((int)uVar20 < (int)(uVar20 + STField<int>(local_10,0x1e0))) {
          do {
            if ((int)uVar18 < (int)this_00->field_01D3[2]) {
              local_1c = *(int **)(this_00->field_01D3[5] + uVar18 * 4);
            }
            else {
              local_1c = nullptr;
            }
            if (local_1c != nullptr) {
              ccFntTy::SetSurf(this_00->field_01E4,(int)this_00->field_0218,0,0,
                               (uVar18 - uVar20) * local_18,this_00->field_0218->field_0004,local_18
                              );
              ccFntTy::WrStr(this_00->field_01E4,(char *)local_1c,0,-1,local_14 & 0xff);
            }
            uVar20 = (uint)(message->arg0).words.high;
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)(uVar20 + STField<int>(local_10,0x1e0)));
        }
        Library::DKW::WGR::FUN_006b5110
                  ((int)this_00->field_0068,0,0x21,0x16,(BITMAPINFO *)this_00->field_0218,0,0,0,
                   0x19c,0x118,0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (SVar3 != MESS_SHARED_0060) {
        if (SVar3 == MESS_ID_NONE) {
          if (this_00->field_0172 == CASE_3) {
            iVar9 = this_00->field_0050;
            if (this_00->field_0044 < iVar9) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar9 <= this_00->field_0044) {
              this_00->field_0044 = iVar9;
              this_00->field_0172 = CASE_1;
              /* ST_CALLSITE[0051DF53]: CALL 0x00404fd9; direct=00404FD9 HelpPanelTy::ShiftControls */
              ShiftControls(this_00,1);
            }
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (this_00->field_0172 != CASE_4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar9 = this_00->field_0050 - this_00->field_0048;
          if (iVar9 < this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if (this_00->field_0044 <= iVar9) {
            this_00->field_0044 = iVar9;
            this_00->field_0172 = CASE_2;
          }
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 == MESS_ID_CREATE) {
          /* ST_CALLSITE[0051DEAD]: CALL 0x00403111; direct=00403111 HelpPanelTy::InitHelpPanel */
          InitHelpPanel(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_0003) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        /* ST_CALLSITE[0051DE92]: CALL 0x00401398; direct=00401398 HelpPanelTy::DoneHelpPanel */
        DoneHelpPanel(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)(message->arg1).words.low;
      local_10 = nullptr;
      local_c = (uint)(message->arg1).words.high;
      this_00->field_01DB = 0;
      if (this_00->field_0172 == CASE_1) {
        switch(this_00->field_01A1) {
        case CASE_1:
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_B:
        case CASE_C:
          local_8_mg0 = nullptr;
          local_14 = this_00->field_01D7->count;
          if ((undefined4 *)local_14 != nullptr) {
            do {
              if (local_8_mg0 < local_14) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                piVar10 = (int *)((int)&this_00->field_01D7->data->field_0000 +
                                 this_00->field_01D7->elementSize * (int)local_8_mg0);
              }
              else {
                piVar10 = nullptr;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar10;
              local_3c = piVar10[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar10[2];
              local_34 = piVar10[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8_mg0 = (UINT *)((int)local_8_mg0 + 1);
            } while (local_8_mg0 < local_14);
          }
          break;
        case CASE_6:
          if (this_00->field_01A3 == (void *)0x1) {
            local_8_mg0 = (UINT *)&DAT_007c2b58;
            local_14 = 0x33;
          }
          else if (this_00->field_01A3 == (void *)0x2) {
            local_8_mg0 = (UINT *)&DAT_007c2df0;
            local_14 = 0x39;
          }
          else {
            local_8_mg0 = &DAT_007c30d8;
            local_14 = 0x46;
          }
          uVar21 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (int *)(uint)(ushort)this_00->field_01AF;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_40 = *(int *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_3c = (*(int *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8_mg0 + (uint)uVar21 * 0xd),
                                              *(char *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = nullptr;
                break;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (MESS_SHARED_BFFF < SVar3) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 == MESS_SHARED_BFFF) {
      /* ST_CALLSITE[0051EFF8]: CALL dword ptr [EDX + 0x18] */
      this_00->SetPanel('\0');
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(SVar3) {
    case MESS_SIDTY_8161:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pHVar19 = (HelpPanelTy_field_01BBDArray *)this_00->field_01B3;
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pHVar19 = this_00->field_01BB;
      }
      uVar18 = (uint)(message->arg0).words.low;
      if (uVar18 < pHVar19->count) {
        if (HVar2 == 0) {
          local_8_mg0 = (UINT *)(this_00->field_01B3->field_0008 * uVar18 +
                                this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_8_mg0 = (UINT *)((int)&this_00->field_01BB->data->resourceId +
                                this_00->field_01BB->elementSize * uVar18);
        }
      }
      else {
        local_8_mg0 = nullptr;
      }
      if (local_8_mg0 != nullptr) {
        bVar24 = (message->arg0).words.high == 1;
        local_18 = *local_8_mg0;
        if (DAT_0080874e == '\x03') {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(!bVar24));
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
        }
        else {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar24 + '\a'));
        }
        iVar9 = (message->arg1).words.high + 0x16;
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,iVar9,
                   (byte *)this_00->field_01DC,0,0x21,iVar9,0x19c,*(int *)(this_00->field_01EC + 4));
        puVar7 = this_00->field_01EC;
        uVar18 = *(uint *)(puVar7 + 10);
        if (uVar18 == 0) {
          uVar18 = ((uint)puVar7[7] * *(int *)(puVar7 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(puVar7 + 4);
        }
        puVar11 = (undefined4 *)FUN_006b4fa0((int *)puVar7);
        for (uVar20 = uVar18 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01E4,(int)this_00->field_01EC,0,0,0,0,0);
        pcVar13_mg1 = LoadResourceString(local_18,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar25 = pcVar13_mg1;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar13_mg1 + 1;
          cVar1 = *pcVar13_mg1;
          pcVar13_mg1 = pcVar25;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar25 + -uVar18;
        pcVar23 = (char *)&DAT_0080f33a;
        memmove(pcVar23, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar8 = local_8_mg0;
        while (local_8_mg0 = pUVar8, puVar14 != nullptr) {
          *(undefined1 *)puVar14 = 0x20;
          puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n');
          pUVar8 = local_8_mg0;
        }
        ccFntTy::WrStr(this_00->field_01E4,(char *)&DAT_0080f33a,
                       (uint)STField<byte>(pUVar8,0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == 0) && (STField<byte>(pUVar8,0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(0x29));
          }
          else {
            local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)((-(DAT_0080874e != '\x01') & 0x43U) + 0x10));
          }
          iVar16 = (uint)STField<byte>(pUVar8,0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar9 = (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008 / 2;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar16,iVar9,iVar16 + 8,
                       iVar9,(byte)local_1c,0xd);
          if (STField<char>(local_8_mg0,0x13) == '\0') {
            iVar9 = *(int *)(this_00->field_01EC + 4);
          }
          iVar16 = (uint)STField<byte>(local_8_mg0,0x11) * 0x14;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar16,0,iVar16,iVar9,
                       (byte)local_10,0xd);
          local_14 = 0;
          local_c = (uint)(message->arg0).words.low;
          local_18 = *(uint *)&this_00->field_01B3->field_0xc;
          local_1c = (int *)local_c;
joined_r0x0051eec7:
          local_1c = (int *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar9 = this_00->field_01B3->field_0008 * (int)local_1c +
                      this_00->field_01B3->field_001C;
            }
            else {
              iVar9 = 0;
            }
            if ((iVar9 == 0) || (bVar22 = STField<byte>(iVar9,0x11), bVar22 == 0)) goto LAB_0051ef61;
            uVar18 = local_c;
            if (bVar22 < STField<byte>(local_8_mg0,0x11)) {
              do {
                uVar18 = uVar18 - 1;
                if ((int)uVar18 < 1) goto joined_r0x0051eec7;
                if (uVar18 < local_18) {
                  iVar9 = this_00->field_01B3->field_0008 * uVar18 + this_00->field_01B3->field_001C
                  ;
                }
                else {
                  iVar9 = 0;
                }
                if ((iVar9 == 0) || (STField<byte>(iVar9,0x11) == 0)) goto joined_r0x0051eec7;
              } while (STField<byte>(iVar9,0x11) != bVar22);
              if (STField<char>(iVar9,0x13) == '\0') {
                local_14 = local_14 | 1 << (bVar22 & 0x1f);
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar22 = 0;
          iVar9 = 0;
          do {
            if ((local_14 & 1 << (bVar22 & 0x1f)) != 0) {
              FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar9,0,iVar9,
                           (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008,
                           (byte)local_10,0xd);
            }
            iVar9 = iVar9 + 0x14;
            bVar22 = bVar22 + 1;
          } while (iVar9 < 0x280);
        }
        FUN_006b5440((ushort *)this_00->field_0068,0,0x21,(message->arg1).words.high + 0x16,
                     (tagBITMAPINFO *)this_00->field_01EC,0,0xff);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8162:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pHVar19 = (HelpPanelTy_field_01BBDArray *)this_00->field_01B3;
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pHVar19 = this_00->field_01BB;
      }
      uVar18 = (message->arg0).u32;
      if (uVar18 < pHVar19->count) {
        if (HVar2 == 0) {
          local_1c = (int *)(this_00->field_01B3->field_0008 * uVar18 +
                            this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_1c = (int *)((int)&this_00->field_01BB->data->resourceId +
                            this_00->field_01BB->elementSize * uVar18);
        }
      }
      else {
        local_1c = nullptr;
      }
      if (local_1c == nullptr) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar24 = false;
      uVar18 = STField<uint>(local_1c,0xd);
      pvVar6 = STField<void *>(local_1c,9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        /* ST_CALLSITE[0051EABA]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
        RCProc(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x02':
        /* ST_CALLSITE[0051EAEC]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
        ObjProc(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x03':
        /* ST_CALLSITE[0051EADF]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
        SubProc(this_00,(int)pvVar6,'\0');
        break;
      case '\x04':
        /* ST_CALLSITE[0051EAF9]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
        ArmProc(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x05':
        /* ST_CALLSITE[0051EAD3]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
        TechProc(this_00,(uint)pvVar6,(byte)uVar18,'\0');
        break;
      case '\x06':
        /* ST_CALLSITE[0051EAC6]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
        TTreeProc(this_00,(uint)pvVar6,'\0');
        break;
      case '\a':
        /* ST_CALLSITE[0051EAAD]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
        MObjProc(this_00);
        break;
      case '\b':
        /* ST_CALLSITE[0051EB1F]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
        TipProc(this_00,pvVar6,uVar18,'\0');
        break;
      case '\n':
        /* ST_CALLSITE[0051EAA4]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
        IndexBut(this_00);
        break;
      case '\v':
        /* ST_CALLSITE[0051EB06]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
        SpecProc(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\f':
        /* ST_CALLSITE[0051EB12]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
        NatProc(this_00,(int)pvVar6,'\0');
      }
      bVar24 = true;
switchD_0051ea9b_caseD_0:
      if (bVar24) {
        /* ST_CALLSITE[0051EB2F]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      /* ST_CALLSITE[0051EB55]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
      ChangeTree(this_00,local_1c,(message->arg0).i32);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SIDTY_8163:
      if (this_00->field_01A1 != CASE_A) {
        this_00->field_01B7 = (uint)message->arg0;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01BF = message->arg0;
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8164:
      pcVar26 = thunk_FUN_00529fe0;
      pCVar17 = thunk_FUN_00571240("BUT_SLUP",0);
      bVar22 = 6;
      break;
    case MESS_OPTPANELTY_8165:
      pcVar26 = thunk_FUN_00529fe0;
      pCVar17 = thunk_FUN_00571240("BUT_SLDN",0);
      bVar22 = 6;
      break;
    case MESS_SHARED_8166:
      pBVar13 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,0);
      /* ST_CALLSITE[0051EBC2]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x1c3,0x2d,'\x06',(byte *)pBVar13);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pBVar13 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,
                             (*(int *)((message->arg2).u32 + 0x1c) != 1) + 1);
      /* ST_CALLSITE[0051EBF7]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x1c3,
             (message->arg0).words.high + 0x2d,'\x06',(byte *)pBVar13);
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    }
  }
  else {
    switch(SVar3) {
    case MESS_SHARED_C09F:
      /* ST_CALLSITE[0051F06C]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
      HomeBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BEHPANELTY_C0A0:
      /* ST_CALLSITE[0051F087]: CALL 0x00402e2d; direct=00402E2D HelpPanelTy::BackBut */
      BackBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FSGSTY_C0A1:
      /* ST_CALLSITE[0051F0A2]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
      IndexBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A2:
      /* ST_CALLSITE[0051F0BD]: CALL 0x00403b43; direct=00403B43 HelpPanelTy::PrevBut */
      PrevBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A3:
      /* ST_CALLSITE[0051F0D8]: CALL 0x00401a1e; direct=00401A1E HelpPanelTy::NextBut */
      NextBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BLDLABPANELTY_C0A4:
      /* ST_CALLSITE[0051F0F3]: CALL 0x00405c31; direct=00405C31 HelpPanelTy::BwdBut */
      BwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FRMPANELTY_C0A5:
      /* ST_CALLSITE[0051F10E]: CALL 0x004039cc; direct=004039CC HelpPanelTy::FwdBut */
      FwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    case MESS_INTERCOMPANELTY_C0AF:
      pcVar25 = "BUT_HLPHOME";
      break;
    case 0xc0b0:
      pcVar25 = "BUT_HLPBACK";
      break;
    case MESS_BEHPANELTY_C0B1:
      pcVar25 = "BUT_HLPINDEX";
      break;
    case 0xc0b2:
      pcVar25 = "BUT_HLPPREV";
      break;
    case MESS_BLDLABPANELTY_C0B3:
      pcVar25 = "BUT_HLPNEXT";
      break;
    case MESS_RESEARCHPANELTY_C0B4:
      pcVar25 = "BUT_HLPBWD";
      break;
    case MESS_SHARED_C0B5:
      pcVar25 = "BUT_HLPFWD";
    }
    pcVar26 = thunk_FUN_00529f90;
    pCVar17 = thunk_FUN_00571240(pcVar25,0);
    bVar22 = 1;
  }
  /* ST_CALLSITE[0051F195]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
  UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar22,pCVar17,
                     pcVar26);
cf_common_exit_0051F19A:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (this_00->field_01A3 == (void *)0x1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (this_00->field_01A3 == (void *)0x2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar21 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (int *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_30 = *(int *)((int)local_10 + (uint)uVar21 * 0xd + 5) + 0x21 + this_00->field_003C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_2c = (*(int *)((int)local_10 + (uint)uVar21 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8_mg0 < local_2c || (local_2c + 0xe <= (int)local_8_mg0)))) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if ((bVar24) && ((int)local_8_mg0 < this_00->field_0044 + 300)) break;
    uVar21 = uVar21 + 1;
    if ((ushort)local_18 <= uVar21) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  /* ST_CALLSITE[0051E5EF]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
  TechProc(this_00,*(uint *)((int)local_10 + (uint)uVar21 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar21 * 0xd + 4),'\0');
  /* ST_CALLSITE[0051E5F6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
  PutToSHlp(this_00);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  STPiece<0,2>(UVar27) = this_00->field_0178;
  STPiece<2,2>(UVar27) = this_00->field_017A;
  if ((undefined4 *)UVar27 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (UVar27 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    *(undefined2 *)&this_00->field_0x2e = 2;
    this_00->field_0030 = (undefined2)UVar27;
    this_00->field_0032 = STPiece<2,2>(UVar27);
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_CALLSITE[0051E1F4]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
      g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
    }
  }
  *(undefined4 **)&this_00->field_0178 = local_10;
  if (local_10 == nullptr) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  this_00->field_0028 = 0x4201;
  *(undefined2 *)&this_00->field_0x2c = 0;
  *(undefined2 *)&this_00->field_0x2e = 2;
  *(undefined4 **)&this_00->field_0030 = local_10;
  /* ST_CALLSITE[0051E227]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
  g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

