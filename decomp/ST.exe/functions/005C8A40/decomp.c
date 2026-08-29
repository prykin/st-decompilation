#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040327E|005C8A40; family_names=SettMapTy::GetMessage; ret4=2;
   direct_offsets={10:14,14:29,18:15,1c:13}

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_1E26State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_2179 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_2179State. Cases:
   CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall SettMapTy::GetMessage(SettMapTy *this,STMessage *message)

{
  SettMapTy_field_1E26State SVar1;
  word wVar2;
  STMessageId SVar3;
  DArrayTy *pDVar4;
  ccFntTy *pcVar5;
  MMMObjTy *pMVar6;
  int *piVar7;
  SettMapTy *this_00;
  byte bVar9;
  DWORD DVar11;
  int local_EAX_61;
  void *pvVar11;
  DArrayTy *local_EAX_1567;
  char *local_EAX_2657;
  char *local_EAX_2734;
  char *local_EAX_2811;
  char *pcVar16;
  char *pcVar11_mg0;
  char *pcVar11_mg1;
  char *pcVar11_mg2;
  char *local_EAX_4384;
  char *local_EAX_4461;
  char *local_EAX_4558;
  char *local_EAX_5425;
  char *local_EAX_6017;
  char *local_EAX_6094;
  char *local_EAX_6171;
  char *local_EAX_6372;
  char *local_EAX_6449;
  char *local_EAX_6526;
  char *local_EAX_6727;
  char *local_EAX_6804;
  char *local_EAX_6881;
  DWORD DVar12;
  char *local_EAX_7168;
  char *pcVar17_mg15;
  char *local_EAX_7946;
  char cVar10;
  char *local_EAX_8538;
  char *local_EAX_8607;
  char *local_EAX_8763;
  char *local_EAX_8808;
  BITMAPINFO *pBVar13;
  int iVar14;
  int iVar12;
  int iVar17;
  int iVar15;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  MMsgTy *this_01;
  DArrayTy *local_ECX_8181;
  char *pcVar21;
  RecoveredSourceFamily_dibcopy *pRVar22;
  UINT resourceId;
  uint uVar23;
  InternalExceptionFrame local_dc;
  CHAR local_98 [52];
  uint local_64;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  byte local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  byte local_3c;
  SettMapTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  dword local_28;
  dword local_24;
  UINT local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  DArrayTy *pDVar21;
  uint SVar4;
  DArrayTy *temp_3f8badc5d2;
  DArrayTy *temp_3fb09b0dd7;
  DArrayTy *temp_3f9b3ed2a5;
  DArrayTy *pDVar12;

  local_38 = this;

  DVar11 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;

  local_EAX_61 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
  this_00 = local_38;
  if (local_EAX_61 != 0) {
    g_currentExceptionFrame = local_dc.previous;

    iVar17 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x758,0,local_EAX_61,
                                "%s","SettMapTy::GetMessage");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_61,0,"E:\\__titans\\Start\\sett_obj.cpp",0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_38,message);
  SVar3 = message->id;
  if (SVar3 < MESS_SETTMAPMTY_6549) {
    if (SVar3 == MESS_SETTMAPTY_6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        uVar18 = this_00->field_2125[9];
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_common_join_005CA971;
    }
    if (SVar3 < MESS_WAITTY_6333) {
      if (SVar3 == MESS_SHARED_6332) {
        /* ST_CALLSITE[005C8C65]: CALL 0x00404d72; direct=00404D72 StartSystemTy::PaintBinDesc */
        StartSystemTy::PaintBinDesc
                  (g_startSystem_0081176C,(RecoveredRecordView_005DE050_1F13B900 *)message);
      }
      else if (SVar3 < 0x610b) {
        if (SVar3 == MESS_SHARED_610A) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = 6;

          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else if (SVar3 < 6) {
          if (SVar3 == MESS_SHARED_0005) {
            /* ST_CALLSITE[005C8B27]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
            PaintSettMap(this_00,'\0');
          }
          else if (SVar3 == MESS_ID_NONE) {
            /* ST_CALLSITE[005C8B1C]: CALL dword ptr [EAX + 0xc] */
            this_00->NoneSettMap();
          }
          else if (SVar3 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->field_1E27 = *(uint *)((message->arg0).u32 + 0x18);
            /* ST_CALLSITE[005C8B10]: CALL dword ptr [EAX + 0x10] */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->sub_005C29B0(*(undefined1 *)((message->arg0).u32 + 0x14));
          }
          else if (SVar3 == MESS_SHARED_0003) {
            /* ST_CALLSITE[005C8AF1]: CALL dword ptr [EAX + 0x14] */
            this_00->DoneSettMap();
          }
        }
        else if (SVar3 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;

          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else if (SVar3 == MESS_SHARED_6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(SVar3) {
        case MESS_SHARED_611F:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;

          thunk_FUN_005b66e0((MTaskTy *)this_00);
          break;
        case MESS_SHARED_6200:
          this_00->field_1F88 = message->arg0;
          /* ST_CALLSITE[005C8BE4]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        case MESS_PLAYPANELTY_6201:
          /* ST_CALLSITE[005C8BF8]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1c6b
                     ,(RecoveredRecord_005B6560_90DC7408 *)message,0);
          break;
        case MESS_PLAYPANELTY_6202:
          /* ST_CALLSITE[005C8C0E]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1cfc
                     ,(RecoveredRecord_005B6560_90DC7408 *)message,0);
          break;
        case MESS_SETTMAPTY_6203:
          uVar18 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1DAD = uVar18;
          if (this_00->field_1D91 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar18);
          }
        }
      }
      goto cf_common_join_005CA971;
    }
    if (SVar3 < MESS_SHARED_6504) {
      if (SVar3 == MESS_SETTMAPTY_6503) {
        pDVar4 = this_00->field_1E2F;
        uVar18 = (uint)(message->arg0).words.low;
        if (uVar18 < pDVar4->count) {
          pvVar11 = DArrayAt<void>(pDVar4, uVar18);
        }
        else {
          pvVar11 = nullptr;
        }
        cVar10 = STField<char>(pvVar11,0x104);
        local_c = (DArrayTy *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(cVar10));
        if (cVar10 != -1) {
          switch(cVar10) {
          case '\0':
            bVar9 = 0xfc;
            break;
          case '\x01':
            bVar9 = 0xfa;
            break;
          case '\x02':
            bVar9 = 0xfb;
            break;
          case '\x03':
            bVar9 = 0xf9;
            break;
          case '\x04':
            bVar9 = 0xfd;
            break;
          case '\x05':
            bVar9 = 0xfe;
            break;
          case '\x06':
            bVar9 = 0xf3;
            break;
          case '\a':
            bVar9 = 7;
            break;
          default:
            bVar9 = 0xff;
          }
          pRVar22 = (message->arg1).ptr;
          FUN_006b4170(pRVar22,0,2,2,pRVar22->field_0004 + -4,pRVar22->field_0008 + -4,bVar9);
        }
        if ((message->arg0).words.high == 1) {
          pRVar22 = (message->arg1).ptr;
          FUN_006b5ee0(pRVar22,0,0,0,pRVar22->field_0004,pRVar22->field_0008,0xf,0xd);
        }
      }
      else if (SVar3 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
        if (SVar3 == MESS_WAITTY_6335) {
          g_startSystem_0081176C->field_04CF =
               *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {

            Library::DKW::DDX::FUN_006b3730
                      ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3
                       ,g_startSystem_0081176C->field_04B7,g_startSystem_0081176C->field_04CB,
                       g_startSystem_0081176C->field_04CF);
          }
        }
        else if (SVar3 == MESS_WAITTY_6333) {
          /* ST_CALLSITE[005C8CC8]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                     (RecoveredRecord_005B6560_90DC7408 *)message,0);
        }
        else if (SVar3 == MESS_SHARED_6334) {
          /* ST_CALLSITE[005C8CAD]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                     (RecoveredRecord_005B6560_90DC7408 *)message,0);
        }
      }
      else if (SVar3 == MESS_SHARED_64FF) {
        switch((message->arg1).u32) {
        case 0:
          uVar18 = (message->arg0).u32;
          if (uVar18 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar18;
            if ((uVar18 & 0xff) == 0) {
              if (3 < this_00->field_1F5C) {
                uVar18 = this_00->field_1F60[1];
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);

                FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
              }
            }
            else if (((uVar18 & 0xff) == 1) && (5 < this_00->field_1F5C)) {
              uVar18 = this_00->field_1F60[1];
              this_00->field_1F5C = 4;
              this_00->field_002D = 5;
              FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);

              FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
            }
cf_common_join_005C8ECC:
            this_00->field_1F47 = 0;
          }
          break;
        case 1:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5C = (char)(message->arg0).u32 + 2;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F58 = (message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5F = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5D = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if ((message->arg0).u32 != 0xffffffff) {
            this_00->field_1F5E = (char)(message->arg0).u32;
            goto cf_common_join_005C8ECC;
          }
        }
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,this_00->field_1F60[(message->arg1).u32],
                     (undefined4 *)&this_00->field_0x1d);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
      }
      else if (SVar3 == MESS_SETTMAPTY_6500) {

        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(message->arg1).i32,0,0,0,0,0);
        pDVar4 = this_00->field_1E2F;
        uVar18 = (uint)(message->arg0).words.low;
        if (uVar18 < pDVar4->count) {
          pcVar17 = DArrayAt<char>(pDVar4, uVar18);
        }
        else {
          pcVar17 = nullptr;
        }

        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar17,-1,-1,
                       3 - ((message->arg0).words.high != 1));
        if ((message->arg0).words.high == 1) {
          pRVar22 = (message->arg1).ptr;
          FUN_006b5ee0(pRVar22,0,0,0,pRVar22->field_0004,pRVar22->field_0008,0xf,0xd);
        }
      }
      goto cf_common_join_005CA971;
    }
    switch(SVar3) {
    case MESS_FSGSTY_6506:
      pDVar4 = this_00->field_1E2F;
      uVar18 = (message->arg0).u32;
      if (uVar18 < pDVar4->count) {
        switch((message->arg1).u32) {
        case 0:
          SVar1 = this_00->field_1E26;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
             (temp_3fb09b0dd7 = PTR_0080c502, SVar1 == CASE_2)) {
            temp_3fb09b0dd7 = (DArrayTy *)PTR_0080c506;
          }
          if (uVar18 < temp_3fb09b0dd7->count) {
            if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
               (temp_3f8badc5d2 = PTR_0080c502, SVar1 == CASE_2)) {
              temp_3f8badc5d2 = (DArrayTy *)PTR_0080c506;
            }
            if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
               (local_EAX_1567 = PTR_0080c502, SVar1 == CASE_2)) {
              local_EAX_1567 = (DArrayTy *)PTR_0080c506;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar11 = (void *)(local_EAX_1567->elementSize * uVar18 + (int)temp_3f8badc5d2->data);
          }
          else {
            pvVar11 = nullptr;
          }
          if (pvVar11 == nullptr) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
            /* ST_CALLSITE[005C9100]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
            StartSystemTy::SetObjectives
                      (g_startSystem_0081176C,(int)this_00->field_1F43,nullptr,
                       this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar18;
            DAT_0080995c = STField<undefined4>(pvVar11,0x90);
            uVar18 = 0xffffffff;
            pcVar17 = (char *)((int)pvVar11 + 0x4c);
            do {
              pcVar21 = pcVar17;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1;
              pcVar21 = pcVar17 + 1;
              cVar10 = *pcVar17;
              pcVar17 = pcVar21;
            } while (cVar10 != '\0');
            uVar18 = ~uVar18;
            pcVar17 = pcVar21 + -uVar18;
            pcVar21 = &DAT_00809960;
            memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
            uVar19 = 0;
            uVar18 = 0;
            /* ST_CALLSITE[005C90BE]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
            StartSystemTy::SetObjectives
                      (g_startSystem_0081176C,(int)this_00->field_1F43,(char *)((int)pvVar11 + 0x70)
                       ,this_00->field_1C63);
          }
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2125[0],(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
            FUN_006b6160(&this_00->array_00BC[0xc].field_0x1df,(int)(g_int_00811764 + 6));
            this_00->field_1A7F = 1;
            this_00->field_1A80 = DAT_008087c6;
            this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
            /* ST_CALLSITE[005C9177]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)&local_64,"%08x",DAT_0080995c);
            this_00->field_1A82 = local_64;
            this_00->field_1A86 = local_60;
            Library::MSVCRT::_strncpy(&this_00->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
            this_00->field_1C5E = 0;
          }
          /* ST_CALLSITE[005C91B2]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 3:
          STPiece<0,2>(DAT_00808a90) =
               CONCAT11(*(undefined1 *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                        (char)DAT_00808a90);
          uVar18 = this_00->field_2125[3];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 4:
          DAT_00808a90 = STReplaceLowByte((uint32_t)(DAT_00808a90), (uint8_t)(*(undefined1 *) (pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data)));
          uVar18 = this_00->field_2125[4];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          STPiece<0,3>(DAT_00808a90) =
               CONCAT12(*(undefined1 *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                        (undefined2)DAT_00808a90);
          uVar18 = this_00->field_2125[5];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          bVar9 = STPiece<2,1>(DAT_00808a90);
          if (STPiece<3,1>(DAT_00808a90) < STPiece<2,1>(DAT_00808a90)) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90 = CONCAT13(bVar9,(undefined3)DAT_00808a90);
            uVar18 = this_00->field_2125[6];
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data),
                                  (undefined3)DAT_00808a90);
          uVar18 = this_00->field_2125[6];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          if (STPiece<3,1>(DAT_00808a90) < STPiece<2,1>(DAT_00808a90)) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STPiece<0,3>(DAT_00808a90) = CONCAT12(STPiece<3,1>(DAT_00808a90),(undefined2)DAT_00808a90);
            uVar18 = this_00->field_2125[5];
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 7:
          DAT_00808a97 = *(int *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data);
          uVar18 = this_00->field_2125[7];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 8:
          DAT_00808a9b = *(byte *)(pDVar4->elementSize * uVar18 + 0x104 + (int)pDVar4->data);
          uVar18 = this_00->field_2125[8];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        SVar1 = this_00->field_1E26;
        if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar1 == CASE_2)) {
          pDVar21 = (DArrayTy *)PTR_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = nullptr;
        this_00->field_1E2F->count = 0;
        local_c = pDVar21;
        if (pDVar21->count != 0) {
          do {
            pcVar17 = DArrayAt<char>(pDVar21, (int)local_8);
            if (pcVar17 != nullptr) {
              this_00->field_1F37 = local_8;
              uVar18 = 0xffffffff;
              do {
                pcVar21 = pcVar17;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1;
                pcVar21 = pcVar17 + 1;
                cVar10 = *pcVar17;
                pcVar17 = pcVar21;
              } while (cVar10 != '\0');
              uVar18 = ~uVar18;
              pcVar17 = pcVar21 + -uVar18;
              pcVar21 = &this_00->field_1E33;
              memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
              uVar19 = 0;

              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
              pDVar21 = local_c;
            }
            local_8 = (DArrayTy *)((int)&local_8->flags + 1);
          } while (local_8 < (DArrayTy *)pDVar21->count);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = this_00->field_1C5F;
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x154;
        this_00->field_21C9 = 0x14e;
        goto LAB_005c9fef;
      }
      break;
    case 0x6542:
    case 0x6543:
    case 0x6544:
    case 0x6545:
      if (this_00->field_0065 != '\x01') break;
      this_00->field_2171 = 0x6506;
      this_00->field_2179 = message->id - 0x653f;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_2657 = LoadResourceString(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2657;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2657 + 1;
        cVar10 = *local_EAX_2657;
        local_EAX_2657 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_2734 = LoadResourceString(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2734;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2734 + 1;
        cVar10 = *local_EAX_2734;
        local_EAX_2734 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_2811 = LoadResourceString(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_2811;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_2811 + 1;
        cVar10 = *local_EAX_2811;
        local_EAX_2811 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      switch(this_00->field_2179) {
      case CASE_3:
        bVar9 = STPiece<1,1>(DAT_00808a90);
        goto LAB_005c95d4;
      case CASE_4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case CASE_5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      case CASE_6:
        bVar9 = STPiece<3,1>(DAT_00808a90);
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar9;
      }
      switch(this_00->field_2179) {
      case CASE_3:
      case CASE_5:
        this_00->field_21C5 = 0x1c5;
        break;
      case CASE_4:
      case CASE_6:
        this_00->field_21C5 = 0x2bf;
      }
      this_00->field_21CD = 0x5a;
      switch(this_00->field_2179) {
      case CASE_3:
      case CASE_4:
        this_00->field_21C9 = 0x164;
        break;
      case CASE_5:
      case CASE_6:
        this_00->field_21C9 = 0x17a;
      }
      pcVar5 = g_startSystem_0081176C->field_0034;
      iVar15 = pcVar5->field_00A0;
joined_r0x005c964b:
      if (iVar15 != 0) {
        FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005C9679]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x2161,0);
      break;
    case 0x6546:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 7;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        pcVar17 = &this_00->field_1E33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 100;
        /* ST_CALLSITE[005C96DB]: CALL EDI */
        wsprintfA(pcVar17,"%d",100);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 0x96;
        /* ST_CALLSITE[005C9702]: CALL EDI */
        wsprintfA(pcVar17,"%d",0x96);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 200;
        /* ST_CALLSITE[005C9729]: CALL EDI */
        wsprintfA(pcVar17,"%d",200);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 0xffffffff;
        pcVar16 = LoadResourceString(0x1f55,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = pcVar16;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = pcVar16 + 1;
          cVar10 = *pcVar16;
          pcVar16 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        this_00->field_21A9 = this_00->field_1E2F->count;
        if (DAT_00808a97 == 0x96) {
          this_00->field_21A1 = 1;
        }
        else if (DAT_00808a97 == 200) {
          this_00->field_21A1 = 2;
        }
        else if (DAT_00808a97 == -1) {
          this_00->field_21A1 = 3;
        }
        this_00->field_21C5 = 0x1c5;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar5 = g_startSystem_0081176C->field_0034;
        if (pcVar5->field_00A0 != 0) {
          FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar5);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
        /* ST_CALLSITE[005C982D]: CALL dword ptr [EDX + 0x8] */
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                   &this_00->field_0x2161,0);
      }
      break;
    case MESS_SETTMAPTY_6547:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 8;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        uVar23 = 1;
        pcVar17 = &this_00->field_1E33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0;
        pcVar11_mg0 = LoadResourceString(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C9897]: CALL dword ptr [0x0085bde8] */
        wsprintfA(pcVar17,"%s %d",pcVar11_mg0,uVar23);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 1;
        uVar23 = 2;
        pcVar11_mg1 = LoadResourceString(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C98D1]: CALL dword ptr [0x0085bde8] */
        wsprintfA(pcVar17,"%s %d",pcVar11_mg1,uVar23);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_1F37 = 2;
        uVar23 = 3;
        pcVar11_mg2 = LoadResourceString(0x1f57,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005C990A]: CALL dword ptr [0x0085bde8] */
        wsprintfA(pcVar17,"%s %d",pcVar11_mg2,uVar23);

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,pcVar17);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar5 = g_startSystem_0081176C->field_0034;
        iVar15 = pcVar5->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_common_join_005CA971;
  }
  if (SVar3 < MESS_SHARED_6900) {
    if (SVar3 == MESS_MMSGTY_68FF) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = message->id - 0x68ff;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        local_EAX_4384 = LoadResourceString(0x234b,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = local_EAX_4384;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = local_EAX_4384 + 1;
          cVar10 = *local_EAX_4384;
          local_EAX_4384 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;
        this_00->field_1F37 = 0;

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        local_EAX_4461 = LoadResourceString(0x234c,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar17 = local_EAX_4461;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar17 = local_EAX_4461 + 1;
          cVar10 = *local_EAX_4461;
          local_EAX_4461 = pcVar17;
        } while (cVar10 != '\0');
        uVar18 = ~uVar18;
        pcVar17 = pcVar17 + -uVar18;
        pcVar21 = &this_00->field_1E33;
        memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
        uVar19 = 0;
        this_00->field_1F37 = 1;

        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          local_EAX_4558 = LoadResourceString(0x234d,g_hINSTANCE_00807618);
          uVar18 = 0xffffffff;
          do {
            pcVar17 = local_EAX_4558;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar17 = local_EAX_4558 + 1;
            cVar10 = *local_EAX_4558;
            local_EAX_4558 = pcVar17;
          } while (cVar10 != '\0');
          uVar18 = ~uVar18;
          pcVar17 = pcVar17 + -uVar18;
          pcVar21 = &this_00->field_1E33;
          memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
          uVar19 = 0;
          this_00->field_1F37 = 2;

          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
        }
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)(byte)this_00->field_1F57;
        this_00->field_21C5 = 0x1a;
        this_00->field_21CD = 0xe0;
        this_00->field_21C9 = 0xba;
        goto LAB_005c9c8a;
      }
    }
    else {
      switch(SVar3) {
      case MESS_SETTMAPMTY_6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          uVar18 = this_00->field_2125[10];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
          /* ST_CALLSITE[005C9A3B]: CALL dword ptr [EDX + 0x2c] */
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        }
        break;
      case MESS_SETTMAPMTY_654A:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          uVar18 = this_00->field_2125[0xb];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654B:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          uVar18 = this_00->field_2125[0xc];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654C:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          uVar18 = this_00->field_2125[0xd];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPTY_654D:
        if (this_00->field_0065 == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          /* ST_CALLSITE[005C9B0E]: CALL 0x00402a9a; direct=00402A9A SettMapTy::PaintSC */
          PaintSC(this_00);
        }
      }
    }
    goto cf_common_join_005CA971;
  }
  switch(SVar3) {
  case MESS_SHARED_6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - 0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = (DArrayTy *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00->field_1F57 == '\0') {
          local_8 = (DArrayTy *)0x2;
        }
        else if (this_00->field_1F57 == '\x01') {
          local_8 = (DArrayTy *)0x4;
        }
        else {
          local_8 = (DArrayTy *)0x7;
        }
      }
      this_00->field_1E2F->count = 0;
      if (local_8 != nullptr) {
        iVar15 = 2;
        do {
          local_EAX_5425 = LoadResourceString(0x2354,g_hINSTANCE_00807618);
          /* ST_CALLSITE[005C9F84]: CALL dword ptr [0x0085bde8] */
          wsprintfA(&this_00->field_1E33,"%d %s",iVar15,local_EAX_5425);
          this_00->field_1F37 = iVar15;

          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
          iVar14 = iVar15 + -1;
          iVar15 = iVar15 + 1;
        } while (iVar14 < (int)local_8);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = this_00->field_1F5C - 2;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar5 = g_startSystem_0081176C->field_0034;
      iVar15 = pcVar5->field_00A0;
joined_r0x005c996c:
      if (iVar15 != 0) {
        FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005C999A]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x2161,0);
    }
    break;
  case MESS_FSGSTY_6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (DArrayTy *)0x1;
      }
      else {
        local_c = (DArrayTy *)this_00->field_1F7C->count;
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - 0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = nullptr;
      this_00->field_1E2F->count = 0;
      if (local_c != nullptr) {
        do {
          pDVar4 = this_00->field_1F7C;
          if (local_8 < (DArrayTy *)pDVar4->count) {
            pvVar11 = DArrayAt<void>(pDVar4, (int)local_8);
          }
          else {
            pvVar11 = nullptr;
          }
          uVar18 = 0xffffffff;
          pcVar17 = (char *)((int)pvVar11 + 0x104);
          do {
            pcVar21 = pcVar17;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar17 + 1;
            cVar10 = *pcVar17;
            pcVar17 = pcVar21;
          } while (cVar10 != '\0');
          uVar18 = ~uVar18;
          pcVar17 = pcVar21 + -uVar18;
          pcVar21 = &this_00->field_1E33;
          memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
          uVar19 = 0;
          this_00->field_1F37 = local_8;

          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
          local_8 = (DArrayTy *)((int)&local_8->flags + 1);
        } while (local_8 < local_c);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = this_00->field_1F58;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x10a;
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        this_00->field_21C9 = 0x118;
      }
      pcVar5 = g_startSystem_0081176C->field_0034;
      if (pcVar5->field_00A0 != 0) {
        FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar5);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar5->field_0x8a;
      /* ST_CALLSITE[005CA171]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                 &this_00->field_0x2161,0);
    }
    break;
  case MESS_MAINMENUTY_6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = message->id - 0x68ff;
    this_00->field_2191 = 0x6500;
    this_00->field_1E2F->count = 0;
    local_EAX_6017 = LoadResourceString(0x2355,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6017;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6017 + 1;
      cVar10 = *local_EAX_6017;
      local_EAX_6017 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 0;

    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
    local_EAX_6094 = LoadResourceString(0x234c,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6094;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6094 + 1;
      cVar10 = *local_EAX_6094;
      local_EAX_6094 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 1;

    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
    local_EAX_6171 = LoadResourceString(0x2356,g_hINSTANCE_00807618);
    uVar18 = 0xffffffff;
    do {
      pcVar17 = local_EAX_6171;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = local_EAX_6171 + 1;
      cVar10 = *local_EAX_6171;
      local_EAX_6171 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = &this_00->field_1E33;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
    this_00->field_1F37 = 2;

    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
    this_00->field_21A9 = this_00->field_1E2F->count;
    this_00->field_21A1 = (uint)(byte)this_00->field_1F5F;
    this_00->field_21C5 = 0x1a;
    this_00->field_21CD = 0xe0;
    this_00->field_21C9 = 0x132;
LAB_005c9c8a:
    pcVar5 = g_startSystem_0081176C->field_0034;
    iVar15 = pcVar5->field_00A0;
    goto joined_r0x005c964b;
  case MESS_FSGSTY_6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - 0x68ff;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_6372 = LoadResourceString(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6372;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6372 + 1;
        cVar10 = *local_EAX_6372;
        local_EAX_6372 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6449 = LoadResourceString(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6449;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6449 + 1;
        cVar10 = *local_EAX_6449;
        local_EAX_6449 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6526 = LoadResourceString(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6526;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6526 + 1;
        cVar10 = *local_EAX_6526;
        local_EAX_6526 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5D;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x15a;
      goto LAB_005c9c8a;
    }
    break;
  case MESS_FSGSTY_6904:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - 0x68ff;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      local_EAX_6727 = LoadResourceString(0x234e,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6727;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6727 + 1;
        cVar10 = *local_EAX_6727;
        local_EAX_6727 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 0;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6804 = LoadResourceString(0x234c,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6804;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6804 + 1;
        cVar10 = *local_EAX_6804;
        local_EAX_6804 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 1;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      local_EAX_6881 = LoadResourceString(0x234f,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_6881;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_6881 + 1;
        cVar10 = *local_EAX_6881;
        local_EAX_6881 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = &this_00->field_1E33;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
      uVar19 = 0;
      this_00->field_1F37 = 2;

      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_1E33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = (uint)(byte)this_00->field_1F5E;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0x182;
      goto LAB_005c9c8a;
    }
    break;
  case MESS_FSGSTY_6905:
    if (this_00->field_0065 == '\x01') {
      /* ST_CALLSITE[005CA5AC]: CALL dword ptr [0x0085bedc] */
      DVar12 = timeGetTime();
      this_00->field_1F53 = DVar12;
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0053F510::thunk_FUN_005c7800
                ((RecoveredReceiver_0053F510 *)this_00);
    }
    break;
  case MESS_PRIVIDERTY_693F:
    /* ST_CALLSITE[005C9CD7]: CALL dword ptr [EAX + 0x20] */
    this_00->vfunc_20();
    break;
  case MESS_SHARED_6940:
    /* ST_CALLSITE[005C9CCB]: CALL dword ptr [EDX + 0x24] */
    this_00->vfunc_24();
    break;
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = 0;

    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
    /* ST_CALLSITE[005C9D17]: CALL dword ptr [EAX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
    goto LAB_005c9e75;
  case MESS_MAINMENUTY_6944|MESS_SHARED_0003:
    thunk_FUN_005b6350(this_00,0x611f,this_00->field_1E27,(uint)this_00->field_1E26);
    /* ST_CALLSITE[005C9D6D]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar6 = this_00->array_00BC[0xc].field_01DB;
    if (*(int *)(pMVar6 + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(pMVar6 + 0x2e6),&local_58);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    STPiece<0,1>(DAT_008087a0) = this_00->field_1E26;
    switch(this_00->field_1E26) {
    case CASE_1:
    case CASE_2:
    case CASE_3:
    case CASE_6:
    case CASE_8:
    case CASE_9:
    case CASE_A:
    case CASE_B:
      DAT_00808783 = 2;
      break;
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_D:
    case CASE_E:
    case CASE_F:
    case CASE_10:
    case CASE_11:
    case CASE_12:
    case CASE_13:
    case CASE_14:
    case CASE_15:
      DAT_00808783 = 3;
    }
    this_00->field_0049 = 1;
    this_00->field_004D = 0x60ff;

    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_694D:
    thunk_FUN_005b6350(this_00,0x6105,1,0);
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
    this_00->field_21E7 = 0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00->field_1E26 == CASE_E));
    this_00->field_21E6 = 0;
    this_00->field_21E4 = 0;
    /* ST_CALLSITE[005C9E05]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    pMVar6 = this_00->array_00BC[0xc].field_01DB;
    if (*(int *)(pMVar6 + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(pMVar6 + 0x2e6),&local_48);
    }
    break;
  case MESS_SHARED_6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    this_00->field_21E1 = 1;
    this_00->field_21E2 = 1;
    this_00->field_21E3 = 1;
    this_00->field_21E4 = 1;
    this_00->field_21E5 = 1;
    this_00->field_21E6 = 1;
    this_00->field_21E7 = 1;
LAB_005c9e62:
    /* ST_CALLSITE[005C9E66]: CALL dword ptr [EDX + 0x8] */
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->array_00BC[0xc].field_01DB + 0x2e6);
LAB_005c9e75:
    if (this_01 != nullptr) {
      /* ST_CALLSITE[005C9E83]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    break;
  case MESS_SHARED_697F:
  case MESS_SHARED_6980:
  case MESS_SIDTY_6981:
  case MESS_SHARED_6980|MESS_ID_CREATE:
  case MESS_MAINMENUTY_6983:
  case 0x6984:
    local_8 = (message->arg1).ptr;
    local_c = (DArrayTy *)this_00->field_1E2B->field_0004;
    local_34 = this_00->field_1E2B->field_0008;
    switch(SVar3) {
    case MESS_SHARED_697F:
      if (this_00->field_1F57 == '\0') {
        resourceId = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00->field_1F57 != '\x01') {
        resourceId = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case MESS_SHARED_6980:
      local_EAX_7168 = LoadResourceString(0x2354,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CA65B]: CALL dword ptr [0x0085bde8] */
      wsprintfA(local_98,"%d %s",(uint)this_00->field_1F5C,local_EAX_7168);
      goto LAB_005ca73b;
    case MESS_SIDTY_6981:
      pDVar4 = this_00->field_1F7C;
      if (this_00->field_1F58 < pDVar4->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar17_mg15 = (char *)((int)pDVar4->data +
                               pDVar4->elementSize * this_00->field_1F58 + 0x104);
      }
      else {
        pcVar17_mg15 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case MESS_SHARED_6980|MESS_ID_CREATE:
      if (this_00->field_1F5F == '\0') {
        resourceId = 0x2355;
      }
      else {
        if (this_00->field_1F5F == '\x01') goto LAB_005ca619;
        resourceId = 0x2356;
      }
      goto LAB_005ca70e;
    case MESS_MAINMENUTY_6983:
      cVar10 = this_00->field_1F5D;
      break;
    default:
      cVar10 = this_00->field_1F5E;
    }
    if (cVar10 == '\0') {
      resourceId = 0x234e;
    }
    else if (cVar10 == '\x01') {
LAB_005ca619:
      resourceId = 0x234c;
    }
    else {
      resourceId = 0x234f;
    }
LAB_005ca70e:
    pcVar17_mg15 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
LAB_005ca71b:
    uVar18 = 0xffffffff;
    do {
      pcVar17 = pcVar17_mg15;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar17 = pcVar17_mg15 + 1;
      cVar10 = *pcVar17_mg15;
      pcVar17_mg15 = pcVar17;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar17 + -uVar18;
    pcVar21 = local_98;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;
LAB_005ca73b:
    pDVar4 = local_8;
    local_30 = local_8->flags - 10;
    local_28 = local_8->elementSize;
    local_2c = local_8->iteratorIndex - 0xb4;
    local_24 = local_8->count;
    /* ST_CALLSITE[005CA77E]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    /* ST_CALLSITE[005CA7B6]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,
           (local_28 - (int)local_c) + -8 + local_30,(int)(local_24 - local_34) / 2 + local_2c,
           '\x06',(RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_1E2B);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1C67,0,pDVar4->flags - 10,
                     pDVar4->iteratorIndex - 0xb4,(pDVar4->elementSize - (int)local_c) + -8,
                     pDVar4->count);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,local_98,-1,-1,uVar18);

    FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
    if ((message->arg0).words.low == 3) goto LAB_005ca964;
    break;
  case MESS_SHARED_6980|MESS_SHARED_0005:
    piVar7 = (message->arg1).ptr;
    FUN_006c7610((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -10,
                 piVar7[1] + -0xb4,piVar7[2],piVar7[3],piVar7[3] / 2,0x67);
    FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -8,
                 piVar7[1] + -0xb2,(undefined4 *)(piVar7[2] + -4),piVar7[3] + -4,piVar7[3] / 2 + -2,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);
    FUN_006c7570((RecoveredSourceFamily_dibcopy *)this_00->field_1C67,0,*piVar7 + -10,
                 piVar7[1] + -0xb4,(undefined4 *)piVar7[2],piVar7[3],piVar7[3] / 2,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);

    ccFntTy::SetSurf((ccFntTy *)g_startSystem_0081176C->field_0030,this_00->field_1C67,0,
                     *piVar7 + -10,piVar7[1] - 0xb4,piVar7[2],piVar7[3]);
    uVar18 = ((message->arg0).words.low != 1) + 5;
    iVar14 = -1;
    iVar15 = -1;
    /* ST_CALLSITE[005CA94A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    local_EAX_7946 = LoadResourceString(0x234a,g_hINSTANCE_00807618);

    ccFntTy::WrStr((ccFntTy *)g_startSystem_0081176C->field_0030,local_EAX_7946,iVar15,iVar14,uVar18
                  );
    if ((message->arg0).words.low != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_common_join_005CA971:
  SVar4 = message->id;
  if ((SVar4 < 0x657f) || (0x658c < SVar4)) goto LAB_005cae3e;
  piVar7 = (message->arg1).ptr;
  local_14 = piVar7[2];
  local_10 = piVar7[3];
  local_1c = *piVar7 + -0x112;
  local_18 = piVar7[1] - 0x149;
  /* ST_CALLSITE[005CA9E3]: CALL 0x00404c5f; direct=00404C5F MMObjTy::PaintButDib */
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
  switch(SVar4) {
  case 0x657f:
    SVar1 = this_00->field_1E26;
    if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
       (temp_3f9b3ed2a5 = PTR_0080c502, SVar1 == CASE_2)) {
      temp_3f9b3ed2a5 = (DArrayTy *)PTR_0080c506;
    }
    if (this_00->field_1C5F < temp_3f9b3ed2a5->count) {
      if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) ||
         (local_ECX_8181 = PTR_0080c502, SVar1 == CASE_2)) {
        local_ECX_8181 = (DArrayTy *)PTR_0080c506;
      }
      if (((SVar1 == CASE_6) || (SVar1 == CASE_1)) || (pDVar12 = PTR_0080c502, SVar1 == CASE_2)) {
        pDVar12 = (DArrayTy *)PTR_0080c506;
      }
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pcVar17 = (char *)(pDVar12->elementSize * this_00->field_1C5F + (int)local_ECX_8181->data);
    }
    else {
      pcVar17 = nullptr;
    }
    if (pcVar17 == nullptr) {
      pcVar17 = &CHAR_00h_008016a0;
    }
    uVar18 = 0xffffffff;
    do {
      pcVar21 = pcVar17;
      if (uVar18 == 0) break;
      uVar18 = uVar18 - 1;
      pcVar21 = pcVar17 + 1;
      cVar10 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar10 != '\0');
    uVar18 = ~uVar18;
    pcVar17 = pcVar21 + -uVar18;
    pcVar21 = (char *)&DAT_0080f33a;
    memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    uVar19 = 0;

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(SVar4) {
    case 0x6582:
      cVar10 = STPiece<1,1>(DAT_00808a90);
      if (STPiece<1,1>(DAT_00808a90) == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar10 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar10 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6584:
      cVar10 = STPiece<2,1>(DAT_00808a90);
      if (STPiece<2,1>(DAT_00808a90) != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    case 0x6585:
      cVar10 = STPiece<3,1>(DAT_00808a90);
      if (STPiece<3,1>(DAT_00808a90) != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }
    iVar14 = -1;
    iVar15 = -1;
    /* ST_CALLSITE[005CAB9A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    local_EAX_8538 = LoadResourceString(local_20,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,local_EAX_8538,iVar15,iVar14,uVar18);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      local_EAX_8607 = LoadResourceString(0x1f55,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar17 = local_EAX_8607;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar17 = local_EAX_8607 + 1;
        cVar10 = *local_EAX_8607;
        local_EAX_8607 = pcVar17;
      } while (cVar10 != '\0');
      uVar18 = ~uVar18;
      pcVar17 = pcVar17 + -uVar18;
      pcVar21 = (char *)&DAT_0080f33a;
      memmove(pcVar21, pcVar17, uVar18); /* compiler REP MOVS byte copy */
    }
    else {
      /* ST_CALLSITE[005CABC8]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",DAT_00808a97);
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      local_EAX_8763 = LoadResourceString(0x1f59,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CAC8B]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%s",local_EAX_8763);
    }
    else {
      iVar15 = DAT_00808a9b + 1;
      local_EAX_8808 = LoadResourceString(0x1f57,g_hINSTANCE_00807618);
      /* ST_CALLSITE[005CACB8]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",local_EAX_8808,iVar15);
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar2 = (message->arg0).words.low;
    if (wVar2 == 1) {
      uVar18 = 2;
    }
    else {
      uVar18 = (-(uint)(wVar2 != 0) & 2) + 1;
    }

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)&DAT_0080f33a,-1,-1,uVar18);
    break;
  case 0x6588:
    cVar10 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    /* ST_CALLSITE[005CADDE]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar13 = FUN_0070b3a0(this_00->field_1F4F,0);
    iVar15 = (local_10 + -0x10) / 2 + local_18;
    pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
    iVar14 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pBVar13 = FUN_0070b3a0(this_00->field_1F4F,0);
      iVar15 = (local_10 + -0x10) / 2 + local_18;
      iVar14 = (local_14 + -0x11) / 2 + local_1c;
      pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar10 = DAT_00808aa9;
LAB_005cad88:
    if (cVar10 != '\0') {
      pBVar13 = FUN_0070b3a0(this_00->field_1F4F,0);
      iVar15 = (local_10 + -0x10) / 2 + local_18;
      iVar14 = (local_14 + -0x11) / 2 + local_1c;
      pRVar22 = (RecoveredSourceFamily_dibcopy *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      /* ST_CALLSITE[005CAE0F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(pRVar22,iVar14,iVar15,'\x06',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar13);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }

  FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1E22);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  /* ST_CALLSITE[005CAE4D]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar12 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar12;
}

