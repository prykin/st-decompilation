#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::NoneSettMap */

undefined4 __thiscall SettMapMTy::NoneSettMap(SettMapMTy *this,int *param_1)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  SettMapTy *this_00;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  AnonShape_005D4990_5F0525CF *pAVar7;
  MMMObjTy *pMVar8;
  DWORD DVar9;
  DArrayTy *pDVar10;
  AnonPointee_SettMapTy_0000 *pAVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  AnonShape_005CE0E0_C50CCD71 *pAVar17;
  undefined4 *puVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  byte *pbVar19;
  int *piVar20;
  undefined4 *puVar21;
  uint *puVar22;
  bool bVar23;
  char cVar24;
  DWORD *pDVar25;
  InternalExceptionFrame local_148;
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  DWORD local_e6;
  undefined4 local_e2;
  int local_dc [8];
  int local_bc [8];
  AnonShape_005D4990_5F0525CF local_9c;
  undefined2 local_90;
  char local_8e;
  uint local_8d;
  uint local_89;
  undefined1 local_85;
  undefined1 local_84;
  char local_83;
  undefined4 local_82;
  undefined4 local_7e;
  uint local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  int local_68;
  uint local_64;
  void **local_60;
  SettMapTy *local_5c;
  int local_58 [8];
  uint *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  char local_11;
  int *local_10;
  AnonShape_005CE0E0_C50CCD71 *local_c;
  char local_5;

  local_1d = this->field_0065;
  local_c = (AnonShape_005CE0E0_C50CCD71 *)0x0;
  local_24 = 0xffffffff;
  local_148.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_148;
  local_5c = (SettMapTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_148.jumpBuffer,0);
  this_00 = local_5c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_148.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4a9,0,iVar4,
                                "%s","SettMapMTy::NoneSettMap");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\settmobj.cpp",0x4a9);
    return 0;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar4 = SettMapTy::NoneSettMap(local_5c,unaff_EDI);
  if (((iVar4 != 0) && (local_1d == '\x03')) && (this_00->field_0065 == '\x01')) {
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_00->field_0x2200);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
    if (PTR_0081176c->field_0560 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                 PTR_0081176c->field_0578,PTR_0081176c->field_057C);
    }
    if (PTR_0081176c->field_05F1 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                 PTR_0081176c->field_0609,PTR_0081176c->field_060D);
    }
  }
  Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_30,-1,0);
  if (DAT_0080877e == '\0') {
    DVar9 = this_00->field_0061;
    if (799 < DVar9 - *(int *)&this_00->field_0x220d) {
      local_f2 = *(undefined4 *)&this_00->field_0x2221;
      local_e2 = *(undefined4 *)&this_00->field_0x2211;
      local_102 = 4;
      local_e6 = DVar9;
      FUN_006b6500(g_int_00811764,0);
      FUN_00715360(g_int_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      FUN_006b6500(g_int_00811764,DAT_0080733c);
      *(int *)&this_00->field_0x2221 = *(int *)&this_00->field_0x2221 + 1;
      DVar9 = this_00->field_0061;
      *(DWORD *)&this_00->field_0x220d = DVar9;
    }
    if (((local_30 == 0) && (60000 < DVar9 - *(int *)&this_00->field_0x2209)) &&
       (this_00->field_0x2225 == '\0')) {
      this_00->field_0x2225 = 1;
      piVar20 = local_dc;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar20 = 0;
        piVar20 = piVar20 + 1;
      }
      local_dc[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(this_00->field_1A5B + 0x2e6) == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)this_00->field_0000)(local_dc);
      }
      else {
        local_dc[2] = this_00->field_0008;
        local_dc[3] = 2;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        MMsgTy::SetMessage(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),0x2522,'\0',local_dc,
                           (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
    }
  }
  else if ((this_00->field_0x222e != '\0') &&
          (29999 < this_00->field_0061 - *(int *)&this_00->field_0x2233)) {
    this_00->field_0x222e = 0;
    RunGame((SettMapMTy *)this_00);
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar4 = Library::Ourlib::CONNECT::FUN_00715630
                        (g_int_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar4 == 1) && (local_28 == 0x1b)) {
        StartSystemTy::AddToChat((StartSystemTy *)this_00->field_1A5B,(int)local_c);
      }
      pAVar17 = local_c;
      if (DAT_0080877e == '\0') {
        piVar20 = local_58;
        for (iVar13 = 8; pAVar17 = local_c, iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar20 = 0;
          piVar20 = piVar20 + 1;
        }
        if (iVar4 == -0x4d) {
          this_00->field_0x2225 = 1;
          local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
          pMVar8 = this_00->field_1A5B;
          if (*(int *)(pMVar8 + 0x2e6) == 0) {
            pAVar11 = this_00->field_0000;
            piVar20 = local_58;
            goto LAB_005cf387;
          }
          local_58[2] = this_00->field_0008;
          local_58[3] = 2;
          piVar20 = local_58;
LAB_005ce9b2:
          MMsgTy::SetMessage(*(MMsgTy **)(pMVar8 + 0x2e6),0x2522,'\0',piVar20,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        else {
          if (iVar4 != 1) goto cf_continue_loop_005CF38C;
          DVar9 = this_00->field_0061;
          *(DWORD *)&this_00->field_0x2209 = DVar9;
          switch(local_28) {
          case 0x10:
            if (this_00->field_0065 == '\x01') {
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)(this_00->field_1A5B + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = this_00->field_0008;
              local_58[3] = 2;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              MMsgTy::SetMessage(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),0x2524,'\0',local_58,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
            break;
          case 0x12:
            if (this_00->field_0065 == '\x01') {
              local_58[4] = 0x694f;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005cee1a:
              (**(code **)this_00->field_0000)(local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pcVar1 = &local_c->field_0002;
            if ((local_c->field_0002 == '\x03') && (this_00->field_0065 == '\x01')) {
              local_58[4] = 0x694f;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)this_00->field_0000)(local_58);
            }
            else {
              if (local_c->field_0002 == '\x01') {
                bVar2 = local_c->field_000B;
                if (bVar2 == 1) {
                  if (this_00->field_0065 == '\x01') {
                    if ((local_c->field_0003 == DAT_00809958) ||
                       (DVar9 - *(int *)&this_00->field_0x2215 < 3000)) {
                      if ((local_c->field_0016 != DAT_00808aab) &&
                         (2999 < DVar9 - *(int *)&this_00->field_0x2219)) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        DVar9 = this_00->field_0061;
                        *(DWORD *)&this_00->field_0x2219 = DVar9;
                      }
                      if (((this_00->field_1F84 != (DArrayTy *)0x0) &&
                          (*(int *)&pAVar17->field_0x1a != *(int *)&this_00->field_0x2121)) &&
                         (1999 < DVar9 - *(int *)&this_00->field_0x221d)) {
                        FUN_006b6500(g_int_00811764,1);
                        FUN_00715360(g_int_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500(g_int_00811764,DAT_0080733c);
                        *(DWORD *)&this_00->field_0x221d = this_00->field_0061;
                      }
                    }
                    else {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'!',(char *)0x0,0,0,0xffffffff);
                      FUN_00715360(g_int_00811764,1,'\x1f',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      *(DWORD *)&this_00->field_0x2215 = this_00->field_0061;
                    }
                  }
                }
                else if ((1 < bVar2) && (bVar2 < 6)) {
                  if ((local_c->field_0016 != DAT_00808aab) &&
                     (2999 < DVar9 - *(int *)&this_00->field_0x2219)) {
                    FUN_006b6500(g_int_00811764,1);
                    FUN_00715360(g_int_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                    FUN_006b6500(g_int_00811764,DAT_0080733c);
                    DVar9 = this_00->field_0061;
                    *(DWORD *)&this_00->field_0x2219 = DVar9;
                  }
                  if (this_00->field_1F84 != (DArrayTy *)0x0) {
                    if ((*(int *)&pAVar17->field_0x1a != *(int *)&this_00->field_0x2121) &&
                       (1999 < DVar9 - *(int *)&this_00->field_0x221d)) {
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                      DVar9 = this_00->field_0061;
                      *(DWORD *)&this_00->field_0x221d = DVar9;
                    }
                    if ((this_00->field_1F84 != (DArrayTy *)0x0) &&
                       (1999 < DVar9 - *(int *)&this_00->field_0x221d)) {
                      AddPlList((SettMapMTy *)this_00,(uint)(this_00->field_1E26 == 0x10));
                    }
                  }
                }
              }
              iVar4 = this_00->field_0061 - pAVar17->field_001E;
              *(int *)&this_00->field_0x2211 = iVar4;
              UpdatePing((SettMapMTy *)this_00,DAT_0080877f,iVar4);
              if ((((((*pcVar1 == '\x02') && (this_00->field_0065 == '\x01')) &&
                    (pAVar17->field_0003 == DAT_008087be)) &&
                   ((this_00->field_1E26 != 0xe || (pAVar17->field_0003 == DAT_00809958)))) &&
                  (pAVar17->field_0016 == DAT_00808aab)) &&
                 (*(int *)&pAVar17->field_0x1a == *(int *)&this_00->field_0x2121)) {
                local_5 = '\0';
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                DAT_0080733b = pAVar17->field_0xc;
                DAT_00808754 = *(undefined4 *)&pAVar17->field_0xe;
                pDVar10 = this_00->field_1F84;
                uVar14 = 0;
                uVar15 = pDVar10->count;
                local_1c = 0;
                if (0 < (int)uVar15) {
                  bVar23 = uVar15 != 0;
                  do {
                    if (bVar23) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar14) (runtime stride) */
                      pvVar5 = (void *)(pDVar10->elementSize * uVar14 + (int)pDVar10->data);
                    }
                    else {
                      pvVar5 = (void *)0x0;
                    }
                    if (((pvVar5 != (void *)0x0) &&
                        ((*(char *)((int)pvVar5 + 4) == '\x02' ||
                         (*(char *)((int)pvVar5 + 4) == '\x03')))) &&
                       (*(int *)((int)pvVar5 + 6) == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar14;
                      break;
                    }
                    uVar14 = uVar14 + 1;
                    bVar23 = uVar14 < uVar15;
                    local_1c = uVar14;
                  } while ((int)uVar14 < (int)uVar15);
                }
                if (local_5 == '\0') {
                  this_00->field_002D = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (**(code **)this_00->field_0000)(&this_00->field_0x1d);
                }
                else {
                  this_00->field_002D = 0x694a;
                  this_00->field_0031 = 1;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  (**(code **)this_00->field_0000)(&this_00->field_0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != *(uint *)&local_c[2].field_0x1c) {
              local_5 = DAT_00808a8f != *(char *)(local_c + 2);
              iVar4 = 0x10;
              bVar23 = true;
              pbVar16 = g_playerRelationMatrix[0];
              piVar20 = (int *)&local_c->field_0x10;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar23 = *(int *)pbVar16 == *piVar20;
                pbVar16 = pbVar16 + 4;
                piVar20 = piVar20 + 1;
              } while (bVar23);
              local_11 = !bVar23;
              thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                                 (AnonShape_00571A30_67EE4B56 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = (int *)PTR_0080c502->field_000C;
              local_10 = (int *)0x0;
              if (0 < (int)local_34) {
                bVar23 = local_34 != (int *)0x0;
                do {
                  if (bVar23) {
                    iVar4 = PTR_0080c502->field_0008 * (int)local_10 + PTR_0080c502->field_001C;
                  }
                  else {
                    iVar4 = 0;
                  }
                  if ((iVar4 != 0) && (*(uint *)(iVar4 + 0x90) == DAT_0080995c)) {
                    pbVar19 = (byte *)&DAT_00809960;
                    pbVar16 = (byte *)(iVar4 + 0x4c);
                    do {
                      bVar2 = *pbVar16;
                      bVar23 = bVar2 < *pbVar19;
                      if (bVar2 != *pbVar19) {
LAB_005cef58:
                        iVar13 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pbVar16[1];
                      bVar23 = bVar2 < pbVar19[1];
                      if (bVar2 != pbVar19[1]) goto LAB_005cef58;
                      pbVar16 = pbVar16 + 2;
                      pbVar19 = pbVar19 + 2;
                    } while (bVar2 != 0);
                    iVar13 = 0;
LAB_005cef5d:
                    if (iVar13 == 0) {
                      this_00->field_1C5F = (uint)local_10;
                      StartSystemTy::SetObjectives
                                (PTR_0081176c,this_00->field_1F43,(char *)(iVar4 + 0x70),
                                 this_00->field_1C63);
                      break;
                    }
                  }
                  local_10 = (int *)((int)local_10 + 1);
                  bVar23 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              piVar20 = &this_00->field_2125;
              iVar4 = 0xe;
              do {
                if (*piVar20 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*piVar20,(undefined4 *)&this_00->field_0x1d);
                }
                piVar20 = piVar20 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if (((local_5 == '\0') ||
                  ((*(code *)this_00->field_0000->field_002C)(), local_5 == '\0')) &&
                 (local_11 != '\0')) {
                piVar20 = &this_00->field_1F8C;
                local_10 = (int *)0xa;
                do {
                  iVar4 = 8;
                  do {
                    if (*piVar20 != 0) {
                      this_00->field_002D = 5;
                      FUN_006e6080(this_00,2,*piVar20,(undefined4 *)&this_00->field_0x1d);
                    }
                    piVar20 = piVar20 + 1;
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                  local_10 = (int *)((int)local_10 + -1);
                } while (local_10 != (int *)0x0);
              }
              SettMapTy::PaintSC(this_00);
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *(uint *)local_c) && (this_00->field_0065 == '\x01')) {
              puVar18 = &DAT_00853de0;
              for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar18 = *(undefined4 *)pAVar17;
                pAVar17 = (AnonShape_005CE0E0_C50CCD71 *)((int)&pAVar17->field_0003 + 1);
                puVar18 = puVar18 + 1;
              }
              *(undefined2 *)puVar18 = *(undefined2 *)pAVar17;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar4 = 0xd;
            bVar23 = true;
            pDVar25 = &this_00->field_1F53;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar23 = (char)*pDVar25 == *(char *)pAVar17;
              pDVar25 = (DWORD *)((int)pDVar25 + 1);
              pAVar17 = (AnonShape_005CE0E0_C50CCD71 *)&pAVar17->field_0x1;
            } while (bVar23);
            if (!bVar23) {
              iVar4 = 6;
              this_00->field_1F53 = *(DWORD *)local_c;
              *(undefined4 *)&this_00->field_1F57 = *(undefined4 *)((int)&local_c->field_0003 + 1);
              *(undefined4 *)((int)&this_00->field_1F58 + 3) = *(undefined4 *)&local_c->field_0x8;
              this_00->field_1F5F = local_c->field_0xc;
              piVar20 = &this_00->field_1F60;
              do {
                if (*piVar20 != 0) {
                  this_00->field_002D = 5;
                  FUN_006e6080(this_00,2,*piVar20,(undefined4 *)&this_00->field_0x1d);
                }
                piVar20 = piVar20 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
              FUN_006b35d0(DAT_008075a8,this_00->field_1F80);
            }
            break;
          case 0x22:
            if (((this_00->field_1F84 != (DArrayTy *)0x0) &&
                (*(int *)&this_00->field_0x2121 != *(int *)local_c)) &&
               (DAT_00808aab == *(uint *)((int)&local_c->field_0003 + 1))) {
              local_10 = (int *)(local_2c - 9);
              if (-1 < (int)local_10) {
                this_00->field_002D = 0x10003;
                FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                uVar15 = 0;
                *(undefined4 *)&this_00->field_0x2121 = *(undefined4 *)local_c;
                local_11 = pAVar17->field_0x8;
                pDVar10 = this_00->field_1F84;
                if (0 < (int)pDVar10->count) {
                  bVar23 = pDVar10->count != 0;
                  do {
                    if (bVar23) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar15) (runtime stride) */
                      pvVar5 = (void *)(pDVar10->elementSize * uVar15 + (int)pDVar10->data);
                    }
                    else {
                      pvVar5 = (void *)0x0;
                    }
                    if ((pvVar5 != (void *)0x0) &&
                       (*(DArrayTy **)((int)pvVar5 + 0x50) != (DArrayTy *)0x0)) {
                      DArrayDestroy(*(DArrayTy **)((int)pvVar5 + 0x50));
                    }
                    pDVar10 = this_00->field_1F84;
                    uVar15 = uVar15 + 1;
                    bVar23 = uVar15 < pDVar10->count;
                  } while ((int)uVar15 < (int)pDVar10->count);
                }
                pDVar10 = this_00->field_1F84;
                piVar20 = (int *)(local_2c / 0x60);
                local_34 = piVar20;
                if ((int)(pDVar10->count * pDVar10->elementSize) < (int)local_10) {
                  pvVar5 = (void *)Library::DKW::LIB::FUN_006acf50
                                             ((int)pDVar10->data,(uint)local_10);
                  this_00->field_1F84->data = pvVar5;
                  this_00->field_1F84->capacity = (dword)piVar20;
                }
                puVar18 = (undefined4 *)&pAVar17->field_0x9;
                puVar21 = this_00->field_1F84->data;
                for (uVar15 = (uint)local_10 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *puVar21 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar21 = puVar21 + 1;
                }
                for (uVar15 = (uint)local_10 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined1 *)puVar21 = *(undefined1 *)puVar18;
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                  puVar21 = (undefined4 *)((int)puVar21 + 1);
                }
                uVar15 = 0;
                this_00->field_1F84->count = (dword)local_34;
                pDVar10 = this_00->field_1F84;
                if (0 < (int)pDVar10->count) {
                  bVar23 = pDVar10->count != 0;
                  do {
                    if (bVar23) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar15) (runtime stride) */
                      pvVar5 = (void *)(pDVar10->elementSize * uVar15 + (int)pDVar10->data);
                    }
                    else {
                      pvVar5 = (void *)0x0;
                    }
                    if (pvVar5 != (void *)0x0) {
                      if ((local_11 == '\x05') || (this_00->field_1E26 == 0xf)) {
                        puVar6 = CreateStrategList(this_00->field_1F3F,
                                                   (uint)*(byte *)((int)pvVar5 + 2),0xffffffff);
                      }
                      else if ((local_11 == '\f') || (this_00->field_1E26 == 0x10)) {
                        puVar6 = CreateSaveStrategList
                                           (this_00->field_1F3F,(uint)*(byte *)((int)pvVar5 + 2),
                                            0xffffffff);
                      }
                      else {
                        puVar6 = CreateOpponentList((cMf32 *)this_00->field_1F43,
                                                    (uint)*(byte *)((int)pvVar5 + 3),DAT_0080995c);
                      }
                      *(uint **)((int)pvVar5 + 0x50) = puVar6;
                    }
                    pDVar10 = this_00->field_1F84;
                    uVar15 = uVar15 + 1;
                    bVar23 = uVar15 < pDVar10->count;
                  } while ((int)uVar15 < (int)pDVar10->count);
                }
              }
              if (this_00->field_1E26 != 0x10) {
                thunk_FUN_005d1380((AnonShape_005D1380_CEECF2C3 *)this_00);
              }
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_00->field_0000->field_002C)();
              SettMapTy::PaintSC(this_00);
            }
            AddPlList((SettMapMTy *)this_00,(uint)(this_00->field_1E26 == 0x10));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (this_00->field_0x2225 == '\0') {
              this_00->field_0x2225 = 1;
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)(this_00->field_1A5B + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = this_00->field_0008;
              local_58[3] = 2;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              MMsgTy::SetMessage(*(MMsgTy **)(this_00->field_1A5B + 0x2e6),0x2522,'\0',local_58,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
            FreeAndNull(&local_c);
          }
        }
        goto cf_continue_loop_005CF38C;
      }
      if (iVar4 == -0x4d) {
        this_00->field_0x2225 = 1;
        piVar20 = local_bc;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar20 = 0;
          piVar20 = piVar20 + 1;
        }
        pMVar8 = this_00->field_1A5B;
        if (*(int *)(pMVar8 + 0x2e6) != 0) {
          local_bc[2] = this_00->field_0008;
          local_bc[3] = 2;
          local_bc[4] = 0x6947;
          piVar20 = local_bc;
          goto LAB_005ce9b2;
        }
        pAVar11 = this_00->field_0000;
        local_bc[4] = 0x6947;
        piVar20 = local_bc;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005cf387:
        (**(code **)pAVar11)(piVar20);
        goto cf_continue_loop_005CF38C;
      }
      if (iVar4 != 1) goto cf_continue_loop_005CF38C;
      switch(local_28) {
      case 0x11:
        DeletePlayer((SettMapMTy *)this_00,local_18);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        CheckPlList((SettMapMTy *)this_00,unaff_EDI);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)this_00->field_0000->field_002C)();
        SettMapTy::PaintSC(this_00);
        local_24 = 0;
        *(int *)&this_00->field_0x2121 = *(int *)&this_00->field_0x2121 + 1;
        break;
      case 0x1a:
        if (local_c->field_0002 == '\x04') {
          local_90 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
          local_84 = DAT_0080733b;
          local_8e = (this_00->field_0x222e != '\0') + '\x01';
          local_83 = DAT_00807361;
          local_82 = DAT_00808754;
          local_7e = local_c->field_0012;
          local_8d = DAT_008087be;
          local_89 = (this_00->field_1E26 != CASE_C) - 1 & DAT_00808750;
          local_76 = *(undefined4 *)&this_00->field_0x2121;
          local_7a = DAT_00808aab;
          switch(this_00->field_1E26) {
          case CASE_4:
            local_85 = 2;
            break;
          case CASE_5:
            local_85 = 3;
            break;
          case CASE_7:
            local_85 = 1;
            break;
          case CASE_C:
            local_85 = 5;
            break;
          case CASE_13:
            if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
              local_85 = 4;
            }
          }
          local_6e = local_c->field_0022;
          puVar18 = &local_c->field_0022;
          local_72 = local_c->field_001E;
          FUN_006b6500(g_int_00811764,0);
          FUN_00715360(g_int_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500(g_int_00811764,DAT_0080733c);
          UpdatePing((SettMapMTy *)this_00,local_18,*puVar18);
        }
        break;
      case 0x1d:
        SendDesc((SettMapMTy *)this_00,local_18);
        break;
      case 0x1f:
        uVar15 = 0x232;
        pDVar25 = &DAT_00853de0;
        cVar24 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pDVar25 = &this_00->field_1F53;
        uVar15 = 0xd;
        cVar24 = ' ';
LAB_005ce59f:
        FUN_00715360(g_int_00811764,local_18,cVar24,(char *)pDVar25,uVar15,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pDVar10 = this_00->field_1F84;
          if ((pDVar10 == (DArrayTy *)0x0) || (pDVar10->count <= *(uint *)local_c)) {
            pvVar5 = (void *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, *(uint *)local_c) (runtime stride) */
            pvVar5 = (void *)(pDVar10->elementSize * *(uint *)local_c + (int)pDVar10->data);
          }
          if (pvVar5 != (void *)0x0) {
            local_10 = (int *)((int)&local_c->field_0003 + 1);
            iVar4 = *local_10;
            if ((-1 < iVar4) && ((iVar4 < 4 || (iVar4 == 7)))) {
              local_24 = 0;
            }
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            switch(*local_10) {
            case 0:
              ChangePlayerState((SettMapMTy *)this_00,*(uint *)pAVar17);
              break;
            case 1:
              ChangePlayerColor((SettMapMTy *)this_00,*(uint *)pAVar17,
                                (char)*(undefined4 *)&pAVar17->field_0x8);
              break;
            case 2:
              ChangePlayerCiv((SettMapMTy *)this_00,*(uint *)pAVar17,
                              (char)*(undefined4 *)&pAVar17->field_0x8);
              break;
            case 3:
              ChangePlayerList((SettMapMTy *)this_00,local_18,*(uint *)pAVar17,
                               *(int *)&pAVar17->field_0x8,(char)*(undefined4 *)&pAVar17->field_0xc,
                               &pAVar17->field_0x10);
              break;
            case 5:
              ChangePlayerTeam((SettMapMTy *)this_00,*(uint *)pAVar17,*(uint *)&pAVar17->field_0x8,
                               *(uint *)&pAVar17->field_0xc);
              SendDesc((SettMapMTy *)this_00,0);
              break;
            case 7:
              piVar20 = &this_00->field_1F8C;
              *(undefined1 *)((int)pvVar5 + 0x4f) = pAVar17->field_0x8;
              local_10 = (int *)0xa;
              *(int *)&this_00->field_0x2121 = *(int *)&this_00->field_0x2121 + 1;
              do {
                iVar4 = 8;
                do {
                  if (*piVar20 != 0) {
                    this_00->field_002D = 5;
                    FUN_006e6080(this_00,2,*piVar20,(undefined4 *)&this_00->field_0x1d);
                  }
                  piVar20 = piVar20 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                local_10 = (int *)((int)local_10 + -1);
              } while (local_10 != (int *)0x0);
              local_10 = (int *)0x0;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == (AnonShape_005CE0E0_C50CCD71 *)0x0) goto cf_continue_loop_005CF38C;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (this_00->field_0x2243 != '\0')) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B)->field_069A == (LPVOID)0x0) &&
             (thunk_FUN_005de670((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B),
             *(int *)(this_00->field_1A5B + 0x69a) == 0)) {
            this_00->field_0x2243 = 0;
          }
          else {
            iVar4 = *(int *)&this_00->field_0x2237;
            bVar23 = false;
            uVar14 = 0;
            local_10 = (int *)0x0;
            uVar15 = *(uint *)(iVar4 + 0xc);
            if (uVar15 != 0) {
              if (uVar15 == 0) {
                pAVar7 = (AnonShape_005D4990_5F0525CF *)0x0;
                goto LAB_005ce8db;
              }
              do {
                pAVar7 = (AnonShape_005D4990_5F0525CF *)
                         (*(int *)(iVar4 + 8) * uVar14 + *(int *)(iVar4 + 0x1c));
LAB_005ce8db:
                if ((pAVar7 != (AnonShape_005D4990_5F0525CF *)0x0) && (*(uint *)pAVar7 == local_18))
                {
                  PrepareAFT((SettMapMTy *)this_00,pAVar7,(uint *)local_c);
                  bVar23 = true;
                  goto LAB_005ce8fe;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < uVar15);
              bVar23 = false;
            }
LAB_005ce8fe:
            if (!bVar23) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_9c._0_4_ = local_18;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_9c.field_0008 =
                   Library::DKW::LIB::FUN_006aac70(*(int *)(this_00->field_1A5B + 0x6a6));
              PrepareAFT((SettMapMTy *)this_00,&local_9c,(uint *)local_c);
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&this_00->field_0x2237,(undefined4 *)&local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
          pDVar10 = this_00->field_1F84;
          if ((pDVar10 == (DArrayTy *)0x0) || (pDVar10->count <= *(uint *)local_c)) {
            pvVar5 = (void *)0x0;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, *(uint *)local_c) (runtime stride) */
            pvVar5 = (void *)(pDVar10->elementSize * *(uint *)local_c + (int)pDVar10->data);
          }
          if ((pvVar5 != (void *)0x0) && (*(int *)((int)&local_c->field_0003 + 1) == 3)) {
            local_24 = 0;
            this_00->field_002D = 0x10003;
            FUN_006e6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            AddPlayerList((SettMapMTy *)this_00,local_18,*(uint *)pAVar17,
                          *(int *)&pAVar17->field_0x8,&pAVar17->field_0x10);
          }
        }
        break;
      case 0x2e:
        if ((this_00->field_0x222e != '\0') &&
           (pDVar10 = *(DArrayTy **)&this_00->field_0x222f, pDVar10 != (DArrayTy *)0x0)) {
          uVar15 = pDVar10->count;
          uVar14 = 0;
          local_1c = 0;
          if (0 < (int)uVar15) {
            bVar23 = uVar15 != 0;
            do {
              if (bVar23) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar10, uVar14) (runtime stride) */
                puVar6 = (uint *)(pDVar10->elementSize * uVar14 + (int)pDVar10->data);
              }
              else {
                puVar6 = (uint *)0x0;
              }
              if ((puVar6 != (uint *)0x0) && (*puVar6 == local_18)) {
                local_1c = uVar14;
                FUN_006b0c70(pDVar10,uVar14);
                break;
              }
              uVar14 = uVar14 + 1;
              bVar23 = uVar14 < uVar15;
              local_1c = uVar14;
            } while ((int)uVar14 < (int)uVar15);
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*(int *)&this_00->field_0x222f + 0xc) == 0) {
            this_00->field_0x222e = 0;
            RunGame((SettMapMTy *)this_00);
            if (DAT_008067a0 != '\0') {
              CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f)
              ;
              CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != (AnonShape_005CE0E0_C50CCD71 *)0x0) {
        FreeAndNull(&local_c);
      }
cf_continue_loop_005CF38C:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      SendPlList((SettMapMTy *)this_00,local_24);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(uint *)&this_00->field_0x223b < *(uint *)(*(int *)&this_00->field_0x2237 + 0xc)) &&
       (*(int *)(this_00->field_1A5B + 0x69a) != 0)) {
      if (*(int *)&this_00->field_0x223f == 0) {
        *(undefined4 *)&this_00->field_0x223f = *(undefined4 *)(this_00->field_1A5B + 0x6aa);
      }
      else {
        *(int *)&this_00->field_0x223f = *(int *)&this_00->field_0x223f + -1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar4 = (**(code **)(*(int *)*g_int_00811764 + 200))
                        ((int *)*g_int_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar4 == 0) && (local_64 < 0x400)) && (*(int *)&this_00->field_0x223f == 0)) {
        iVar4 = *(int *)&this_00->field_0x2237;
        if (*(uint *)&this_00->field_0x223b < *(uint *)(iVar4 + 0xc)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_10 = (int *)(*(int *)(iVar4 + 8) * *(uint *)&this_00->field_0x223b +
                            *(int *)(iVar4 + 0x1c));
        }
        else {
          local_10 = (int *)0x0;
        }
        if (local_10 != (int *)0x0) {
          pMVar8 = this_00->field_1A5B;
          local_68 = local_10[2];
          local_60 = (void **)(local_10 + 2);
          local_1c = 0;
          if (*(uint *)(pMVar8 + 0x6a6) != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == *(int *)(pMVar8 + 0x6a6) - 1U) {
              uVar15 = *(uint *)(pMVar8 + 0x69e) % *(uint *)(pMVar8 + 0x6a2);
            }
            else {
              uVar15 = *(uint *)(pMVar8 + 0x6a2);
            }
            local_34 = (int *)(uVar15 + 0x1c);
            local_38 = (uint *)Library::DKW::LIB::FUN_006aac70((int)local_34);
            piVar20 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_38[2] = *(uint *)(this_00->field_1A5B + 0x6a6);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_38[3] = *(uint *)(this_00->field_1A5B + 0x69e);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_38[4] = *(uint *)(this_00->field_1A5B + 0x6ae);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_38[5] = *(uint *)(this_00->field_1A5B + 0x6b2);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_38[6] = *(uint *)(this_00->field_1A5B + 0x6a2);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            puVar6 = (uint *)(*(int *)(this_00->field_1A5B + 0x6a2) * local_1c +
                             *(int *)(this_00->field_1A5B + 0x69a));
            puVar22 = local_38 + 7;
            for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar22 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar22 = puVar22 + 1;
            }
            for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(char *)puVar22 = (char)*puVar6;
              puVar6 = (uint *)((int)puVar6 + 1);
              puVar22 = (uint *)((int)puVar22 + 1);
            }
            FUN_00715360(g_int_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            FreeAndNull(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar4 = piVar20[1] + -1;
            piVar20[1] = iVar4;
            if (iVar4 == 0) {
              FreeAndNull(local_60);
              FUN_006b0c70(*(DArrayTy **)&this_00->field_0x2237,*(uint *)&this_00->field_0x223b);
            }
          }
LAB_005cf5bf:
          uVar15 = *(int *)&this_00->field_0x223b + 1;
          *(uint *)&this_00->field_0x223b = uVar15;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(uint *)(*(int *)&this_00->field_0x2237 + 0xc) <= uVar15) {
            *(undefined4 *)&this_00->field_0x223b = 0;
          }
        }
      }
    }
  }
  g_currentExceptionFrame = local_148.previous;
  return 1;
code_r0x005cf49c:
  local_1c = local_1c + 1;
  if (*(uint *)(pMVar8 + 0x6a6) <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

