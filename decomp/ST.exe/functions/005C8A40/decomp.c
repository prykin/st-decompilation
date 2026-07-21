#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040327E|005C8A40; family_names=SettMapTy::GetMessage; ret4=2;
   direct_offsets={10:14,14:29,18:15,1c:13} */

int __thiscall SettMapTy::GetMessage(SettMapTy *this,STMessage *message)

{
  undefined1 *puVar1;
  SettMapTy_field_1E26State SVar2;
  word wVar3;
  STMessageId SVar4;
  DArrayTy *pDVar5;
  ccFntTy *pcVar6;
  int *piVar7;
  code *pcVar8;
  SettMapTy *this_00;
  byte bVar9;
  char cVar10;
  DWORD DVar11;
  int iVar12;
  void *pvVar13;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar14;
  char *pcVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  MMsgTy *this_01;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar22;
  undefined4 *puVar23;
  char *pcVar24;
  uint *puVar25;
  AnonShape_006B5B10_E0D06CF1 *pAVar26;
  UINT resourceId;
  int iVar27;
  undefined4 uVar28;
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
  int local_28;
  int local_24;
  UINT local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  AnonShape_GLOBAL_0080C502_B8708D85 *local_c;
  int *local_8;

  local_38 = this;
  DVar11 = FUN_006e51b0(this->field_0010);
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
  thunk_FUN_005b6450(local_38,(int)message);
  SVar4 = message->id;
  if (SVar4 < MESS_SETTMAPMTY_6549) {
    if (SVar4 == MESS_SETTMAPTY_6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,this_00->field_2149,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_switch_join_005CA971;
    }
    if (SVar4 < MESS_WAITTY_6333) {
      if (SVar4 == MESS_SHARED_6332) {
        StartSystemTy::PaintBinDesc(PTR_0081176c,(AnonShape_005DE050_5BD86458 *)message);
      }
      else if (SVar4 < 0x610b) {
        if (SVar4 == MESS_SHARED_610A) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = 6;
          thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
        }
        else if (SVar4 < 6) {
          if (SVar4 == MESS_SHARED_0005) {
            PaintSettMap(this_00,'\0');
          }
          else if (SVar4 == MESS_ID_NONE) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_000C)();
          }
          else if (SVar4 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar28 = *(undefined4 *)((message->arg0).u32 + 0x18);
            this_00->field_1E27 = uVar28;
            /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
            (*(code *)this_00->field_0000->field_0010)
                      (CONCAT31((int3)((uint)uVar28 >> 8),
                                *(undefined1 *)((message->arg0).u32 + 0x14)));
          }
          else if (SVar4 == MESS_SHARED_0003) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_0014)();
          }
        }
        else if (SVar4 == MESS_SHARED_6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
        }
        else if (SVar4 == MESS_SHARED_6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(SVar4) {
        case MESS_SHARED_611F:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = message->id;
          this_00->field_0051 = message->arg0;
          this_00->field_0055 = message->arg1;
          thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
          break;
        case MESS_SHARED_6200:
          this_00->field_1F88 = message->arg0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
          break;
        case MESS_PLAYPANELTY_6201:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1c6b,
                     (int)message,0);
          break;
        case MESS_PLAYPANELTY_6202:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1cfc,
                     (int)message,0);
          break;
        case MESS_SETTMAPTY_6203:
          uVar20 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          this_00->field_1DAD = uVar20;
          if (this_00->field_1D91 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar20);
          }
        }
      }
      goto cf_switch_join_005CA971;
    }
    if (SVar4 < MESS_SHARED_6504) {
      if (SVar4 == MESS_SETTMAPTY_6503) {
        pDVar5 = this_00->field_1E2F;
        uVar20 = (uint)(message->arg0).words.low;
        if (uVar20 < pDVar5->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar20) (runtime stride) */
          pvVar13 = (void *)(pDVar5->elementSize * uVar20 + (int)pDVar5->data);
        }
        else {
          pvVar13 = (void *)0x0;
        }
        cVar10 = *(char *)((int)pvVar13 + 0x104);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)CONCAT31(local_c._1_3_,cVar10);
        if (cVar10 != -1) {
          switch(cVar10) {
          case '\0':
            uVar18 = 0xfc;
            break;
          case '\x01':
            uVar18 = 0xfa;
            break;
          case '\x02':
            uVar18 = 0xfb;
            break;
          case '\x03':
            uVar18 = 0xf9;
            break;
          case '\x04':
            uVar18 = 0xfd;
            break;
          case '\x05':
            uVar18 = 0xfe;
            break;
          case '\x06':
            uVar18 = 0xf3;
            break;
          case '\a':
            uVar18 = 7;
            break;
          default:
            uVar18 = 0xff;
          }
          pAVar26 = (message->arg1).ptr;
          FUN_006b4170(pAVar26,0,2,2,pAVar26->field_0004 + -4,pAVar26->field_0008 + -4,uVar18);
        }
        if ((message->arg0).words.high == 1) {
          pAVar26 = (message->arg1).ptr;
          FUN_006b5ee0(pAVar26,0,0,0,pAVar26->field_0004,pAVar26->field_0008,0xf,0xd);
        }
      }
      else if (SVar4 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
        if (SVar4 == MESS_WAITTY_6335) {
          PTR_0081176c->field_04CF =
               *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
          if (PTR_0081176c->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                       PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
          }
        }
        else if (SVar4 == MESS_WAITTY_6333) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                     (int)message,0);
        }
        else if (SVar4 == MESS_SHARED_6334) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                     (int)message,0);
        }
      }
      else if (SVar4 == MESS_SHARED_64FF) {
        switch((message->arg1).u32) {
        case 0:
          uVar20 = (message->arg0).u32;
          if (uVar20 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar20;
            if ((uVar20 & 0xff) == 0) {
              if (3 < this_00->field_1F5C) {
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
              }
            }
            else if (((uVar20 & 0xff) == 1) && (5 < this_00->field_1F5C)) {
              this_00->field_1F5C = 4;
              this_00->field_002D = 5;
              FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
              FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
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
        FUN_006e6080(this_00,2,(&this_00->field_1F60)[(message->arg1).u32],
                     (undefined4 *)&this_00->field_0x1d);
        FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
      }
      else if (SVar4 == MESS_SETTMAPTY_6500) {
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(message->arg1).i32,0,0,0,0,0);
        pDVar5 = this_00->field_1E2F;
        uVar20 = (uint)(message->arg0).words.low;
        if (uVar20 < pDVar5->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar20) (runtime stride) */
          puVar19 = (uint *)(pDVar5->elementSize * uVar20 + (int)pDVar5->data);
        }
        else {
          puVar19 = (uint *)0x0;
        }
        ccFntTy::WrStr(PTR_0081176c->field_0034,puVar19,-1,-1,
                       3 - (uint)((message->arg0).words.high != 1));
        if ((message->arg0).words.high == 1) {
          pAVar26 = (message->arg1).ptr;
          FUN_006b5ee0(pAVar26,0,0,0,pAVar26->field_0004,pAVar26->field_0008,0xf,0xd);
        }
      }
      goto cf_switch_join_005CA971;
    }
    switch(SVar4) {
    case MESS_FSGSTY_6506:
      pDVar5 = this_00->field_1E2F;
      uVar20 = (message->arg0).u32;
      if (uVar20 < pDVar5->count) {
        switch((message->arg1).u32) {
        case 0:
          SVar2 = this_00->field_1E26;
          if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar22 = PTR_0080c502, SVar2 == 2)) {
            pAVar22 = DAT_0080c506;
          }
          if (uVar20 < (uint)pAVar22->field_000C) {
            if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar22 = PTR_0080c502, SVar2 == 2)) {
              pAVar22 = DAT_0080c506;
            }
            if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar14 = PTR_0080c502, SVar2 == 2)) {
              pAVar14 = DAT_0080c506;
            }
            iVar12 = pAVar14->field_0008 * uVar20 + pAVar22->field_001C;
          }
          else {
            iVar12 = 0;
          }
          if (iVar12 == 0) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            puVar23 = &DAT_00809960;
            for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar23 = 0;
              puVar23 = puVar23 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)0x0,this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar20;
            DAT_0080995c = *(undefined4 *)(iVar12 + 0x90);
            uVar20 = 0xffffffff;
            pcVar15 = (char *)(iVar12 + 0x4c);
            do {
              pcVar24 = pcVar15;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar24 = pcVar15 + 1;
              cVar10 = *pcVar15;
              pcVar15 = pcVar24;
            } while (cVar10 != '\0');
            uVar20 = ~uVar20;
            pcVar15 = pcVar24 + -uVar20;
            pcVar24 = (char *)&DAT_00809960;
            for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *pcVar24 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar24 = pcVar24 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)(iVar12 + 0x70),this_00->field_1C63)
            ;
          }
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2125,(undefined4 *)&this_00->field_0x1d);
          if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
            FUN_006b6160(&this_00->field_0x1a5f,(int)(g_int_00811764 + 6));
            this_00->field_1A7F = 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            this_00->field_1A80 = DAT_008087c4._2_1_;
            this_00->field_1A81 = (char)(DAT_008087c2 >> 1);
            wsprintfA((LPSTR)&local_64,"%08x",DAT_0080995c);
            this_00->field_1A82 = local_64;
            this_00->field_1A86 = local_60;
            Library::MSVCRT::_strncpy(&this_00->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
            this_00->field_1C5E = 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 3:
          DAT_00808a90._0_2_ =
               CONCAT11(*(undefined1 *)(pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data),
                        (char)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2131,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2135,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)(pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data),
                        (undefined2)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          bVar9 = DAT_00808a90._2_1_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90 = CONCAT13(bVar9,(undefined3)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data),
                                  (undefined3)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90._0_3_ = CONCAT12(DAT_00808a90._3_1_,(undefined2)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 7:
          DAT_00808a97 = *(int *)(pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2141,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 8:
          DAT_00808a9b = *(byte *)(pDVar5->elementSize * uVar20 + 0x104 + (int)pDVar5->data);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2145,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        SVar2 = this_00->field_1E26;
        if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar22 = PTR_0080c502, SVar2 == 2)) {
          pAVar22 = DAT_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = (int *)0x0;
        this_00->field_1E2F->count = 0;
        local_c = pAVar22;
        if (pAVar22->field_000C != 0) {
          do {
            pcVar15 = (char *)(pAVar22->field_0008 * (int)local_8 + pAVar22->field_001C);
            if (pcVar15 != (char *)0x0) {
              this_00->field_1F37 = local_8;
              uVar20 = 0xffffffff;
              do {
                pcVar24 = pcVar15;
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                pcVar24 = pcVar15 + 1;
                cVar10 = *pcVar15;
                pcVar15 = pcVar24;
              } while (cVar10 != '\0');
              uVar20 = ~uVar20;
              pcVar15 = pcVar24 + -uVar20;
              pcVar24 = &this_00->field_0x1e33;
              for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar24 = pcVar24 + 4;
              }
              for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                *pcVar24 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar24 = pcVar24 + 1;
              }
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              pAVar22 = local_c;
            }
            local_8 = (int *)((int)local_8 + 1);
          } while (local_8 < (uint)pAVar22->field_000C);
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
      pcVar15 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      switch(this_00->field_2179) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 3:
        bVar9 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case 5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 6:
        bVar9 = DAT_00808a90._3_1_;
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar9;
      }
      switch(this_00->field_2179) {
      case 3:
      case 5:
        this_00->field_21C5 = 0x1c5;
        break;
      case 4:
      case 6:
        this_00->field_21C5 = 0x2bf;
      }
      this_00->field_21CD = 0x5a;
      switch(this_00->field_2179) {
      case 3:
      case 4:
        this_00->field_21C9 = 0x164;
        break;
      case 5:
      case 6:
        this_00->field_21C9 = 0x17a;
      }
      pcVar6 = PTR_0081176c->field_0034;
      iVar12 = pcVar6->field_00A0;
joined_r0x005c964b:
      if (iVar12 != 0) {
        FUN_00710790((uint *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
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
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 0x96;
        wsprintfA(puVar1,"%d",0x96);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 200;
        wsprintfA(puVar1,"%d",200);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 0xffffffff;
        pcVar15 = LoadResourceString(0x1f55,HINSTANCE_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar24 = pcVar15;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar24;
        } while (cVar10 != '\0');
        uVar20 = ~uVar20;
        pcVar15 = pcVar24 + -uVar20;
        pcVar24 = &this_00->field_0x1e33;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar24 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar24 = pcVar24 + 1;
        }
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
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
        pcVar6 = PTR_0081176c->field_0034;
        if (pcVar6->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar6);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
      }
      break;
    case MESS_SETTMAPTY_6547:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 8;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        uVar28 = 1;
        puVar1 = &this_00->field_0x1e33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0;
        pcVar15 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar28);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 1;
        uVar28 = 2;
        pcVar15 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar28);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 2;
        uVar28 = 3;
        pcVar15 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,"%s %d",pcVar15,uVar28);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar6 = PTR_0081176c->field_0034;
        iVar12 = pcVar6->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_switch_join_005CA971;
  }
  if (SVar4 < MESS_SHARED_6900) {
    if (SVar4 == MESS_MMSGTY_68FF) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        pcVar15 = LoadResourceString(0x234b,HINSTANCE_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar24 = pcVar15;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar24;
        } while (cVar10 != '\0');
        uVar20 = ~uVar20;
        pcVar15 = pcVar24 + -uVar20;
        pcVar24 = &this_00->field_0x1e33;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar24 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar24 = pcVar24 + 1;
        }
        this_00->field_1F37 = 0;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        pcVar15 = LoadResourceString(0x234c,HINSTANCE_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar24 = pcVar15;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar24 = pcVar15 + 1;
          cVar10 = *pcVar15;
          pcVar15 = pcVar24;
        } while (cVar10 != '\0');
        uVar20 = ~uVar20;
        pcVar15 = pcVar24 + -uVar20;
        pcVar24 = &this_00->field_0x1e33;
        for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
          *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar24 = pcVar24 + 4;
        }
        for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
          *pcVar24 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar24 = pcVar24 + 1;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar15 = LoadResourceString(0x234d,HINSTANCE_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar24 = pcVar15;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar24 = pcVar15 + 1;
            cVar10 = *pcVar15;
            pcVar15 = pcVar24;
          } while (cVar10 != '\0');
          uVar20 = ~uVar20;
          pcVar15 = pcVar24 + -uVar20;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar24 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar24 = pcVar24 + 1;
          }
          this_00->field_1F37 = 2;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
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
      switch(SVar4) {
      case MESS_SETTMAPMTY_6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_214D,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
        }
        break;
      case MESS_SETTMAPMTY_654A:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2151,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654B:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2155,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case MESS_SETTMAPMTY_654C:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2159,(undefined4 *)&this_00->field_0x1d);
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
    goto cf_switch_join_005CA971;
  }
  switch(SVar4) {
  case MESS_SHARED_6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x3;
      if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
        if (this_00->field_1F57 == '\0') {
          local_8 = (int *)0x2;
        }
        else if (this_00->field_1F57 == '\x01') {
          local_8 = (int *)0x4;
        }
        else {
          local_8 = (int *)0x7;
        }
      }
      this_00->field_1E2F->count = 0;
      if (local_8 != (int *)0x0) {
        iVar12 = 2;
        do {
          pcVar15 = LoadResourceString(0x2354,HINSTANCE_00807618);
          wsprintfA(&this_00->field_0x1e33,"%d %s",iVar12,pcVar15);
          this_00->field_1F37 = iVar12;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
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
      pcVar6 = PTR_0081176c->field_0034;
      iVar12 = pcVar6->field_00A0;
joined_r0x005c996c:
      if (iVar12 != 0) {
        FUN_00710790((uint *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case MESS_FSGSTY_6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)0x1;
      }
      else {
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)this_00->field_1F7C->count;
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x0;
      this_00->field_1E2F->count = 0;
      if (local_c != (AnonShape_GLOBAL_0080C502_B8708D85 *)0x0) {
        do {
          pDVar5 = this_00->field_1F7C;
          if (local_8 < (int *)pDVar5->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, (int)local_8) (runtime stride) */
            pvVar13 = (void *)(pDVar5->elementSize * (int)local_8 + (int)pDVar5->data);
          }
          else {
            pvVar13 = (void *)0x0;
          }
          uVar20 = 0xffffffff;
          pcVar15 = (char *)((int)pvVar13 + 0x104);
          do {
            pcVar24 = pcVar15;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar24 = pcVar15 + 1;
            cVar10 = *pcVar15;
            pcVar15 = pcVar24;
          } while (cVar10 != '\0');
          uVar20 = ~uVar20;
          pcVar15 = pcVar24 + -uVar20;
          pcVar24 = &this_00->field_0x1e33;
          for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar24 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar24 = pcVar24 + 1;
          }
          this_00->field_1F37 = local_8;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          local_8 = (int *)((int)local_8 + 1);
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
      pcVar6 = PTR_0081176c->field_0034;
      if (pcVar6->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar6);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar6->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case MESS_MAINMENUTY_6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
    this_00->field_2191 = 0x6500;
    this_00->field_1E2F->count = 0;
    pcVar15 = LoadResourceString(0x2355,HINSTANCE_00807618);
    uVar20 = 0xffffffff;
    do {
      pcVar24 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar24 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar24;
    } while (cVar10 != '\0');
    uVar20 = ~uVar20;
    pcVar15 = pcVar24 + -uVar20;
    pcVar24 = &this_00->field_0x1e33;
    for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar24 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar24 = pcVar24 + 1;
    }
    this_00->field_1F37 = 0;
    Library::DKW::TBL::FUN_006ae1c0
              (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
    pcVar15 = LoadResourceString(0x234c,HINSTANCE_00807618);
    uVar20 = 0xffffffff;
    do {
      pcVar24 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar24 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar24;
    } while (cVar10 != '\0');
    uVar20 = ~uVar20;
    pcVar15 = pcVar24 + -uVar20;
    pcVar24 = &this_00->field_0x1e33;
    for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar24 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar24 = pcVar24 + 1;
    }
    this_00->field_1F37 = 1;
    Library::DKW::TBL::FUN_006ae1c0
              (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
    pcVar15 = LoadResourceString(0x2356,HINSTANCE_00807618);
    uVar20 = 0xffffffff;
    do {
      pcVar24 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar24 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar24;
    } while (cVar10 != '\0');
    uVar20 = ~uVar20;
    pcVar15 = pcVar24 + -uVar20;
    pcVar24 = &this_00->field_0x1e33;
    for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar24 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar24 = pcVar24 + 1;
    }
    this_00->field_1F37 = 2;
    Library::DKW::TBL::FUN_006ae1c0
              (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
    this_00->field_21A9 = this_00->field_1E2F->count;
    this_00->field_21A1 = (uint)(byte)this_00->field_1F5F;
    this_00->field_21C5 = 0x1a;
    this_00->field_21CD = 0xe0;
    this_00->field_21C9 = 0x132;
LAB_005c9c8a:
    pcVar6 = PTR_0081176c->field_0034;
    iVar12 = pcVar6->field_00A0;
    goto joined_r0x005c964b;
  case MESS_FSGSTY_6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar15 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
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
      this_00->field_2179 = message->id - MESS_MMSGTY_68FF;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar15 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar15 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = &this_00->field_0x1e33;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case MESS_PRIVIDERTY_693F:
    (*(code *)this_00->field_0000->field_0020)();
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case MESS_SHARED_6940:
    (*(code *)this_00->field_0000->field_0024)();
    break;
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = 0;
    thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
    break;
  case MESS_WAITTY_6943:
    thunk_FUN_005b6350(this_00,0x6942,0,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0008)();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
    goto LAB_005c9e75;
  case MESS_MAINMENUTY_6944|MESS_SHARED_0003:
    thunk_FUN_005b6350(this_00,0x611f,this_00->field_1E27,(uint)this_00->field_1E26);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0008)();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_005b8f40(*(void **)(this_00->field_1A5B + 0x2e6),&local_58);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    DAT_008087a0 = this_00->field_1E26;
    switch(this_00->field_1E26) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
      DAT_00808783 = 2;
      break;
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case CASE_13:
    case 0x14:
    case 0x15:
      DAT_00808783 = 3;
    }
    this_00->field_0049 = 1;
    this_00->field_004D = 0x60ff;
    thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
    break;
  case MESS_WAITTY_694D:
    thunk_FUN_005b6350(this_00,0x6105,1,0);
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
    this_00->field_21E7 = 0;
    goto LAB_005c9e62;
  case 0x694f:
    thunk_FUN_005b6350(this_00,0x6109,1,(uint)(this_00->field_1E26 == 0xe));
    this_00->field_0x21e6 = 0;
    this_00->field_0x21e4 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_0000->field_0008)();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(this_00->field_1A5B + 0x2e6) != 0) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      thunk_FUN_005b8f40(*(void **)(this_00->field_1A5B + 0x2e6),&local_48);
    }
    break;
  case MESS_SHARED_6951:
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    *(undefined4 *)&this_00->field_0x21e1 = 0x1010101;
    *(undefined2 *)&this_00->field_0x21e5 = 0x101;
    this_00->field_21E7 = 1;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005c9e62:
    (*(code *)this_00->field_0000->field_0008)();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_01 = *(MMsgTy **)(this_00->field_1A5B + 0x2e6);
LAB_005c9e75:
    if (this_01 != (MMsgTy *)0x0) {
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
    local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)this_00->field_1E2B->field_0004;
    local_34 = this_00->field_1E2B->field_0008;
    switch(SVar4) {
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
      pcVar15 = LoadResourceString(0x2354,HINSTANCE_00807618);
      wsprintfA((LPSTR)local_98,"%d %s",(uint)this_00->field_1F5C,pcVar15);
      goto LAB_005ca73b;
    case MESS_SIDTY_6981:
      pDVar5 = this_00->field_1F7C;
      if (this_00->field_1F58 < pDVar5->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar15 = (char *)((int)pDVar5->data + pDVar5->elementSize * this_00->field_1F58 + 0x104);
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
    pcVar15 = LoadResourceString(resourceId,HINSTANCE_00807618);
LAB_005ca71b:
    uVar20 = 0xffffffff;
    do {
      pcVar24 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar24 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar24;
    } while (cVar10 != '\0');
    uVar20 = ~uVar20;
    puVar19 = (uint *)(pcVar24 + -uVar20);
    puVar25 = local_98;
    for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar25 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar25 = puVar25 + 1;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(char *)puVar25 = (char)*puVar19;
      puVar19 = (uint *)((int)puVar19 + 1);
      puVar25 = (uint *)((int)puVar25 + 1);
    }
LAB_005ca73b:
    piVar7 = local_8;
    local_30 = *local_8 + -10;
    local_28 = local_8[2];
    local_2c = local_8[1] + -0xb4;
    local_24 = local_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,
           (local_28 - (int)local_c) + -8 + local_30,(local_24 - local_34) / 2 + local_2c,'\x06',
           (byte *)this_00->field_1E2B);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1C67,0,*piVar7 + -10,piVar7[1] - 0xb4,
                     (piVar7[2] - (int)local_c) + -8,piVar7[3]);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      iVar12 = 2;
    }
    else {
      iVar12 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,local_98,-1,-1,iVar12);
    FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
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
    ccFntTy::SetSurf(PTR_0081176c->field_0030,this_00->field_1C67,0,*piVar7 + -10,piVar7[1] - 0xb4,
                     piVar7[2],piVar7[3]);
    iVar12 = ((message->arg0).words.low != 1) + 5;
    iVar27 = -1;
    iVar17 = -1;
    puVar19 = (uint *)LoadResourceString(0x234a,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0030,puVar19,iVar17,iVar27,iVar12);
    if ((message->arg0).words.low != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_switch_join_005CA971:
  SVar4 = message->id;
  if ((SVar4 < MESS_SETTMAPTY_657F) || (0x658c < SVar4)) goto LAB_005cae3e;
  piVar7 = (message->arg1).ptr;
  local_14 = piVar7[2];
  local_10 = piVar7[3];
  local_1c = *piVar7 + -0x112;
  local_18 = piVar7[1] - 0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
  switch(SVar4) {
  case MESS_SETTMAPTY_657F:
    SVar2 = this_00->field_1E26;
    if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar22 = PTR_0080c502, SVar2 == 2)) {
      pAVar22 = DAT_0080c506;
    }
    if (this_00->field_1C5F < (uint)pAVar22->field_000C) {
      if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar22 = PTR_0080c502, SVar2 == 2)) {
        pAVar22 = DAT_0080c506;
      }
      if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar14 = PTR_0080c502, SVar2 == 2)) {
        pAVar14 = DAT_0080c506;
      }
      pcVar15 = (char *)(pAVar14->field_0008 * this_00->field_1C5F + pAVar22->field_001C);
    }
    else {
      pcVar15 = (char *)0x0;
    }
    if (pcVar15 == (char *)0x0) {
      pcVar15 = &DAT_008016a0;
    }
    uVar20 = 0xffffffff;
    do {
      pcVar24 = pcVar15;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar24 = pcVar15 + 1;
      cVar10 = *pcVar15;
      pcVar15 = pcVar24;
    } while (cVar10 != '\0');
    uVar20 = ~uVar20;
    pcVar15 = pcVar24 + -uVar20;
    pcVar24 = (char *)&DAT_0080f33a;
    for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar24 = pcVar24 + 4;
    }
    for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
      *pcVar24 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar24 = pcVar24 + 1;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      iVar12 = 2;
    }
    else {
      iVar12 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar12);
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
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      iVar12 = 2;
    }
    else {
      iVar12 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    iVar27 = -1;
    iVar17 = -1;
    puVar19 = (uint *)LoadResourceString(local_20,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar19,iVar17,iVar27,iVar12);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar15 = LoadResourceString(0x1f55,HINSTANCE_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar24 = pcVar15;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar24 = pcVar15 + 1;
        cVar10 = *pcVar15;
        pcVar15 = pcVar24;
      } while (cVar10 != '\0');
      uVar20 = ~uVar20;
      pcVar15 = pcVar24 + -uVar20;
      pcVar24 = (char *)&DAT_0080f33a;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar24 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar24 = pcVar24 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,"%d",DAT_00808a97);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      iVar12 = 2;
    }
    else {
      iVar12 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar12);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      pcVar15 = LoadResourceString(0x1f59,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s",pcVar15);
    }
    else {
      iVar12 = DAT_00808a9b + 1;
      pcVar15 = LoadResourceString(0x1f57,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%s %d",pcVar15,iVar12);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    wVar3 = (message->arg0).words.low;
    if (wVar3 == 1) {
      iVar12 = 2;
    }
    else {
      iVar12 = (-(uint)(wVar3 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar12);
    break;
  case 0x6588:
    cVar10 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar16 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
    iVar12 = (local_10 + -0x10) / 2 + local_18;
    pAVar26 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
    iVar17 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar16 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
      iVar12 = (local_10 + -0x10) / 2 + local_18;
      iVar17 = (local_14 + -0x11) / 2 + local_1c;
      pAVar26 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar10 = DAT_00808aa9;
LAB_005cad88:
    if (cVar10 != '\0') {
      pbVar16 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
      iVar12 = (local_10 + -0x10) / 2 + local_18;
      iVar17 = (local_14 + -0x11) / 2 + local_1c;
      pAVar26 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      DibPut(pAVar26,iVar17,iVar12,'\x06',pbVar16);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1E22);
  if ((message->arg0).words.low == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  iVar12 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar12;
}

