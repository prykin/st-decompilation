#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetAiMess */

int __thiscall AiFltClassTy::GetAiMess(AiFltClassTy *this,uint *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  Global_sub_004E80F0_param_2Enum GVar6;
  uint *puVar7;
  dword dVar8;
  undefined4 uVar9;
  code *pcVar10;
  AiFltClassTy *this_00;
  undefined2 uVar11;
  int iVar12;
  IMAGE_DOS_HEADER *pIVar13;
  STBoatC *pSVar14;
  void *pvVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  DArrayTy *pDVar16;
  ushort *puVar17;
  STGameObjC *pSVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  AiPlrClassTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar19;
  uint uVar20;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_12;
  byte *puVar21;
  STWorldObject *this_02;
  byte *puVar22;
  uint uVar23;
  bool bVar24;
  short *psVar25;
  InternalExceptionFrame local_74;
  short local_30 [2];
  short local_2c [2];
  undefined4 local_28;
  TLOBaseTy *local_24;
  int local_20;
  int local_1c;
  int local_18;
  STGameObjC *local_14;
  DArrayTy *local_10;
  AiFltClassTy *local_c;
  DArrayTy *local_8;
  uint GVar5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar12 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_c;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x98a,0,iVar12,"%s",
                                "AiFltClassTy::GetAiMess");
    if (iVar19 == 0) {
      RaiseInternalException(iVar12,0,"E:\\__titans\\ai\\ai_flt.cpp",0x98b);
      return iVar12;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (*param_1 < 100) {
    Library::DKW::TBL::FUN_006ae1c0(&local_c->field_0217->flags,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       ((local_c->field_0152 != '\0' &&
        ((((uint)*(ushort *)((int)param_1 + 0xe) & local_c->field_0153) != 0 &&
         (local_c->field_00B3 == 0)))))) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(ushort *)((int)param_1 + 0xe) == 1) {
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        uVar23 = local_c->field_009B;
        if ((uVar23 < 0x8c) || (0x95 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 100) || (0x6d < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x6e) || (0x77 < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 < 0x82) || (0x8b < uVar23)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar23 == 0x23) || ((0xb < uVar23 && (uVar23 < 0x14)))) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if (bVar24) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((0 < local_c->field_0157) &&
          (uVar11 = sub_0065D9C0(local_c),
          (int)this_00->field_0157 <= CONCAT22(extraout_var_02,uVar11))) &&
         (*(undefined1 *)(param_1 + 2) = 1, *(char *)((int)param_1 + 9) != '\0')) {
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar18 = (STGameObjC *)0x0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pSVar18 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)((int)param_1 + 0x12),
                               (ushort)param_1[4],CASE_1);
        }
        if (pSVar18 != (STGameObjC *)0x0) {
          STFishC::sub_004162B0
                    ((STFishC *)pSVar18,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
          *(short *)&this_00->field_0x195 = local_2c[0] + -2;
          *(short *)&this_00->field_0x197 = local_30[0] + -2;
          *(undefined2 *)&this_00->field_0x199 = 0;
          *(undefined2 *)&this_00->field_0x19b = 5;
          *(undefined2 *)&this_00->field_0x19d = 3;
          *(undefined2 *)&this_00->field_0x19f = 5;
          thunk_FUN_006756d0((short *)&this_00->field_0x195,(short *)&this_00->field_0x197,
                             (short *)&this_00->field_0x19b,(short *)&this_00->field_0x19d);
        }
        this_00->field_009B = 0x8c;
LAB_00663af0:
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    break;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  case 0x66:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        ((local_c->field_0187 != '\0' &&
         (((local_c->field_009B < 0x82 || (0x8b < local_c->field_009B)) &&
          (local_c->field_00B3 == 0)))))) &&
       (uVar11 = sub_0065D9C0(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar11)
       )) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar11;
      uVar9 = this_00->field_0188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar9;
      iVar12 = thunk_FUN_0065e3b0((AnonShape_0065DA10_8B0AA883 *)this_00,uVar9);
      *(int *)((int)param_1 + 0xb) = iVar12;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      this_01 = thunk_FUN_004357f0(*(char *)&local_c->field_0024);
      if ((char)param_1[2] == '\0') {
        this_00->field_00FB = *(undefined4 *)((int)param_1 + 9);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this_00->field_00F7 = *(undefined4 *)((int)param_1 + 0xd);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this_00->field_00EF = (int)*(short *)((int)param_1 + 0x11);
        *(undefined4 *)&this_00->field_0x195 = *(undefined4 *)((int)param_1 + 0x13);
        *(undefined4 *)&this_00->field_0x199 = *(undefined4 *)((int)param_1 + 0x17);
        *(undefined4 *)&this_00->field_0x19d = *(undefined4 *)((int)param_1 + 0x1b);
        this_00->field_009B = 0x82;
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        if (this_01 != (AiPlrClassTy *)0x0) {
          thunk_FUN_0067bf60(this_01,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < this_00->field_009B) && (this_00->field_009B < 0x8c)) {
        if (this_01 != (AiPlrClassTy *)0x0) {
          thunk_FUN_0067bf60(this_01,'\x01',this_00->field_00F7);
        }
        this_00->field_009B = 0;
        goto LAB_00663af0;
      }
    }
    break;
  case 0x68:
    if (local_c->field_0194 == '\0') {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    GVar5 = **(uint **)((int)param_1 + 10);
    if ((0x53 < GVar5) && (GVar5 < 0x5b)) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_02;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar12,0x53);
      if ((local_8 != (DArrayTy *)0x0) && (local_8->count != 0)) {
        iVar12 = *(int *)((int)param_1 + 10);
        if (*(char *)(iVar12 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar12 + 0x16) < 0) || (*(short *)(iVar12 + 0x18) < 0)) ||
                 (*(short *)(iVar12 + 0x1a) < 0)) && (this_00->field_0284 != (ushort *)0x0)) {
          *(ushort *)(iVar12 + 0x16) = this_00->field_0284[0x41];
          *(ushort *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284[0x42];
          *(ushort *)(*(int *)((int)param_1 + 10) + 0x1a) = this_00->field_0284[0x43];
        }
        local_10 = (DArrayTy *)0x0;
        if (0 < (int)local_8->count) {
          bVar24 = local_8->count != 0;
          do {
            pDVar16 = local_10;
            if (bVar24) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_10) (runtime stride) */
              puVar17 = (ushort *)(local_8->elementSize * (int)local_10 + (int)local_8->data);
            }
            else {
              puVar17 = (ushort *)0x0;
            }
            uVar3 = *puVar17;
            if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
              local_14 = (STGameObjC *)0x0;
            }
            else {
              local_14 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1
                                   );
            }
            if (local_14 != (STGameObjC *)0x0) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = uVar3;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar21 = (byte *)(*(undefined4 **)((int)param_1 + 10));
                puVar22 = (byte *)(&this_00->field_01AD);
                memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
                iVar12 = 0;
                if ((this_00->field_01EB != '\0') &&
                   (iVar12 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                this_00->field_0024,(undefined4 *)0x0,(int *)0x0,
                                                (int *)0x0,0,(int *)0x0), iVar12 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar12 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,&local_18,
                                              &local_1c,&local_20,(int)this_00->field_01C3,
                                              (int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar12 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    pDVar16 = local_10;
                    goto LAB_006625c2;
                  }
                  this_00->field_01C3 = (short)local_18;
                  this_00->field_01C5 = (short)local_1c;
                  this_00->field_01C7 = (short)local_20;
                }
                thunk_FUN_004cdfd0(local_14,this_00->field_01AD,(int)this_00->field_01C3,
                                   (int)this_00->field_01C5,(int)this_00->field_01C7);
                if (this_00->field_00B3 != 0) {
                  sub_0065F980(this_00);
                }
                this_00->field_009B = 0xc;
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            local_10 = (DArrayTy *)((int)&pDVar16->flags + 1);
            bVar24 = local_10 < (DArrayTy *)local_8->count;
          } while ((int)local_10 < (int)local_8->count);
        }
      }
LAB_0066263e:
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 < 0x32) || (0x73 < GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar12 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar12 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar12 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar12 = 1;
            }
            else {
              iVar12 = 0;
            }
          }
        }
      }
      if (iVar12 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar12 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar12 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar12 = 0x19;
      }
      else {
        iVar12 = 0;
      }
      uVar23 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                         ((AnonReceiver_0065DA50 *)this_00,iVar12,-1);
      if ((int)uVar23 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar12 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar12 + 0x3e) == '\0') {
        if (this_00->field_009B == 0x23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_009B == 0x78) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_00B3 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
      if (*(char *)((int)param_1 + 9) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((*(char *)(iVar12 + 0x3e) != '\0') &&
          (((*(short *)(iVar12 + 0x16) < 0 || (*(short *)(iVar12 + 0x18) < 0)) ||
           (*(short *)(iVar12 + 0x1a) < 0)))) && (this_00->field_0284 != (ushort *)0x0)) {
        *(ushort *)(iVar12 + 0x16) = this_00->field_0284[0x41];
        *(ushort *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284[0x42];
        *(ushort *)(*(int *)((int)param_1 + 10) + 0x1a) = this_00->field_0284[0x43];
      }
      puVar21 = (byte *)(*(undefined4 **)((int)param_1 + 10));
      puVar22 = (byte *)(&this_00->field_01AD);
      memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
      iVar12 = 0;
      if ((this_00->field_01EB != '\0') &&
         (iVar12 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      this_00->field_0024,(undefined4 *)0x0,(int *)0x0,(int *)0x0,0,
                                      (int *)0x0), iVar12 == 0)) {
        local_14 = (STGameObjC *)(int)this_00->field_01C3;
        local_10 = (DArrayTy *)(int)this_00->field_01C5;
        local_24 = (TLOBaseTy *)(int)this_00->field_01C7;
        iVar12 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,(int *)&local_14,
                                    (int *)&local_10,(int *)&local_24,(int)this_00->field_01C3,
                                    (int)this_00->field_01C5,(int)this_00->field_01C7,0);
        if (iVar12 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          *(undefined2 *)((int)param_1 + 0xe) = 0;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        this_00->field_01C3 = (short)local_14;
        this_00->field_01C5 = (short)local_10;
        this_00->field_01C7 = (short)local_24;
      }
      if (this_00->field_00B3 != 0) {
        sub_0065F980(this_00);
      }
      this_00->field_009B = 0x23;
      this_00->field_009F = 0;
      this_00->field_00A3 = 0;
      this_00->field_00A7 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      this_00->field_00B3 = 0x23;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 == 0) || (0x28 < GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_03;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_04;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_05;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar19 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar19 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar19 = 0x5c;
      }
      else {
        iVar19 = 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar12,iVar19);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != (DArrayTy *)0x0) && (uVar23 = local_8->count, uVar23 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar20 = 0, 0 < (int)uVar23)) {
        do {
          if (uVar20 < uVar23) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, uVar20) (runtime stride) */
            puVar17 = (ushort *)(local_8->elementSize * uVar20 + (int)local_8->data);
          }
          else {
            puVar17 = (ushort *)0x0;
          }
          uVar3 = *puVar17;
          if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
            local_24 = (TLOBaseTy *)0x0;
          }
          else {
            local_24 = (TLOBaseTy *)
                       STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          if (((STGameObjC *)local_24 != (STGameObjC *)0x0) &&
             (iVar12 = thunk_FUN_004c93e0(local_24,1), iVar12 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar3;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar21 = (byte *)(*(undefined4 **)((int)param_1 + 10));
              puVar22 = (byte *)(&this_00->field_01AD);
              memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
              puVar7 = *(uint **)((int)param_1 + 10);
              TLOBaseTy::thunk_FUN_004c7cc0
                        (local_24,1,*puVar7,1,1,(uint)(ushort)puVar7[3],puVar7[2],
                         (int)(char)puVar7[7],(char *)((int)puVar7 + 0x1d));
              if (this_00->field_00B3 != 0) {
                sub_0065F980(this_00);
              }
              this_00->field_009F = 0;
              this_00->field_00A3 = 0;
              this_00->field_00A7 = 0;
              this_00->field_009B = 0xe;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                this_00->field_00B3 = 0xe;
              }
            }
            break;
          }
          uVar20 = uVar20 + 1;
          uVar23 = local_8->count;
        } while ((int)uVar20 < (int)uVar23);
      }
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar5 == 0xa3) || (GVar5 == 0xa8)) || (GVar5 == 0xb2)) || (GVar5 == 0xbe)) {
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    if (!bVar24) {
      if (((GVar5 == 0xdd) || (GVar5 == 0xde)) || ((GVar5 == 0xe2 || (GVar5 == 0xdc)))) {
        bVar24 = true;
      }
      else {
        bVar24 = false;
      }
      if (!bVar24) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar19 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar12 = extraout_EDX_09;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar19 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar12 = extraout_EDX_10;
        }
        else {
          if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if ((iVar12 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar19 = 1;
            }
            else {
              iVar19 = 0;
            }
          }
          else {
            iVar19 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar12 = extraout_EDX_11;
          }
        }
      }
      if (iVar19 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar19 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar19 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar19 = 0;
LAB_00663076:
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar12,iVar19);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != (DArrayTy *)0x0) &&
           (pSVar18 = (STGameObjC *)local_8->count, pSVar18 != (STGameObjC *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = (STGameObjC *)0x0, 0 < (int)pSVar18)) {
        do {
          if (local_14 < pSVar18) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_14) (runtime stride) */
            puVar17 = (ushort *)(local_8->elementSize * (int)local_14 + (int)local_8->data);
          }
          else {
            puVar17 = (ushort *)0x0;
          }
          uVar3 = *puVar17;
          if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
            pSVar14 = (STBoatC *)0x0;
          }
          else {
            pSVar14 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          local_24 = (TLOBaseTy *)pSVar14;
          if (pSVar14 != (STBoatC *)0x0) {
            iVar12 = thunk_FUN_004e1490(pSVar14);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((iVar12 == 0) ||
               (iVar12._0_2_ = pSVar14->field_05B8, iVar12._2_2_ = pSVar14->field_05BA,
               g_worldGrid.sizeZ + -1 <= iVar12)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = uVar3;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar21 = (byte *)(*(undefined4 **)((int)param_1 + 10));
                puVar22 = (byte *)(&this_00->field_01AD);
                memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
                thunk_FUN_004ebab0(local_24,**(int **)((int)param_1 + 10),
                                   (*(int **)((int)param_1 + 10))[0xb]);
                if (this_00->field_00B3 != 0) {
                  sub_0065F980(this_00);
                }
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                this_00->field_009B = 0x12;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0x12;
                }
              }
              break;
            }
          }
          local_14 = (STGameObjC *)((int)&local_14->vtable + 1);
          pSVar18 = (STGameObjC *)local_8->count;
        } while ((int)local_14 < (int)pSVar18);
      }
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      iVar12 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar23 = extraout_EDX_06;
    }
    else {
      if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar12 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar23 = extraout_EDX_07;
      }
      else {
        if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
          uVar23 = 1;
        }
        else {
          uVar23 = 0;
        }
        if ((uVar23 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if ((bVar24) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          iVar12 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar23 = extraout_EDX_08;
        }
      }
    }
    if (iVar12 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar12 = **(int **)((int)param_1 + 10);
    if (iVar12 - 0xa3U < 0x1c) {
      uVar23 = (uint)*(byte *)(iVar12 + 0x663d51);
      switch(iVar12) {
      case 0xa3:
        iVar12 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar12 = 0x44;
        break;
      case 0xb2:
        iVar12 = 0x70;
        break;
      case 0xbe:
        iVar12 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar12 = 0;
    }
    local_8 = (DArrayTy *)sub_0065E360(this_00,uVar23,iVar12);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_8 != (DArrayTy *)0x0) && (dVar8 = local_8->count, dVar8 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = (TLOBaseTy *)0x0, 0 < (int)dVar8)) {
      bVar24 = dVar8 != 0;
LAB_00662dbb:
      if (bVar24) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_24) (runtime stride) */
        puVar17 = (ushort *)(local_8->elementSize * (int)local_24 + (int)local_8->data);
      }
      else {
        puVar17 = (ushort *)0x0;
      }
      uVar3 = *puVar17;
      if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
        local_10 = (DArrayTy *)0x0;
      }
      else {
        local_10 = (DArrayTy *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
      }
      if ((STGameObjC *)local_10 == (STGameObjC *)0x0) goto cf_continue_loop_00662E52;
      switch(**(undefined4 **)((int)param_1 + 10)) {
      case 0xa3:
        iVar12 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,4,0,1,1,1);
        break;
      default:
        iVar12 = 0;
        break;
      case 0xa8:
        iVar12 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar12 = 1;
        break;
      case 0xbe:
        iVar12 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,8,0,1,1,1);
      }
      if (iVar12 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(ushort *)((int)param_1 + 0xe) = uVar3;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar21 = (byte *)(*(undefined4 **)((int)param_1 + 10));
        puVar22 = (byte *)(&this_00->field_01AD);
        memmove(puVar22, puVar21, 0x4a); /* compiler REP MOVS byte copy */
        iVar12 = **(int **)((int)param_1 + 10);
        if (iVar12 == 0xa3) {
          iVar12 = 4;
LAB_00662ee7:
          TLOBaseTy::thunk_FUN_004c7cc0
                    ((TLOBaseTy *)local_10,iVar12,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2]
                     ,0xff,(char *)0x0);
        }
        else {
          if (iVar12 == 0xa8) {
            iVar12 = 6;
            goto LAB_00662ee7;
          }
          if (iVar12 == 0xbe) {
            iVar12 = 8;
            goto LAB_00662ee7;
          }
        }
        if (this_00->field_00B3 != 0) {
          sub_0065F980(this_00);
        }
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        this_00->field_009B = 0x12;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0') {
          this_00->field_00B3 = 0x12;
        }
      }
    }
LAB_00662f34:
    if (local_8 != (DArrayTy *)0x0) {
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar7 = *(uint **)((int)param_1 + 9);
    uVar23 = *puVar7;
    if ((uVar23 < 0x32) || (0x73 < uVar23)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      if (local_c->field_01B5 != puVar7[2]) {
        sVar4 = *(short *)((int)puVar7 + 0x1a);
        sVar1 = (short)puVar7[6];
        sVar2 = *(short *)((int)puVar7 + 0x16);
        if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar1 < 0)) ||
           (((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
          this_02 = (STWorldObject *)0x0;
        }
        else {
          this_02 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar4 + (int)g_worldGrid.sizeX * (int)sVar1
                     + (int)sVar2].objects[0];
        }
        if ((this_02 != (STWorldObject *)0x0) &&
           (this_02[1].vtable == (STWorldObjectVTable *)local_c->field_0024)) {
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar12 = this_02->GetObjectTypeId();
          if (iVar12 == 0x78) {
            iVar12 = *(int *)&this_02[0x10].field_0x19;
          }
          else {
            iVar12 = 0;
          }
          if (iVar12 == **(int **)((int)param_1 + 9)) {
            iVar12 = this_02->GetObjectTypeId();
            if (iVar12 == 0x78) {
              uVar23 = *(uint *)&this_02[0x11].field_0x5;
            }
            else {
              uVar23 = 0xffffffff;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (uVar23 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
              g_currentExceptionFrame = local_74.previous;
              return 0;
            }
          }
        }
LAB_00663325:
        *(undefined1 *)(param_1 + 2) = 0xff;
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    else {
      if ((uVar23 == 0) || (0x28 < uVar23)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar18 = (STGameObjC *)0x0;
        }
        else {
          pSVar18 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,
                               (ushort)puVar7[0xe],CASE_1);
        }
        if (pSVar18 == (STGameObjC *)0x0) goto LAB_00663325;
        iVar12 = thunk_FUN_004c9430(pSVar18,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar12 == 0) {
          *(undefined1 *)(param_1 + 2) = 1;
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    break;
  case 0x6a:
    local_c->field_0097 = param_1[2];
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x6b:
    uVar20 = 0;
    pDVar16 = local_c->field_020B;
    uVar23 = pDVar16->count;
    if (0 < (int)uVar23) {
      bVar24 = uVar23 != 0;
      while( true ) {
        if (bVar24) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar16, uVar20) (runtime stride) */
          pvVar15 = (void *)(pDVar16->elementSize * uVar20 + (int)pDVar16->data);
        }
        else {
          pvVar15 = (void *)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(param_1[2] + 8) == *(int *)((int)pvVar15 + 0x24)) break;
        uVar20 = uVar20 + 1;
        bVar24 = uVar20 < uVar23;
        if ((int)uVar23 <= (int)uVar20) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)((int)pvVar15 + 0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar11 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var,uVar11))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar25 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar25);
        }
      }
      else if (*(uint *)&local_c->field_022F->field_0xc < 10) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar11 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var_00,uVar11))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar25 = *(short **)((int)param_1 + 0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00->field_0122 == '\x01') && ((char)param_1[3] != '\0')) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      AppendPoint(this_00,*(short **)((int)param_1 + 0xe),5);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (local_c->field_009B != 0x19) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    sVar4 = local_c->field_0039;
    if (0 < sVar4) {
      if (sVar4 < 3) {
        uVar23 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar23 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar23 = 0;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar23) {
      iVar12 = local_c->field_0116;
      if (iVar12 == 0xdd) {
        uVar23 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar12 == 0xde) {
        uVar23 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar12 == 0xe0) {
        uVar23 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar23 = 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(uint *)((int)param_1 + 0xb) != uVar23) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    local_c->field_009B = 0x19;
    local_c->field_009F = 0;
    local_c->field_00A3 = 0;
    local_c->field_00A7 = 0;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0x70:
    if (((local_c->field_00FF != '\0') &&
        (uVar23 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar23)) &&
       (sub_00660F70(this_00,(uint *)param_1[3],0xffff), *(int *)(param_1[3] + 0x24) != 0)) {
      param_1[2] = 1;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x71:
    uVar3 = local_c->field_007B;
    if (uVar3 < 0x21) {
      if (uVar3 != 0x20) {
        if (uVar3 == 2) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (uVar3 != 0x10) {
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar3 != 0x8000) {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar12 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar4 = local_c->field_0039;
    if (sVar4 < 1) {
LAB_006636da:
      iVar19 = 0;
    }
    else if (sVar4 < 3) {
      iVar19 = 0x35;
    }
    else {
      if (sVar4 != 3) goto LAB_006636da;
      iVar19 = thunk_FUN_004e7fc0(iVar12);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar12 = extraout_EDX_12;
    }
    local_10 = (DArrayTy *)sub_0065E360(this_00,iVar12,iVar19);
    if (((local_10 != (DArrayTy *)0x0) && (dVar8 = local_10->count, dVar8 != 0)) &&
       (uVar23 = 0, 0 < (int)dVar8)) {
      bVar24 = dVar8 != 0;
      do {
        if (bVar24) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_10, uVar23) (runtime stride) */
          puVar17 = (ushort *)(local_10->elementSize * uVar23 + (int)local_10->data);
        }
        else {
          puVar17 = (ushort *)0x0;
        }
        uVar3 = *puVar17;
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar18 = (STGameObjC *)0x0;
        }
        else {
          pSVar18 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,uVar3,CASE_1);
        }
        if ((pSVar18 != (STGameObjC *)0x0) &&
           (iVar12 = thunk_FUN_004e3790(pSVar18,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                        (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           iVar12 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = uVar3;
          if (*(char *)((int)param_1 + 9) != '\0') {
            TLOBaseTy::thunk_FUN_004c7cc0
                      ((TLOBaseTy *)pSVar18,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                       0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar23 = uVar23 + 1;
        bVar24 = uVar23 < local_10->count;
      } while ((int)uVar23 < (int)local_10->count);
    }
    if (local_10 != (DArrayTy *)0x0) {
      DArrayDestroy(local_10);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((local_c->field_007B == -0x8000) && (local_c->field_009B == 0x78)) {
      local_c->field_009B = 0x33;
      local_c->field_009F = 0;
      local_c->field_00A3 = 0;
      local_c->field_00A7 = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x75:
    *(undefined1 *)(param_1 + 2) = 0;
    if (local_c->field_007B != -0x8000) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (local_c->field_009B == 0x34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if ((char)param_1[2] == '\0') {
      sVar4 = local_c->field_0039;
      if (sVar4 < 1) {
LAB_0066380d:
        iVar12 = 0;
      }
      else if (sVar4 < 3) {
        iVar12 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar12 = 0x62;
      }
      pDVar16 = (DArrayTy *)sub_0065FA60(local_c,iVar12,(sVar4 != 3) - 1 & 2,(short *)0x0);
      if (pDVar16 != (DArrayTy *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        DArrayDestroy(pDVar16);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) &&
         (*(DArrayTy **)((int)param_1 + 10) != (DArrayTy *)0x0)) {
        thunk_FUN_0065d940(this_00,*(DArrayTy **)((int)param_1 + 10),1);
      }
      uVar11 = sub_0065D9C0(this_00);
      *(undefined2 *)((int)param_1 + 0xe) = uVar11;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pDVar16 = (DArrayTy *)sub_0065DA10(local_c,extraout_EDX);
      if (pDVar16 != (DArrayTy *)0x0) {
        uVar23 = 0;
        if (0 < (int)pDVar16->count) {
          bVar24 = pDVar16->count != 0;
          do {
            if (bVar24) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar16, uVar23) (runtime stride) */
              puVar17 = (ushort *)(pDVar16->elementSize * uVar23 + (int)pDVar16->data);
            }
            else {
              puVar17 = (ushort *)0x0;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_28 = CONCAT22((short)((uint)puVar17 >> 0x10),*puVar17);
            pSVar18 = STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,*(char *)&local_c->field_0024,*puVar17,CASE_1
                                );
            if (pSVar18 != (STGameObjC *)0x0) {
              iVar12 = (*pSVar18->vtable->vfunc_2C)();
              if ((iVar12 < 1) || (0x28 < iVar12)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (((bVar24) &&
                  ((*(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == pSVar18->field_081C)))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar12 = (*pSVar18->vtable->vfunc_2C)(), *(int *)((int)param_1 + 0xb) == iVar12))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                }
              }
            }
            uVar23 = uVar23 + 1;
            bVar24 = uVar23 < pDVar16->count;
          } while ((int)uVar23 < (int)pDVar16->count);
        }
        DArrayDestroy(pDVar16);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (TLOBaseTy *)((int)&local_24->vtable + 1);
  bVar24 = local_24 < (TLOBaseTy *)local_8->count;
  if ((int)local_8->count <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

