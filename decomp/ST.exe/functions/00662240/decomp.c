#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetAiMess

   [STSwitchEnumApplier] Switch target field_009B uses
   /SubmarineTitans/Recovered/Enums/AiFltClassTy_field_009BState. Cases:
   CASE_A=10;CASE_14=20;CASE_19=25;CASE_23=35;CASE_28=40;CASE_2A=42;CASE_32=50;CASE_33=51;CASE_34=52;CASE_3C=60;CASE_41=65;CASE_64=100;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_78=120;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_8C=140;CASE_1F5=501;CASE_1F6=502;CASE_1F7=503;CASE_1F8=504;CASE_201=513;CASE_246=582

   [STSwitchEnumApplier] Switch target field_009B uses
   /SubmarineTitans/Recovered/Enums/AiFltClassTy_field_009BState. Cases:
   CASE_0=0;CASE_A=10;CASE_14=20;CASE_19=25;CASE_23=35;CASE_28=40;CASE_2A=42;CASE_32=50;CASE_33=51;CASE_34=52;CASE_3C=60;CASE_41=65;CASE_64=100;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_78=120;CASE_82=130;CASE_83=131;CASE_84=132;CASE_85=133;CASE_8C=140;CASE_1F5=501;CASE_1F6=502;CASE_1F7=503;CASE_1F8=504;CASE_201=513;CASE_246=582;CASE_24E=590
    */

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
  AiFltClassTy_field_009BState AVar10;
  AiFltClassTy *this_00;
  undefined2 uVar12;
  int local_EAX_36;
  IMAGE_DOS_HEADER *pIVar13;
  int local_EAX_225;
  int local_EAX_1152;
  uint local_EAX_1361;
  int local_EAX_1968;
  int iVar14;
  int local_EAX_2335;
  int local_EAX_2623;
  int local_EAX_3036;
  int local_EAX_3436;
  STGameObjC *pSVar15;
  STBoatC *pSVar16;
  STGameObjC *local_EAX_4400;
  void *pvVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  uint uVar23;
  int iVar19;
  STGameObjC *pSVar18;
  int iVar12;
  DArrayTy *pDVar18;
  ushort *puVar19;
  STGameObjC *local_EAX_5775;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  int local_EAX_6037;
  AiPlrClassTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  STGameObjC *local_EAX_6756;
  int local_EAX_6953;
  int iVar20;
  uint uVar21;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_00;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_01;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_02;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_03;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_04;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_05;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_06;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_07;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX_08;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_09;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_11;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_EDX_12;
  byte *puVar22;
  STWorldObject *this_02;
  byte *puVar23;
  uint uVar24;
  bool bVar25;
  short *psVar26;
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
  local_EAX_36 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_74.previous;
    local_EAX_6953 =
         ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x98a,0,local_EAX_36,"%s",
                            "AiFltClassTy::GetAiMess");
    if (local_EAX_6953 == 0) {
      RaiseInternalException(local_EAX_36,0,"E:\\__titans\\ai\\ai_flt.cpp",0x98b);
      return local_EAX_36;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (*param_1 < 100) {
    Library::DKW::TBL::DArrayAppend(local_c->field_0217,param_1);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  switch(*param_1) {
  case 100:
    if (((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
       ((local_c->field_0152 != '\0' &&
        ((((uint)STField<ushort>(param_1,0xe) & local_c->field_0153) != 0 &&
         (local_c->field_00B3 == 0)))))) {
      if (STField<ushort>(param_1,0xe) == 1) {
        AVar10 = local_c->field_009B;
        if ((AVar10 < CASE_8C) || (0x95 < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((AVar10 < CASE_64) || (0x6d < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        AVar10 = local_c->field_009B;
        if ((AVar10 < CASE_8C) || (0x95 < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((AVar10 < CASE_64) || (0x6d < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((AVar10 < CASE_6E) || (0x77 < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((AVar10 < CASE_82) || (0x8b < AVar10)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if ((AVar10 == CASE_23) || ((0xb < AVar10 && (AVar10 < CASE_14)))) {
          bVar25 = true;
        }
        else {
          bVar25 = false;
        }
        if (bVar25) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((0 < local_c->field_0157) &&
          (uVar12 = sub_0065D9C0(local_c),
          (int)this_00->field_0157 <= CONCAT22(extraout_var_02,uVar12))) &&
         (*(undefined1 *)(param_1 + 2) = 1, STField<char>(param_1,9) != '\0')) {
        if (g_allPlayers_007FA174 == nullptr) {
          local_EAX_6756 = nullptr;
        }
        else {
          local_EAX_6756 =
               STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,STField<char>(param_1,0x12),(ushort)param_1[4],
                          CASE_1);
        }
        if (local_EAX_6756 != nullptr) {
          STFishC::sub_004162B0
                    ((STFishC *)local_EAX_6756,local_2c,local_30,(short *)((int)&local_8 + 2));
          this_00->field_0195 = local_2c[0] + -2;
          this_00->field_0197 = local_30[0] + -2;
          this_00->field_0199 = 0;
          this_00->field_019B = 5;
          this_00->field_019D = 3;
          this_00->field_019F = 5;
          thunk_FUN_006756d0(&this_00->field_0195,&this_00->field_0197,&this_00->field_019B,
                             &this_00->field_019D);
        }
        this_00->field_009B = CASE_8C;
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
         (((local_c->field_009B < CASE_82 || (0x8b < local_c->field_009B)) &&
          (local_c->field_00B3 == 0)))))) &&
       (uVar12 = sub_0065D9C0(local_c), (int)this_00->field_018C <= CONCAT22(extraout_var_01,uVar12)
       )) {
      *(undefined1 *)(param_1 + 2) = 1;
      STField<undefined2>(param_1,9) = uVar12;
      uVar9 = this_00->field_0188;
      STField<undefined4>(param_1,0xf) = uVar9;
      local_EAX_6037 = thunk_FUN_0065e3b0((AnonShape_0065DA10_8B0AA883 *)this_00,uVar9);
      STField<int>(param_1,0xb) = local_EAX_6037;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x67:
    if ((((local_c->field_007B != -0x8000) && (local_c->field_007B != 1)) &&
        (local_c->field_0187 != '\0')) && (local_c->field_00B3 == 0)) {
      this_01 = thunk_FUN_004357f0(*(char *)&local_c->field_0024);
      if ((char)param_1[2] == '\0') {
        this_00->field_00FB = STField<undefined4>(param_1,9);
        this_00->field_00F7 = STField<undefined4>(param_1,0xd);
        this_00->field_00EF = (int)STField<short>(param_1,0x11);
        uVar9 = STField<undefined4>(param_1,0x13);
        this_00->field_0195 = (short)uVar9;
        this_00->field_0197 = (short)((uint)uVar9 >> 0x10);
        uVar9 = STField<undefined4>(param_1,0x17);
        this_00->field_0199 = (short)uVar9;
        this_00->field_019B = (short)((uint)uVar9 >> 0x10);
        uVar9 = STField<undefined4>(param_1,0x1b);
        this_00->field_019D = (short)uVar9;
        this_00->field_019F = (short)((uint)uVar9 >> 0x10);
        this_00->field_009B = CASE_82;
        this_00->field_009F = 0;
        this_00->field_00A3 = 0;
        this_00->field_00A7 = 0;
        if (this_01 != nullptr) {
          thunk_FUN_0067bf60(this_01,'\0',this_00->field_00F7);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else if ((0x81 < this_00->field_009B) && (this_00->field_009B < CASE_8C)) {
        if (this_01 != nullptr) {
          thunk_FUN_0067bf60(this_01,'\x01',this_00->field_00F7);
        }
        this_00->field_009B = CASE_0;
        goto LAB_00663af0;
      }
    }
    break;
  case 0x68:
    if (local_c->field_0194 == '\0') {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    GVar5 = *STField<uint *>(param_1,10);
    if ((0x53 < GVar5) && (GVar5 < 0x5b)) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
        local_EAX_225 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        iVar20 = extraout_EDX_00;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
          local_EAX_225 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          iVar20 = extraout_EDX_01;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar20 = 1;
          }
          else {
            iVar20 = 0;
          }
          if ((iVar20 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
              local_EAX_225 = 1;
            }
            else {
              local_EAX_225 = 0;
            }
          }
          else {
            local_EAX_225 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            iVar20 = extraout_EDX_02;
          }
        }
      }
      if (local_EAX_225 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar20,0x53);
      if ((local_8 != nullptr) && (local_8->count != 0)) {
        iVar20 = STField<int>(param_1,10);
        if (*(char *)(iVar20 + 0x3e) == '\0') {
          if ((this_00->field_009B == 0xc) || (this_00->field_00B3 != 0)) goto LAB_0066263e;
        }
        else if ((((*(short *)(iVar20 + 0x16) < 0) || (*(short *)(iVar20 + 0x18) < 0)) ||
                 (*(short *)(iVar20 + 0x1a) < 0)) && (this_00->field_0284 != nullptr)) {
          *(ushort *)(iVar20 + 0x16) = this_00->field_0284[0x41];
          *(ushort *)(STField<int>(param_1,10) + 0x18) = this_00->field_0284[0x42];
          *(ushort *)(STField<int>(param_1,10) + 0x1a) = this_00->field_0284[0x43];
        }
        local_10 = nullptr;
        if (0 < (int)local_8->count) {
          bVar25 = local_8->count != 0;
          do {
            pDVar18 = local_10;
            if (bVar25) {
              puVar19 = DArrayAt<ushort>(local_8, (int)local_10);
            }
            else {
              puVar19 = nullptr;
            }
            uVar3 = *puVar19;
            if (g_allPlayers_007FA174 == nullptr) {
              local_14 = nullptr;
            }
            else {
              local_14 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1
                                   );
            }
            if (local_14 != nullptr) {
              *(undefined1 *)(param_1 + 2) = 1;
              STField<ushort>(param_1,0xe) = uVar3;
              if (STField<char>(param_1,9) != '\0') {
                puVar22 = (byte *)(STField<undefined4 *>(param_1,10));
                puVar23 = (byte *)(&this_00->field_01AD);
                memmove(puVar23, puVar22, 0x4a); /* compiler REP MOVS byte copy */
                iVar20 = 0;
                if ((this_00->field_01EB != '\0') &&
                   (iVar20 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                                (int)this_00->field_01C7,this_00->field_01AD,
                                                this_00->field_0024,nullptr,nullptr,
                                                nullptr,0,nullptr), iVar20 == 0)) {
                  local_18 = (int)this_00->field_01C3;
                  local_1c = (int)this_00->field_01C5;
                  local_20 = (int)this_00->field_01C7;
                  iVar20 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,&local_18,
                                              &local_1c,&local_20,(int)this_00->field_01C3,
                                              (int)this_00->field_01C5,(int)this_00->field_01C7,
                                              (int)local_14);
                  if (iVar20 == 0) {
                    *(undefined1 *)(param_1 + 2) = 0;
                    STField<undefined2>(param_1,0xe) = 0;
                    pDVar18 = local_10;
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
                if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0xc;
                }
              }
              break;
            }
LAB_006625c2:
            local_10 = (DArrayTy *)((int)&pDVar18->flags + 1);
            bVar25 = local_10 < (DArrayTy *)local_8->count;
          } while ((int)local_10 < (int)local_8->count);
        }
      }
LAB_0066263e:
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 < 0x32) || (0x73 < GVar5)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (bVar25) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
        local_EAX_1152 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
          local_EAX_1152 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            bVar25 = true;
          }
          else {
            bVar25 = false;
          }
          if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
            local_EAX_1152 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
          }
          else {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
              local_EAX_1152 = 1;
            }
            else {
              local_EAX_1152 = 0;
            }
          }
        }
      }
      if (local_EAX_1152 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar20 = 0xc;
      }
      else if (sVar4 == 2) {
        iVar20 = 0x18;
      }
      else if (sVar4 == 3) {
        iVar20 = 0x19;
      }
      else {
        iVar20 = 0;
      }
      local_EAX_1361 =
           SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065DA50::thunk_FUN_0065da50
                     ((AnonReceiver_0065DA50 *)this_00,iVar20,-1);
      if ((int)local_EAX_1361 < 1) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      iVar20 = STField<int>(param_1,10);
      if (*(char *)(iVar20 + 0x3e) == '\0') {
        if (this_00->field_009B == CASE_23) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_009B == CASE_78) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
        if (this_00->field_00B3 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      STField<undefined2>(param_1,0xe) = 0xffff;
      if (STField<char>(param_1,9) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((*(char *)(iVar20 + 0x3e) != '\0') &&
          (((*(short *)(iVar20 + 0x16) < 0 || (*(short *)(iVar20 + 0x18) < 0)) ||
           (*(short *)(iVar20 + 0x1a) < 0)))) && (this_00->field_0284 != nullptr)) {
        *(ushort *)(iVar20 + 0x16) = this_00->field_0284[0x41];
        *(ushort *)(STField<int>(param_1,10) + 0x18) = this_00->field_0284[0x42];
        *(ushort *)(STField<int>(param_1,10) + 0x1a) = this_00->field_0284[0x43];
      }
      puVar22 = (byte *)(STField<undefined4 *>(param_1,10));
      puVar23 = (byte *)(&this_00->field_01AD);
      memmove(puVar23, puVar22, 0x4a); /* compiler REP MOVS byte copy */
      iVar20 = 0;
      if ((this_00->field_01EB != '\0') &&
         (iVar20 = thunk_FUN_004ae0b0(this_00->field_01C3,(int)this_00->field_01C5,
                                      (int)this_00->field_01C7,this_00->field_01AD,
                                      this_00->field_0024,nullptr,nullptr,nullptr,0,
                                      nullptr), iVar20 == 0)) {
        local_14 = (STGameObjC *)(int)this_00->field_01C3;
        local_10 = (DArrayTy *)(int)this_00->field_01C5;
        local_24 = (TLOBaseTy *)(int)this_00->field_01C7;
        iVar20 = thunk_FUN_004b0d10(this_00->field_0024,this_00->field_01AD,(int *)&local_14,
                                    (int *)&local_10,(int *)&local_24,(int)this_00->field_01C3,
                                    (int)this_00->field_01C5,(int)this_00->field_01C7,0);
        if (iVar20 == 0) {
          *(undefined1 *)(param_1 + 2) = 0;
          STField<undefined2>(param_1,0xe) = 0;
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
      this_00->field_009B = CASE_23;
      this_00->field_009F = 0;
      this_00->field_00A3 = 0;
      this_00->field_00A7 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(char *)(STField<int>(param_1,10) + 0x3e) == '\0') {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      this_00->field_00B3 = 0x23;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((GVar5 == 0) || (0x28 < GVar5)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (bVar25) {
      pIVar13 = thunk_FUN_00674fb0(GVar5);
      if ((this_00->field_025F & (uint)pIVar13) == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      GVar6 = *STField<Global_sub_004E80F0_param_2Enum *>(param_1,10);
      if (((int)GVar6 < 1) || (0x28 < (int)GVar6)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
        local_EAX_1968 = thunk_FUN_004e6a80((byte *)this_00->field_0024,GVar6);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        iVar20 = extraout_EDX_03;
      }
      else {
        if (((int)GVar6 < 0x32) || (0x73 < (int)GVar6)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
          local_EAX_1968 = thunk_FUN_004e6c20(this_00->field_0024,GVar6);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          iVar20 = extraout_EDX_04;
        }
        else {
          if ((GVar6 == CASE_A3) ||
             (((GVar6 == CASE_A8 || (GVar6 == CASE_B2)) || (GVar6 == CASE_BE)))) {
            iVar20 = 1;
          }
          else {
            iVar20 = 0;
          }
          if ((iVar20 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar6 == 0xdd) || ((GVar6 == 0xde || (GVar6 == 0xe2)))) || (GVar6 == 0xdc)) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
              local_EAX_1968 = 1;
            }
            else {
              local_EAX_1968 = 0;
            }
          }
          else {
            local_EAX_1968 = thunk_FUN_004e80f0(this_00->field_0024,GVar6);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            iVar20 = extraout_EDX_05;
          }
        }
      }
      if (local_EAX_1968 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (sVar4 == 1) {
        iVar14 = (-(uint)(*STField<int *>(param_1,10) != 9) & 0xfffffff2) + 0x40;
      }
      else if (sVar4 == 2) {
        iVar14 = (-(uint)(*STField<int *>(param_1,10) != 0x15) & 0xffffffe9) + 0x49;
      }
      else if (sVar4 == 3) {
        iVar14 = 0x5c;
      }
      else {
        iVar14 = 0;
      }
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar20,iVar14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != nullptr) && (uVar24 = local_8->count, uVar24 != 0)) &&
          ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0xe && (this_00->field_00B3 == 0)))))) &&
         (uVar21 = 0, 0 < (int)uVar24)) {
        do {
          if (uVar21 < uVar24) {
            puVar19 = DArrayAt<ushort>(local_8, uVar21);
          }
          else {
            puVar19 = nullptr;
          }
          uVar3 = *puVar19;
          if (g_allPlayers_007FA174 == nullptr) {
            local_24 = nullptr;
          }
          else {
            local_24 = (TLOBaseTy *)
                       STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          if (((STGameObjC *)local_24 != nullptr) &&
             (local_EAX_2335 = thunk_FUN_004c93e0(local_24,1), local_EAX_2335 == 0)) {
            *(undefined1 *)(param_1 + 2) = 1;
            STField<ushort>(param_1,0xe) = uVar3;
            if (STField<char>(param_1,9) != '\0') {
              puVar22 = (byte *)(STField<undefined4 *>(param_1,10));
              puVar23 = (byte *)(&this_00->field_01AD);
              memmove(puVar23, puVar22, 0x4a); /* compiler REP MOVS byte copy */
              puVar7 = STField<uint *>(param_1,10);
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
              if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                this_00->field_00B3 = 0xe;
              }
            }
            break;
          }
          uVar21 = uVar21 + 1;
          uVar24 = local_8->count;
        } while ((int)uVar21 < (int)uVar24);
      }
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if ((((GVar5 == 0xa3) || (GVar5 == 0xa8)) || (GVar5 == 0xb2)) || (GVar5 == 0xbe)) {
      bVar25 = true;
    }
    else {
      bVar25 = false;
    }
    if (!bVar25) {
      if (((GVar5 == 0xdd) || (GVar5 == 0xde)) || ((GVar5 == 0xe2 || (GVar5 == 0xdc)))) {
        bVar25 = true;
      }
      else {
        bVar25 = false;
      }
      if (!bVar25) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
        local_EAX_3436 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        iVar20 = extraout_EDX_09;
      }
      else {
        if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
          bVar25 = false;
        }
        else {
          bVar25 = true;
        }
        if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
          local_EAX_3436 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          iVar20 = extraout_EDX_10;
        }
        else {
          if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
            iVar20 = 1;
          }
          else {
            iVar20 = 0;
          }
          if ((iVar20 == 0) || (g_allPlayers_007FA174 == nullptr)) {
            if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
              local_EAX_3436 = 1;
            }
            else {
              local_EAX_3436 = 0;
            }
          }
          else {
            local_EAX_3436 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
            /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
            iVar20 = extraout_EDX_11;
          }
        }
      }
      if (local_EAX_3436 == 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      sVar4 = this_00->field_0039;
      if (0 < sVar4) {
        if (sVar4 < 3) {
          iVar14 = 0x52;
          goto LAB_00663076;
        }
        if (sVar4 == 3) {
          iVar14 = 0x5f;
          goto LAB_00663076;
        }
      }
      iVar14 = 0;
LAB_00663076:
      local_8 = (DArrayTy *)sub_0065E360(this_00,iVar20,iVar14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((local_8 != nullptr) &&
           (pSVar15 = (STGameObjC *)local_8->count, pSVar15 != nullptr)) &&
          ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
           ((this_00->field_009B != 0x10 && (this_00->field_00B3 == 0)))))) &&
         (local_14 = nullptr, 0 < (int)pSVar15)) {
        do {
          if (local_14 < pSVar15) {
            puVar19 = DArrayAt<ushort>(local_8, (int)local_14);
          }
          else {
            puVar19 = nullptr;
          }
          uVar3 = *puVar19;
          if (g_allPlayers_007FA174 == nullptr) {
            pSVar16 = nullptr;
          }
          else {
            pSVar16 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
          }
          local_24 = (TLOBaseTy *)pSVar16;
          if (pSVar16 != nullptr) {
            iVar20 = thunk_FUN_004e1490(pSVar16);
            if ((iVar20 == 0) ||
               (STPiece<0,2>(iVar20) = pSVar16->field_05B8, STPiece<2,2>(iVar20) = pSVar16->field_05BA,
               g_worldGrid.sizeZ + -1 <= iVar20)) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            if (bVar25) {
              *(undefined1 *)(param_1 + 2) = 1;
              STField<ushort>(param_1,0xe) = uVar3;
              if (STField<char>(param_1,9) != '\0') {
                puVar22 = (byte *)(STField<undefined4 *>(param_1,10));
                puVar23 = (byte *)(&this_00->field_01AD);
                memmove(puVar23, puVar22, 0x4a); /* compiler REP MOVS byte copy */
                thunk_FUN_004ebab0(local_24,*STField<int *>(param_1,10),
                                   (STField<int *>(param_1,10))[0xb]);
                if (this_00->field_00B3 != 0) {
                  sub_0065F980(this_00);
                }
                this_00->field_009F = 0;
                this_00->field_00A3 = 0;
                this_00->field_00A7 = 0;
                this_00->field_009B = 0x12;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
                  this_00->field_00B3 = 0x12;
                }
              }
              break;
            }
          }
          local_14 = (STGameObjC *)((int)&local_14->vtable + 1);
          pSVar15 = (STGameObjC *)local_8->count;
        } while ((int)local_14 < (int)pSVar15);
      }
      if (local_8 == nullptr) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    if (((int)GVar5 < 1) || (0x28 < (int)GVar5)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
      local_EAX_2623 = thunk_FUN_004e6a80((byte *)local_c->field_0024,GVar5);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      uVar24 = extraout_EDX_06;
    }
    else {
      if (((int)GVar5 < 0x32) || (0x73 < (int)GVar5)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
        local_EAX_2623 = thunk_FUN_004e6c20(local_c->field_0024,GVar5);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar24 = extraout_EDX_07;
      }
      else {
        if ((GVar5 == 0xa3) || (((GVar5 == 0xa8 || (GVar5 == 0xb2)) || (GVar5 == 0xbe)))) {
          uVar24 = 1;
        }
        else {
          uVar24 = 0;
        }
        if ((uVar24 == 0) || (g_allPlayers_007FA174 == nullptr)) {
          if (((GVar5 == 0xdd) || ((GVar5 == 0xde || (GVar5 == 0xe2)))) || (GVar5 == 0xdc)) {
            bVar25 = true;
          }
          else {
            bVar25 = false;
          }
          if ((bVar25) && (g_allPlayers_007FA174 != nullptr)) {
            local_EAX_2623 = 1;
          }
          else {
            local_EAX_2623 = 0;
          }
        }
        else {
          local_EAX_2623 = thunk_FUN_004e80f0(local_c->field_0024,GVar5);
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          uVar24 = extraout_EDX_08;
        }
      }
    }
    if (local_EAX_2623 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    iVar20 = *STField<int *>(param_1,10);
    if (iVar20 - 0xa3U < 0x1c) {
      uVar24 = (uint)*(byte *)(iVar20 + 0x663d51);
      switch(iVar20) {
      case 0xa3:
        iVar20 = 0x4e;
        break;
      default:
        goto switchD_00662d3e_caseD_a4;
      case 0xa8:
        iVar20 = 0x44;
        break;
      case 0xb2:
        iVar20 = 0x70;
        break;
      case 0xbe:
        iVar20 = 0x72;
      }
    }
    else {
switchD_00662d3e_caseD_a4:
      iVar20 = 0;
    }
    local_8 = (DArrayTy *)sub_0065E360(this_00,uVar24,iVar20);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((local_8 != nullptr) && (dVar8 = local_8->count, dVar8 != 0)) &&
        ((*(char *)(STField<int>(param_1,10) + 0x3e) != '\0' ||
         ((this_00->field_009B != 0x12 && (this_00->field_00B3 == 0)))))) &&
       (local_24 = nullptr, 0 < (int)dVar8)) {
      bVar25 = dVar8 != 0;
LAB_00662dbb:
      if (bVar25) {
        puVar19 = DArrayAt<ushort>(local_8, (int)local_24);
      }
      else {
        puVar19 = nullptr;
      }
      uVar3 = *puVar19;
      if (g_allPlayers_007FA174 == nullptr) {
        local_10 = nullptr;
      }
      else {
        local_10 = (DArrayTy *)
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,*(char *)&this_00->field_0024,uVar3,CASE_1);
      }
      if ((STGameObjC *)local_10 == nullptr) goto cf_continue_loop_00662E52;
      switch(*STField<undefined4 *>(param_1,10)) {
      case 0xa3:
        local_EAX_3036 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,4,0,1,1,1);
        break;
      default:
        local_EAX_3036 = 0;
        break;
      case 0xa8:
        local_EAX_3036 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,6,0,1,1,1);
        break;
      case 0xb2:
        local_EAX_3036 = 1;
        break;
      case 0xbe:
        local_EAX_3036 = TLOBaseTy::sub_004C7860((TLOBaseTy *)local_10,8,0,1,1,1);
      }
      if (local_EAX_3036 == 0) goto cf_continue_loop_00662E52;
      *(undefined1 *)(param_1 + 2) = 1;
      STField<ushort>(param_1,0xe) = uVar3;
      if (STField<char>(param_1,9) != '\0') {
        puVar22 = (byte *)(STField<undefined4 *>(param_1,10));
        puVar23 = (byte *)(&this_00->field_01AD);
        memmove(puVar23, puVar22, 0x4a); /* compiler REP MOVS byte copy */
        iVar20 = *STField<int *>(param_1,10);
        if (iVar20 == 0xa3) {
          iVar20 = 4;
LAB_00662ee7:
          TLOBaseTy::thunk_FUN_004c7cc0
                    ((TLOBaseTy *)local_10,iVar20,0,1,1,0xffffffff,(STField<int *>(param_1,10))[2]
                     ,0xff,nullptr);
        }
        else {
          if (iVar20 == 0xa8) {
            iVar20 = 6;
            goto LAB_00662ee7;
          }
          if (iVar20 == 0xbe) {
            iVar20 = 8;
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
        if (*(char *)(STField<int>(param_1,10) + 0x3e) != '\0') {
          this_00->field_00B3 = 0x12;
        }
      }
    }
LAB_00662f34:
    if (local_8 != nullptr) {
      DArrayDestroy(local_8);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x69:
    puVar7 = STField<uint *>(param_1,9);
    uVar24 = *puVar7;
    if ((uVar24 < 0x32) || (0x73 < uVar24)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (bVar25) {
      if (local_c->field_01B5 != puVar7[2]) {
        sVar4 = STField<short>(puVar7,0x1a);
        sVar1 = (short)puVar7[6];
        sVar2 = STField<short>(puVar7,0x16);
        if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar1 < 0)) ||
           (((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)))) {
          this_02 = nullptr;
        }
        else {
          this_02 = STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0];
        }
        if ((this_02 != nullptr) &&
           (this_02[1].vtable == (STWorldObjectVTable *)local_c->field_0024)) {
          iVar20 = this_02->GetObjectTypeId();
          if (iVar20 == *STField<int *>(param_1,9)) {
            *(undefined1 *)(param_1 + 2) = 1;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar20 = this_02->GetObjectTypeId();
          if (iVar20 != 0x78) {
            *(undefined1 *)(param_1 + 2) = 0xff;
            g_currentExceptionFrame = local_74.previous;
            return 0;
          }
          iVar20 = this_02->GetObjectTypeId();
          if (iVar20 == 0x78) {
            iVar20 = *(int *)&this_02[0x10].field_0x19;
          }
          else {
            iVar20 = 0;
          }
          if (iVar20 == *STField<int *>(param_1,9)) {
            iVar20 = this_02->GetObjectTypeId();
            if (iVar20 == 0x78) {
              uVar24 = *(uint *)&this_02[0x11].field_0x5;
            }
            else {
              uVar24 = 0xffffffff;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (uVar24 == *(ushort *)(STField<int>(param_1,9) + 0xc)) {
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
      if ((uVar24 == 0) || (0x28 < uVar24)) {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
      if (bVar25) {
        if (g_allPlayers_007FA174 == nullptr) {
          local_EAX_4400 = nullptr;
        }
        else {
          local_EAX_4400 =
               STAllPlayersC::GetObjPtr
                         (g_allPlayers_007FA174,*(char *)&local_c->field_0024,(ushort)puVar7[0xe],
                          CASE_1);
        }
        if (local_EAX_4400 == nullptr) goto LAB_00663325;
        iVar20 = thunk_FUN_004c9430(local_EAX_4400,1,*(int *)(STField<int>(param_1,9) + 8));
        if (iVar20 == 0) {
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
    uVar21 = 0;
    pDVar18 = local_c->field_020B;
    uVar24 = pDVar18->count;
    if (0 < (int)uVar24) {
      bVar25 = uVar24 != 0;
      while( true ) {
        if (bVar25) {
          pvVar17 = DArrayAt<void>(pDVar18, uVar21);
        }
        else {
          pvVar17 = nullptr;
        }
        if (*(int *)(param_1[2] + 8) == STField<int>(pvVar17,0x24)) break;
        uVar21 = uVar21 + 1;
        bVar25 = uVar21 < uVar24;
        if ((int)uVar24 <= (int)uVar21) {
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      STField<undefined4>(pvVar17,0x24) = 0;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6d:
    if (local_c->field_0163 == '\x01') {
      if (STField<char>(param_1,0xd) == '\0') {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar12 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var,uVar12))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar26 = STField<short *>(param_1,0xe);
LAB_0066348c:
          AppendZone(this_00,psVar26);
        }
      }
      else if (*(uint *)&local_c->field_022F->field_0xc < 10) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((local_c->field_007B == 0x10) &&
           (uVar12 = sub_0065D9C0(local_c), 4 < CONCAT22(extraout_var_00,uVar12))) {
          param_1[2] = 1;
        }
        else {
          param_1[2] = 0xffffffff;
        }
        if ((char)param_1[3] != '\0') {
          psVar26 = STField<short *>(param_1,0xe);
          goto LAB_0066348c;
        }
      }
    }
    if ((this_00->field_0122 == '\x01') && ((char)param_1[3] != '\0')) {
      AppendPoint(this_00,STField<short *>(param_1,0xe),5);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x6e:
    if (local_c->field_009B != CASE_19) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    sVar4 = local_c->field_0039;
    if (0 < sVar4) {
      if (sVar4 < 3) {
        uVar24 = 0x3b;
        goto LAB_00663504;
      }
      if (sVar4 == 3) {
        uVar24 = 0x60;
        goto LAB_00663504;
      }
    }
    uVar24 = 0;
LAB_00663504:
    if (STField<uint>(param_1,0xb) != uVar24) {
      iVar20 = local_c->field_0116;
      if (iVar20 == 0xdd) {
        uVar24 = (-(uint)(sVar4 != 3) & 0xffffffdb) + 0x5e;
      }
      else if (iVar20 == 0xde) {
        uVar24 = -(uint)(sVar4 != 3) & 0x4f;
      }
      else if (iVar20 == 0xe0) {
        uVar24 = (sVar4 != 3) - 1 & 0x61;
      }
      else {
        uVar24 = 0;
      }
      if (STField<uint>(param_1,0xb) != uVar24) {
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
    local_c->field_009B = CASE_19;
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
          /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
          thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
    }
    else if (uVar3 != 0x8000) {
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      thunk_FUN_0065e6c0((AnonShape_0065DA10_8B0AA883 *)local_c,extraout_EDX);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    thunk_FUN_0065fd00((AnonShape_0065FD00_EB74ED0C *)local_c,extraout_EDX);
    g_currentExceptionFrame = local_74.previous;
    return 0;
  case 0x73:
    iVar20 = (int)*(short *)(STField<int>(param_1,10) + 1);
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
      iVar19 = thunk_FUN_004e7fc0(iVar20);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      iVar20 = extraout_EDX_12;
    }
    local_10 = (DArrayTy *)sub_0065E360(this_00,iVar20,iVar19);
    if (((local_10 != nullptr) && (dVar8 = local_10->count, dVar8 != 0)) &&
       (uVar24 = 0, 0 < (int)dVar8)) {
      bVar25 = dVar8 != 0;
      do {
        if (bVar25) {
          puVar19 = DArrayAt<ushort>(local_10, uVar24);
        }
        else {
          puVar19 = nullptr;
        }
        uVar3 = *puVar19;
        if (g_allPlayers_007FA174 == nullptr) {
          pSVar18 = nullptr;
        }
        else {
          pSVar18 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,*(char *)&local_c->field_0024,uVar3,CASE_1);
        }
        if ((pSVar18 != nullptr) &&
           (iVar12 = thunk_FUN_004e3790(pSVar18,(int)*(short *)(STField<int>(param_1,10) + 1),
                                        (int)*(short *)(STField<int>(param_1,10) + 3),1),
           iVar12 != 0)) {
          *(undefined1 *)(param_1 + 2) = 1;
          STField<ushort>(param_1,0xe) = uVar3;
          if (STField<char>(param_1,9) != '\0') {
            TLOBaseTy::thunk_FUN_004c7cc0
                      ((TLOBaseTy *)pSVar18,2,(int)*(short *)(STField<int>(param_1,10) + 1),1,1,
                       0xffffffff,0,0xff,nullptr);
          }
          break;
        }
        uVar24 = uVar24 + 1;
        bVar25 = uVar24 < local_10->count;
      } while ((int)uVar24 < (int)local_10->count);
    }
    if (local_10 != nullptr) {
      DArrayDestroy(local_10);
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x74:
    if ((local_c->field_007B == -0x8000) && (local_c->field_009B == CASE_78)) {
      local_c->field_009B = CASE_33;
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
    if (local_c->field_009B == CASE_34) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
    if ((char)param_1[2] == '\0') {
      sVar4 = local_c->field_0039;
      if (sVar4 < 1) {
LAB_0066380d:
        iVar20 = 0;
      }
      else if (sVar4 < 3) {
        iVar20 = 0x33;
      }
      else {
        if (sVar4 != 3) goto LAB_0066380d;
        iVar20 = 0x62;
      }
      pDVar18 = (DArrayTy *)sub_0065FA60(local_c,iVar20,(sVar4 != 3) - 1 & 2,nullptr);
      if (pDVar18 != nullptr) {
        *(undefined1 *)(param_1 + 2) = 1;
        DArrayDestroy(pDVar18);
      }
    }
    if ((char)param_1[2] == '\x01') {
      if (('\0' < STField<char>(param_1,9)) &&
         (STField<DArrayTy *>(param_1,10) != nullptr)) {
        thunk_FUN_0065d940(this_00,STField<DArrayTy *>(param_1,10),1);
      }
      uVar12 = sub_0065D9C0(this_00);
      STField<undefined2>(param_1,0xe) = uVar12;
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 0x76:
    if (local_c->field_007B == -0x8000) {
      STField<undefined2>(param_1,0xf) = 0;
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      pDVar18 = (DArrayTy *)sub_0065DA10(local_c,extraout_EDX);
      if (pDVar18 != nullptr) {
        uVar24 = 0;
        if (0 < (int)pDVar18->count) {
          bVar25 = pDVar18->count != 0;
          do {
            if (bVar25) {
              puVar19 = DArrayAt<ushort>(pDVar18, uVar24);
            }
            else {
              puVar19 = nullptr;
            }
            local_28 = STReplaceLowWord((uint32_t)(puVar19), (uint16_t)(*puVar19));
            local_EAX_5775 =
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)&local_c->field_0024,*puVar19,CASE_1);
            if (local_EAX_5775 != nullptr) {
              iVar20 = (*local_EAX_5775->vtable->vfunc_2C)();
              if ((iVar20 < 1) || (0x28 < iVar20)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              if (((bVar25) &&
                  ((STField<short>(param_1,9) == -2 ||
                   (STField<short>(param_1,9) == local_EAX_5775->field_081C)))) &&
                 ((STField<int>(param_1,0xb) == 0 ||
                  (iVar20 = (*local_EAX_5775->vtable->vfunc_2C)(),
                  STField<int>(param_1,0xb) == iVar20)))) {
                STField<short>(param_1,0xf) = STField<short>(param_1,0xf) + 1;
                if (STField<DArrayTy *>(param_1,0x11) != nullptr) {
                  Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(param_1,0x11),&local_28);
                }
              }
            }
            uVar24 = uVar24 + 1;
            bVar25 = uVar24 < pDVar18->count;
          } while ((int)uVar24 < (int)pDVar18->count);
        }
        DArrayDestroy(pDVar18);
        g_currentExceptionFrame = local_74.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return 0;
cf_continue_loop_00662E52:
  local_24 = (TLOBaseTy *)((int)&local_24->vtable + 1);
  bVar25 = local_24 < (TLOBaseTy *)local_8->count;
  if ((int)local_8->count <= (int)local_24) goto LAB_00662f34;
  goto LAB_00662dbb;
}

