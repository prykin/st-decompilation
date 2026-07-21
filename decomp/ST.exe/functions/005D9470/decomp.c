#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage */

undefined4 __thiscall SIDTy::GetMessage(SIDTy *this,int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  AnonPointee_SIDTy_1CC8 *pAVar5;
  AnonPointee_SIDTy_1CBC *pAVar6;
  code *pcVar7;
  SIDTy *this_00;
  DWORD DVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  UINT resourceId;
  int *piVar17;
  byte *pbVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar19;
  byte *pbVar20;
  bool bVar21;
  int iVar22;
  AnonPointee_SIDTy_1CD0 *pAVar23;
  AnonShape_005B6560_61F462DF *pAVar24;
  int iVar25;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  uint local_c;
  uint *local_8;

  local_10 = this;
  DVar8 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar8;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar9 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar22 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212,0,iVar9,&DAT_007a4ccc
                                ,s_SIDTy__GetMessage_007cd6d4);
    if (iVar22 == 0) {
      RaiseInternalException(iVar9,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x212);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005b6450(local_10,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar14 = *(uint *)(param_1 + 0x10);
  if (uVar14 < 0x6980) {
    if (uVar14 != 0x697f) {
      if (uVar14 < 6) {
        if (uVar14 == 5) {
          PaintSID(this_00);
        }
        else if (uVar14 == 0) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          NoneSID(this_00,unaff_EDI);
        }
        else if (uVar14 == 2) {
          InitSID(this_00);
        }
        else if (uVar14 == 3) {
          DoneSID(this_00);
        }
      }
      else if (uVar14 == 0x68ff) {
        this_00->field_1A5F = 0;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        this_00->field_002D = *(int *)(param_1 + 0x10) + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)this_00->field_0000)(&this_00->field_0x1d);
      }
      else if (uVar14 == 0x6900) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        this_00->field_002D = 0x32;
        FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
        if ((int)this_00->field_1CD0->field_0008 < 1) {
          pcVar10 = (char *)0x0;
        }
        else {
          pcVar10 = *(char **)this_00->field_1CD0->field_0014;
        }
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar10;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar19;
        } while (cVar2 != '\0');
        uVar14 = ~uVar14;
        puVar1 = &this_00->field_1CD4;
        pcVar10 = pcVar19 + -uVar14;
        pcVar19 = puVar1;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_006b7780(puVar1,puVar1);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->field_1A5F == '\0') {
            local_8 = (uint *)0xffffffff;
            if ((int)this_00->field_1CD0->field_0008 < 1) {
              pcVar10 = (char *)0x0;
            }
            else {
              pcVar10 = *(char **)this_00->field_1CD0->field_0014;
            }
            Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar10,0x3f);
            puVar16 = (uint *)0x0;
            local_c = this_00->field_1CCC->field_0008;
            puVar12 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar18 = (byte *)0x0;
                goto LAB_005d979c;
              }
              do {
                pbVar18 = *(byte **)(this_00->field_1CCC->field_0014 + (int)puVar16 * 4);
LAB_005d979c:
                pbVar20 = (byte *)&DAT_00807ddd;
                do {
                  bVar3 = *pbVar18;
                  bVar21 = bVar3 < *pbVar20;
                  if (bVar3 != *pbVar20) {
LAB_005d97c5:
                    iVar9 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar18[1];
                  bVar21 = bVar3 < pbVar20[1];
                  if (bVar3 != pbVar20[1]) goto LAB_005d97c5;
                  pbVar18 = pbVar18 + 2;
                  pbVar20 = pbVar20 + 2;
                } while (bVar3 != 0);
                iVar9 = 0;
LAB_005d97ca:
                puVar12 = puVar16;
              } while ((iVar9 != 0) &&
                      (puVar16 = (uint *)((int)puVar16 + 1), puVar12 = local_8,
                      (int)puVar16 < (int)local_c));
            }
            local_8 = puVar12;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              thunk_FUN_005738d0(&g_sound);
            }
            else {
              thunk_FUN_00572510((AnonShape_00572510_F06DC155 *)&g_sound);
            }
            if (DAT_00808446 != '\0') {
              DeleteCtrls(this_00);
              this_00->field_0065 = 4;
              thunk_FUN_005b6730(this_00,2,'\x01',-1);
              FUN_006c18b0((uint)DAT_00807363);
            }
          }
          else {
            if ((int)this_00->field_1CD0->field_0008 < 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined4 *)this_00->field_1CD0->field_0014;
            }
            wsprintfA(&this_00->field_1CD4,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                      uVar13);
            FUN_00725910(&this_00->field_1CD4,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            PrepFiles(this_00);
            this_00->field_1A5F = 0;
            PaintExplanation(this_00);
            this_00->field_002D = 5;
            piVar17 = &this_00->field_1AF9;
            iVar9 = 2;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x1d);
              }
              piVar17 = piVar17 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      else if (uVar14 == 0x6901) {
        thunk_FUN_005b6730(this_00,10,'\x01',-1);
        if (this_00->field_1A5F == '\0') {
          if (((char)DAT_00807ddd != '\0') && (this_00->field_1CCC->field_0008 != 0)) {
            puVar1 = &this_00->field_0x1d;
            this_00->field_1A5F = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            FUN_006e6080(this_00,2,this_00->field_1AF1,(undefined4 *)puVar1);
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            piVar17 = &this_00->field_1AF9;
            local_8 = (uint *)0x2;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)puVar1);
              }
              piVar17 = piVar17 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != (uint *)0x0);
            PaintExplanation(this_00);
          }
        }
        else {
          this_00->field_1A5F = 0;
          PaintExplanation(this_00);
          this_00->field_002D = 5;
          piVar17 = &this_00->field_1AF9;
          iVar9 = 2;
          do {
            if (*piVar17 != 0) {
              FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x1d);
            }
            piVar17 = piVar17 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          PrepFiles(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    pAVar5 = this_00->field_1CC8;
    local_8 = (uint *)pAVar5->field_0014;
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                         0x1ffffffc) * pAVar5->field_0008);
    }
    puVar11 = (undefined4 *)FUN_006b4fa0((int)pAVar5);
    for (uVar14 = (uint)local_8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar14 = (uint)local_8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar11 = 0xff;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    ccFntTy::WrStr(PTR_0081176c->field_0034,(uint *)**(undefined4 **)(param_1 + 0x14),0,-1,2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar4 = *(ushort *)(param_1 + 0x18);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((uVar4 != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CC8,0,(uint)uVar4,
                   (uint)*(ushort *)(param_1 + 0x1a),(uint)uVar4,*(ushort *)(param_1 + 0x1a) + 0xe,7
                   ,0xd);
    }
    pAVar5 = this_00->field_1CC8;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,4,1,(byte *)pAVar5,0,0,0,
               pAVar5->field_0004,pAVar5->field_0008);
  }
  else {
    if (0x8163 < uVar14) {
      if (uVar14 == 0x8164) {
        pAVar24 = (AnonShape_005B6560_61F462DF *)&this_00->field_1B01;
      }
      else {
        if (uVar14 != 0x8165) {
          if (uVar14 == 0x8166) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar14 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
            this_00->field_1C43 = uVar14;
            if (this_00->field_1C27 != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar14);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        pAVar24 = (AnonShape_005B6560_61F462DF *)&this_00->field_1B92;
      }
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,pAVar24,param_1,0);
      goto cf_common_exit_005D9CCB;
    }
    if (uVar14 == 0x8163) {
      iVar9 = this_00->field_1CCC->field_0008;
      if (iVar9 == 0) {
        pAVar23 = this_00->field_1CD0;
        pcVar10 = (char *)&DAT_00807ddd;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(param_1 + 0x14) < iVar9) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar10 = *(char **)(this_00->field_1CCC->field_0014 + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pcVar10 = (char *)0x0;
        }
        Library::MSVCRT::_strncpy((char *)&DAT_00807ddd,pcVar10,0x3f);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(param_1 + 0x14) < (int)this_00->field_1CCC->field_0008) {
          pAVar23 = this_00->field_1CD0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pcVar10 = *(char **)(this_00->field_1CCC->field_0014 + *(int *)(param_1 + 0x14) * 4);
        }
        else {
          pAVar23 = this_00->field_1CD0;
          pcVar10 = (char *)0x0;
        }
      }
      Library::DKW::TBL::FUN_006b6020((uint *)pAVar23,0,pcVar10);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      FUN_006e6080(this_00,2,this_00->field_1AF5,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (0x8160 < uVar14) {
      if (uVar14 == 0x8161) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((int)(uint)*(ushort *)(param_1 + 0x14) < (int)this_00->field_1CCC->field_0008) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_8 = *(uint **)(this_00->field_1CCC->field_0014 +
                              (uint)*(ushort *)(param_1 + 0x14) * 4);
        }
        else {
          local_8 = (uint *)0x0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,
                     *(ushort *)(param_1 + 0x18) + 3,*(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,
                     0xff);
        pAVar6 = this_00->field_1CBC;
        local_c = pAVar6->field_0014;
        if (local_c == 0) {
          local_c = ((uint)(ushort)pAVar6->field_000E * pAVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc)
                    * pAVar6->field_0008;
        }
        puVar11 = (undefined4 *)FUN_006b4fa0((int)pAVar6);
        for (uVar14 = local_c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar14 = local_c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(short *)(param_1 + 0x16) == 1) && (local_8 != (uint *)0x0)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,
                       *(ushort *)(param_1 + 0x18) + 3,*(ushort *)(param_1 + 0x1a) + 0x15,0x142,0xe,
                       0x87,0xd);
        }
        ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);
        ccFntTy::WrStr(PTR_0081176c->field_0034,local_8,0,-1,2);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        FUN_006b5440((int)this_00->field_1CB8,0,*(ushort *)(param_1 + 0x18) + 6,
                     *(ushort *)(param_1 + 0x1a) + 0x15,(int)this_00->field_1CBC,0,0xff);
        FUN_006b35d0(DAT_008075a8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (uVar14 == 0x8160) {
      *(undefined4 *)(param_1 + 0x18) = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((uVar14 < 0x6980) || (0x6981 < uVar14)) goto cf_common_exit_005D9CCB;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar17 = *(int **)(param_1 + 0x18);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,*(char *)(param_1 + 0x10) + -0x7f);
    local_20 = *piVar17 + -0xe1;
    local_18 = piVar17[2];
    local_1c = piVar17[1] - 0x1a9;
    local_14 = piVar17[3];
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1CB8,0,local_20,local_1c,local_18,
                 local_14,0xff);
    MMObjTy::PaintButDib((MMObjTy *)this_00,(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->field_1A5F != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->field_1A5F != '\0') & 0xfffffffd) + 0x24bd;
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c,local_18,
                     local_14);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar9 = (*(short *)(param_1 + 0x14) != 1) + 2;
    iVar25 = -1;
    iVar22 = -1;
    puVar12 = (uint *)LoadResourceString(resourceId,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar22,iVar25,iVar9);
  }
  FUN_006b35d0(DAT_008075a8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  uVar13 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar13;
}

