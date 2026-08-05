#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintTV

   [STSwitchEnumApplier] Switch target field_0260 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0260State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target field_023F uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_023FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

void __thiscall CPanelTy::PaintTV(CPanelTy *this)

{
  short **ppsVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  char *text;
  char *pcVar6;
  ushort *puVar7;
  short *psVar8;
  byte bVar9;
  char cVar10;
  int *piVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;
  uint uVar15;
  cMf32 *pcVar16;
  int iVar17;
  undefined4 *puVar18;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  CPanelTy *local_24;
  undefined1 *local_20;
  int *local_1c;
  byte *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte local_5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_24;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x2c9,0,iVar4,"%s"
                                ,"CPanelTy::PaintTV");
    if (iVar17 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2c9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  bVar9 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar12 = local_c & 0xff;
    local_10 = (undefined1 *)((int)this_00->field_0308 + (uVar12 - 0x1c));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined1 *)((int)this_00->field_0308 + (uVar12 - 0x1c))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a)))) {
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar9 = *(char *)((int)this_00->field_0308 + (uVar12 - 0x1e)) + 1;
        *pbVar13 = bVar9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(short **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) <= (short)(ushort)bVar9) {
          *pbVar13 = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar9)) & 0xffffff08;
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar7 = this_00->field_0148[uVar12];
joined_r0x004f81d1:
          if (-1 < (int)puVar7) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)puVar7,0xffffffff,
                       (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
          }
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      if (0x31 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pcVar6 = (char *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        if (*pcVar6 == '\0') {
          puVar5 = &this_00->field_0B63;
          if (bVar9 != 0) {
            puVar5 = &this_00->field_0C51;
          }
          puVar18 = nullptr;
          iVar17 = 0;
          iVar4 = 1;
          bVar9 = 0;
          uVar15 = 6;
          text = thunk_FUN_00526100(puVar5,0);
          puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,text,uVar15,bVar9,iVar4,iVar17,puVar18);
          *(ushort **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) = puVar7;
          *local_10 = 1;
          *pcVar6 = '\0';
          if (this_00->field_023F == CASE_5) {
            if ((char)local_c == '\0') {
              cVar10 = this_00->field_02ED;
            }
            else {
              cVar10 = this_00->field_02EC;
            }
            if (cVar10 != '\0') {
              this_00->field_023F = CASE_1;
              ShiftControls(this_00,1);
            }
          }
        }
        else {
          *pcVar6 = *pcVar6 + -1;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_1c = (int *)(STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          if (-1 < (int)this_00->field_0148[uVar12]) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[uVar12],0xffffffff,
                       (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
          }
        }
        if (this_00->field_02EA == '\x05') {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 4:
      if (0x31 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        bVar9 = *pbVar13;
        *pbVar13 = bVar9 + 1;
        if ((byte)(bVar9 + 1) == 5) {
          thunk_FUN_005252c0(0xb2);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (**(short **)((int)this_00->field_0308 + uVar12 * 4 + -0x26) <= (short)(ushort)*pbVar13)
        {
          *pbVar13 = *pbVar13 - 1;
          *local_10 = 2;
          if (this_00->field_023F == CASE_6) {
            if ((char)local_c == '\0') {
              cVar10 = this_00->field_02ED;
            }
            else {
              cVar10 = this_00->field_02EC;
            }
            if (cVar10 != '\0') {
              this_00->field_023F = CASE_4;
              thunk_FUN_005252c0(CASE_B0);
            }
          }
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_20 = (undefined1 *)(STReplaceLowByte((uint32_t)(local_20), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar7 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 5:
      if (0x41 < (uint)(this_00->field_0038 -
                       *(int *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a))) {
        pbVar13 = (byte *)((int)this_00->field_0308 + (uVar12 - 0x1e));
        *(undefined4 *)((int)this_00->field_0308 + uVar12 * 4 + -0x1a) = this_00->field_0038;
        bVar9 = *pbVar13;
        *pbVar13 = bVar9 + 1;
        local_18 = (byte *)((int)this_00->field_0308 + uVar12 * 4 + -0x26);
        if (**(short **)local_18 <= (short)(ushort)(byte)(bVar9 + 1)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,
                              *(char **)((int)this_00->field_0308 + uVar12 * 4 + -0x12),6,0,1,0,
                              nullptr);
          *(ushort **)local_18 = puVar7;
          *local_10 = 1;
          *pbVar13 = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar9 = -((char)local_c != '\0');
        local_14 = (undefined1 *)(STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar9)) & 0xffffff08);
        if ((bVar9 & 8) < 0xb) {
          uVar12 = bVar9 & 8;
          puVar7 = this_00->field_0148[uVar12];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar9 = (char)local_c + 1;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
  } while (bVar9 < 2);
  local_5 = 0;
  if (g_nWidth_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (g_nWidth_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (undefined1 *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = &this_00->field_0D3B;
    local_20 = &this_00->field_0xc87;
    local_1c = &this_00->field_0D53;
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar11 = local_1c;
      pbVar13 = local_18;
      do {
        bVar9 = pbVar13[0xc];
        if (bVar9 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(this_00->field_0038 - *piVar11))) {
            *piVar11 = this_00->field_0038;
            bVar9 = *pbVar13;
            *pbVar13 = bVar9 + 1;
            if (*(short *)piVar11[-0x12] <= (short)(ushort)(byte)(bVar9 + 1)) {
              *pbVar13 = 0;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_30 = STReplaceLowByte((uint32_t)(local_30), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar7 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar9 == 3) {
          if (0x31 < (uint)(this_00->field_0038 - *piVar11)) {
            *piVar11 = this_00->field_0038;
            if (*pbVar13 == 0) {
              puVar18 = nullptr;
              iVar17 = 0;
              iVar4 = 1;
              bVar9 = 0;
              uVar12 = 6;
              pcVar6 = (char *)thunk_FUN_004f1d20(local_14);
              puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar6,uVar12,bVar9,iVar4,iVar17,puVar18);
              piVar11[-0x12] = (int)puVar7;
              pbVar13[0xc] = 1;
              *pbVar13 = 0;
            }
            else {
              *pbVar13 = *pbVar13 - 1;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar9 = ((char)local_c == '\0') + 9;
            local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar9));
            if (bVar9 < 0xb) {
              uVar12 = (uint)bVar9;
              puVar7 = this_00->field_0148[uVar12];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar9 == 4) && (0x31 < (uint)(this_00->field_0038 - *piVar11))) {
          *piVar11 = this_00->field_0038;
          bVar9 = *pbVar13;
          bVar3 = bVar9 + 1;
          *pbVar13 = bVar3;
          if (*(short *)piVar11[-0x12] <= (short)(ushort)bVar3) {
            *pbVar13 = bVar9;
            pbVar13[0xc] = 2;
          }
          thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
          bVar9 = ((char)local_c == '\0') + 9;
          local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar9));
          if (bVar9 < 0xb) {
            uVar12 = (uint)bVar9;
            puVar7 = this_00->field_0148[uVar12];
joined_r0x004f861b:
            if (-1 < (int)puVar7) {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)g_ddxContext_008075A8,(uint)puVar7,0xffffffff,
                         (&this_00->field_003C)[uVar12],(&this_00->field_0094)[uVar12]);
            }
          }
        }
        bVar9 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar11 = piVar11 + 6;
        pbVar13 = pbVar13 + 6;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar9));
      } while (bVar9 < 2);
      bVar9 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      local_10 = (undefined1 *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar9));
    } while (bVar9 < local_5);
  }
  iVar4 = FUN_006b33f0(g_ddxContext_008075A8,this_00->field_017C);
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00->field_0260) {
  case CASE_1:
    if ((DAT_0080731a == 0) || ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42))
    goto cf_common_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    bVar9 = this_00->field_025F + 1;
    this_00->field_025F = bVar9;
    if ((short)(ushort)bVar9 < *this_00->field_025B) goto LAB_004f88e6;
    break;
  default:
    goto cf_common_join_004F88ED;
  case CASE_3:
    if (0x31 < (uint)(this_00->field_0038 - this_00->field_0261)) {
      this_00->field_0261 = this_00->field_0038;
      if (this_00->field_025F == '\0') {
        if (this_00->field_025B != nullptr) {
          FUN_0070b600((int *)&this_00->field_025B);
        }
        psVar8 = (short *)0x1;
        bVar3 = 0;
        bVar9 = 6;
        pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(g_cMf32_00806790,pcVar6,bVar9,bVar3,psVar8);
        this_00->field_025B = psVar8;
        this_00->field_0260 = CASE_1;
        this_00->field_025F = 0;
      }
      else {
        this_00->field_025F = this_00->field_025F + -1;
      }
      sub_004F1950(this_00);
      if (this_00->field_025F == '\x05') {
        thunk_FUN_005252c0(0xb1);
      }
    }
    goto cf_common_join_004F88ED;
  case CASE_4:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x32) goto cf_common_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    cVar10 = this_00->field_025F + '\x01';
    this_00->field_025F = cVar10;
    if (cVar10 == '\x05') {
      thunk_FUN_005252c0(0xb2);
    }
    if (*this_00->field_025B <= (short)(ushort)(byte)this_00->field_025F) {
      this_00->field_0260 = 2;
      this_00->field_025F = this_00->field_025F - 1;
    }
    goto LAB_004f88e6;
  case CASE_5:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42) goto cf_common_join_004F88ED;
    ppsVar1 = &this_00->field_025B;
    bVar9 = this_00->field_025F + 1;
    this_00->field_0261 = this_00->field_0038;
    this_00->field_025F = bVar9;
    if ((short)(ushort)bVar9 < **ppsVar1) goto LAB_004f88e6;
    if (*ppsVar1 != nullptr) {
      FUN_0070b600((int *)ppsVar1);
    }
    pcVar16 = g_cMf32_00806790;
    if (this_00->field_0285 == '\0') {
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad
                         (g_cMf32_00806758,&this_00->field_0265,6,0,nullptr);
      *ppsVar1 = psVar8;
      pcVar16 = g_cMf32_00806798;
      if (psVar8 == nullptr) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar16,&this_00->field_0265,6,0,nullptr);
      *ppsVar1 = psVar8;
    }
    if (*ppsVar1 == nullptr) {
      psVar8 = (short *)0x1;
      bVar3 = 0;
      bVar9 = 6;
      pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(g_cMf32_00806790,pcVar6,bVar9,bVar3,psVar8);
      *ppsVar1 = psVar8;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  sub_004F1950(this_00);
cf_common_join_004F88ED:
  if (((this_00->field_01D8 != nullptr) && ((g_playSystem_00802A38->field_00E4 & 1) != 0)) &&
     (iVar4 = *(int *)&this_00->field_01D8->field_0x4, iVar4 < this_00->field_01DC + -2)) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01B4,0,100,5,0x226,0x55,0);
    uVar12 = FUN_007140e0(this_00->field_01D8,1,'\0');
    if (uVar12 != 0) {
      FUN_006b5440((ushort *)this_00->field_01B4,0,100,5,uVar12,0,0xff);
    }
    FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_017C);
    if (this_00->field_01E0 != '\0') {
      uVar12 = iVar4 + 1U & 0x80000001;
      bVar14 = uVar12 == 0;
      if ((int)uVar12 < 0) {
        bVar14 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar14) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

