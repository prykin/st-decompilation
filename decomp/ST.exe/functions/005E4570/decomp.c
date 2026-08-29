#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005E4570; family_names=MTaskTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:15,18:3,1c:5} */

int __thiscall MTaskTy::GetMessage(MTaskTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  ccFntTy *pcVar4;
  AnonPointee_MTaskTy_06BF *pAVar5;
  MTaskTy *this_00;
  byte bVar7;
  int iVar8;
  int local_EAX_49;
  DArrayTy *pDVar9;
  uint *puVar10;
  BITMAPINFO *pBVar11;
  char *pcVar12;
  uint *puVar12;
  int iVar9;
  int iVar22;
  uint uVar13;
  RecoveredRecordView_005E10A0_0590A448 *pRVar14;
  UINT UVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  SpriteClassTy *this_01;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  AnonShape_005E4570_1DAE8C90 *local_1c;
  MTaskTy *local_18;
  char *local_14;
  uint local_10;
  int *local_c;
  AnonShape_005E4570_F1672769 *local_8;

  local_18 = this;

  iVar8 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0065 = iVar8;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;

  local_EAX_49 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_68.previous;

    iVar22 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x5b5,0,local_EAX_49,
                                "%s","MTaskTy::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_49,0,"E:\\__titans\\Start\\task_obj.cpp",0x5b5);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < MESS_MREPORTTY_6214) {
    if (SVar2 == MESS_MTASKTY_6213) {
      /* ST_CALLSITE[005E4B67]: CALL 0x00401a5a; direct=00401A5A MTaskTy::PaintBut */
      PaintBut(local_18,(RecoveredRecord_005E4300_441EBD84 *)&local_18->field_0x65f,0x24bc,4,1,
               (message->arg0).words.low);

      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[1]);
      goto cf_common_exit_005E525B;
    }
    if (SVar2 < MESS_PLAYPANELTY_6201) {
      if (SVar2 == MESS_SHARED_6200) {
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {

          thunk_FUN_005b66e0(this_00);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = 0x6102;
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;

          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        goto cf_common_exit_005E525B;
      }
      switch(SVar2) {
      case MESS_ID_NONE:
        /* ST_CALLSITE[005E462F]: CALL 0x0040100f; direct=0040100F MTaskTy::NoneMTask */
        NoneMTask(local_18);
        break;
      case MESS_ID_CREATE:
        /* ST_CALLSITE[005E460B]: CALL 0x00402f5e; direct=00402F5E MTaskTy::InitMTask */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        InitMTask(local_18,*(char *)((message->arg0).u32 + 0x14),
                  *(undefined1 *)((message->arg0).u32 + 0x18));
        break;
      case MESS_SHARED_0003:
        /* ST_CALLSITE[005E4617]: CALL 0x00402329; direct=00402329 MTaskTy::DoneMTask */
        DoneMTask(local_18);
        break;
      case MESS_SHARED_0005:
        /* ST_CALLSITE[005E4623]: CALL 0x00403670; direct=00403670 MTaskTy::PaintMTask */
        PaintMTask(local_18);
        break;
      case MESS_TRACKBARCLASSTY_0062:
        if (DAT_0080fb6e == 0) {
          if (local_18->field_006D == CASE_1) {

            thunk_FUN_005b66e0(local_18);
            uVar16 = 0xffffffff;
            pcVar18 = &CHAR_00h_0080ed16;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar1 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar19 + -uVar16;
            pcVar19 = (char *)&DAT_0080ee1a;
            memmove(pcVar19, pcVar18, uVar16); /* compiler REP MOVS byte copy */
            uVar13 = 0;
            this_00->field_004D = 0x60ff;
            this_00->field_0049 = 1;
          }
        }
        else {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;

          FUN_006e6020(local_18,(undefined4 *)&local_18->field_0x3d);
        }
        break;
      case MESS_SHARED_0064:
        iVar8 = 1;
        if (local_18->field_006D != CASE_1) {
          local_18->field_006D = CASE_5;
          /* ST_CALLSITE[005E4721]: CALL 0x00405c18; direct=00405C18 MTaskTy::PlayScript */
          PlayScript(local_18);
          iVar21 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar8);
            iVar8 = iVar8 + 1;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
          break;
        }
        if (DAT_0080fb6e != 0) {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;

          FUN_006e6020(local_18,(undefined4 *)&local_18->field_0x3d);
          break;
        }

        thunk_FUN_005b66e0(local_18);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar7 = this_00->field_006F;
        if (bVar7 == 2) {
          this_00->field_0051 = 1;
          break;
        }
        goto LAB_005e470e;
      }
    }
    else {
      switch(SVar2) {
      case MESS_PLAYPANELTY_6201:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e != 0) {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;

          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
          break;
        }

        thunk_FUN_005b66e0(this_00);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar7 = this_00->field_006F;
        if (bVar7 == 2) {
          this_00->field_0051 = 1;
          break;
        }
LAB_005e470e:
        this_00->field_0051 = (uint)bVar7;
        break;
      case MESS_PLAYPANELTY_6202:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          this_00->field_0049 = 1;
          if (this_00->field_006E == '\x01') {
            this_00->field_004D = 0x6108;

            thunk_FUN_005b66e0(this_00);
          }
          else {
            uVar16 = 0xffffffff;
            pcVar18 = &CHAR_00h_0080ed16;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar1 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar19 + -uVar16;
            pcVar19 = (char *)&DAT_0080ee1a;
            memmove(pcVar19, pcVar18, uVar16); /* compiler REP MOVS byte copy */
            this_00->field_004D = 0x60ff;

            thunk_FUN_005b66e0(this_00);
          }
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;

          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        break;
      case MESS_SETTMAPTY_6203:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        this_00->field_007C = 0;
        this_00->field_0061 = this_00->field_0069;
        /* ST_CALLSITE[005E48C5]: CALL 0x00401d43; direct=00401D43 DarkScreen */
        DarkScreen(g_dDXContext_0080759C,1,0);
        pDVar9 = this_00->field_064F;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              pRVar14 = nullptr;
              goto LAB_005e48f3;
            }
            do {
              pRVar14 = DArrayAt<RecoveredRecordView_005E10A0_0590A448>(pDVar9, uVar16);
LAB_005e48f3:
              /* ST_CALLSITE[005E48F6]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
              TTaskItemClose(this_00,pRVar14);
              pDVar9 = this_00->field_064F;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        pDVar9 = this_00->field_0647;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              pRVar14 = nullptr;
              goto LAB_005e492f;
            }
            do {
              pRVar14 = DArrayAt<RecoveredRecordView_005E10A0_0590A448>(pDVar9, uVar16);
LAB_005e492f:
              /* ST_CALLSITE[005E4932]: CALL 0x0040555b; direct=0040555B MTaskTy::TTaskItemClose */
              TTaskItemClose(this_00,pRVar14);
              pDVar9 = this_00->field_0647;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        pDVar9 = this_00->field_064B;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              this_01 = nullptr;
              goto LAB_005e496b;
            }
            do {
              this_01 = DArrayAt<SpriteClassTy>(pDVar9, uVar16);
LAB_005e496b:

              SpriteClassTy::CloseSprite(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                FreeAndNull((void *)((int)&this_01[1].field_0008 + 1));
              }
              pDVar9 = this_00->field_064B;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        if (this_00->field_02CD != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
          this_00->field_02CD = 0;
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_0484);
        if (this_00->field_02D5 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_0319,this_00->field_02D5);
        }
        if (this_00->field_0366 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_03AA,this_00->field_0366);
        }
        if (this_00->field_03F7 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_043B,this_00->field_03F7);
        }
        puVar17 = &this_00->field_02BD;
        iVar8 = 4;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar17);
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (this_00->field_02B9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar17 = this_00->field_0291;
        iVar8 = 5;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,puVar17[5]);
          if (*puVar17 != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar17);
            *puVar17 = 0;
          }
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        /* ST_CALLSITE[005E4A82]: CALL 0x00403670; direct=00403670 MTaskTy::PaintMTask */
        PaintMTask(this_00);
        this_00->field_006D = CASE_3;

        Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0074,&this_00->field_0078->flags);
        /* ST_CALLSITE[005E4A98]: CALL 0x00405c18; direct=00405C18 MTaskTy::PlayScript */
        PlayScript(this_00);
        thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                           this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != CASE_1) {
          local_18->field_006D = CASE_5;
          /* ST_CALLSITE[005E4AD1]: CALL 0x00405c18; direct=00405C18 MTaskTy::PlayScript */
          PlayScript(local_18);
          iVar8 = 1;
          iVar21 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar8);
            iVar8 = iVar8 + 1;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        break;
      case MESS_SHARED_6200|MESS_SHARED_0005:
        pcVar18 = (message->arg0).ptr;
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar18 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case MESS_MTASKTY_6212:
        /* ST_CALLSITE[005E4B34]: CALL 0x00401a5a; direct=00401A5A MTaskTy::PaintBut */
        PaintBut(local_18,(RecoveredRecord_005E4300_441EBD84 *)&local_18->field_0653,0x26ac,4,1,
                 (message->arg0).words.low);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[0]);
      }
    }
    goto cf_common_exit_005E525B;
  }
  if (SVar2 < MESS_WAITTY_6335) {
    if (SVar2 == MESS_SHARED_6334) {
      /* ST_CALLSITE[005E4FEE]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_0362,
                 (RecoveredRecord_005B6560_90DC7408 *)message,local_18->field_06CA == '\x01');
    }
    else if (SVar2 < 0x6218) {
      if (SVar2 == MESS_MTASKTY_6217) {
        local_c = (message->arg0).ptr;
        local_24 = (undefined4 *)0x1f52;
        local_1c = (AnonShape_005E4570_1DAE8C90 *)(&local_18->field_0x683 + *local_c * 0xc);
        pRVar3 = *(RecoveredSourceFamily_dibcopy **)local_1c;
        local_8 = (AnonShape_005E4570_F1672769 *)pRVar3->field_0008;
        local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)((-(local_1c->field_000A != '\x01') & 0xecU) + 0x2c));
        if (local_c[1] == 3) {
          local_14 = (char *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)((-(local_1c->field_0x8 != '\x01') & 0xfeU) + 3));
        }
        else {
          local_14 = (char *)(STReplaceLowByte((uint32_t)(local_14), (uint8_t)((local_1c->field_0x8 != '\x01') + -1)) &
                             0xffffff02);
        }
        local_10 = pRVar3[1].field_0004;
        if (local_10 == 0) {
          local_10 = ((uint)pRVar3->field_000E * pRVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                     (int)local_8;
        }

        puVar10 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pRVar3));
        for (uVar16 = local_10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = local_10 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_006c7610(pRVar3,0,0,0,0x16,(uint)local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          /* ST_CALLSITE[005E4D51]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar11 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0081,
                                 (uint)(local_1c->field_000B == '\x01'));
          /* ST_CALLSITE[005E4D68]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut(pRVar3,2,(int)&local_8[-1].field_0x1d4 / 2,'\x06',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar11);
        }
        FUN_006c7570(pRVar3,0,0,0,(undefined4 *)0x16,(int)local_8,2,(byte)local_20);
        iVar8 = *local_c;
        if (iVar8 == 1) {
          puVar10 = (undefined4 *)0x1f47;
        }
        else if (iVar8 == 2) {
          puVar10 = (undefined4 *)0x1f48;
        }
        else {
          puVar10 = local_24;
          if (iVar8 == 3) {
            puVar10 = (undefined4 *)0x1f49;
          }
        }

        ccFntTy::SetSurf(this_00->field_008D,(int)pRVar3,0,0x1b,0,pRVar3->field_0004 + -0x1b,
                         (int)local_8);
        uVar16 = (uint)local_14 & 0xff;
        iVar21 = -1;
        iVar8 = 0;
        /* ST_CALLSITE[005E4DE3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar12 = LoadResourceString((UINT)puVar10,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_008D,pcVar12,iVar8,iVar21,uVar16);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[*local_c + 5]);
      }
      else if (SVar2 == MESS_MREPORTTY_6214) {
        if (local_18->field_006E == '\0') {
          UVar15 = 0x2343;
        }
        else {
          UVar15 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        /* ST_CALLSITE[005E4C55]: CALL 0x00401a5a; direct=00401A5A MTaskTy::PaintBut */
        PaintBut(local_18,(RecoveredRecord_005E4300_441EBD84 *)&local_18->field_0x66b,UVar15,4,1,
                 (message->arg0).words.low);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[2]);
      }
      else if (SVar2 == MESS_MREPORTTY_6215) {
        /* ST_CALLSITE[005E4C05]: CALL 0x00401a5a; direct=00401A5A MTaskTy::PaintBut */
        PaintBut(local_18,(RecoveredRecord_005E4300_441EBD84 *)&local_18->field_0x677,0x2358,4,1,
                 (message->arg0).words.low);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[3]);
      }
      else if (SVar2 == MESS_MTASKTY_6216) {
        /* ST_CALLSITE[005E4BD1]: CALL 0x00401a5a; direct=00401A5A MTaskTy::PaintBut */
        PaintBut(local_18,(RecoveredRecord_005E4300_441EBD84 *)&local_18->field_0x683,0x235e,4,1,
                 (message->arg0).words.low);

        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[4]);
      }
    }
    else if (SVar2 == MESS_SHARED_6332) {
      if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
         (local_8 = (message->arg2).ptr, local_8 != nullptr)) {
        pcVar4 = local_18->field_008D;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar4);
        }
        local_20 = *(int *)&pcVar4->field_0x8a;
        pAVar5 = this_00->field_06BF;
        if (pAVar5 != nullptr) {
          local_14 = (char *)pAVar5->field_0014;
          local_24 = (undefined4 *)pAVar5->field_0004;
          local_10 = pAVar5->field_0008;
          if (local_14 == nullptr) {
            local_14 = (char *)(((uint)(ushort)pAVar5->field_000E * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }

          puVar12 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pAVar5));
          puVar10 = local_24;
          for (uVar16 = (uint)local_14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 1;
          }
          for (uVar16 = (uint)local_14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar12 = 0xff;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          FUN_006c7610((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,puVar10,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          uVar13 = (uint)(message->arg0).words.high;
          uVar16 = uVar13;
          if ((int)uVar13 < (int)(uVar13 + local_8->field_01E0)) {
            do {
              if ((int)uVar16 < (int)g_startSystem_0081176C->field_0548[2]) {
                local_14 = *(char **)(g_startSystem_0081176C->field_0548[5] + uVar16 * 4);
              }
              else {
                local_14 = nullptr;
              }
              if (local_14 != nullptr) {

                ccFntTy::SetSurf(this_00->field_008D,(int)pAVar5,0,0xf,
                                 (uVar16 - uVar13) * local_20 + 0xf,local_8->field_002C,local_20);

                ccFntTy::WrStr(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar16 = uVar16 + 1;
              uVar13 = (uint)(message->arg0).words.high;
            } while ((int)uVar16 < (int)(uVar13 + local_8->field_01E0));
          }

          FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_0484);
        }
      }
    }
    else if (SVar2 == MESS_WAITTY_6333) {
      /* ST_CALLSITE[005E4E38]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_02D1,
                 (RecoveredRecord_005B6560_90DC7408 *)message,local_18->field_06CA == '\x01');
    }
    goto cf_common_exit_005E525B;
  }
  switch(SVar2) {
  case MESS_WAITTY_6335:
    local_18->field_0413 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar16 = local_18->field_03F7;
    if (uVar16 == 0xffffffff) break;
    uVar13 = local_18->field_0413;
    uVar22 = local_18->field_040F;
    uVar20 = local_18->field_03FB;
    puVar17 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  case MESS_SHARED_6334|MESS_ID_CREATE:
    if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
       ((local_8 = (message->arg2).ptr, local_8 != nullptr &&
        (pRVar3 = (RecoveredSourceFamily_dibcopy *)local_18->field_06CB,
        pRVar3 != nullptr)))) {
      local_24 = (undefined4 *)pRVar3->field_0004;
      pcVar4 = local_18->field_008D;
      local_10 = pRVar3->field_0008;
      if (pcVar4->field_00A0 != 0) {
        FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar4);
      }
      local_14 = (char *)pRVar3[1].field_0004;
      local_20 = *(int *)&pcVar4->field_0x8a;
      if (local_14 == nullptr) {
        local_14 = (char *)(((uint)pRVar3->field_000E * pRVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc)
                           * pRVar3->field_0008);
      }

      puVar12 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pRVar3));
      puVar10 = local_24;
      for (uVar16 = (uint)local_14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 1;
      }
      for (uVar16 = (uint)local_14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar12 = 0xff;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_006c7610(pRVar3,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570(pRVar3,0,0,0,puVar10,local_10,2,(-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c
                  );
      uVar13 = (uint)(message->arg0).words.high;
      uVar16 = uVar13;
      if ((int)uVar13 < (int)(uVar13 + local_8->field_01E0)) {
        do {
          if ((int)uVar16 < (int)this_00->field_0643->elementSize) {
            local_14 = *(char **)(this_00->field_0643->growCapacity + uVar16 * 4);
          }
          else {
            local_14 = nullptr;
          }
          if (local_14 != nullptr) {

            ccFntTy::SetSurf(this_00->field_0089,(int)pRVar3,0,0xf,
                             (uVar16 - uVar13) * local_20 + 0xf,local_8->field_002C,local_20);

            ccFntTy::WrStr(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar16 = uVar16 + 1;
          uVar13 = (uint)(message->arg0).words.high;
        } while ((int)uVar16 < (int)(uVar13 + local_8->field_01E0));
      }

      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_063F);
    }
    break;
  case MESS_SHARED_6334|MESS_SHARED_0003:
    /* ST_CALLSITE[005E51F5]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_048C,
               (RecoveredRecord_005B6560_90DC7408 *)message,local_18->field_06D6 == '\x01');
    break;
  case 0x6338:
    /* ST_CALLSITE[005E5213]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_051D,
               (RecoveredRecord_005B6560_90DC7408 *)message,local_18->field_06D6 == '\x01');
    break;
  case MESS_MTASKTY_6339:
    local_18->field_05CE = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar16 = local_18->field_05B2;
    if (uVar16 == 0xffffffff) break;
    uVar13 = local_18->field_05CE;
    uVar22 = local_18->field_05CA;
    uVar20 = local_18->field_05B6;
    puVar17 = (uint *)local_18->field_05F6;
LAB_005e5255:

    Library::DKW::DDX::FUN_006b3730(puVar17,uVar16,uVar20,uVar22,uVar13);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;

  iVar9 = FUN_006e5fd0(this_00,message);
  return iVar9;
}

