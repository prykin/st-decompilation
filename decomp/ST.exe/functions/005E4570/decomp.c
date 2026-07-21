#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::GetMessage */

undefined4 __thiscall MTaskTy::GetMessage(MTaskTy *this,int param_1)

{
  char cVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  ccFntTy *pcVar3;
  AnonPointee_MTaskTy_06BF *pAVar4;
  AnonPointee_MTaskTy_06CB *pAVar5;
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
  undefined4 uVar15;
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
  DVar8 = FUN_006e51b0(this->field_0010);
  this->field_0065 = DVar8;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar9 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_18;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar25 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x5b5,0,iVar9,
                                &DAT_007a4ccc,s_MTaskTy__GetMessage_007cdca4);
    if (iVar25 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar9,0,s_E____titans_Start_task_obj_cpp_007cd994,0x5b5);
    return 0xffff;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar19 = *(uint *)(param_1 + 0x10);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar21 = (undefined3)((uint)extraout_EDX >> 8);
  if (uVar19 < 0x6214) {
    if (uVar19 == 0x6213) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      PaintBut(local_18,(int *)&local_18->field_0x65f,0x24bc,4,1,*(short *)(param_1 + 0x14));
      FUN_006b35d0(DAT_008075a8,this_00->field_02A9);
      goto cf_common_exit_005E525B;
    }
    if (uVar19 < 0x6201) {
      if (uVar19 == 0x6200) {
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          thunk_FUN_005b66e0((STJellyGunC *)this_00);
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
      switch(uVar19) {
      case 0:
        NoneMTask(local_18);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 2:
        InitMTask(local_18,*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x18));
        break;
      case 3:
        DoneMTask(local_18);
        break;
      case 5:
        PaintMTask(local_18);
        break;
      case 0x62:
        if (DAT_0080fb6e == 0) {
          if (local_18->field_006D == '\x01') {
            thunk_FUN_005b66e0((STJellyGunC *)local_18);
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
      case 100:
        iVar9 = 1;
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar25 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar9);
            iVar9 = iVar9 + 1;
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
        thunk_FUN_005b66e0((STJellyGunC *)local_18);
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
      switch(uVar19) {
      case 0x6201:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e != 0) {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
          break;
        }
        thunk_FUN_005b66e0((STJellyGunC *)this_00);
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
      case 0x6202:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          this_00->field_0049 = 1;
          if (this_00->field_006E == '\x01') {
            this_00->field_004D = 0x6108;
            thunk_FUN_005b66e0((STJellyGunC *)this_00);
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
            thunk_FUN_005b66e0((STJellyGunC *)this_00);
          }
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        break;
      case 0x6203:
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        this_00->field_007C = 0;
        this_00->field_0061 = this_00->field_0069;
        DarkScreen(DAT_0080759c,1,0);
        pDVar10 = this_00->field_064F;
        if (pDVar10 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              pAVar17 = (AnonShape_005E10A0_819783CC *)0x0;
              goto LAB_005e48f3;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar19) (runtime stride) */
              pAVar17 = (AnonShape_005E10A0_819783CC *)
                        (pDVar10->elementSize * uVar19 + (int)pDVar10->data);
LAB_005e48f3:
              TTaskItemClose(this_00,pAVar17);
              pDVar10 = this_00->field_064F;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar10->count);
          }
        }
        pDVar10 = this_00->field_0647;
        if (pDVar10 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              pAVar17 = (AnonShape_005E10A0_819783CC *)0x0;
              goto LAB_005e492f;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar19) (runtime stride) */
              pAVar17 = (AnonShape_005E10A0_819783CC *)
                        (pDVar10->elementSize * uVar19 + (int)pDVar10->data);
LAB_005e492f:
              TTaskItemClose(this_00,pAVar17);
              pDVar10 = this_00->field_0647;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar10->count);
          }
        }
        pDVar10 = this_00->field_064B;
        if (pDVar10 != (DArrayTy *)0x0) {
          uVar19 = 0;
          if (pDVar10->count != 0) {
            if (pDVar10->count == 0) {
              this_01 = (SpriteClassTy *)0x0;
              goto LAB_005e496b;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar19) (runtime stride) */
              this_01 = (SpriteClassTy *)(pDVar10->elementSize * uVar19 + (int)pDVar10->data);
LAB_005e496b:
              SpriteClassTy::CloseSprite(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                FreeAndNull((void **)((int)&this_01[1].field_0008 + 1));
              }
              pDVar10 = this_00->field_064B;
              uVar19 = uVar19 + 1;
            } while (uVar19 < pDVar10->count);
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
        puVar13 = &this_00->field_02BD;
        iVar9 = 4;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar13);
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (this_00->field_02B9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar13 = &this_00->field_0291;
        iVar9 = 5;
        do {
          FUN_006b3af0(DAT_008075a8,puVar13[5]);
          if (*puVar13 != 0) {
            StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar13);
            *puVar13 = 0;
          }
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        PaintMTask(this_00);
        this_00->field_006D = 3;
        Library::DKW::TBL::FUN_006afe40(&this_00->field_0074,(uint *)this_00->field_0078);
        PlayScript(this_00);
        thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != '\x01') {
          local_18->field_006D = 5;
          PlayScript(local_18);
          iVar9 = 1;
          iVar25 = 0x1f;
          do {
            thunk_FUN_00568bc0(&g_sound,iVar9);
            iVar9 = iVar9 + 1;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 0x6205:
        pcVar22 = *(char **)(param_1 + 0x14);
        thunk_FUN_005b6730(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar22 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 0x6212:
        PaintBut(local_18,&local_18->field_0653,0x26ac,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02A5);
      }
    }
    goto cf_common_exit_005E525B;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar20 = (undefined3)((uint)extraout_ECX >> 8);
  if (uVar19 < 0x6335) {
    if (uVar19 == 0x6334) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_0362,param_1,
                 CONCAT31(uVar21,local_18->field_06CA == '\x01'));
    }
    else if (uVar19 < 0x6218) {
      if (uVar19 == 0x6217) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = *(int **)(param_1 + 0x14);
        local_24 = (undefined4 *)0x1f52;
        local_1c = (AnonShape_005E4570_1DAE8C90 *)(&local_18->field_0x683 + *local_c * 0xc);
        pAVar2 = *(AnonShape_006B5B10_E0D06CF1 **)local_1c;
        local_8 = (AnonShape_005E4570_F1672769 *)pAVar2->field_0008;
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
        local_10 = pAVar2[1].field_0004;
        if (local_10 == 0) {
          local_10 = ((uint)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                     (int)local_8;
        }
        puVar11 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
        for (uVar19 = local_10 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar19 = local_10 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_006c7610(pAVar2,0,0,0,0x16,(uint)local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pbVar12 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0081,
                                         (uint)(local_1c->field_000B == '\x01'));
          DibPut(pAVar2,2,(int)&local_8[-1].field_0x1d4 / 2,'\x06',pbVar12);
        }
        FUN_006c7570(pAVar2,0,0,0,(undefined4 *)0x16,(int)local_8,2,(byte)local_20);
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
        ccFntTy::SetSurf(this_00->field_008D,(int)pAVar2,0,0x1b,0,pAVar2->field_0004 + -0x1b,
                         (int)local_8);
        uVar19 = (uint)local_14 & 0xff;
        iVar25 = -1;
        iVar9 = 0;
        puVar13 = (uint *)LoadResourceString((UINT)puVar11,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_008D,puVar13,iVar9,iVar25,uVar19);
        FUN_006b35d0(DAT_008075a8,(&this_00->field_02B9)[*local_c]);
      }
      else if (uVar19 == 0x6214) {
        if (local_18->field_006E == '\0') {
          UVar18 = 0x2343;
        }
        else {
          UVar18 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PaintBut(local_18,(int *)&local_18->field_0x66b,UVar18,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02AD);
      }
      else if (uVar19 == 0x6215) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PaintBut(local_18,(int *)&local_18->field_0x677,0x2358,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02B1);
      }
      else if (uVar19 == 0x6216) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        PaintBut(local_18,(int *)&local_18->field_0x683,0x235e,4,1,*(short *)(param_1 + 0x14));
        FUN_006b35d0(DAT_008075a8,this_00->field_02B5);
      }
    }
    else if (uVar19 == 0x6332) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (((-1 < (int)local_18->field_0484) && (param_1 != 0)) &&
         (local_8 = *(AnonShape_005E4570_F1672769 **)(param_1 + 0x1c),
         local_8 != (AnonShape_005E4570_F1672769 *)0x0)) {
        pcVar3 = local_18->field_008D;
        if (pcVar3->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar3);
        }
        local_20 = *(int *)&pcVar3->field_0x8a;
        pAVar4 = this_00->field_06BF;
        if (pAVar4 != (AnonPointee_MTaskTy_06BF *)0x0) {
          local_14 = (uint *)pAVar4->field_0014;
          local_24 = (undefined4 *)pAVar4->field_0004;
          local_10 = pAVar4->field_0008;
          if (local_14 == (uint *)0x0) {
            local_14 = (uint *)(((uint)(ushort)pAVar4->field_000E * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar14 = (undefined4 *)FUN_006b4fa0((int)pAVar4);
          puVar11 = local_24;
          for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *puVar14 = 0xffffffff;
            puVar14 = puVar14 + 1;
          }
          for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined1 *)puVar14 = 0xff;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar4,0,0,0,(uint)local_24,local_10,2,0);
          FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar4,0,0,0,puVar11,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar16 = (uint)*(ushort *)(param_1 + 0x16);
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
                ccFntTy::SetSurf(this_00->field_008D,(int)pAVar4,0,0xf,
                                 (uVar19 - uVar16) * local_20 + 0xf,local_8->field_002C,local_20);
                ccFntTy::WrStr(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar19 = uVar19 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar16 = (uint)*(ushort *)(param_1 + 0x16);
            } while ((int)uVar19 < (int)(uVar16 + local_8->field_01E0));
          }
          FUN_006b35d0(DAT_008075a8,this_00->field_0484);
        }
      }
    }
    else if (uVar19 == 0x6333) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_02D1,param_1,
                 CONCAT31(uVar20,local_18->field_06CA == '\x01'));
    }
    goto cf_common_exit_005E525B;
  }
  switch(uVar19) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x6335:
    local_18->field_0413 =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar19 = local_18->field_03F7;
    if (uVar19 == 0xffffffff) break;
    uVar16 = local_18->field_0413;
    uVar26 = local_18->field_040F;
    uVar24 = local_18->field_03FB;
    puVar13 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x6336:
    if (((-1 < (int)local_18->field_0484) && (param_1 != 0)) &&
       ((local_8 = *(AnonShape_005E4570_F1672769 **)(param_1 + 0x1c),
        local_8 != (AnonShape_005E4570_F1672769 *)0x0 &&
        (pAVar5 = local_18->field_06CB, pAVar5 != (AnonPointee_MTaskTy_06CB *)0x0)))) {
      local_24 = (undefined4 *)pAVar5->field_0004;
      pcVar3 = local_18->field_008D;
      local_10 = pAVar5->field_0008;
      if (pcVar3->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar3);
      }
      local_14 = (uint *)pAVar5->field_0014;
      local_20 = *(int *)&pcVar3->field_0x8a;
      if (local_14 == (uint *)0x0) {
        local_14 = (uint *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                            0x1ffffffc) * pAVar5->field_0008);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0((int)pAVar5);
      puVar11 = local_24;
      for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar14 = 0xffffffff;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0xff;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(uint)local_24,local_10,2,0);
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,puVar11,local_10,2,
                   (-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar16 = (uint)*(ushort *)(param_1 + 0x16);
      uVar19 = uVar16;
      if ((int)uVar16 < (int)(uVar16 + local_8->field_01E0)) {
        do {
          if ((int)uVar19 < *(int *)(this_00->field_0643 + 8)) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_14 = *(uint **)(*(int *)(this_00->field_0643 + 0x14) + uVar19 * 4);
          }
          else {
            local_14 = (uint *)0x0;
          }
          if (local_14 != (uint *)0x0) {
            ccFntTy::SetSurf(this_00->field_0089,(int)pAVar5,0,0xf,
                             (uVar19 - uVar16) * local_20 + 0xf,local_8->field_002C,local_20);
            ccFntTy::WrStr(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar19 = uVar19 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar16 = (uint)*(ushort *)(param_1 + 0x16);
        } while ((int)uVar19 < (int)(uVar16 + local_8->field_01E0));
      }
      FUN_006b35d0(DAT_008075a8,this_00->field_063F);
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x6337:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_048C,param_1,
               CONCAT31(uVar21,local_18->field_06D6 == '\x01'));
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x6338:
    MMMObjTy::PaintSlBut
              ((MMMObjTy *)local_18,(AnonShape_005B6560_61F462DF *)&local_18->field_051D,param_1,
               CONCAT31(uVar20,local_18->field_06D6 == '\x01'));
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x6339:
    local_18->field_05CE =
         *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
    uVar19 = local_18->field_05B2;
    if (uVar19 == 0xffffffff) break;
    uVar16 = local_18->field_05CE;
    uVar26 = local_18->field_05CA;
    uVar24 = local_18->field_05B6;
    puVar13 = (uint *)local_18->field_05F6;
LAB_005e5255:
    Library::DKW::DDX::FUN_006b3730(puVar13,uVar19,uVar24,uVar26,uVar16);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;
  uVar15 = FUN_006e5fd0();
  return uVar15;
}

