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
   direct_offsets={10:3,14:10,18:5,1c:12} */

int __thiscall HelpPanelTy::GetMessage(HelpPanelTy *this,STMessage *message)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  STMessageId SVar3;
  ccFntTy *pcVar4;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  void *pvVar6;
  UINT *pUVar7;
  HelpPanelTy *this_00;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  uint *puVar13;
  LPSTR pCVar14;
  int iVar15;
  uint uVar16;
  DArrayTy *pDVar17;
  uint uVar18;
  ushort uVar19;
  byte bVar20;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar21;
  bool bVar22;
  code *pcVar23;
  UINT UVar24;
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
  uint *local_1c;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8;

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
    puVar10 = &local_20->field_004C;
    FUN_006b1a50(PTR_008075a8,3,(undefined4 *)0x0,puVar10);
    this_00->field_003C = *puVar10;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  PanelTy::GetMessage((PanelTy *)this_00,message);
  SVar3 = message->id;
  if (SVar3 < MESS_OPTPANELTY_C001) {
    if (SVar3 == MESS_SHARED_C000) {
      UVar24 = 0x274e;
      pCVar14 = thunk_FUN_00571240("BUT_MEDIUM",0);
      UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar14,UVar24)
      ;
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 < MESS_SIDTY_8161) {
      if (SVar3 == MESS_SHARED_8160) {
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar4);
        }
        (message->arg1).ptr = (void *)(*(int *)&pcVar4->field_0x8a + 1);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (MESS_SHARED_0060 < SVar3) {
        if (SVar3 == MESS_SHARED_0061) {
          local_c = (uint)(message->arg1).words.low;
          local_8 = (UINT *)(uint)(message->arg1).words.high;
          if (this_00->field_0172 != 1) {
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
            local_1c = (uint *)0x0;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_14 = *(undefined4 **)(this_00->field_01D7 + 0xc);
            if (local_14 == (undefined4 *)0x0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3;
            while( true ) {
              if (local_1c < local_14) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                piVar9 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_1c +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar9 = (int *)0x0;
              }
              local_24 = piVar9[3];
              local_30 = this_00->field_003C + 0x21 + *piVar9;
              local_2c = piVar9[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar9[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_8 < this_00->field_0044 + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            LinkAct(this_00,*(int *)((int)piVar9 + 0x11),*(int *)((int)piVar9 + 0x15));
            uVar16 = *(uint *)((int)piVar9 + 0x15);
            pvVar6 = *(void **)((int)piVar9 + 0x11);
            switch((char)piVar9[4]) {
            case '\x01':
              RCProc(this_00,(int)pvVar6,uVar16,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              ObjProc(this_00,(int)pvVar6,uVar16,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              SubProc(this_00,(int)pvVar6,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              ArmProc(this_00,(int)pvVar6,uVar16,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              TechProc(this_00,(uint)pvVar6,(byte)uVar16,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              TTreeProc(this_00,(uint)pvVar6,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              MObjProc(this_00);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              TipProc(this_00,pvVar6,uVar16,'\0');
              break;
            case '\n':
              IndexBut(this_00);
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              SpecProc(this_00,(int)pvVar6,uVar16,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              NatProc(this_00,(int)pvVar6,'\0');
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              PutToSHlp(this_00,(int)unaff_EDI);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            PutToSHlp(this_00,(int)unaff_EDI);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          case CASE_8:
            if (*(int *)(this_00->field_01D7 + 0xc) == 0) {
              piVar9 = (int *)0x0;
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              piVar9 = *(int **)(this_00->field_01D7 + 0x1c);
            }
            local_30 = this_00->field_003C + 0x21 + *piVar9;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + piVar9[1] + 0x16 +
                       this_00->field_0044;
            local_28 = piVar9[2];
            local_24 = piVar9[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if (!bVar22) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (this_00->field_0044 + 300 <= (int)local_8) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            thunk_FUN_00515180(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (SVar3 == MESS_SHARED_6200) {
          this_00->field_01C3 = message->arg0;
          iVar8 = (ushort)this_00->field_01AF + 0x16;
          Library::DKW::WGR::FUN_006b55f0
                    ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x21,iVar8,
                     (byte *)this_00->field_01DC,0,0x21,iVar8,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF);
          Library::DKW::WGR::FUN_006b5110
                    ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
                     (int)this_00->field_0218,0,0,
                     (uint)(ushort)this_00->field_01B1 * this_00->field_01C3,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF,0xff);
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_6332) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        local_10 = (undefined4 *)(message->arg2).u32;
        if (local_10 == (undefined4 *)0x0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (this_00->field_01D3 == (uint *)0x0) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar4);
        }
        local_18 = *(uint *)&pcVar4->field_0x8a;
        if (DAT_0080874e == '\x03') {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,5);
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_14 = (undefined4 *)CONCAT31(local_14._1_3_,(-(DAT_0080874e != '\x01') & 6U) + 1);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x21,0x16,
                   (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
        pAVar5 = this_00->field_0218;
        local_1c = (uint *)pAVar5->field_0014;
        if (local_1c == (uint *)0x0) {
          local_1c = (uint *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                              0x1ffffffc) * pAVar5->field_0008);
        }
        puVar10 = (undefined4 *)FUN_006b4fa0((int)pAVar5);
        for (uVar16 = (uint)local_1c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = (uint)local_1c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        uVar18 = (uint)(message->arg0).words.high;
        uVar16 = uVar18;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((int)uVar18 < (int)(uVar18 + *(int *)((int)local_10 + 0x1e0))) {
          do {
            if ((int)uVar16 < (int)this_00->field_01D3[2]) {
              local_1c = *(uint **)(this_00->field_01D3[5] + uVar16 * 4);
            }
            else {
              local_1c = (uint *)0x0;
            }
            if (local_1c != (uint *)0x0) {
              ccFntTy::SetSurf(this_00->field_01E4,(int)this_00->field_0218,0,0,
                               (uVar16 - uVar18) * local_18,this_00->field_0218->field_0004,local_18
                              );
              ccFntTy::WrStr(this_00->field_01E4,local_1c,0,-1,(uint)local_14 & 0xff);
            }
            uVar18 = (uint)(message->arg0).words.high;
            uVar16 = uVar16 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          } while ((int)uVar16 < (int)(uVar18 + *(int *)((int)local_10 + 0x1e0)));
        }
        Library::DKW::WGR::FUN_006b5110
                  ((int)this_00->field_0068,0,0x21,0x16,(int)this_00->field_0218,0,0,0,0x19c,0x118,
                   0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (SVar3 != MESS_SHARED_0060) {
        if (SVar3 == MESS_ID_NONE) {
          if (this_00->field_0172 == 3) {
            iVar8 = this_00->field_0050;
            if ((int)this_00->field_0044 < iVar8) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar8 <= (int)this_00->field_0044) {
              this_00->field_0044 = iVar8;
              this_00->field_0172 = 1;
              ShiftControls(this_00,1);
            }
            Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                       this_00->field_0044);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (this_00->field_0172 != 4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar8 = this_00->field_0050 - this_00->field_0048;
          if (iVar8 < (int)this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if ((int)this_00->field_0044 <= iVar8) {
            this_00->field_0044 = iVar8;
            this_00->field_0172 = 2;
          }
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                     this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 == MESS_ID_CREATE) {
          InitHelpPanel(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_0003) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        DoneHelpPanel(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)(message->arg1).words.low;
      local_10 = (undefined4 *)0x0;
      local_c = (uint)(message->arg1).words.high;
      this_00->field_01DB = 0;
      if (this_00->field_0172 == 1) {
        switch(this_00->field_01A1) {
        case CASE_1:
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_B:
        case CASE_C:
          local_8 = (undefined4 *)0x0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_14 = *(undefined4 **)(this_00->field_01D7 + 0xc);
          if (local_14 != (undefined4 *)0x0) {
            do {
              if (local_8 < local_14) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                piVar9 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_8 +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar9 = (int *)0x0;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar9;
              local_3c = piVar9[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar9[2];
              local_34 = piVar9[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case CASE_6:
          if (this_00->field_01A3 == 1) {
            local_8 = (UINT *)&DAT_007c2b58;
            local_14 = (undefined4 *)0x33;
          }
          else if (this_00->field_01A3 == 2) {
            local_8 = (UINT *)&DAT_007c2df0;
            local_14 = (undefined4 *)0x39;
          }
          else {
            local_8 = &DAT_007c30d8;
            local_14 = (undefined4 *)0x46;
          }
          uVar19 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_40 = *(int *)((int)local_8 + (uint)uVar19 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_3c = (*(int *)((int)local_8 + (uint)uVar19 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)
                           thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8 + (uint)uVar19 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar19 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = (undefined4 *)0x0;
                break;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < (ushort)local_14);
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->vtable + 0x18))(0);
      thunk_FUN_005252c0(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(SVar3) {
    case MESS_SIDTY_8161:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pDVar17 = (DArrayTy *)this_00->field_01B3;
      }
      else {
        if (HVar2 != (CASE_8|CASE_2)) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pDVar17 = this_00->field_01BB;
      }
      uVar16 = (uint)(message->arg0).words.low;
      if (uVar16 < pDVar17->count) {
        if (HVar2 == 0) {
          local_8 = (UINT *)(this_00->field_01B3->field_0008 * uVar16 +
                            this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_8 = (UINT *)(this_00->field_01BB->elementSize * uVar16 +
                            (int)this_00->field_01BB->data);
        }
      }
      else {
        local_8 = (UINT *)0x0;
      }
      if (local_8 != (UINT *)0x0) {
        bVar22 = (message->arg0).words.high == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = (uint *)CONCAT31(local_1c._1_3_,!bVar22);
        }
        else if (DAT_0080874e == '\x01') {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = (uint *)CONCAT31(local_1c._1_3_,1);
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar22 + '\a');
        }
        iVar8 = (message->arg1).words.high + 0x16;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0x21,iVar8,
                   (byte *)this_00->field_01DC,0,0x21,iVar8,0x19c,*(int *)(this_00->field_01EC + 8))
        ;
        iVar8 = this_00->field_01EC;
        uVar16 = *(uint *)(iVar8 + 0x14);
        if (uVar16 == 0) {
          uVar16 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                   *(int *)(iVar8 + 8);
        }
        puVar10 = (undefined4 *)FUN_006b4fa0(iVar8);
        for (uVar18 = uVar16 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01E4,this_00->field_01EC,0,0,0,0,0);
        pcVar12 = LoadResourceString(local_18,g_module_00807618);
        uVar16 = 0xffffffff;
        do {
          pcVar21 = pcVar12;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar21 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar12 = pcVar21 + -uVar16;
        pcVar21 = (char *)&DAT_0080f33a;
        for (uVar18 = uVar16 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar21 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar21 = pcVar21 + 1;
        }
        puVar13 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
        pUVar7 = local_8;
        while (local_8 = pUVar7, puVar13 != (uint *)0x0) {
          *(undefined1 *)puVar13 = 0x20;
          puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n');
          pUVar7 = local_8;
        }
        ccFntTy::WrStr(this_00->field_01E4,&DAT_0080f33a,
                       (uint)*(byte *)((int)pUVar7 + 0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == 0) && (*(byte *)((int)pUVar7 + 0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c = (uint *)CONCAT31(local_1c._1_3_,0x29);
          }
          else {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_1c = (uint *)CONCAT31(local_1c._1_3_,(-(DAT_0080874e != '\x01') & 0x43U) + 0x10);
          }
          iVar15 = (uint)*(byte *)((int)pUVar7 + 0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar8 = (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008 / 2;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar15,iVar8,iVar15 + 8,
                       iVar8,(byte)local_1c,0xd);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            iVar8 = *(int *)(this_00->field_01EC + 8);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar15 = (uint)*(byte *)((int)local_8 + 0x11) * 0x14;
          FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar15,0,iVar15,iVar8,
                       (byte)local_10,0xd);
          local_14 = (undefined4 *)0x0;
          local_c = (uint)(message->arg0).words.low;
          local_18 = *(uint *)&this_00->field_01B3->field_0xc;
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar8 = this_00->field_01B3->field_0008 * (int)local_1c +
                      this_00->field_01B3->field_001C;
            }
            else {
              iVar8 = 0;
            }
            if ((iVar8 == 0) || (bVar20 = *(byte *)(iVar8 + 0x11), bVar20 == 0)) goto LAB_0051ef61;
            uVar16 = local_c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (bVar20 < *(byte *)((int)local_8 + 0x11)) {
              do {
                uVar16 = uVar16 - 1;
                if ((int)uVar16 < 1) goto joined_r0x0051eec7;
                if (uVar16 < local_18) {
                  iVar8 = this_00->field_01B3->field_0008 * uVar16 + this_00->field_01B3->field_001C
                  ;
                }
                else {
                  iVar8 = 0;
                }
                if ((iVar8 == 0) || (*(byte *)(iVar8 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar8 + 0x11) != bVar20);
              if (*(char *)(iVar8 + 0x13) == '\0') {
                local_14 = (undefined4 *)((uint)local_14 | 1 << (bVar20 & 0x1f));
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar20 = 0;
          iVar8 = 0;
          do {
            if (((uint)local_14 & 1 << (bVar20 & 0x1f)) != 0) {
              FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar8,0,iVar8,
                           (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008,
                           (byte)local_10,0xd);
            }
            iVar8 = iVar8 + 0x14;
            bVar20 = bVar20 + 1;
          } while (iVar8 < 0x280);
        }
        FUN_006b5440((int)this_00->field_0068,0,0x21,(message->arg1).words.high + 0x16,
                     this_00->field_01EC,0,0xff);
      }
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8162:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pDVar17 = (DArrayTy *)this_00->field_01B3;
      }
      else {
        if (HVar2 != (CASE_8|CASE_2)) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pDVar17 = this_00->field_01BB;
      }
      uVar16 = (message->arg0).u32;
      if (uVar16 < pDVar17->count) {
        if (HVar2 == 0) {
          local_1c = (uint *)(this_00->field_01B3->field_0008 * uVar16 +
                             this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_1c = (uint *)(this_00->field_01BB->elementSize * uVar16 +
                             (int)this_00->field_01BB->data);
        }
      }
      else {
        local_1c = (uint *)0x0;
      }
      if (local_1c == (uint *)0x0) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar22 = false;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar16 = *(uint *)((int)local_1c + 0xd);
      pvVar6 = *(void **)((int)local_1c + 9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        RCProc(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x02':
        ObjProc(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x03':
        SubProc(this_00,(int)pvVar6,'\0');
        break;
      case '\x04':
        ArmProc(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x05':
        TechProc(this_00,(uint)pvVar6,(byte)uVar16,'\0');
        break;
      case '\x06':
        TTreeProc(this_00,(uint)pvVar6,'\0');
        break;
      case '\a':
        MObjProc(this_00);
        break;
      case '\b':
        TipProc(this_00,pvVar6,uVar16,'\0');
        break;
      case '\n':
        IndexBut(this_00);
        break;
      case '\v':
        SpecProc(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\f':
        NatProc(this_00,(int)pvVar6,'\0');
      }
      bVar22 = true;
switchD_0051ea9b_caseD_0:
      if (bVar22) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      ChangeTree(this_00,(int *)local_1c,(message->arg0).i32);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SIDTY_8163:
      if (this_00->field_01A1 != (CASE_8|CASE_2)) {
        this_00->field_01B7 = message->arg0;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(STMessageArg *)&this_00->field_0x1bf = message->arg0;
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8164:
      pcVar23 = thunk_FUN_00529fe0;
      pCVar14 = thunk_FUN_00571240("BUT_SLUP",0);
      bVar20 = 6;
      break;
    case MESS_OPTPANELTY_8165:
      pcVar23 = thunk_FUN_00529fe0;
      pCVar14 = thunk_FUN_00571240("BUT_SLDN",0);
      bVar20 = 6;
      break;
    case MESS_SHARED_8166:
      pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,0);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x1c3,0x2d,'\x06',pbVar11);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,
                                     (*(int *)((message->arg2).u32 + 0x1c) != 1) + 1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x1c3,
             (message->arg0).words.high + 0x2d,'\x06',pbVar11);
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
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
      HomeBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    case MESS_BEHPANELTY_C0A0:
      BackBut(this_00,unaff_EDI);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FSGSTY_C0A1:
      IndexBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A2:
      PrevBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A3:
      NextBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BLDLABPANELTY_C0A4:
      BwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FRMPANELTY_C0A5:
      FwdBut(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    case MESS_INTERCOMPANELTY_C0AF:
      pcVar12 = "BUT_HLPHOME";
      break;
    case 0xc0b0:
      pcVar12 = "BUT_HLPBACK";
      break;
    case MESS_BEHPANELTY_C0B1:
      pcVar12 = "BUT_HLPINDEX";
      break;
    case 0xc0b2:
      pcVar12 = "BUT_HLPPREV";
      break;
    case MESS_BLDLABPANELTY_C0B3:
      pcVar12 = "BUT_HLPNEXT";
      break;
    case MESS_RESEARCHPANELTY_C0B4:
      pcVar12 = "BUT_HLPBWD";
      break;
    case MESS_SHARED_C0B5:
      pcVar12 = "BUT_HLPFWD";
    }
    pcVar23 = thunk_FUN_00529f90;
    pCVar14 = thunk_FUN_00571240(pcVar12,0);
    bVar20 = 1;
  }
  UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar20,pCVar14,
                     pcVar23);
cf_common_exit_0051F19A:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (this_00->field_01A3 == 1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (this_00->field_01A3 == 2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar19 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_30 = *(int *)((int)local_10 + (uint)uVar19 * 0xd + 5) + 0x21 + this_00->field_003C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_2c = (*(int *)((int)local_10 + (uint)uVar19 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((bVar22) && ((int)local_8 < this_00->field_0044 + 300)) break;
    uVar19 = uVar19 + 1;
    if ((ushort)local_18 <= uVar19) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  TechProc(this_00,*(uint *)((int)local_10 + (uint)uVar19 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar19 * 0xd + 4),'\0');
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  PutToSHlp(this_00,(int)unaff_EDI);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  UVar24 = this_00->field_0178;
  if ((undefined4 *)UVar24 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (UVar24 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_002E = 2;
    *(UINT *)&this_00->field_0x30 = UVar24;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
    }
  }
  this_00->field_0178 = local_10;
  if (local_10 == (undefined4 *)0x0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  this_00->field_0028 = 0x4201;
  *(undefined2 *)&this_00->field_0x2c = 0;
  this_00->field_002E = 2;
  *(undefined4 **)&this_00->field_0x30 = local_10;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

