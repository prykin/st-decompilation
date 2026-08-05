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
  code *pcVar6;
  MTaskTy *this_00;
  byte bVar7;
  DWORD DVar8;
  int iVar9;
  DArrayTy *pDVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  AnonShape_005E10A0_819783CC *pAVar16;
  UINT UVar17;
  uint uVar18;
  char *pcVar19;
  SpriteClassTy *this_01;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
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
  DVar8 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0065 = DVar8;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar9 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_18;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar22 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x5b5,0,iVar9,
                                "%s","MTaskTy::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar9,0,"E:\\__titans\\Start\\task_obj.cpp",0x5b5);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < MESS_MREPORTTY_6214) {
    if (SVar2 == MESS_MTASKTY_6213) {
      PaintBut(local_18,(int *)&local_18->field_0x65f,0x24bc,4,1,(message->arg0).words.low);
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
            thunk_FUN_005b66e0(local_18);
            uVar18 = 0xffffffff;
            pcVar19 = &DAT_0080ed16;
            do {
              pcVar20 = pcVar19;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1;
              pcVar20 = pcVar19 + 1;
              cVar1 = *pcVar19;
              pcVar19 = pcVar20;
            } while (cVar1 != '\0');
            uVar18 = ~uVar18;
            pcVar19 = pcVar20 + -uVar18;
            pcVar20 = (char *)&DAT_0080ee1a;
            memmove(pcVar20, pcVar19, uVar18); /* compiler REP MOVS byte copy */
            uVar15 = 0;
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
        iVar9 = 1;
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar22 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar9);
            iVar9 = iVar9 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
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
            uVar18 = 0xffffffff;
            pcVar19 = &DAT_0080ed16;
            do {
              pcVar20 = pcVar19;
              if (uVar18 == 0) break;
              uVar18 = uVar18 - 1;
              pcVar20 = pcVar19 + 1;
              cVar1 = *pcVar19;
              pcVar19 = pcVar20;
            } while (cVar1 != '\0');
            uVar18 = ~uVar18;
            pcVar19 = pcVar20 + -uVar18;
            pcVar20 = (char *)&DAT_0080ee1a;
            memmove(pcVar20, pcVar19, uVar18); /* compiler REP MOVS byte copy */
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
        DarkScreen(g_dDXContext_0080759C,1,0);
        pDVar10 = this_00->field_064F;
        if (pDVar10 != nullptr) {
          uVar18 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              pAVar16 = nullptr;
              goto LAB_005e48f3;
            }
            do {
              pAVar16 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar10, uVar18);
LAB_005e48f3:
              TTaskItemClose(this_00,pAVar16);
              pDVar10 = this_00->field_064F;
              uVar18 = uVar18 + 1;
            } while (uVar18 < pDVar10->count);
          }
        }
        pDVar10 = this_00->field_0647;
        if (pDVar10 != nullptr) {
          uVar18 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              pAVar16 = nullptr;
              goto LAB_005e492f;
            }
            do {
              pAVar16 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar10, uVar18);
LAB_005e492f:
              TTaskItemClose(this_00,pAVar16);
              pDVar10 = this_00->field_0647;
              uVar18 = uVar18 + 1;
            } while (uVar18 < pDVar10->count);
          }
        }
        pDVar10 = this_00->field_064B;
        if (pDVar10 != nullptr) {
          uVar18 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              this_01 = nullptr;
              goto LAB_005e496b;
            }
            do {
              this_01 = DArrayAt<SpriteClassTy>(pDVar10, uVar18);
LAB_005e496b:
              SpriteClassTy::CloseSprite(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                FreeAndNull((void **)((int)&this_01[1].field_0008 + 1));
              }
              pDVar10 = this_00->field_064B;
              uVar18 = uVar18 + 1;
            } while (uVar18 < pDVar10->count);
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
        puVar13 = this_00->field_02BD;
        iVar9 = 4;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar13);
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (this_00->field_02B9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar13 = this_00->field_0291;
        iVar9 = 5;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,puVar13[5]);
          if (*puVar13 != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar13);
            *puVar13 = 0;
          }
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        PaintMTask(this_00);
        this_00->field_006D = 3;
        Library::DKW::TBL::FUN_006afe40((int *)&this_00->field_0074,&this_00->field_0078->flags);
        PlayScript(this_00);
        thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                           this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar9 = 1;
          iVar22 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar9);
            iVar9 = iVar9 + 1;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        break;
      case MESS_SHARED_6200|MESS_SHARED_0005:
        pcVar19 = (message->arg0).ptr;
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar19 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case MESS_MTASKTY_6212:
        PaintBut(local_18,&local_18->field_0653,0x26ac,4,1,(message->arg0).words.low);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[0]);
      }
    }
    goto cf_common_exit_005E525B;
  }
  if (SVar2 < MESS_WAITTY_6335) {
    if (SVar2 == MESS_SHARED_6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_0362,
                 (int)message,local_18->field_06CA == '\x01');
    }
    else if (SVar2 < 0x6218) {
      if (SVar2 == MESS_MTASKTY_6217) {
        local_c = (message->arg0).ptr;
        local_24 = (undefined4 *)0x1f52;
        local_1c = (AnonShape_005E4570_1DAE8C90 *)(&local_18->field_0x683 + *local_c * 0xc);
        pAVar3 = *(AnonShape_006B5B10_E0D06CF1 **)local_1c;
        local_8 = (AnonShape_005E4570_F1672769 *)pAVar3->field_0008;
        local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)((-(local_1c->field_000A != '\x01') & 0xecU) + 0x2c));
        if (local_c[1] == 3) {
          local_14 = (uint *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)((-(local_1c->field_0x8 != '\x01') & 0xfeU) + 3));
        }
        else {
          local_14 = (uint *)(STReplaceLowByte((uint32_t)(local_14), (uint8_t)((local_1c->field_0x8 != '\x01') + -1)) &
                             0xffffff02);
        }
        local_10 = pAVar3[1].field_0004;
        if (local_10 == 0) {
          local_10 = ((uint)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                     (int)local_8;
        }
        puVar11 = (undefined4 *)FUN_006b4fa0((int *)pAVar3);
        for (uVar18 = local_10 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar18 = local_10 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_006c7610(pAVar3,0,0,0,0x16,(uint)local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pbVar12 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0081,
                                         (uint)(local_1c->field_000B == '\x01'));
          DibPut(pAVar3,2,(int)&local_8[-1].field_0x1d4 / 2,'\x06',pbVar12);
        }
        FUN_006c7570(pAVar3,0,0,0,(undefined4 *)0x16,(int)local_8,2,(byte)local_20);
        iVar9 = *local_c;
        if (iVar9 == 1) {
          puVar11 = (undefined4 *)0x1f47;
        }
        else if (iVar9 == 2) {
          puVar11 = (undefined4 *)0x1f48;
        }
        else {
          puVar11 = local_24;
          if (iVar9 == 3) {
            puVar11 = (undefined4 *)0x1f49;
          }
        }
        ccFntTy::SetSurf(this_00->field_008D,(int)pAVar3,0,0x1b,0,pAVar3->field_0004 + -0x1b,
                         (int)local_8);
        uVar18 = (uint)local_14 & 0xff;
        iVar22 = -1;
        iVar9 = 0;
        puVar13 = (uint *)LoadResourceString((UINT)puVar11,g_module_00807618);
        ccFntTy::WrStr(this_00->field_008D,puVar13,iVar9,iVar22,uVar18);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02BD[*local_c + -1]);
      }
      else if (SVar2 == MESS_MREPORTTY_6214) {
        if (local_18->field_006E == '\0') {
          UVar17 = 0x2343;
        }
        else {
          UVar17 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        PaintBut(local_18,(int *)&local_18->field_0x66b,UVar17,4,1,(message->arg0).words.low);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[2]);
      }
      else if (SVar2 == MESS_MREPORTTY_6215) {
        PaintBut(local_18,(int *)&local_18->field_0x677,0x2358,4,1,(message->arg0).words.low);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[3]);
      }
      else if (SVar2 == MESS_MTASKTY_6216) {
        PaintBut(local_18,(int *)&local_18->field_0x683,0x235e,4,1,(message->arg0).words.low);
        FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_02A5[4]);
      }
    }
    else if (SVar2 == MESS_SHARED_6332) {
      if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
         (local_8 = (message->arg2).ptr, local_8 != nullptr)) {
        pcVar4 = local_18->field_008D;
        if (pcVar4->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        local_20 = *(int *)&pcVar4->field_0x8a;
        pAVar5 = this_00->field_06BF;
        if (pAVar5 != nullptr) {
          local_14 = (uint *)pAVar5->field_0014;
          local_24 = (undefined4 *)pAVar5->field_0004;
          local_10 = pAVar5->field_0008;
          if (local_14 == nullptr) {
            local_14 = (uint *)(((uint)(ushort)pAVar5->field_000E * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar14 = (undefined4 *)FUN_006b4fa0((int *)pAVar5);
          puVar11 = local_24;
          for (uVar18 = (uint)local_14 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *puVar14 = 0xffffffff;
            puVar14 = puVar14 + 1;
          }
          for (uVar18 = (uint)local_14 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined1 *)puVar14 = 0xff;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,puVar11,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          uVar15 = (uint)(message->arg0).words.high;
          uVar18 = uVar15;
          if ((int)uVar15 < (int)(uVar15 + local_8->field_01E0)) {
            do {
              if ((int)uVar18 < (int)g_startSystem_0081176C->field_0548[2]) {
                local_14 = *(uint **)(g_startSystem_0081176C->field_0548[5] + uVar18 * 4);
              }
              else {
                local_14 = nullptr;
              }
              if (local_14 != nullptr) {
                ccFntTy::SetSurf(this_00->field_008D,(int)pAVar5,0,0xf,
                                 (uVar18 - uVar15) * local_20 + 0xf,local_8->field_002C,local_20);
                ccFntTy::WrStr(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar18 = uVar18 + 1;
              uVar15 = (uint)(message->arg0).words.high;
            } while ((int)uVar18 < (int)(uVar15 + local_8->field_01E0));
          }
          FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_0484);
        }
      }
    }
    else if (SVar2 == MESS_WAITTY_6333) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_02D1,
                 (int)message,local_18->field_06CA == '\x01');
    }
    goto cf_common_exit_005E525B;
  }
  switch(SVar2) {
  case MESS_WAITTY_6335:
    local_18->field_0413 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar18 = local_18->field_03F7;
    if (uVar18 == 0xffffffff) break;
    uVar15 = local_18->field_0413;
    uVar23 = local_18->field_040F;
    uVar21 = local_18->field_03FB;
    puVar13 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  case MESS_SHARED_6334|MESS_ID_CREATE:
    if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
       ((local_8 = (message->arg2).ptr, local_8 != nullptr &&
        (pAVar3 = (AnonShape_006B5B10_E0D06CF1 *)local_18->field_06CB,
        pAVar3 != nullptr)))) {
      local_24 = (undefined4 *)pAVar3->field_0004;
      pcVar4 = local_18->field_008D;
      local_10 = pAVar3->field_0008;
      if (pcVar4->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
      }
      local_14 = (uint *)pAVar3[1].field_0004;
      local_20 = *(int *)&pcVar4->field_0x8a;
      if (local_14 == nullptr) {
        local_14 = (uint *)(((uint)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc)
                           * pAVar3->field_0008);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0((int *)pAVar3);
      puVar11 = local_24;
      for (uVar18 = (uint)local_14 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
      }
      for (uVar18 = (uint)local_14 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar14 = 0xff;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_006c7610(pAVar3,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570(pAVar3,0,0,0,puVar11,local_10,2,(-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c
                  );
      uVar15 = (uint)(message->arg0).words.high;
      uVar18 = uVar15;
      if ((int)uVar15 < (int)(uVar15 + local_8->field_01E0)) {
        do {
          if ((int)uVar18 < (int)this_00->field_0643->elementSize) {
            local_14 = *(uint **)(this_00->field_0643->growCapacity + uVar18 * 4);
          }
          else {
            local_14 = nullptr;
          }
          if (local_14 != nullptr) {
            ccFntTy::SetSurf(this_00->field_0089,(int)pAVar3,0,0xf,
                             (uVar18 - uVar15) * local_20 + 0xf,local_8->field_002C,local_20);
            ccFntTy::WrStr(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar18 = uVar18 + 1;
          uVar15 = (uint)(message->arg0).words.high;
        } while ((int)uVar18 < (int)(uVar15 + local_8->field_01E0));
      }
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_063F);
    }
    break;
  case MESS_SHARED_6334|MESS_SHARED_0003:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_048C,
               (int)message,local_18->field_06D6 == '\x01');
    break;
  case 0x6338:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_051D,
               (int)message,local_18->field_06D6 == '\x01');
    break;
  case MESS_MTASKTY_6339:
    local_18->field_05CE = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar18 = local_18->field_05B2;
    if (uVar18 == 0xffffffff) break;
    uVar15 = local_18->field_05CE;
    uVar23 = local_18->field_05CA;
    uVar21 = local_18->field_05B6;
    puVar13 = (uint *)local_18->field_05F6;
LAB_005e5255:
    Library::DKW::DDX::FUN_006b3730(puVar13,uVar18,uVar21,uVar23,uVar15);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;
  iVar9 = FUN_006e5fd0(this_00,message);
  return iVar9;
}

