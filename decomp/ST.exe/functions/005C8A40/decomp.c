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
  undefined1 *puVar1;
  SettMapTy_field_1E26State SVar2;
  word wVar3;
  STMessageId SVar5;
  ccFntTy *pcVar6;
  int *piVar7;
  code *pcVar8;
  SettMapTy *this_00;
  byte bVar9;
  char cVar10;
  DWORD DVar11;
  int iVar12;
  void *pvVar13;
  DArrayTy *pDVar14;
  char *pcVar15;
  byte *pbVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  MMsgTy *this_01;
  DArrayTy *pDVar21;
  char *pcVar23;
  uint *puVar24;
  AnonShape_006B5B10_E0D06CF1 *pAVar25;
  UINT resourceId;
  undefined4 uVar26;
  InternalExceptionFrame local_dc;
  uint local_98 [13];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
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
  uint SVar4;

  local_38 = this;
  DVar11 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  iVar12 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
  this_00 = local_38;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_dc.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x758,0,iVar12,
                                "%s","SettMapTy::GetMessage");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar12,0,"E:\\__titans\\Start\\sett_obj.cpp",0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_38,message);
  SVar5 = message->id;
  if (SVar5 < MESS_SETTMAPMTY_6549) {
    if (SVar5 == MESS_SETTMAPTY_6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        uVar19 = this_00->field_2125[9];
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_common_join_005CA971;
    }
    if (SVar5 < MESS_WAITTY_6333) {
      if (SVar5 == MESS_SHARED_6332) {
        StartSystemTy::PaintBinDesc(g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
      }
      else if (SVar5 < 0x610b) {
        if (SVar5 == MESS_SHARED_610A) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = 6;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else if (SVar5 < 6) {
          if (SVar5 == MESS_SHARED_0005) {
            PaintSettMap(this_00,'\0');
          }
          else if (SVar5 == MESS_ID_NONE) {
            this_00->NoneSettMap();
          }
          else if (SVar5 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->field_1E27 = *(uint *)((message->arg0).u32 + 0x18);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            this_00->sub_005C29B0(*(undefined1 *)((message->arg0).u32 + 0x14));
          }
          else if (SVar5 == MESS_SHARED_0003) {
            this_00->DoneSettMap();
          }
        }
        else if (SVar5 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((MTaskTy *)this_00);
        }
        else if (SVar5 == MESS_SHARED_6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(SVar5) {
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
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        case MESS_PLAYPANELTY_6201:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1c6b
                     ,(int)message,0);
          break;
        case MESS_PLAYPANELTY_6202:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_0x1cfc
                     ,(int)message,0);
          break;
        case MESS_SETTMAPTY_6203:
          uVar19 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1DAD = uVar19;
          if (this_00->field_1D91 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar19);
          }
        }
      }
      goto cf_common_join_005CA971;
    }
    if (SVar5 < MESS_SHARED_6504) {
      if (SVar5 == MESS_SETTMAPTY_6503) {
        pDVar21 = this_00->field_1E2F;
        uVar19 = (uint)(message->arg0).words.low;
        if (uVar19 < pDVar21->count) {
          pvVar13 = DArrayAt<void>(pDVar21, uVar19);
        }
        else {
          pvVar13 = nullptr;
        }
        cVar10 = *(char *)((int)pvVar13 + 0x104);
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
          pAVar25 = (message->arg1).ptr;
          FUN_006b4170(pAVar25,0,2,2,pAVar25->field_0004 + -4,pAVar25->field_0008 + -4,bVar9);
        }
        if ((message->arg0).words.high == 1) {
          pAVar25 = (message->arg1).ptr;
          FUN_006b5ee0(pAVar25,0,0,0,pAVar25->field_0004,pAVar25->field_0008,0xf,0xd);
        }
      }
      else if (SVar5 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
        if (SVar5 == MESS_WAITTY_6335) {
          g_startSystem_0081176C->field_04CF =
               *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3
                       ,g_startSystem_0081176C->field_04B7,g_startSystem_0081176C->field_04CB,
                       g_startSystem_0081176C->field_04CF);
          }
        }
        else if (SVar5 == MESS_WAITTY_6333) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                     (int)message,0);
        }
        else if (SVar5 == MESS_SHARED_6334) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                     (int)message,0);
        }
      }
      else if (SVar5 == MESS_SHARED_64FF) {
        switch((message->arg1).u32) {
        case 0:
          uVar19 = (message->arg0).u32;
          if (uVar19 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar19;
            if ((uVar19 & 0xff) == 0) {
              if (3 < this_00->field_1F5C) {
                uVar19 = this_00->field_1F60[1];
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
              }
            }
            else if (((uVar19 & 0xff) == 1) && (5 < this_00->field_1F5C)) {
              uVar19 = this_00->field_1F60[1];
              this_00->field_1F5C = 4;
              this_00->field_002D = 5;
              FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
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
      else if (SVar5 == MESS_SETTMAPTY_6500) {
        ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(message->arg1).i32,0,0,0,0,0);
        pDVar21 = this_00->field_1E2F;
        uVar19 = (uint)(message->arg0).words.low;
        if (uVar19 < pDVar21->count) {
          puVar18 = DArrayAt<uint>(pDVar21, uVar19);
        }
        else {
          puVar18 = nullptr;
        }
        ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar18,-1,-1,
                       3 - ((message->arg0).words.high != 1));
        if ((message->arg0).words.high == 1) {
          pAVar25 = (message->arg1).ptr;
          FUN_006b5ee0(pAVar25,0,0,0,pAVar25->field_0004,pAVar25->field_0008,0xf,0xd);
        }
      }
      goto cf_common_join_005CA971;
    }
    switch(SVar5) {
    case MESS_FSGSTY_6506:
      pDVar21 = this_00->field_1E2F;
      uVar19 = (message->arg0).u32;
      if (uVar19 < pDVar21->count) {
        switch((message->arg1).u32) {
        case 0:
          SVar2 = this_00->field_1E26;
          if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar2 == CASE_2))
          {
            pDVar21 = DAT_0080c506;
          }
          if (uVar19 < pDVar21->count) {
            if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) ||
               (pDVar21 = PTR_0080c502, SVar2 == CASE_2)) {
              pDVar21 = DAT_0080c506;
            }
            if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) ||
               (pDVar14 = PTR_0080c502, SVar2 == CASE_2)) {
              pDVar14 = DAT_0080c506;
            }
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar13 = (void *)(pDVar14->elementSize * uVar19 + (int)pDVar21->data);
          }
          else {
            pvVar13 = nullptr;
          }
          if (pvVar13 == nullptr) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
            StartSystemTy::SetObjectives
                      (g_startSystem_0081176C,(int)this_00->field_1F43,nullptr,
                       this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar19;
            DAT_0080995c = *(undefined4 *)((int)pvVar13 + 0x90);
            uVar19 = 0xffffffff;
            pcVar15 = (char *)((int)pvVar13 + 0x4c);
            do {
              pcVar23 = pcVar15;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar23 = pcVar15 + 1;
              cVar10 = *pcVar15;
              pcVar15 = pcVar23;
            } while (cVar10 != '\0');
            uVar19 = ~uVar19;
            pcVar15 = pcVar23 + -uVar19;
            pcVar23 = (char *)&DAT_00809960;
            memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
            uVar20 = 0;
            uVar19 = 0;
            StartSystemTy::SetObjectives
                      (g_startSystem_0081176C,(int)this_00->field_1F43,(char *)((int)pvVar13 + 0x70)
                       ,this_00->field_1C63);
          }
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2125[0],(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
            FUN_006b6160(&this_00->field_0x1a5f,(int)(g_int_00811764 + 6));
            this_00->field_1A7F = 1;
            this_00->field_1A80 = DAT_008087c6;
            this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
            wsprintfA((LPSTR)&local_64,"%08x",DAT_0080995c);
            this_00->field_1A82 = local_64;
            this_00->field_1A86 = local_60;
            Library::MSVCRT::_strncpy(&this_00->field_1A8A,(char *)&DAT_0080c3c3,0x1d5);
            this_00->field_1C5E = 0;
          }
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 3:
          DAT_00808a90._0_2_ =
               CONCAT11(*(undefined1 *)(pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data),
                        (char)DAT_00808a90);
          uVar19 = this_00->field_2125[3];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 4:
          DAT_00808a90 = STReplaceLowByte((uint32_t)(DAT_00808a90), (uint8_t)(*(undefined1 *) (pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data)));
          uVar19 = this_00->field_2125[4];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)(pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data),
                        (undefined2)DAT_00808a90);
          uVar19 = this_00->field_2125[5];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          bVar9 = DAT_00808a90._2_1_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90 = CONCAT13(bVar9,(undefined3)DAT_00808a90);
            uVar19 = this_00->field_2125[6];
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data),
                                  (undefined3)DAT_00808a90);
          uVar19 = this_00->field_2125[6];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90._0_3_ = CONCAT12(DAT_00808a90._3_1_,(undefined2)DAT_00808a90);
            uVar19 = this_00->field_2125[5];
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 7:
          DAT_00808a97 = *(int *)(pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data);
          uVar19 = this_00->field_2125[7];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 8:
          DAT_00808a9b = *(byte *)(pDVar21->elementSize * uVar19 + 0x104 + (int)pDVar21->data);
          uVar19 = this_00->field_2125[8];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        SVar2 = this_00->field_1E26;
        if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar2 == CASE_2)) {
          pDVar21 = DAT_0080c506;
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
            pcVar15 = DArrayAt<char>(pDVar21, (int)local_8);
            if (pcVar15 != nullptr) {
              this_00->field_1F37 = local_8;
              uVar19 = 0xffffffff;
              do {
                pcVar23 = pcVar15;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                pcVar23 = pcVar15 + 1;
                cVar10 = *pcVar15;
                pcVar15 = pcVar23;
              } while (cVar10 != '\0');
              uVar19 = ~uVar19;
              pcVar15 = pcVar23 + -uVar19;
              pcVar23 = &this_00->field_0x1e33;
              memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
              uVar20 = 0;
              Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
      pcVar15 = LoadResourceString(0x234e,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 0;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 1;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 2;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      switch(this_00->field_2179) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case CASE_3:
        bVar9 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case CASE_4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case CASE_5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case CASE_6:
        bVar9 = DAT_00808a90._3_1_;
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
      pcVar6 = g_startSystem_0081176C->field_0034;
      iVar12 = pcVar6->field_00A0;
joined_r0x005c964b:
      if (iVar12 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
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
        puVar1 = &this_00->field_0x1e33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 100;
        wsprintfA(puVar1,"%d",100);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_1F37 = 0x96;
        wsprintfA(puVar1,"%d",0x96);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_1F37 = 200;
        wsprintfA(puVar1,"%d",200);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_1F37 = 0xffffffff;
        pcVar15 = LoadResourceString(0x1f55,g_module_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar15;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar23;
        } while (cVar10 != '\0');
        uVar19 = ~uVar19;
        pcVar15 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
        pcVar6 = g_startSystem_0081176C->field_0034;
        if (pcVar6->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
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
        uVar26 = 1;
        puVar1 = &this_00->field_0x1e33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0;
        pcVar15 = LoadResourceString(0x1f57,g_module_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar26);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_1F37 = 1;
        uVar26 = 2;
        pcVar15 = LoadResourceString(0x1f57,g_module_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar26);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_1F37 = 2;
        uVar26 = 3;
        pcVar15 = LoadResourceString(0x1f57,g_module_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar26);
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,puVar1);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar6 = g_startSystem_0081176C->field_0034;
        iVar12 = pcVar6->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_common_join_005CA971;
  }
  if (SVar5 < MESS_SHARED_6900) {
    if (SVar5 == MESS_MMSGTY_68FF) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = message->id - 0x68ff;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        pcVar15 = LoadResourceString(0x234b,g_module_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar15;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar23;
        } while (cVar10 != '\0');
        uVar19 = ~uVar19;
        pcVar15 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        this_00->field_1F37 = 0;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        pcVar15 = LoadResourceString(0x234c,g_module_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar15;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar23;
        } while (cVar10 != '\0');
        uVar19 = ~uVar19;
        pcVar15 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        this_00->field_1F37 = 1;
        Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar15 = LoadResourceString(0x234d,g_module_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar23 = pcVar15;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar15 + 1;
            cVar10 = *pcVar15;
            pcVar15 = pcVar23;
          } while (cVar10 != '\0');
          uVar19 = ~uVar19;
          pcVar15 = pcVar23 + -uVar19;
          pcVar23 = &this_00->field_0x1e33;
          memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
          uVar20 = 0;
          this_00->field_1F37 = 2;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
      switch(SVar5) {
      case MESS_SETTMAPMTY_6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          uVar19 = this_00->field_2125[10];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
          (*this_00->vtable->SetListCtrls)((SettMapSTy *)this_00);
        }
        break;
      case MESS_SETTMAPMTY_654A:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          uVar19 = this_00->field_2125[0xb];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654B:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          uVar19 = this_00->field_2125[0xc];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654C:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          uVar19 = this_00->field_2125[0xd];
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPTY_654D:
        if (this_00->field_0065 == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          PaintSC(this_00);
        }
      }
    }
    goto cf_common_join_005CA971;
  }
  switch(SVar5) {
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
        iVar12 = 2;
        do {
          pcVar15 = LoadResourceString(0x2354,g_module_00807618);
          wsprintfA(&this_00->field_0x1e33,"%d %s",iVar12,pcVar15);
          this_00->field_1F37 = iVar12;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
          iVar17 = iVar12 + -1;
          iVar12 = iVar12 + 1;
        } while (iVar17 < (int)local_8);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = this_00->field_1F5C - 2;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar6 = g_startSystem_0081176C->field_0034;
      iVar12 = pcVar6->field_00A0;
joined_r0x005c996c:
      if (iVar12 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
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
          pDVar21 = this_00->field_1F7C;
          if (local_8 < (DArrayTy *)pDVar21->count) {
            pvVar13 = DArrayAt<void>(pDVar21, (int)local_8);
          }
          else {
            pvVar13 = nullptr;
          }
          uVar19 = 0xffffffff;
          pcVar15 = (char *)((int)pvVar13 + 0x104);
          do {
            pcVar23 = pcVar15;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar15 + 1;
            cVar10 = *pcVar15;
            pcVar15 = pcVar23;
          } while (cVar10 != '\0');
          uVar19 = ~uVar19;
          pcVar15 = pcVar23 + -uVar19;
          pcVar23 = &this_00->field_0x1e33;
          memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
          uVar20 = 0;
          this_00->field_1F37 = local_8;
          Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
      pcVar6 = g_startSystem_0081176C->field_0034;
      if (pcVar6->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
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
    pcVar15 = LoadResourceString(0x2355,g_module_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar15;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar23;
    } while (cVar10 != '\0');
    uVar19 = ~uVar19;
    pcVar15 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    this_00->field_1F37 = 0;
    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
    pcVar15 = LoadResourceString(0x234c,g_module_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar15;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar23;
    } while (cVar10 != '\0');
    uVar19 = ~uVar19;
    pcVar15 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    this_00->field_1F37 = 1;
    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
    pcVar15 = LoadResourceString(0x2356,g_module_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar15;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar23;
    } while (cVar10 != '\0');
    uVar19 = ~uVar19;
    pcVar15 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    this_00->field_1F37 = 2;
    Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
    this_00->field_21A9 = this_00->field_1E2F->count;
    this_00->field_21A1 = (uint)(byte)this_00->field_1F5F;
    this_00->field_21C5 = 0x1a;
    this_00->field_21CD = 0xe0;
    this_00->field_21C9 = 0x132;
LAB_005c9c8a:
    pcVar6 = g_startSystem_0081176C->field_0034;
    iVar12 = pcVar6->field_00A0;
    goto joined_r0x005c964b;
  case MESS_FSGSTY_6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - 0x68ff;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar15 = LoadResourceString(0x234e,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 0;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 1;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 2;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
      pcVar15 = LoadResourceString(0x234e,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 0;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 1;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      this_00->field_1F37 = 2;
      Library::DKW::TBL::DArrayAppend(this_00->field_1E2F,&this_00->field_0x1e33);
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
      DVar11 = timeGetTime();
      this_00->field_1F53 = DVar11;
      thunk_FUN_005c7800();
    }
    break;
  case MESS_PRIVIDERTY_693F:
    this_00->vfunc_20();
    break;
  case MESS_SHARED_6940:
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
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005c9e75;
  case MESS_MAINMENUTY_6944|MESS_SHARED_0003:
    thunk_FUN_005b6350(this_00,0x611f,this_00->field_1E27,(uint)this_00->field_1E26);
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),&local_58);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    DAT_008087a0 = this_00->field_1E26;
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
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    this_00->field_21E7 = 0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00->field_1E26 == CASE_E));
    this_00->field_0x21e6 = 0;
    this_00->field_0x21e4 = 0;
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::thunk_FUN_005b8f40(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),&local_48);
    }
    break;
  case MESS_SHARED_6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
LAB_005c9e62:
    this_00->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
LAB_005c9e75:
    if (this_01 != nullptr) {
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
    switch(SVar5) {
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
      pcVar15 = LoadResourceString(0x2354,g_module_00807618);
      wsprintfA((LPSTR)local_98,"%d %s",(uint)this_00->field_1F5C,pcVar15);
      goto LAB_005ca73b;
    case MESS_SIDTY_6981:
      pDVar21 = this_00->field_1F7C;
      if (this_00->field_1F58 < pDVar21->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar15 = (char *)((int)pDVar21->data + pDVar21->elementSize * this_00->field_1F58 + 0x104);
      }
      else {
        pcVar15 = (char *)0x104;
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
    pcVar15 = LoadResourceString(resourceId,g_module_00807618);
LAB_005ca71b:
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar15;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar23;
    } while (cVar10 != '\0');
    uVar19 = ~uVar19;
    puVar18 = (uint *)(pcVar23 + -uVar19);
    puVar24 = local_98;
    memmove(puVar24, puVar18, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
LAB_005ca73b:
    pDVar21 = local_8;
    local_30 = local_8->flags - 10;
    local_28 = local_8->elementSize;
    local_2c = local_8->iteratorIndex - 0xb4;
    local_24 = local_8->count;
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,
           (local_28 - (int)local_c) + -8 + local_30,(int)(local_24 - local_34) / 2 + local_2c,
           '\x06',(byte *)this_00->field_1E2B);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1C67,0,pDVar21->flags - 10,
                     pDVar21->iteratorIndex - 0xb4,(pDVar21->elementSize - (int)local_c) + -8,
                     pDVar21->count);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      uVar19 = 2;
    }
    else {
      uVar19 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,local_98,-1,-1,uVar19);
    FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1F80);
    if ((message->arg0).words.low == 3) goto LAB_005ca964;
    break;
  case MESS_SHARED_6980|MESS_SHARED_0005:
    piVar7 = (message->arg1).ptr;
    FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar7 + -10,
                 piVar7[1] + -0xb4,piVar7[2],piVar7[3],piVar7[3] / 2,0x67);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar7 + -8,piVar7[1] + -0xb2
                 ,(undefined4 *)(piVar7[2] + -4),piVar7[3] + -4,piVar7[3] / 2 + -2,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar7 + -10,
                 piVar7[1] + -0xb4,(undefined4 *)piVar7[2],piVar7[3],piVar7[3] / 2,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0030,this_00->field_1C67,0,*piVar7 + -10,
                     piVar7[1] - 0xb4,piVar7[2],piVar7[3]);
    uVar19 = ((message->arg0).words.low != 1) + 5;
    iVar17 = -1;
    iVar12 = -1;
    puVar18 = (uint *)LoadResourceString(0x234a,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0030,puVar18,iVar12,iVar17,uVar19);
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
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
  switch(SVar4) {
  case 0x657f:
    SVar2 = this_00->field_1E26;
    if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar2 == CASE_2)) {
      pDVar21 = DAT_0080c506;
    }
    if (this_00->field_1C5F < pDVar21->count) {
      if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (pDVar21 = PTR_0080c502, SVar2 == CASE_2)) {
        pDVar21 = DAT_0080c506;
      }
      if (((SVar2 == CASE_6) || (SVar2 == CASE_1)) || (pDVar14 = PTR_0080c502, SVar2 == CASE_2)) {
        pDVar14 = DAT_0080c506;
      }
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pcVar15 = (char *)(pDVar14->elementSize * this_00->field_1C5F + (int)pDVar21->data);
    }
    else {
      pcVar15 = nullptr;
    }
    if (pcVar15 == nullptr) {
      pcVar15 = &DAT_008016a0;
    }
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar15;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar23;
    } while (cVar10 != '\0');
    uVar19 = ~uVar19;
    pcVar15 = pcVar23 + -uVar19;
    pcVar23 = (char *)&DAT_0080f33a;
    memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
    uVar20 = 0;
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      uVar19 = 2;
    }
    else {
      uVar19 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,uVar19);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(SVar4) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6582:
      cVar10 = DAT_00808a90._1_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._1_1_ == '\0') {
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
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6584:
      cVar10 = DAT_00808a90._2_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6585:
      cVar10 = DAT_00808a90._3_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      uVar19 = 2;
    }
    else {
      uVar19 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    iVar17 = -1;
    iVar12 = -1;
    puVar18 = (uint *)LoadResourceString(local_20,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar18,iVar12,iVar17,uVar19);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar15 = LoadResourceString(0x1f55,g_module_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar15;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar10 != '\0');
      uVar19 = ~uVar19;
      pcVar15 = pcVar23 + -uVar19;
      pcVar23 = (char *)&DAT_0080f33a;
      memmove(pcVar23, pcVar15, uVar19); /* compiler REP MOVS byte copy */
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",DAT_00808a97);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      uVar19 = 2;
    }
    else {
      uVar19 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,uVar19);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      pcVar15 = LoadResourceString(0x1f59,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s",pcVar15);
    }
    else {
      iVar12 = DAT_00808a9b + 1;
      pcVar15 = LoadResourceString(0x1f57,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar15,iVar12);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,this_00->field_1E1E,0,local_1c,local_18,
                     local_14,local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      uVar19 = 2;
    }
    else {
      uVar19 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,uVar19);
    break;
  case 0x6588:
    cVar10 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar16 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
    iVar12 = (local_10 + -0x10) / 2 + local_18;
    pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
    iVar17 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar16 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar12 = (local_10 + -0x10) / 2 + local_18;
      iVar17 = (local_14 + -0x11) / 2 + local_1c;
      pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar10 = DAT_00808aa9;
LAB_005cad88:
    if (cVar10 != '\0') {
      pbVar16 = (byte *)FUN_0070b3a0(this_00->field_1F4F,0);
      iVar12 = (local_10 + -0x10) / 2 + local_18;
      iVar17 = (local_14 + -0x11) / 2 + local_1c;
      pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      DibPut(pAVar25,iVar17,iVar12,'\x06',pbVar16);
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
  iVar12 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar12;
}

