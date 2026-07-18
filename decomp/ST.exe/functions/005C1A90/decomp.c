
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::GetMessage */

undefined4 __thiscall MReportTy::GetMessage(MReportTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  MReportTy *this_00;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  MReportTy *pMVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar15;
  char *pcVar16;
  UINT UVar17;
  undefined4 *local_5c;
  undefined4 local_58 [16];
  undefined4 local_18;
  undefined4 local_14;
  MReportTy *local_10;
  int local_c;
  int *local_8;
  
  local_10 = this;
  uVar7 = FUN_006e51b0(*(int *)(this + 0x10));
  piVar15 = (int *)0x0;
  *(undefined4 *)(this + 0x61) = uVar7;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar8 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar8 != 0) {
    DAT_00858df8 = local_5c;
    iVar11 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x42b,0,iVar8,&DAT_007a4ccc);
    if (iVar11 == 0) {
      FUN_006a5e40(iVar8,0,0x7ccec8,0x42b);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return uVar7;
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  if (0x6214 < uVar12) {
    if (uVar12 < 0x6980) {
      if (uVar12 == 0x697f) {
        if (*(ushort *)(param_1 + 0x14) < 3) {
          ccFntTy::SetSurf(*(ccFntTy **)(local_10 + 0x87),*(int *)(param_1 + 0x18),0,0,0,0,0);
          if (*(short *)(param_1 + 0x14) == 1) {
            UVar17 = 0x23f0;
          }
          else if (*(short *)(param_1 + 0x14) == 2) {
            UVar17 = 0x23f2;
          }
          else {
            UVar17 = 0x23f1;
          }
          pcVar9 = (char *)FUN_006b0140(UVar17,DAT_00807618);
          uVar12 = 0xffffffff;
          do {
            pcVar16 = pcVar9;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar16 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar16;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar9 = pcVar16 + -uVar12;
          pcVar16 = (char *)&DAT_0080f33a;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar16 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar16 = pcVar16 + 1;
          }
          for (puVar10 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar10 != (uint *)0x0;
              puVar10 = FUN_0072e560(puVar10,'\n')) {
            *(undefined1 *)puVar10 = 0x20;
          }
          ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x87),&DAT_0080f33a,-1,-1,
                         (uint)(*(short *)(param_1 + 0x16) == 1));
          if (*(short *)(param_1 + 0x16) == 1) {
            iVar8 = *(int *)(param_1 + 0x18);
            FUN_006b5ee0(iVar8,0,0,0,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8),0x18,0xd);
          }
        }
      }
      else if (uVar12 < 0x6901) {
        if (uVar12 == 0x6900) {
          if (*(int *)(param_1 + 0x14) != -1) {
            *(int *)(local_10 + 0x6b) = *(int *)(param_1 + 0x14);
            SetCtrl(local_10);
            *(undefined4 *)(this_00 + 0x2d) = 5;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x9b),(undefined4 *)(this_00 + 0x1d));
          }
        }
        else if (uVar12 == 0x6215) {
          iVar8 = *(int *)(local_10 + (uint)(byte)local_10[0x6a] * 4 + 0x347);
          if (iVar8 != 0) {
            uVar12 = *(uint *)(local_10 + 0x6b);
            if (uVar12 < *(uint *)(iVar8 + 0xc)) {
              iVar11 = *(int *)(iVar8 + 8) * uVar12 + *(int *)(iVar8 + 0x1c);
            }
            else {
              iVar11 = 0;
            }
            if (iVar11 != 0) {
              if (uVar12 < *(uint *)(iVar8 + 0xc)) {
                piVar15 = (int *)(*(int *)(iVar8 + 8) * uVar12 + *(int *)(iVar8 + 0x1c));
              }
              else {
                piVar15 = (int *)0x0;
              }
              iVar8 = *piVar15 + 1;
              uVar7 = FUN_006b0140(0x2445,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar7,iVar8);
              PaintBut(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((uVar12 == 0x68ff) && (uVar12 = *(uint *)(param_1 + 0x14), uVar12 < 3)) {
          local_10[0x6a] = SUB41(uVar12,0);
          if (*(uint *)(*(int *)(local_10 + (uVar12 & 0xff) * 4 + 0x347) + 0xc) <=
              *(uint *)(local_10 + 0x6b)) {
            *(uint *)(local_10 + 0x6b) =
                 *(uint *)(*(int *)(local_10 + (uVar12 & 0xff) * 4 + 0x347) + 0xc) - 1;
          }
          SetCtrl(local_10);
          *(undefined4 *)(this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x97),(undefined4 *)(this_00 + 0x1d));
        }
      }
      else if (uVar12 == 0x693f) {
        thunk_FUN_005c00d0((int)local_10);
      }
      else if (uVar12 == 0x6940) {
        thunk_FUN_005c0190((int)local_10);
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (0xb208 < uVar12) {
      if (uVar12 == 0xb209) {
        PaintTab(local_10,param_1);
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar12 == 0xb208) {
      cVar1 = **(char **)(param_1 + 0x14);
      local_10[0x68] = (MReportTy)0x0;
      local_10[0x69] = (MReportTy)(cVar1 + -1);
      PaintMReport(local_10,'\0');
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar12 == 0x6980) {
      iVar8 = *(int *)(local_10 + (uint)(byte)local_10[0x6a] * 4 + 0x347);
      if ((iVar8 != 0) && ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar8 + 0xc))) {
        piVar15 = (int *)(*(int *)(iVar8 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                         *(int *)(iVar8 + 0x1c));
      }
      if (piVar15 != (int *)0x0) {
        ccFntTy::SetSurf(*(ccFntTy **)(local_10 + 0x87),*(int *)(param_1 + 0x18),0,0,0,0,0);
        iVar8 = *piVar15 + 1;
        uVar7 = FUN_006b0140(0x2445,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar7,iVar8);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x87),&DAT_0080f33a,-1,-1,
                       (uint)(*(short *)(param_1 + 0x16) == 1));
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar8 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar8,0,0,0,*(int *)(iVar8 + 4),*(int *)(iVar8 + 8),0x18,0xd);
        }
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar12 != 0x70ff) goto switchD_005c1b14_caseD_1;
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(local_10 + 0x5d),0,0);
switchD_005c1b14_caseD_5:
    PaintMReport(this_00,'\0');
    goto switchD_005c1b14_caseD_1;
  }
  if (uVar12 == 0x6214) {
    if (local_10[0x6a] == (MReportTy)0x1) {
      UVar17 = 0x23f0;
    }
    else if (local_10[0x6a] == (MReportTy)0x2) {
      UVar17 = 0x23f2;
    }
    else {
      UVar17 = 0x23f1;
    }
    pcVar9 = (char *)FUN_006b0140(UVar17,DAT_00807618);
    uVar12 = 0xffffffff;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = (char *)&DAT_0080f33a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar10 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar10 != (uint *)0x0;
        puVar10 = FUN_0072e560(puVar10,'\n')) {
      *(undefined1 *)puVar10 = 0x20;
    }
    PaintBut(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
    goto switchD_005c1b14_caseD_1;
  }
  if (uVar12 < 0x6201) {
    if (uVar12 != 0x6200) {
      switch(uVar12) {
      case 0:
        NoneMReport(local_10);
        break;
      case 2:
        InitMReport(local_10,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14));
        break;
      case 3:
        DoneMReport(local_10);
        break;
      case 5:
        goto switchD_005c1b14_caseD_5;
      case 0x60:
        uVar2 = *(ushort *)(param_1 + 0x18);
        uVar3 = *(ushort *)(param_1 + 0x1a);
        local_8 = (int *)0x0;
        local_18 = CONCAT22(local_18._2_2_,uVar2);
        local_14 = CONCAT22(local_14._2_2_,uVar3);
        if ((local_10[0x67] != (MReportTy)0x0) && (local_10[0x69] != (MReportTy)0x0)) {
          pMVar14 = local_10 + 0x357;
          local_c = 9;
          do {
            if (*(int *)(pMVar14 + 0x14) != 0) {
              if (((((int)(uint)uVar2 < *(int *)(pMVar14 + -4)) ||
                   (*(int *)(pMVar14 + 4) + *(int *)(pMVar14 + -4) <= (int)(uint)uVar2)) ||
                  ((int)(uint)uVar3 < *(int *)pMVar14)) ||
                 (*(int *)(pMVar14 + 8) + *(int *)pMVar14 <= (int)(uint)uVar3)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar15 = local_8;
              if (bVar6) {
                local_8 = *(int **)(pMVar14 + 0x14);
                piVar15 = local_8;
              }
            }
            pMVar14 = pMVar14 + 0x1c;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar4 = *(int **)(local_10 + 0x44f);
        if (piVar4 != piVar15) {
          if (piVar4 != (int *)0x0) {
            *(undefined4 *)(local_10 + 0x2d) = 0x4202;
            *(undefined2 *)(local_10 + 0x31) = 0;
            *(undefined2 *)(local_10 + 0x33) = 3;
            *(int **)(local_10 + 0x35) = piVar4;
            (**(code **)*DAT_00802a30)(local_10 + 0x1d);
          }
          *(int **)(this_00 + 0x44f) = piVar15;
          if (piVar15 != (int *)0x0) {
            *(undefined4 *)(this_00 + 0x2d) = 0x4201;
            *(undefined2 *)(this_00 + 0x31) = 0;
            *(undefined2 *)(this_00 + 0x33) = 3;
            *(int **)(this_00 + 0x35) = piVar15;
            (**(code **)*DAT_00802a30)(this_00 + 0x1d);
          }
        }
      }
      goto switchD_005c1b14_caseD_1;
    }
    *(undefined4 *)(local_10 + 0x49) = 1;
    if (local_10[0x66] == (MReportTy)0x0) {
      *(undefined4 *)(local_10 + 0x4d) = 0x6108;
      thunk_FUN_005c05f0((int)local_10);
      goto switchD_005c1b14_caseD_1;
    }
    wsprintfA(&DAT_0080ed16,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    uVar12 = 0xffffffff;
    pcVar9 = (char *)&DAT_0080c52e;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = &DAT_0080ef1e;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar9 = &DAT_0080ed16;
    do {
      pcVar16 = pcVar9;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar9 = pcVar16 + -uVar12;
    pcVar16 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar16 = pcVar16 + 1;
    }
    DAT_008087a0 = 8;
    iVar8 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar8 != 0) {
      *(undefined4 *)(this_00 + 0x4d) = 0x6104;
      *(undefined4 *)(this_00 + 0x51) = 0;
      *(undefined4 *)(this_00 + 0x55) = 2;
      thunk_FUN_005c05f0((int)this_00);
      goto switchD_005c1b14_caseD_1;
    }
LAB_005c1d24:
    *(undefined4 *)(this_00 + 0x4d) = 0x6102;
    thunk_FUN_005c05f0((int)this_00);
  }
  else {
    switch(uVar12) {
    case 0x6201:
      *(undefined4 *)(local_10 + 0x45) = 0x200;
      *(undefined4 *)(local_10 + 0x49) = 0;
      goto LAB_005c1d24;
    case 0x6202:
      *(uint *)(local_10 + 0x307) = (uint)(byte)local_10[0x6a];
      *(undefined4 *)(local_10 + 0x2d7) = 0x68ff;
      *(undefined4 *)(local_10 + 0x2f7) = 0x697f;
      *(undefined4 *)(local_10 + 0x30f) = 3;
      *(undefined4 *)(local_10 + 0x32b) = 0x50;
      *(undefined4 *)(local_10 + 0x333) = 200;
      *(undefined4 *)(local_10 + 0x32f) = 0x1b3;
      (**(code **)(**(int **)(local_10 + 0xc) + 8))(0x100ef,0,0,local_10 + 0x2c7,0);
      break;
    case 0x6203:
      if (*(int *)(local_10 + (uint)(byte)local_10[0x6a] * 4 + 0x347) != 0) {
        *(undefined4 *)(local_10 + 0x2d7) = 0x6900;
        *(undefined4 *)(local_10 + 0x2f7) = 0x6980;
        iVar8 = *(int *)(*(int *)(local_10 + (uint)(byte)local_10[0x6a] * 4 + 0x347) + 0xc);
        *(undefined4 *)(local_10 + 0x307) = *(undefined4 *)(local_10 + 0x6b);
        *(int *)(local_10 + 0x30f) = iVar8;
        iVar8 = *(int *)(local_10 + 0x30b) * iVar8;
        iVar11 = iVar8 + 10;
        *(undefined4 *)(local_10 + 0x32b) = 0x50;
        *(undefined4 *)(local_10 + 0x333) = 200;
        iVar8 = 0x1ea - (iVar8 + -0x14) / 2;
        *(int *)(local_10 + 0x32f) = iVar8;
        if (600 < iVar8 + iVar11) {
          *(int *)(local_10 + 0x32f) = 600 - iVar11;
        }
        (**(code **)(**(int **)(local_10 + 0xc) + 8))(0x100ef,0,0,local_10 + 0x2c7,0);
      }
      break;
    case 0x6212:
      if (local_10[0x66] == (MReportTy)0x0) {
        PaintBut(local_10,param_1,(-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c,4,'\0',(uint *)0x0
                );
      }
      else {
        PaintBut(local_10,param_1,0x2358,4,'\0',(uint *)0x0);
      }
      break;
    case 0x6213:
      PaintBut(local_10,param_1,0x24bc,4,'\0',(uint *)0x0);
    }
  }
switchD_005c1b14_caseD_1:
  DAT_00858df8 = local_5c;
  uVar7 = FUN_006e5fd0();
  return uVar7;
}

