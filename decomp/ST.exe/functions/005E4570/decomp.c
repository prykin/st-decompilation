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
  AnonShape_006B5B10_E0D06CF1 *pAVar3;
  ccFntTy *pcVar4;
  AnonPointee_MTaskTy_06BF *pAVar5;
  AnonPointee_MTaskTy_06CB *pAVar6;
  code *pcVar7;
  MTaskTy *this_00;
  byte bVar8;
  DWORD DVar9;
  int iVar10;
  DArrayTy *pDVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  uint *puVar14;
  undefined4 *puVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  uint uVar16;
  AnonShape_005E10A0_819783CC *pAVar17;
  undefined3 uVar20;
  UINT UVar18;
  uint uVar19;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined3 uVar21;
  char *pcVar22;
  SpriteClassTy *this_01;
  char *pcVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  AnonShape_005E4570_1DAE8C90 *local_1c;
  MTaskTy *local_18;
  uint *local_14;
  uint local_10;
  int *local_c;
  AnonShape_005E4570_F1672769 *local_8;

  local_18 = this;
  DVar9 = FUN_006e51b0(this->field_0010);
  this->field_0065 = DVar9;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar10 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_18;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar25 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x5b5,0,iVar10,
                                "%s","MTaskTy::GetMessage");
    if (iVar25 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar10,0,"E:\\__titans\\Start\\task_obj.cpp",0x5b5);
    return 0xffff;
  }
  SVar2 = message->id;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar21 = (undefined3)((uint)extraout_EDX >> 8);
  if (SVar2 < MESS_MREPORTTY_6214) {
    if (SVar2 == MESS_MTASKTY_6213) {
      PaintBut(local_18,(int *)&local_18->field_0x65f,0x24bc,4,1,(message->arg0).words.low);
      FUN_006b35d0(DAT_008075a8,this_00->field_02A9);
      goto cf_common_exit_005E525B;
    }
    if (SVar2 < MESS_PLAYPANELTY_6201) {
      if (SVar2 == MESS_SHARED_6200) {
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
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
        NoneMTask(local_18);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case MESS_ID_CREATE:
        InitMTask(local_18,*(char *)((message->arg0).u32 + 0x14),
                  *(undefined1 *)((message->arg0).u32 + 0x18));
        break;
      case MESS_SHARED_0003:
        DoneMTask(local_18);
        break;
      case MESS_SHARED_0005:
        PaintMTask(local_18);
        break;
      case MESS_TRACKBARCLASSTY_0062:
        if (DAT_0080fb6e == 0) {
          if (local_18->field_006D == '\x01') {
            thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)local_18);
            uVar19 = 0xffffffff;
            pcVar22 = &DAT_0080ed16;
            do {
              pcVar23 = pcVar22;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar23 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar23;
            } while (cVar1 != '\0');
            uVar19 = ~uVar19;
            pcVar22 = pcVar23 + -uVar19;
            pcVar23 = (char *)&DAT_0080ee1a;
            for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar23 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar23 = pcVar23 + 1;
            }
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
        iVar10 = 1;
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar25 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar10);
            iVar10 = iVar10 + 1;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          break;
        }
        if (DAT_0080fb6e != 0) {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;
          FUN_006e6020(local_18,(undefined4 *)&local_18->field_0x3d);
          break;
        }
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)local_18);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar8 = this_00->field_006F;
        if (bVar8 == 2) {
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
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar8 = this_00->field_006F;
        if (bVar8 == 2) {
          this_00->field_0051 = 1;
          break;
        }
LAB_005e470e:
        this_00->field_0051 = (uint)bVar8;
        break;
      case MESS_PLAYPANELTY_6202:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          this_00->field_0049 = 1;
          if (this_00->field_006E == '\x01') {
            this_00->field_004D = 0x6108;
            thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
          }
          else {
            uVar19 = 0xffffffff;
            pcVar22 = &DAT_0080ed16;
            do {
              pcVar23 = pcVar22;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar23 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar23;
            } while (cVar1 != '\0');
            uVar19 = ~uVar19;
            pcVar22 = pcVar23 + -uVar19;
            pcVar23 = (char *)&DAT_0080ee1a;
            for (uVar16 = uVar19 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pcVar23 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar23 = pcVar23 + 1;
            }
            this_00->field_004D = 0x60ff;
            thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
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
        DarkScreen(DAT_0080759c,1,0);
        pDVar11 = this_00->field_064F;
        if (pDVar11 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar11->count != 0) {
            if (pDVar11->count == 0) {
              pAVar17 = (AnonShape_005E10A0_819783CC *)0x0;
              goto LAB_005e48f3;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar11, uVar19) (runtime stride) */
              pAVar17 = (AnonShape_005E10A0_819783CC *)
                        (pDVar11->elementSize * uVar19 + (int)pDVar11->data);
LAB_005e48f3:
              TTaskItemClose(this_00,pAVar17);
              pDVar11 = this_00->field_064F;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar11->count);
          }
        }
        pDVar11 = this_00->field_0647;
        if (pDVar11 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar11->count != 0) {
            if (pDVar11->count == 0) {
              pAVar17 = (AnonShape_005E10A0_819783CC *)0x0;
              goto LAB_005e492f;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar11, uVar19) (runtime stride) */
              pAVar17 = (AnonShape_005E10A0_819783CC *)
                        (pDVar11->elementSize * uVar19 + (int)pDVar11->data);
LAB_005e492f:
              TTaskItemClose(this_00,pAVar17);
              pDVar11 = this_00->field_0647;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar11->count);
          }
        }
        pDVar11 = this_00->field_064B;
        if (pDVar11 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar11->count != 0) {
            if (pDVar11->count == 0) {
              this_01 = (SpriteClassTy *)0x0;
              goto LAB_005e496b;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar11, uVar19) (runtime stride) */
              this_01 = (SpriteClassTy *)(pDVar11->elementSize * uVar19 + (int)pDVar11->data);
LAB_005e496b:
              SpriteClassTy::CloseSprite(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                FreeAndNull((void **)((int)&this_01[1].field_0008 + 1));
              }
              pDVar11 = this_00->field_064B;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar11->count);
          }
        }
        if (this_00->field_02CD != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
          this_00->field_02CD = 0;
        }
        FUN_006b3af0(DAT_008075a8,this_00->field_0484);
        if (this_00->field_02D5 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_0319,this_00->field_02D5);
        }
        if (this_00->field_0366 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_03AA,this_00->field_0366);
        }
        if (this_00->field_03F7 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_043B,this_00->field_03F7);
        }
        puVar14 = &this_00->field_02BD;
        iVar10 = 4;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar14);
          puVar14 = puVar14 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        if (this_00->field_02B9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar14 = &this_00->field_0291;
        iVar10 = 5;
        do {
          FUN_006b3af0(DAT_008075a8,puVar14[5]);
          if (*puVar14 != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar14);
            *puVar14 = 0;
          }
          puVar14 = puVar14 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        PaintMTask(this_00);
        this_00->field_006D = 3;
        Library::DKW::TBL::FUN_006afe40(&this_00->field_0074,(uint *)this_00->field_0078);
        PlayScript(this_00);
        thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,(int)this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar10 = 1;
          iVar25 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar10);
            iVar10 = iVar10 + 1;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        break;
      case MESS_SHARED_6200|MESS_SHARED_0005:
        pcVar22 = (message->arg0).ptr;
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar22 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case MESS_MTASKTY_6212:
        PaintBut(local_18,&local_18->field_0653,0x26ac,4,1,(message->arg0).words.low);
        FUN_006b35d0(DAT_008075a8,this_00->field_02A5);
      }
    }
    goto cf_common_exit_005E525B;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar20 = (undefined3)((uint)extraout_ECX >> 8);
  if (SVar2 < MESS_WAITTY_6335) {
    if (SVar2 == MESS_SHARED_6334) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_0362,
                 (int)message,CONCAT31(uVar21,local_18->field_06CA == '\x01'));
    }
    else if (SVar2 < 0x6218) {
      if (SVar2 == MESS_MTASKTY_6217) {
        local_c = (message->arg0).ptr;
        local_24 = (undefined4 *)0x1f52;
        local_1c = (AnonShape_005E4570_1DAE8C90 *)(&local_18->field_0x683 + *local_c * 0xc);
        pAVar3 = *(AnonShape_006B5B10_E0D06CF1 **)local_1c;
        local_8 = (AnonShape_005E4570_F1672769 *)pAVar3->field_0008;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_20 = CONCAT31(local_20._1_3_,(-(local_1c->field_000A != '\x01') & 0xecU) + 0x2c);
        if (local_c[1] == 3) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_14 = (uint *)CONCAT31(local_14._1_3_,(-(local_1c->field_0x8 != '\x01') & 0xfeU) + 3)
          ;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_14 = (uint *)(CONCAT31(local_14._1_3_,(local_1c->field_0x8 != '\x01') + -1) &
                             0xffffff02);
        }
        local_10 = pAVar3[1].field_0004;
        if (local_10 == 0) {
          local_10 = ((uint)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                     (int)local_8;
        }
        puVar12 = (undefined4 *)FUN_006b4fa0((int)pAVar3);
        for (uVar19 = local_10 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar12 = 0xffffffff;
          puVar12 = puVar12 + 1;
        }
        for (uVar19 = local_10 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined1 *)puVar12 = 0xff;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        FUN_006c7610(pAVar3,0,0,0,0x16,(uint)local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pbVar13 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0081,
                                         (uint)(local_1c->field_000B == '\x01'));
          DibPut(pAVar3,2,(int)&local_8[-1].field_0x1d4 / 2,'\x06',pbVar13);
        }
        FUN_006c7570(pAVar3,0,0,0,(undefined4 *)0x16,(int)local_8,2,(byte)local_20);
        iVar10 = *local_c;
        if (iVar10 == 1) {
          puVar12 = (undefined4 *)0x1f47;
        }
        else if (iVar10 == 2) {
          puVar12 = (undefined4 *)0x1f48;
        }
        else {
          puVar12 = local_24;
          if (iVar10 == 3) {
            puVar12 = (undefined4 *)0x1f49;
          }
        }
        ccFntTy::SetSurf(this_00->field_008D,(int)pAVar3,0,0x1b,0,pAVar3->field_0004 + -0x1b,
                         (int)local_8);
        uVar19 = (uint)local_14 & 0xff;
        iVar25 = -1;
        iVar10 = 0;
        puVar14 = (uint *)LoadResourceString((UINT)puVar12,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_008D,puVar14,iVar10,iVar25,uVar19);
        FUN_006b35d0(DAT_008075a8,(&this_00->field_02B9)[*local_c]);
      }
      else if (SVar2 == MESS_MREPORTTY_6214) {
        if (local_18->field_006E == '\0') {
          UVar18 = 0x2343;
        }
        else {
          UVar18 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        PaintBut(local_18,(int *)&local_18->field_0x66b,UVar18,4,1,(message->arg0).words.low);
        FUN_006b35d0(DAT_008075a8,this_00->field_02AD);
      }
      else if (SVar2 == MESS_MREPORTTY_6215) {
        PaintBut(local_18,(int *)&local_18->field_0x677,0x2358,4,1,(message->arg0).words.low);
        FUN_006b35d0(DAT_008075a8,this_00->field_02B1);
      }
      else if (SVar2 == MESS_MTASKTY_6216) {
        PaintBut(local_18,(int *)&local_18->field_0x683,0x235e,4,1,(message->arg0).words.low);
        FUN_006b35d0(DAT_008075a8,this_00->field_02B5);
      }
    }
    else if (SVar2 == MESS_SHARED_6332) {
      if (((-1 < local_18->field_0484) && (message != (STMessage *)0x0)) &&
         (local_8 = (message->arg2).ptr, local_8 != (AnonShape_005E4570_F1672769 *)0x0)) {
        pcVar4 = local_18->field_008D;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar4);
        }
        local_20 = *(int *)&pcVar4->field_0x8a;
        pAVar5 = this_00->field_06BF;
        if (pAVar5 != (AnonPointee_MTaskTy_06BF *)0x0) {
          local_14 = (uint *)pAVar5->field_0014;
          local_24 = (undefined4 *)pAVar5->field_0004;
          local_10 = pAVar5->field_0008;
          if (local_14 == (uint *)0x0) {
            local_14 = (uint *)(((uint)(ushort)pAVar5->field_000E * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar15 = (undefined4 *)FUN_006b4fa0((int)pAVar5);
          puVar12 = local_24;
          for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar15 = 0xffffffff;
            puVar15 = puVar15 + 1;
          }
          for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar15 = 0xff;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,puVar12,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          uVar16 = (uint)(message->arg0).words.high;
          uVar19 = uVar16;
          if ((int)uVar16 < (int)(uVar16 + local_8->field_01E0)) {
            do {
              if ((int)uVar19 < *(int *)(PTR_0081176c->field_0548 + 8)) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_14 = *(uint **)(*(int *)(PTR_0081176c->field_0548 + 0x14) + uVar19 * 4);
              }
              else {
                local_14 = (uint *)0x0;
              }
              if (local_14 != (uint *)0x0) {
                ccFntTy::SetSurf(this_00->field_008D,(int)pAVar5,0,0xf,
                                 (uVar19 - uVar16) * local_20 + 0xf,local_8->field_002C,local_20);
                ccFntTy::WrStr(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar19 = uVar19 + 1;
              uVar16 = (uint)(message->arg0).words.high;
            } while ((int)uVar19 < (int)(uVar16 + local_8->field_01E0));
          }
          FUN_006b35d0(DAT_008075a8,this_00->field_0484);
        }
      }
    }
    else if (SVar2 == MESS_WAITTY_6333) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_02D1,
                 (int)message,CONCAT31(uVar20,local_18->field_06CA == '\x01'));
    }
    goto cf_common_exit_005E525B;
  }
  switch(SVar2) {
  case MESS_WAITTY_6335:
    local_18->field_0413 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar19 = local_18->field_03F7;
    if (uVar19 == 0xffffffff) break;
    uVar16 = local_18->field_0413;
    uVar26 = local_18->field_040F;
    uVar24 = local_18->field_03FB;
    puVar14 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  case MESS_SHARED_6334|MESS_ID_CREATE:
    if (((-1 < local_18->field_0484) && (message != (STMessage *)0x0)) &&
       ((local_8 = (message->arg2).ptr, local_8 != (AnonShape_005E4570_F1672769 *)0x0 &&
        (pAVar6 = local_18->field_06CB, pAVar6 != (AnonPointee_MTaskTy_06CB *)0x0)))) {
      local_24 = (undefined4 *)pAVar6->field_0004;
      pcVar4 = local_18->field_008D;
      local_10 = pAVar6->field_0008;
      if (pcVar4->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar4);
      }
      local_14 = (uint *)pAVar6->field_0014;
      local_20 = *(int *)&pcVar4->field_0x8a;
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)(((uint)(ushort)pAVar6->field_000E * pAVar6->field_0004 + 0x1f >> 3 &
                            0x1ffffffc) * pAVar6->field_0008);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0((int)pAVar6);
      puVar12 = local_24;
      for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar15 = 0xffffffff;
        puVar15 = puVar15 + 1;
      }
      for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar15 = 0xff;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar6,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar6,0,0,0,puVar12,local_10,2,
                   (-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c);
      uVar16 = (uint)(message->arg0).words.high;
      uVar19 = uVar16;
      if ((int)uVar16 < (int)(uVar16 + local_8->field_01E0)) {
        do {
          if ((int)uVar19 < (int)this_00->field_0643->field_0008) {
            local_14 = *(uint **)(this_00->field_0643->field_0014 + uVar19 * 4);
          }
          else {
            local_14 = (uint *)0x0;
          }
          if (local_14 != (uint *)0x0) {
            ccFntTy::SetSurf(this_00->field_0089,(int)pAVar6,0,0xf,
                             (uVar19 - uVar16) * local_20 + 0xf,local_8->field_002C,local_20);
            ccFntTy::WrStr(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar19 = uVar19 + 1;
          uVar16 = (uint)(message->arg0).words.high;
        } while ((int)uVar19 < (int)(uVar16 + local_8->field_01E0));
      }
      FUN_006b35d0(DAT_008075a8,this_00->field_063F);
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case MESS_SHARED_6334|MESS_SHARED_0003:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_048C,
               (int)message,CONCAT31(uVar21,local_18->field_06D6 == '\x01'));
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x6338:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_051D,
               (int)message,CONCAT31(uVar20,local_18->field_06D6 == '\x01'));
    break;
  case MESS_MTASKTY_6339:
    local_18->field_05CE = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar19 = local_18->field_05B2;
    if (uVar19 == 0xffffffff) break;
    uVar16 = local_18->field_05CE;
    uVar26 = local_18->field_05CA;
    uVar24 = local_18->field_05B6;
    puVar14 = (uint *)local_18->field_05F6;
LAB_005e5255:
    Library::DKW::DDX::FUN_006b3730(puVar14,uVar19,uVar24,uVar26,uVar16);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;
  iVar10 = FUN_006e5fd0(this_00,message);
  return iVar10;
}

