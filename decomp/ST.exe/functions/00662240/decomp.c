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
  Global_sub_004E80F0_param_2Enum GVar5;
  uint *puVar6;
  dword dVar7;
  undefined4 uVar8;
  code *pcVar9;
  AiFltClassTy *this_00;
  undefined2 uVar10;
  int iVar11;
  IMAGE_DOS_HEADER *pIVar12;
  STBoatC *pSVar13;
  void *pvVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  DArrayTy *pDVar15;
  ushort *puVar16;
  STGameObjC *pSVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  AiPlrClassTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  int iVar18;
  uint uVar19;
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
  undefined4 *puVar20;
  STWorldObject *this_02;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  short *psVar24;
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

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar11 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_c;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar18 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x98a,0,iVar11,"%s",
                                "AiFltClassTy::GetAiMess");
    if (iVar18 == 0) {
      RaiseInternalException(iVar11,0,"E:\\__titans\\ai\\ai_flt.cpp",0x98b);
      return iVar11;
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
        uVar22 = local_c->field_009B;
        if ((uVar22 < 0x8c) || (0x95 < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar22 < 100) || (0x6d < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        uVar22 = local_c->field_009B;
        if ((uVar22 < 0x8c) || (0x95 < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar22 < 100) || (0x6d < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar22 < 0x6e) || (0x77 < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar22 < 0x82) || (0x8b < uVar22)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((uVar22 == 0x23) || ((0xb < uVar22 && (uVar22 < 0x14)))) {
          bVar23 = true;
        }
        else {
          bVar23 = false;
        }
        if (bVar23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((0 < local_c->field_0157) &&
          (uVar10 = sub_0065D9C0(local_c),
          (int)this_00->field_0157 <= CONCAT22(extraout_var_02,uVar10))) &&
         (*(undefined1 *)(param_1 + 2) = 1, *(char *)((int)param_1 + 9) != '\0')) {
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar17 = (STGameObjC *)0x0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pSVar17 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)((int)param_1 + 0x12),
                               (ushort)param_1[4],CASE_1);
        }
        if (pSVar17 != (STGameObjC *)0x0) {
          STFishC::sub_004162B0
                    ((STFishC *)pSVar17,local_2c,local_30,(undefined2 *)((int)&local_8 + 2));
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
       (uVar10 = sub_0065D9C0(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar10)
       )) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)((int)param_1 + 9) = uVar10;
      uVar8 = this_00->field_0188;
      *(undefined4 *)((int)param_1 + 0xf) = uVar8;
      iVar11 = thunk_FUN_0065e3b0((AnonShape_0065DA10_8B0AA883 *)this_00,uVar8);
      *(int *)((int)param_1 + 0xb) = iVar11;
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
    GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
    if ((0x53 < GVar5) && (GVar5 < 0x5b)) {
      pIVar12 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar11 = extraout_EDX_00;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(this_00->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = extraout_EDX_01;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(this_00->field_0024,GVar5);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar11 = extraout_EDX_02;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar11,0x53);
      if ((local_8 != (DArrayTy *)0x0) && (local_8->count != 0)) {
        iVar11 = *(int *)((int)param_1 + 10);
        if (*(char *)(iVar11 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar11 + 0x16) < 0) || (*(short *)(iVar11 + 0x18) < 0)) ||
                 (*(short *)(iVar11 + 0x1a) < 0)) && (this_00->field_0284 != (ushort *)0x0)) {
          *(ushort *)(iVar11 + 0x16) = this_00->field_0284[0x41];
          *(ushort *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284[0x42];
          *(ushort *)(*(int *)((int)param_1 + 10) + 0x1a) = this_00->field_0284[0x43];
        }
        local_10 = (DArrayTy *)0x0;
        if (0 < (int)local_8->count) {
          bVar23 = local_8->count != 0;
          do {
            pDVar15 = local_10;
            if (bVar23) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_10) (runtime stride) */
              puVar16 = (ushort *)(local_8->elementSize * (int)local_10 + (int)local_8->data);
            }
            else {
              puVar16 = (ushort *)0x0;
            }
            uVar3 = *puVar16;
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
                puVar20 = *(undefined4 **)((int)param_1 + 10);
                puVar21 = &this_00->field_01AD;
                for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar21 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar21 = puVar21 + 1;
                }
                *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
                if ((this_00->field_01EB != '\0') &&
                   (iVar11 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                this_00->field_0024,(undefined4 *)0x0,(int *)0x0,
                                                (int *)0x0,0,(int *)0x0), iVar11 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar11 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,&local_18,
                                              &local_1c,&local_20,(int)this_00->field_01C3,
                                              (int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar11 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    *(undefined2 *)((int)param_1 + 0xe) = 0;
                    pDVar15 = local_10;
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
            local_10 = (DArrayTy *)((int)&pDVar15->flags + 1);
            bVar23 = local_10 < (DArrayTy *)local_8->count;
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
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      pIVar12 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar11 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar5);
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar11 = thunk_FUN_004e6c20(this_00->field_0024,GVar5);
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar11 = thunk_FUN_004e80f0(this_00->field_0024,GVar5);
          }
          else {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar11 = 1;
            }
            else {
              iVar11 = 0;
            }
          }
        }
      }
      if (iVar11 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar11 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar11 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar11 = 0x19;
      }
      else {
        iVar11 = 0;
      }
      uVar22 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                         ((AnonReceiver_0065DA50 *)this_00,iVar11,-1);
      if ((int)uVar22 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar11 = *(int *)((int)param_1 + 10);
      if (*(char *)(iVar11 + 0x3e) == '\0') {
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
      if (((*(char *)(iVar11 + 0x3e) != '\0') &&
          (((*(short *)(iVar11 + 0x16) < 0 || (*(short *)(iVar11 + 0x18) < 0)) ||
           (*(short *)(iVar11 + 0x1a) < 0)))) && (this_00->field_0284 != (ushort *)0x0)) {
        *(ushort *)(iVar11 + 0x16) = this_00->field_0284[0x41];
        *(ushort *)(*(int *)((int)param_1 + 10) + 0x18) = this_00->field_0284[0x42];
        *(ushort *)(*(int *)((int)param_1 + 10) + 0x1a) = this_00->field_0284[0x43];
      }
      puVar20 = *(undefined4 **)((int)param_1 + 10);
      puVar21 = &this_00->field_01AD;
      for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar21 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar21 = puVar21 + 1;
      }
      *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
      if ((this_00->field_01EB != '\0') &&
         (iVar11 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      this_00->field_0024,(undefined4 *)0x0,(int *)0x0,(int *)0x0,0,
                                      (int *)0x0), iVar11 == 0)) {
        local_14 = (STGameObjC *)(int)this_00->field_01C3;
        local_10 = (DArrayTy *)(int)this_00->field_01C5;
        local_24 = (TLOBaseTy *)(int)this_00->field_01C7;
        iVar11 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,(int *)&local_14,
                                    (int *)&local_10,(int *)&local_24,(int)this_00->field_01C3,
                                    (int)this_00->field_01C5,(int)this_00->field_01C7,0);
        if (iVar11 == 0) {
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
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      pIVar12 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar12) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar5 = **(Global_sub_004E80F0_param_2Enum **)((int)param_1 + 10);
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar11 = extraout_EDX_03;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(this_00->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = extraout_EDX_04;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(this_00->field_0024,GVar5);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar11 = extraout_EDX_05;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar18 = (-(uint)(**(int **)((int)param_1 + 10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar18 = (-(uint)(**(int **)((int)param_1 + 10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar18 = 0x5c;
      }
      else {
        iVar18 = 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar11,iVar18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != (DArrayTy *)0x0) && (uVar22 = local_8->count, uVar22 != 0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar19 = 0, 0 < (int)uVar22)) {
        do {
          if (uVar19 < uVar22) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, uVar19) (runtime stride) */
            puVar16 = (ushort *)(local_8->elementSize * uVar19 + (int)local_8->data);
          }
          else {
            puVar16 = (ushort *)0x0;
          }
          uVar3 = *puVar16;
          if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
            local_24 = (TLOBaseTy *)0x0;
          }
          else {
            local_24 = (TLOBaseTy *)
                       STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          if (((STGameObjC *)local_24 != (STGameObjC *)0x0) &&
             (iVar11 = thunk_FUN_004c93e0(local_24,1), iVar11 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            *(ushort *)((int)param_1 + 0xe) = uVar3;
            if (*(char *)((int)param_1 + 9) != '\0') {
              puVar20 = *(undefined4 **)((int)param_1 + 10);
              puVar21 = &this_00->field_01AD;
              for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar21 = *puVar20;
                puVar20 = puVar20 + 1;
                puVar21 = puVar21 + 1;
              }
              *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
              puVar6 = *(uint **)((int)param_1 + 10);
              TLOBaseTy::thunk_FUN_004c7cc0
                        (local_24,1,*puVar6,1,1,(uint)(ushort)puVar6[3],puVar6[2],
                         (int)(char)puVar6[7],(char *)((int)puVar6 + 0x1d));
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
          uVar19 = uVar19 + 1;
          uVar22 = local_8->count;
        } while ((int)uVar19 < (int)uVar22);
      }
      if (local_8 == (DArrayTy *)0x0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar5 == CASE_A3) || (GVar5 == CASE_A8)) || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
    if (!bVar23) {
      if (((GVar5 == 0xdd) || (GVar5 == 0xde)) || ((GVar5 == 0xe2 || (GVar5 == 0xdc)))) {
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      if (!bVar23) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar18 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar11 = extraout_EDX_09;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
          iVar18 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = extraout_EDX_10;
        }
        else {
          if ((GVar5 == CASE_A3) ||
             (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((iVar11 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
              iVar18 = 1;
            }
            else {
              iVar18 = 0;
            }
          }
          else {
            iVar18 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar11 = extraout_EDX_11;
          }
        }
      }
      if (iVar18 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar18 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar18 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar18 = 0;
LAB_00663076:
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar11,iVar18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != (DArrayTy *)0x0) &&
           (pSVar17 = (STGameObjC *)local_8->count, pSVar17 != (STGameObjC *)0x0)) &&
          ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = (STGameObjC *)0x0, 0 < (int)pSVar17)) {
        do {
          if (local_14 < pSVar17) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_14) (runtime stride) */
            puVar16 = (ushort *)(local_8->elementSize * (int)local_14 + (int)local_8->data);
          }
          else {
            puVar16 = (ushort *)0x0;
          }
          uVar3 = *puVar16;
          if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
            pSVar13 = (STBoatC *)0x0;
          }
          else {
            pSVar13 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          local_24 = (TLOBaseTy *)pSVar13;
          if (pSVar13 != (STBoatC *)0x0) {
            iVar11 = thunk_FUN_004e1490(pSVar13);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if ((iVar11 == 0) ||
               (iVar11._0_2_ = pSVar13->field_05B8, iVar11._2_2_ = pSVar13->field_05BA,
               g_worldGrid.sizeZ + -1 <= iVar11)) {
              bVar23 = false;
            }
            else {
              bVar23 = true;
            }
            if (bVar23) {
              *(undefined1 *)(param_1 + 2) = 1;
              *(ushort *)((int)param_1 + 0xe) = uVar3;
              if (*(char *)((int)param_1 + 9) != '\0') {
                puVar20 = *(undefined4 **)((int)param_1 + 10);
                puVar21 = &this_00->field_01AD;
                for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar21 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar21 = puVar21 + 1;
                }
                *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
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
          pSVar17 = (STGameObjC *)local_8->count;
        } while ((int)local_14 < (int)pSVar17);
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
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      iVar11 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar22 = extraout_EDX_06;
    }
    else {
      if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        iVar11 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_EDX_07;
      }
      else {
        if ((GVar5 == CASE_A3) || (((GVar5 == CASE_A8 || (GVar5 == CASE_B2)) || (GVar5 == CASE_BE)))
           ) {
          uVar22 = 1;
        }
        else {
          uVar22 = 0;
        }
        if ((uVar22 == 0) || (g_allPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          if ((bVar23) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar22 = extraout_EDX_08;
        }
      }
    }
    if (iVar11 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar11 = **(int **)((int)param_1 + 10);
    if (iVar11 - 0xa3U < 0x1c) {
      uVar22 = (uint)*(byte *)(iVar11 + 0x663d51);
      switch(iVar11) {
      case 0xa3:
        iVar11 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar11 = 0x44;
        break;
      case 0xb2:
        iVar11 = 0x70;
        break;
      case 0xbe:
        iVar11 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar11 = 0;
    }
    local_8 = (DArrayTy *)sub_0065E360(this_00,uVar22,iVar11);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_8 != (DArrayTy *)0x0) && (dVar7 = local_8->count, dVar7 != 0)) &&
        ((*(char *)(*(int *)((int)param_1 + 10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = (TLOBaseTy *)0x0, 0 < (int)dVar7)) {
      bVar23 = dVar7 != 0;
LAB_00662dbb:
      if (bVar23) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_8, (int)local_24) (runtime stride) */
        puVar16 = (ushort *)(local_8->elementSize * (int)local_24 + (int)local_8->data);
      }
      else {
        puVar16 = (ushort *)0x0;
      }
      uVar3 = *puVar16;
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
        iVar11 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,4,0,1,1,1);
        break;
      default:
        iVar11 = 0;
        break;
      case 0xa8:
        iVar11 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,6,0,1,1,1);
        break;
      case 0xb2:
        iVar11 = 1;
        break;
      case 0xbe:
        iVar11 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,8,0,1,1,1);
      }
      if (iVar11 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      *(ushort *)((int)param_1 + 0xe) = uVar3;
      if (*(char *)((int)param_1 + 9) != '\0') {
        puVar20 = *(undefined4 **)((int)param_1 + 10);
        puVar21 = &this_00->field_01AD;
        for (iVar11 = 0x12; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar21 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
        }
        *(undefined2 *)puVar21 = *(undefined2 *)puVar20;
        iVar11 = **(int **)((int)param_1 + 10);
        if (iVar11 == 0xa3) {
          iVar11 = 4;
LAB_00662ee7:
          TLOBaseTy::thunk_FUN_004c7cc0
                    ((TLOBaseTy *)local_10,iVar11,0,1,1,0xffffffff,(*(int **)((int)param_1 + 10))[2]
                     ,0xff,(char *)0x0);
        }
        else {
          if (iVar11 == 0xa8) {
            iVar11 = 6;
            goto LAB_00662ee7;
          }
          if (iVar11 == 0xbe) {
            iVar11 = 8;
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
    puVar6 = *(uint **)((int)param_1 + 9);
    uVar22 = *puVar6;
    if ((uVar22 < 0x32) || (0x73 < uVar22)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      if (local_c->field_01B5 != puVar6[2]) {
        sVar4 = *(short *)((int)puVar6 + 0x1a);
        sVar1 = (short)puVar6[6];
        sVar2 = *(short *)((int)puVar6 + 0x16);
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
          iVar11 = this_02->GetObjectTypeId();
          if (iVar11 == **(int **)((int)param_1 + 9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar11 = this_02->GetObjectTypeId();
          if (iVar11 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar11 = this_02->GetObjectTypeId();
          if (iVar11 == 0x78) {
            iVar11 = *(int *)&this_02[0x10].field_0x19;
          }
          else {
            iVar11 = 0;
          }
          if (iVar11 == **(int **)((int)param_1 + 9)) {
            iVar11 = this_02->GetObjectTypeId();
            if (iVar11 == 0x78) {
              uVar22 = *(uint *)&this_02[0x11].field_0x5;
            }
            else {
              uVar22 = 0xffffffff;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (uVar22 == *(ushort *)(*(int *)((int)param_1 + 9) + 0xc)) {
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
      if ((uVar22 == 0) || (0x28 < uVar22)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (bVar23) {
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar17 = (STGameObjC *)0x0;
        }
        else {
          pSVar17 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,
                               (ushort)puVar6[0xe],CASE_1);
        }
        if (pSVar17 == (STGameObjC *)0x0) goto LAB_00663325;
        iVar11 = thunk_FUN_004c9430(pSVar17,1,*(int *)(*(int *)((int)param_1 + 9) + 8));
        if (iVar11 == 0) {
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
    uVar19 = 0;
    pDVar15 = local_c->field_020B;
    uVar22 = pDVar15->count;
    if (0 < (int)uVar22) {
      bVar23 = uVar22 != 0;
      while( true ) {
        if (bVar23) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar15, uVar19) (runtime stride) */
          pvVar14 = (void *)(pDVar15->elementSize * uVar19 + (int)pDVar15->data);
        }
        else {
          pvVar14 = (void *)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(param_1[2] + 8) == *(int *)((int)pvVar14 + 0x24)) break;
        uVar19 = uVar19 + 1;
        bVar23 = uVar19 < uVar22;
        if ((int)uVar22 <= (int)uVar19) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined4 *)((int)pvVar14 + 0x24) = 0;
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
           (uVar10 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var,uVar10))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar24 = *(short **)((int)param_1 + 0xe);
LAB_0066348c:
          AppendZone(this_00,psVar24);
        }
      }
      else if (*(uint *)&local_c->field_022F->field_0xc < 10) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar10 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var_00,uVar10))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          psVar24 = *(short **)((int)param_1 + 0xe);
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
        uVar22 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar22 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar22 = 0;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_00663504:
    if (*(uint *)((int)param_1 + 0xb) != uVar22) {
      iVar11 = local_c->field_0116;
      if (iVar11 == 0xdd) {
        uVar22 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar11 == 0xde) {
        uVar22 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar11 == 0xe0) {
        uVar22 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar22 = 0;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(uint *)((int)param_1 + 0xb) != uVar22) {
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
        (uVar22 = thunk_FUN_006755e0(*(int *)param_1[3]), this_00->field_007B == (short)uVar22)) &&
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
    iVar11 = (int)*(short *)(*(int *)((int)param_1 + 10) + 1);
    sVar4 = local_c->field_0039;
    if (sVar4 < 1) {
LAB_006636da:
      iVar18 = 0;
    }
    else if (sVar4 < 3) {
      iVar18 = 0x35;
    }
    else {
      if (sVar4 != 3) goto LAB_006636da;
      iVar18 = thunk_FUN_004e7fc0(iVar11);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar11 = extraout_EDX_12;
    }
    local_10 = (DArrayTy *)sub_0065E360(this_00,iVar11,iVar18);
    if (((local_10 != (DArrayTy *)0x0) && (dVar7 = local_10->count, dVar7 != 0)) &&
       (uVar22 = 0, 0 < (int)dVar7)) {
      bVar23 = dVar7 != 0;
      do {
        if (bVar23) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_10, uVar22) (runtime stride) */
          puVar16 = (ushort *)(local_10->elementSize * uVar22 + (int)local_10->data);
        }
        else {
          puVar16 = (ushort *)0x0;
        }
        uVar3 = *puVar16;
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          pSVar17 = (STGameObjC *)0x0;
        }
        else {
          pSVar17 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,uVar3,CASE_1);
        }
        if ((pSVar17 != (STGameObjC *)0x0) &&
           (iVar11 = thunk_FUN_004e3790(pSVar17,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),
                                        (int)*(short *)(*(int *)((int)param_1 + 10) + 3),1),
           iVar11 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          *(ushort *)((int)param_1 + 0xe) = uVar3;
          if (*(char *)((int)param_1 + 9) != '\0') {
            TLOBaseTy::thunk_FUN_004c7cc0
                      ((TLOBaseTy *)pSVar17,2,(int)*(short *)(*(int *)((int)param_1 + 10) + 1),1,1,
                       0xffffffff,0,0xff,(char *)0x0);
          }
          break;
        }
        uVar22 = uVar22 + 1;
        bVar23 = uVar22 < local_10->count;
      } while ((int)uVar22 < (int)local_10->count);
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
        iVar11 = 0;
      }
      else if (sVar4 < 3) {
        iVar11 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar11 = 0x62;
      }
      pDVar15 = (DArrayTy *)sub_0065FA60(local_c,iVar11,(sVar4 != 3) - 1 & 2,(short *)0x0);
      if (pDVar15 != (DArrayTy *)0x0) {
        *(undefined1 *)(param_1 + 2) = 1;
        DArrayDestroy(pDVar15);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < *(char *)((int)param_1 + 9)) &&
         (*(DArrayTy **)((int)param_1 + 10) != (DArrayTy *)0x0)) {
        thunk_FUN_0065d940(this_00,*(DArrayTy **)((int)param_1 + 10),1);
      }
      uVar10 = sub_0065D9C0(this_00);
      *(undefined2 *)((int)param_1 + 0xe) = uVar10;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      *(undefined2 *)((int)param_1 + 0xf) = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pDVar15 = (DArrayTy *)sub_0065DA10(local_c,extraout_EDX);
      if (pDVar15 != (DArrayTy *)0x0) {
        uVar22 = 0;
        if (0 < (int)pDVar15->count) {
          bVar23 = pDVar15->count != 0;
          do {
            if (bVar23) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar15, uVar22) (runtime stride) */
              puVar16 = (ushort *)(pDVar15->elementSize * uVar22 + (int)pDVar15->data);
            }
            else {
              puVar16 = (ushort *)0x0;
            }
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_28 = CONCAT22((short)((uint)puVar16 >> 0x10),*puVar16);
            pSVar17 = STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,*(char *)&local_c->field_0024,*puVar16,CASE_1
                                );
            if (pSVar17 != (STGameObjC *)0x0) {
              iVar11 = (*pSVar17->vtable->vfunc_2C)();
              if ((iVar11 < 1) || (0x28 < iVar11)) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (((bVar23) &&
                  ((*(short *)((int)param_1 + 9) == -2 ||
                   (*(short *)((int)param_1 + 9) == pSVar17->field_081C)))) &&
                 ((*(int *)((int)param_1 + 0xb) == 0 ||
                  (iVar11 = (*pSVar17->vtable->vfunc_2C)(), *(int *)((int)param_1 + 0xb) == iVar11))
                 )) {
                *(short *)((int)param_1 + 0xf) = *(short *)((int)param_1 + 0xf) + 1;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)param_1 + 0x11),&local_28);
                }
              }
            }
            uVar22 = uVar22 + 1;
            bVar23 = uVar22 < pDVar15->count;
          } while ((int)uVar22 < (int)pDVar15->count);
        }
        DArrayDestroy(pDVar15);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (TLOBaseTy *)((int)&local_24->vtable + 1);
  bVar23 = local_24 < (TLOBaseTy *)local_8->count;
  if ((int)local_8->count <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

