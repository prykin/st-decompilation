#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::GetMessage */

undefined4 __thiscall SettMapTy::GetMessage(SettMapTy *this,AnonShape_005DE050_5BD86458 *param_1)

{
  undefined1 *puVar1;
  SettMapTy_field_1E26State SVar2;
  DArrayTy *pDVar3;
  ccFntTy *pcVar4;
  int *piVar5;
  code *pcVar6;
  SettMapTy *this_00;
  byte bVar7;
  char cVar8;
  DWORD DVar9;
  int iVar10;
  void *pvVar11;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  MMsgTy *this_01;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar21;
  undefined4 *puVar22;
  char *pcVar23;
  uint *puVar24;
  AnonShape_006B5B10_E0D06CF1 *pAVar25;
  UINT resourceId;
  int iVar26;
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
  DVar9 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar9;
  local_dc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_dc;
  iVar10 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
  this_00 = local_38;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_dc.previous;
    iVar16 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758,0,iVar10,
                                &DAT_007a4ccc,s_SettMapTy__GetMessage_007cd23c);
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar10,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x758);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_38,(int)param_1);
  uVar19 = *(uint *)&param_1->field_0x10;
  if (uVar19 < 0x6549) {
    if (uVar19 == 0x6548) {
      if (this_00->field_0065 == '\x01') {
        DAT_00808a95 = DAT_00808a95 == '\0';
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,this_00->field_2149,(undefined4 *)&this_00->field_0x1d);
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar19 < 0x6333) {
      if (uVar19 == 0x6332) {
        StartSystemTy::PaintBinDesc(PTR_0081176c,param_1);
      }
      else if (uVar19 < 0x610b) {
        if (uVar19 == 0x610a) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = 6;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
        }
        else if (uVar19 < 6) {
          if (uVar19 == 5) {
            PaintSettMap(this_00,'\0');
          }
          else if (uVar19 == 0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_000C)();
          }
          else if (uVar19 == 2) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar15 = *(undefined4 *)(*(int *)&param_1->field_0x14 + 0x18);
            this_00->field_1E27 = uVar15;
            /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
            (*(code *)this_00->field_0000->field_0010)
                      (CONCAT31((int3)((uint)uVar15 >> 8),
                                *(undefined1 *)(*(int *)&param_1->field_0x14 + 0x14)));
          }
          else if (uVar19 == 3) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_0014)();
          }
        }
        else if (uVar19 == 0x6105) {
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = *(undefined4 *)&param_1->field_0x14;
          this_00->field_0055 = *(undefined4 *)&param_1->field_0x18;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
        }
        else if (uVar19 == 0x6109) goto switchD_005c8bd0_caseD_611f;
      }
      else {
        switch(uVar19) {
        case 0x611f:
switchD_005c8bd0_caseD_611f:
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = *(undefined4 *)&param_1->field_0x10;
          this_00->field_0051 = *(undefined4 *)&param_1->field_0x14;
          this_00->field_0055 = *(undefined4 *)&param_1->field_0x18;
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
          break;
        case 0x6200:
          this_00->field_1F88 = *(undefined4 *)&param_1->field_0x14;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
          break;
        case 0x6201:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1c6b,
                     (int)param_1,0);
          break;
        case 0x6202:
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_0x1cfc,
                     (int)param_1,0);
          break;
        case 0x6203:
          uVar19 = *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
          this_00->field_1DAD = uVar19;
          if (this_00->field_1D91 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)this_00->field_1DD5,this_00->field_1D91,this_00->field_1D95,
                       this_00->field_1DA9,uVar19);
          }
        }
      }
      goto cf_switch_join_005CA971;
    }
    if (uVar19 < 0x6504) {
      if (uVar19 == 0x6503) {
        pDVar3 = this_00->field_1E2F;
        if ((uint)*(ushort *)&param_1->field_0x14 < pDVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, (uint)*(ushort *)&param_1->field_0x14) (runtime stride) */
          pvVar11 = (void *)(pDVar3->elementSize * (uint)*(ushort *)&param_1->field_0x14 +
                            (int)pDVar3->data);
        }
        else {
          pvVar11 = (void *)0x0;
        }
        cVar8 = *(char *)((int)pvVar11 + 0x104);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)CONCAT31(local_c._1_3_,cVar8);
        if (cVar8 != -1) {
          switch(cVar8) {
          case '\0':
            uVar17 = 0xfc;
            break;
          case '\x01':
            uVar17 = 0xfa;
            break;
          case '\x02':
            uVar17 = 0xfb;
            break;
          case '\x03':
            uVar17 = 0xf9;
            break;
          case '\x04':
            uVar17 = 0xfd;
            break;
          case '\x05':
            uVar17 = 0xfe;
            break;
          case '\x06':
            uVar17 = 0xf3;
            break;
          case '\a':
            uVar17 = 7;
            break;
          default:
            uVar17 = 0xff;
          }
          pAVar25 = *(AnonShape_006B5B10_E0D06CF1 **)&param_1->field_0x18;
          FUN_006b4170(pAVar25,0,2,2,pAVar25->field_0004 + -4,pAVar25->field_0008 + -4,uVar17);
        }
        if (param_1->field_0016 == 1) {
          pAVar25 = *(AnonShape_006B5B10_E0D06CF1 **)&param_1->field_0x18;
          FUN_006b5ee0(pAVar25,0,0,0,pAVar25->field_0004,pAVar25->field_0008,0xf,0xd);
        }
      }
      else if (uVar19 < 0x6336) {
        if (uVar19 == 0x6335) {
          PTR_0081176c->field_04CF =
               *(int *)(*(int *)&param_1->field_0x18 + 4) + (uint)param_1->field_0016;
          if (PTR_0081176c->field_04B3 != 0xffffffff) {
            Library::DKW::DDX::FUN_006b3730
                      ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                       PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
          }
        }
        else if (uVar19 == 0x6333) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                     (int)param_1,0);
        }
        else if (uVar19 == 0x6334) {
          MMMObjTy::PaintSlBut
                    ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                     (int)param_1,0);
        }
      }
      else if (uVar19 == 0x64ff) {
        switch(*(undefined4 *)&param_1->field_0x18) {
        case 0:
          uVar19 = *(uint *)&param_1->field_0x14;
          if (uVar19 != 0xffffffff) {
            this_00->field_1F57 = (char)uVar19;
            if ((uVar19 & 0xff) == 0) {
              if (3 < (byte)this_00->field_1F5C) {
                this_00->field_1F5C = 3;
                this_00->field_002D = 5;
                FUN_006e6080(this_00,2,this_00->field_1F64,(undefined4 *)&this_00->field_0x1d);
                FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
              }
            }
            else if (((uVar19 & 0xff) == 1) && (5 < (byte)this_00->field_1F5C)) {
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
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5C = (char)*(int *)&param_1->field_0x14 + '\x02';
            goto cf_common_join_005C8ECC;
          }
          break;
        case 2:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F58 = *(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 3:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5F = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 4:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5D = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
          break;
        case 5:
          if (*(int *)&param_1->field_0x14 != -1) {
            this_00->field_1F5E = (char)*(int *)&param_1->field_0x14;
            goto cf_common_join_005C8ECC;
          }
        }
        this_00->field_002D = 5;
        FUN_006e6080(this_00,2,(&this_00->field_1F60)[*(int *)&param_1->field_0x18],
                     (undefined4 *)&this_00->field_0x1d);
        FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
      }
      else if (uVar19 == 0x6500) {
        ccFntTy::SetSurf(PTR_0081176c->field_0034,*(int *)&param_1->field_0x18,0,0,0,0,0);
        pDVar3 = this_00->field_1E2F;
        if ((uint)*(ushort *)&param_1->field_0x14 < pDVar3->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, (uint)*(ushort *)&param_1->field_0x14) (runtime stride) */
          puVar18 = (uint *)(pDVar3->elementSize * (uint)*(ushort *)&param_1->field_0x14 +
                            (int)pDVar3->data);
        }
        else {
          puVar18 = (uint *)0x0;
        }
        ccFntTy::WrStr(PTR_0081176c->field_0034,puVar18,-1,-1,3 - (uint)(param_1->field_0016 != 1));
        if (param_1->field_0016 == 1) {
          pAVar25 = *(AnonShape_006B5B10_E0D06CF1 **)&param_1->field_0x18;
          FUN_006b5ee0(pAVar25,0,0,0,pAVar25->field_0004,pAVar25->field_0008,0xf,0xd);
        }
      }
      goto cf_switch_join_005CA971;
    }
    switch(uVar19) {
    case 0x6506:
      pDVar3 = this_00->field_1E2F;
      uVar19 = *(uint *)&param_1->field_0x14;
      if (uVar19 < pDVar3->count) {
        switch(*(undefined4 *)&param_1->field_0x18) {
        case 0:
          SVar2 = this_00->field_1E26;
          if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar21 = PTR_0080c502, SVar2 == 2)) {
            pAVar21 = DAT_0080c506;
          }
          if (uVar19 < (uint)pAVar21->field_000C) {
            if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar21 = PTR_0080c502, SVar2 == 2)) {
              pAVar21 = DAT_0080c506;
            }
            if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar12 = PTR_0080c502, SVar2 == 2)) {
              pAVar12 = DAT_0080c506;
            }
            iVar10 = pAVar12->field_0008 * uVar19 + pAVar21->field_001C;
          }
          else {
            iVar10 = 0;
          }
          if (iVar10 == 0) {
            this_00->field_1C5F = 0;
            DAT_0080995c = 1;
            puVar22 = &DAT_00809960;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar22 = 0;
              puVar22 = puVar22 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)0x0,this_00->field_1C63);
          }
          else {
            this_00->field_1C5F = uVar19;
            DAT_0080995c = *(undefined4 *)(iVar10 + 0x90);
            uVar19 = 0xffffffff;
            pcVar13 = (char *)(iVar10 + 0x4c);
            do {
              pcVar23 = pcVar13;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar23 = pcVar13 + 1;
              cVar8 = *pcVar13;
              pcVar13 = pcVar23;
            } while (cVar8 != '\0');
            uVar19 = ~uVar19;
            pcVar13 = pcVar23 + -uVar19;
            pcVar23 = (char *)&DAT_00809960;
            for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar23 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar23 = pcVar23 + 1;
            }
            StartSystemTy::SetObjectives
                      (PTR_0081176c,this_00->field_1F43,(char *)(iVar10 + 0x70),this_00->field_1C63)
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
            wsprintfA((LPSTR)&local_64,&DAT_007cc584,DAT_0080995c);
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
               CONCAT11(*(undefined1 *)(pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data),
                        (char)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2131,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 4:
          DAT_00808a90 = CONCAT31(DAT_00808a90._1_3_,
                                  *(undefined1 *)
                                   (pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data));
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2135,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 5:
          DAT_00808a90._0_3_ =
               CONCAT12(*(undefined1 *)(pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data),
                        (undefined2)DAT_00808a90);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2139,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          bVar7 = DAT_00808a90._2_1_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (DAT_00808a90._3_1_ < DAT_00808a90._2_1_) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00808a90 = CONCAT13(bVar7,(undefined3)DAT_00808a90);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_213D,(undefined4 *)&this_00->field_0x1d);
          }
          break;
        /* ST_PSEUDO[dynamic_array_indexing,packed_or_unaligned_piece]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array); expected named packed member, bit extract/compose, or unaligned load */
        case 6:
          DAT_00808a90 = CONCAT13(*(undefined1 *)
                                   (pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data),
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
          DAT_00808a97 = *(int *)(pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2141,(undefined4 *)&this_00->field_0x1d);
          break;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        case 8:
          DAT_00808a9b = *(byte *)(pDVar3->elementSize * uVar19 + 0x104 + (int)pDVar3->data);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2145,(undefined4 *)&this_00->field_0x1d);
        }
      }
      break;
    case 0x653f:
      if (this_00->field_0065 == '\x01') {
        SVar2 = this_00->field_1E26;
        if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar21 = PTR_0080c502, SVar2 == 2)) {
          pAVar21 = DAT_0080c506;
        }
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 0;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        local_8 = (int *)0x0;
        this_00->field_1E2F->count = 0;
        local_c = pAVar21;
        if (pAVar21->field_000C != 0) {
          do {
            pcVar13 = (char *)(pAVar21->field_0008 * (int)local_8 + pAVar21->field_001C);
            if (pcVar13 != (char *)0x0) {
              this_00->field_1F37 = local_8;
              uVar19 = 0xffffffff;
              do {
                pcVar23 = pcVar13;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                pcVar23 = pcVar13 + 1;
                cVar8 = *pcVar13;
                pcVar13 = pcVar23;
              } while (cVar8 != '\0');
              uVar19 = ~uVar19;
              pcVar13 = pcVar23 + -uVar19;
              pcVar23 = &this_00->field_0x1e33;
              for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar23 = pcVar23 + 4;
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *pcVar23 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar23 = pcVar23 + 1;
              }
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
              pAVar21 = local_c;
            }
            local_8 = (int *)((int)local_8 + 1);
          } while (local_8 < (uint)pAVar21->field_000C);
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
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x653f;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar13 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 2;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      this_00->field_21A9 = this_00->field_1E2F->count;
      switch(this_00->field_2179) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 3:
        bVar7 = DAT_00808a90._1_1_;
        goto LAB_005c95d4;
      case 4:
        this_00->field_21A1 = DAT_00808a90 & 0xff;
        break;
      case 5:
        this_00->field_21A1 = DAT_00808a90 >> 0x10 & 0xff;
        break;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      case 6:
        bVar7 = DAT_00808a90._3_1_;
LAB_005c95d4:
        this_00->field_21A1 = (uint)bVar7;
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
      pcVar4 = PTR_0081176c->field_0034;
      iVar10 = pcVar4->field_00A0;
joined_r0x005c964b:
      if (iVar10 != 0) {
        FUN_00710790((uint *)pcVar4);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar4->field_0x8a;
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
        wsprintfA(puVar1,&DAT_007c1890,100);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 0x96;
        wsprintfA(puVar1,&DAT_007c1890,0x96);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 200;
        wsprintfA(puVar1,&DAT_007c1890,200);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 0xffffffff;
        pcVar13 = LoadResourceString(0x1f55,HINSTANCE_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar13 + 1;
          cVar8 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar8 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar23 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar23 = pcVar23 + 1;
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
        pcVar4 = PTR_0081176c->field_0034;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar4);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar4->field_0x8a;
        (*this_00->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &this_00->field_0x2161,0);
      }
      break;
    case 0x6547:
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x6506;
        this_00->field_2179 = 8;
        this_00->field_2191 = 0x6500;
        this_00->field_21A1 = 0;
        uVar15 = 1;
        puVar1 = &this_00->field_0x1e33;
        this_00->field_1E2F->count = 0;
        this_00->field_1F37 = 0;
        pcVar13 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,pcVar13,uVar15);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 1;
        uVar15 = 2;
        pcVar13 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,pcVar13,uVar15);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_1F37 = 2;
        uVar15 = 3;
        pcVar13 = LoadResourceString(0x1f57,HINSTANCE_00807618);
        wsprintfA(puVar1,s__s__d_007cd0b8,pcVar13,uVar15);
        Library::DKW::TBL::FUN_006ae1c0(&this_00->field_1E2F->flags,(undefined4 *)puVar1);
        this_00->field_21A9 = this_00->field_1E2F->count;
        this_00->field_21A1 = (uint)DAT_00808a9b;
        this_00->field_21C5 = 0x2bf;
        this_00->field_21CD = 0x5a;
        this_00->field_21C9 = 400;
        pcVar4 = PTR_0081176c->field_0034;
        iVar10 = pcVar4->field_00A0;
        goto joined_r0x005c996c;
      }
    }
    goto cf_switch_join_005CA971;
  }
  if (uVar19 < 0x6900) {
    if (uVar19 == 0x68ff) {
      if (this_00->field_0065 == '\x01') {
        this_00->field_2171 = 0x64ff;
        this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        pcVar13 = LoadResourceString(0x234b,HINSTANCE_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar13 + 1;
          cVar8 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar8 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar23 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar23 = pcVar23 + 1;
        }
        this_00->field_1F37 = 0;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        pcVar13 = LoadResourceString(0x234c,HINSTANCE_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar23 = pcVar13;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar13 + 1;
          cVar8 = *pcVar13;
          pcVar13 = pcVar23;
        } while (cVar8 != '\0');
        uVar19 = ~uVar19;
        pcVar13 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_0x1e33;
        for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar23 = pcVar23 + 4;
        }
        for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *pcVar23 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar23 = pcVar23 + 1;
        }
        this_00->field_1F37 = 1;
        Library::DKW::TBL::FUN_006ae1c0
                  (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
        if ((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) {
          pcVar13 = LoadResourceString(0x234d,HINSTANCE_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar23 = pcVar13;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar13 + 1;
            cVar8 = *pcVar13;
            pcVar13 = pcVar23;
          } while (cVar8 != '\0');
          uVar19 = ~uVar19;
          pcVar13 = pcVar23 + -uVar19;
          pcVar23 = &this_00->field_0x1e33;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar23 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar23 = pcVar23 + 1;
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
      switch(uVar19) {
      case 0x6549:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a8f = DAT_00808a8f == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_214D,(undefined4 *)&this_00->field_0x1d);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_0000->field_002C)();
        }
        break;
      case 0x654a:
        if (this_00->field_0065 == '\x01') {
          DAT_00808a94 = DAT_00808a94 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2151,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654b:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aa9 = DAT_00808aa9 == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2155,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654c:
        if (this_00->field_0065 == '\x01') {
          DAT_00808aaa = DAT_00808aaa == '\0';
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_2159,(undefined4 *)&this_00->field_0x1d);
        }
        break;
      case 0x654d:
        if (this_00->field_0065 == '\x01') {
          DAT_0080734b = DAT_0080734b == '\0';
          DAT_00808aa8 = DAT_0080734b;
          PaintSC(this_00);
        }
      }
    }
    goto cf_switch_join_005CA971;
  }
  switch(uVar19) {
  case 0x6900:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
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
        iVar10 = 2;
        do {
          pcVar13 = LoadResourceString(0x2354,HINSTANCE_00807618);
          wsprintfA(&this_00->field_0x1e33,s__d__s_007c2864,iVar10,pcVar13);
          this_00->field_1F37 = iVar10;
          Library::DKW::TBL::FUN_006ae1c0
                    (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
          iVar16 = iVar10 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar16 < (int)local_8);
      }
      this_00->field_21A9 = this_00->field_1E2F->count;
      this_00->field_21A1 = (byte)this_00->field_1F5C - 2;
      this_00->field_21C5 = 0x1a;
      this_00->field_21CD = 0xe0;
      this_00->field_21C9 = 0xe2;
LAB_005c9fef:
      pcVar4 = PTR_0081176c->field_0034;
      iVar10 = pcVar4->field_00A0;
joined_r0x005c996c:
      if (iVar10 != 0) {
        FUN_00710790((uint *)pcVar4);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar4->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case 0x6901:
    if (this_00->field_0065 == '\x01') {
      if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)0x1;
      }
      else {
        local_c = (AnonShape_GLOBAL_0080C502_B8708D85 *)this_00->field_1F7C->count;
      }
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      local_8 = (int *)0x0;
      this_00->field_1E2F->count = 0;
      if (local_c != (AnonShape_GLOBAL_0080C502_B8708D85 *)0x0) {
        do {
          pDVar3 = this_00->field_1F7C;
          if (local_8 < (int *)pDVar3->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, (int)local_8) (runtime stride) */
            pvVar11 = (void *)(pDVar3->elementSize * (int)local_8 + (int)pDVar3->data);
          }
          else {
            pvVar11 = (void *)0x0;
          }
          uVar19 = 0xffffffff;
          pcVar13 = (char *)((int)pvVar11 + 0x104);
          do {
            pcVar23 = pcVar13;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar23 = pcVar13 + 1;
            cVar8 = *pcVar13;
            pcVar13 = pcVar23;
          } while (cVar8 != '\0');
          uVar19 = ~uVar19;
          pcVar13 = pcVar23 + -uVar19;
          pcVar23 = &this_00->field_0x1e33;
          for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
            pcVar13 = pcVar13 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar23 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar23 = pcVar23 + 1;
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
      pcVar4 = PTR_0081176c->field_0034;
      if (pcVar4->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar4);
      }
      this_00->field_21A5 = *(undefined4 *)&pcVar4->field_0x8a;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &this_00->field_0x2161,0);
    }
    break;
  case 0x6902:
    if (this_00->field_0065 != '\x01') break;
    this_00->field_2171 = 0x64ff;
    this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
    this_00->field_2191 = 0x6500;
    this_00->field_1E2F->count = 0;
    pcVar13 = LoadResourceString(0x2355,HINSTANCE_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar13 + 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar23;
    } while (cVar8 != '\0');
    uVar19 = ~uVar19;
    pcVar13 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar23 = pcVar23 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar23 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar23 = pcVar23 + 1;
    }
    this_00->field_1F37 = 0;
    Library::DKW::TBL::FUN_006ae1c0
              (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
    pcVar13 = LoadResourceString(0x234c,HINSTANCE_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar13 + 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar23;
    } while (cVar8 != '\0');
    uVar19 = ~uVar19;
    pcVar13 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar23 = pcVar23 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar23 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar23 = pcVar23 + 1;
    }
    this_00->field_1F37 = 1;
    Library::DKW::TBL::FUN_006ae1c0
              (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
    pcVar13 = LoadResourceString(0x2356,HINSTANCE_00807618);
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar13 + 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar23;
    } while (cVar8 != '\0');
    uVar19 = ~uVar19;
    pcVar13 = pcVar23 + -uVar19;
    pcVar23 = &this_00->field_0x1e33;
    for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar23 = pcVar23 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar23 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar23 = pcVar23 + 1;
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
    pcVar4 = PTR_0081176c->field_0034;
    iVar10 = pcVar4->field_00A0;
    goto joined_r0x005c964b;
  case 0x6903:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar13 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
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
  case 0x6904:
    if (this_00->field_0065 == '\x01') {
      this_00->field_2171 = 0x64ff;
      this_00->field_2179 = *(int *)&param_1->field_0x10 + -0x68ff;
      this_00->field_2191 = 0x6500;
      this_00->field_1E2F->count = 0;
      pcVar13 = LoadResourceString(0x234e,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 0;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234c,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
      this_00->field_1F37 = 1;
      Library::DKW::TBL::FUN_006ae1c0
                (&this_00->field_1E2F->flags,(undefined4 *)&this_00->field_0x1e33);
      pcVar13 = LoadResourceString(0x234f,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = &this_00->field_0x1e33;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
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
  case 0x6905:
    if (this_00->field_0065 == '\x01') {
      DVar9 = timeGetTime();
      this_00->field_1F53 = DVar9;
      thunk_FUN_005c7800();
    }
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case 0x693f:
    (*(code *)this_00->field_0000->field_0020)();
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case 0x6940:
    (*(code *)this_00->field_0000->field_0024)();
    break;
  case 0x6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = 0;
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
    break;
  case 0x6943:
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
  case 0x6947:
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
  case 0x6948:
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
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
    break;
  case 0x694d:
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
  case 0x6951:
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
  case 0x697f:
  case 0x6980:
  case 0x6981:
  case 0x6982:
  case 0x6983:
  case 0x6984:
    local_8 = *(int **)&param_1->field_0x18;
    local_c = *(AnonShape_GLOBAL_0080C502_B8708D85 **)(this_00->field_1E2B + 4);
    local_34 = *(int *)(this_00->field_1E2B + 8);
    switch(uVar19) {
    case 0x697f:
      if (this_00->field_1F57 == '\0') {
        resourceId = 0x234b;
        goto LAB_005ca70e;
      }
      if (this_00->field_1F57 != '\x01') {
        resourceId = 0x234d;
        goto LAB_005ca70e;
      }
      goto LAB_005ca619;
    case 0x6980:
      pcVar13 = LoadResourceString(0x2354,HINSTANCE_00807618);
      wsprintfA((LPSTR)local_98,s__d__s_007c2864,(uint)(byte)this_00->field_1F5C,pcVar13);
      goto LAB_005ca73b;
    case 0x6981:
      pDVar3 = this_00->field_1F7C;
      if ((uint)this_00->field_1F58 < pDVar3->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar13 = (char *)((int)pDVar3->data + pDVar3->elementSize * this_00->field_1F58 + 0x104);
      }
      else {
        pcVar13 = (char *)0x104;
      }
      goto LAB_005ca71b;
    case 0x6982:
      if (this_00->field_1F5F == '\0') {
        resourceId = 0x2355;
      }
      else {
        if (this_00->field_1F5F == '\x01') goto LAB_005ca619;
        resourceId = 0x2356;
      }
      goto LAB_005ca70e;
    case 0x6983:
      cVar8 = this_00->field_1F5D;
      break;
    default:
      cVar8 = this_00->field_1F5E;
    }
    if (cVar8 == '\0') {
      resourceId = 0x234e;
    }
    else if (cVar8 == '\x01') {
LAB_005ca619:
      resourceId = 0x234c;
    }
    else {
      resourceId = 0x234f;
    }
LAB_005ca70e:
    pcVar13 = LoadResourceString(resourceId,HINSTANCE_00807618);
LAB_005ca71b:
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar13 + 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar23;
    } while (cVar8 != '\0');
    uVar19 = ~uVar19;
    puVar18 = (uint *)(pcVar23 + -uVar19);
    puVar24 = local_98;
    for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *puVar24 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar24 = puVar24 + 1;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(char *)puVar24 = (char)*puVar18;
      puVar18 = (uint *)((int)puVar18 + 1);
      puVar24 = (uint *)((int)puVar24 + 1);
    }
LAB_005ca73b:
    piVar5 = local_8;
    local_30 = *local_8 + -10;
    local_28 = local_8[2];
    local_2c = local_8[1] + -0xb4;
    local_24 = local_8[3];
    MMObjTy::PaintButDib
              ((MMObjTy *)this_00,this_00->field_1C67,&local_30,2,
               (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,
           (local_28 - (int)local_c) + -8 + local_30,(local_24 - local_34) / 2 + local_2c,'\x06',
           (byte *)this_00->field_1E2B);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1C67,0,*piVar5 + -10,piVar5[1] - 0xb4,
                     (piVar5[2] - (int)local_c) + -8,piVar5[3]);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar10 = 2;
    }
    else {
      iVar10 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,local_98,-1,-1,iVar10);
    FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
    if (*(short *)&param_1->field_0x14 == 3) goto LAB_005ca964;
    break;
  case 0x6985:
    piVar5 = *(int **)&param_1->field_0x18;
    FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar5 + -10,
                 piVar5[1] + -0xb4,piVar5[2],piVar5[3],piVar5[3] / 2,0x67);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar5 + -8,piVar5[1] + -0xb2
                 ,(undefined4 *)(piVar5[2] + -4),piVar5[3] + -4,piVar5[3] / 2 + -2,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C67,0,*piVar5 + -10,
                 piVar5[1] + -0xb4,(undefined4 *)piVar5[2],piVar5[3],piVar5[3] / 2,
                 (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23);
    ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,this_00->field_1C67,0,*piVar5 + -10,
                     piVar5[1] - 0xb4,piVar5[2],piVar5[3]);
    iVar10 = (*(short *)&param_1->field_0x14 != 1) + 5;
    iVar26 = -1;
    iVar16 = -1;
    puVar18 = (uint *)LoadResourceString(0x234a,HINSTANCE_00807618);
    ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,puVar18,iVar16,iVar26,iVar10);
    if (*(short *)&param_1->field_0x14 != 3) break;
LAB_005ca964:
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
cf_switch_join_005CA971:
  uVar19 = *(uint *)&param_1->field_0x10;
  if ((uVar19 < 0x657f) || (0x658c < uVar19)) goto LAB_005cae3e;
  piVar5 = *(int **)&param_1->field_0x18;
  local_14 = piVar5[2];
  local_10 = piVar5[3];
  local_1c = *piVar5 + -0x112;
  local_18 = piVar5[1] - 0x149;
  MMObjTy::PaintButDib
            ((MMObjTy *)this_00,this_00->field_1E1E,&local_1c,2,
             (-(*(short *)&param_1->field_0x14 != 0) & 0xfcU) + 0x23,0x67);
  switch(uVar19) {
  case 0x657f:
    SVar2 = this_00->field_1E26;
    if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar21 = PTR_0080c502, SVar2 == 2)) {
      pAVar21 = DAT_0080c506;
    }
    if ((uint)this_00->field_1C5F < (uint)pAVar21->field_000C) {
      if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar21 = PTR_0080c502, SVar2 == 2)) {
        pAVar21 = DAT_0080c506;
      }
      if (((SVar2 == 6) || (SVar2 == 1)) || (pAVar12 = PTR_0080c502, SVar2 == 2)) {
        pAVar12 = DAT_0080c506;
      }
      pcVar13 = (char *)(pAVar12->field_0008 * this_00->field_1C5F + pAVar21->field_001C);
    }
    else {
      pcVar13 = (char *)0x0;
    }
    if (pcVar13 == (char *)0x0) {
      pcVar13 = &DAT_008016a0;
    }
    uVar19 = 0xffffffff;
    do {
      pcVar23 = pcVar13;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar23 = pcVar13 + 1;
      cVar8 = *pcVar13;
      pcVar13 = pcVar23;
    } while (cVar8 != '\0');
    uVar19 = ~uVar19;
    pcVar13 = pcVar23 + -uVar19;
    pcVar23 = (char *)&DAT_0080f33a;
    for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar23 = pcVar23 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar23 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar23 = pcVar23 + 1;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar10 = 2;
    }
    else {
      iVar10 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar10);
    break;
  case 0x6582:
  case 0x6583:
  case 0x6584:
  case 0x6585:
    switch(uVar19) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6582:
      cVar8 = DAT_00808a90._1_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._1_1_ == '\0') {
        local_20 = 0x234e;
      }
      else {
LAB_005cab38:
        local_20 = (-(uint)(cVar8 != '\x01') & 3) + 0x234c;
      }
      break;
    case 0x6583:
      cVar8 = (char)DAT_00808a90;
      if ((char)DAT_00808a90 != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6584:
      cVar8 = DAT_00808a90._2_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._2_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x6585:
      cVar8 = DAT_00808a90._3_1_;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_00808a90._3_1_ != '\0') goto LAB_005cab38;
      local_20 = 0x234e;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar10 = 2;
    }
    else {
      iVar10 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    iVar26 = -1;
    iVar16 = -1;
    puVar18 = (uint *)LoadResourceString(local_20,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar18,iVar16,iVar26,iVar10);
    break;
  case 0x6586:
    if (DAT_00808a97 == -1) {
      pcVar13 = LoadResourceString(0x1f55,HINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar13;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar13 + 1;
        cVar8 = *pcVar13;
        pcVar13 = pcVar23;
      } while (cVar8 != '\0');
      uVar19 = ~uVar19;
      pcVar13 = pcVar23 + -uVar19;
      pcVar23 = (char *)&DAT_0080f33a;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar23 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar23 = pcVar23 + 1;
      }
    }
    else {
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1890,DAT_00808a97);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar10 = 2;
    }
    else {
      iVar10 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar10);
    break;
  case 0x6587:
    if (DAT_00808a9b == 0xff) {
      pcVar13 = LoadResourceString(0x1f59,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,pcVar13);
    }
    else {
      iVar10 = DAT_00808a9b + 1;
      pcVar13 = LoadResourceString(0x1f57,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,pcVar13,iVar10);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_00->field_1E1E,0,local_1c,local_18,local_14,
                     local_10);
    if (*(short *)&param_1->field_0x14 == 1) {
      iVar10 = 2;
    }
    else {
      iVar10 = (-(uint)(*(short *)&param_1->field_0x14 != 0) & 2) + 1;
    }
    ccFntTy::WrStr(PTR_0081176c->field_0034,&DAT_0080f33a,-1,-1,iVar10);
    break;
  case 0x6588:
    cVar8 = DAT_00808a95;
    goto LAB_005cad88;
  case 0x6589:
    if (DAT_00808a8f == '\0') break;
LAB_005cadd5:
    pbVar14 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
    iVar10 = (local_10 + -0x10) / 2 + local_18;
    pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
    iVar16 = (local_14 + -0x11) / 2 + local_1c;
    goto cf_common_exit_005CAE0F;
  case 0x658a:
    if (DAT_00808a94 != '\0') {
      pbVar14 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
      iVar10 = (local_10 + -0x10) / 2 + local_18;
      iVar16 = (local_14 + -0x11) / 2 + local_1c;
      pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
      goto cf_common_exit_005CAE0F;
    }
    break;
  case 0x658b:
    cVar8 = DAT_00808aa9;
LAB_005cad88:
    if (cVar8 != '\0') {
      pbVar14 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F,0);
      iVar10 = (local_10 + -0x10) / 2 + local_18;
      iVar16 = (local_14 + -0x11) / 2 + local_1c;
      pAVar25 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1E1E;
cf_common_exit_005CAE0F:
      DibPut(pAVar25,iVar16,iVar10,'\x06',pbVar14);
    }
    break;
  case 0x658c:
    if (DAT_00808aaa != '\0') goto LAB_005cadd5;
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1E22);
  if (*(short *)&param_1->field_0x14 == 3) {
    thunk_FUN_005b6730(this_00,9,'\x01',-1);
  }
LAB_005cae3e:
  g_currentExceptionFrame = local_dc.previous;
  uVar15 = MMObjTy::GetMessage((MMObjTy *)this_00,(int)param_1);
  return uVar15;
}

