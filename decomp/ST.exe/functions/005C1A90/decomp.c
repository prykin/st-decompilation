
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::GetMessage */

undefined4 __thiscall MReportTy::GetMessage(MReportTy *this,AnonShape_005C0B00_CBE14AB4 *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  MReportTy *this_00;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar15;
  char *pcVar16;
  UINT UVar17;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  undefined4 local_14;
  MReportTy *local_10;
  int local_c;
  int *local_8;
  
  local_10 = this;
  DVar6 = FUN_006e51b0(this->field_0010);
  piVar15 = (int *)0x0;
  this->field_0061 = DVar6;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar7 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x42b,0,iVar7,&DAT_007a4ccc
                                ,s_MReportTy__GetMessage_007cd09c);
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x42b);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  uVar12 = *(uint *)&param_1->field_0x10;
  if (0x6214 < uVar12) {
    if (uVar12 < 0x6980) {
      if (uVar12 == 0x697f) {
        if ((ushort)param_1->field_0014 < 3) {
          ccFntTy::SetSurf(local_10->field_0087,(int)param_1->field_0018,0,0,0,0,0);
          if (param_1->field_0014 == 1) {
            UVar17 = 0x23f0;
          }
          else if (param_1->field_0014 == 2) {
            UVar17 = 0x23f2;
          }
          else {
            UVar17 = 0x23f1;
          }
          pcVar8 = (char *)FUN_006b0140(UVar17,HINSTANCE_00807618);
          uVar12 = 0xffffffff;
          do {
            pcVar16 = pcVar8;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar8 = pcVar16 + -uVar12;
          pcVar16 = (char *)&DAT_0080f33a;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar16 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar16 = pcVar16 + 1;
          }
          for (puVar9 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
              puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
            *(undefined1 *)puVar9 = 0x20;
          }
          ccFntTy::WrStr(this_00->field_0087,&DAT_0080f33a,-1,-1,
                         (uint)(*(short *)&param_1->field_0x16 == 1));
          if (*(short *)&param_1->field_0x16 == 1) {
            piVar15 = param_1->field_0018;
            FUN_006b5ee0((int)piVar15,0,0,0,piVar15[1],piVar15[2],0x18,0xd);
          }
        }
      }
      else if (uVar12 < 0x6901) {
        if (uVar12 == 0x6900) {
          if (*(int *)&param_1->field_0014 != -1) {
            local_10->field_006B = *(int *)&param_1->field_0014;
            SetCtrl(local_10);
            this_00->field_002D = 5;
            FUN_006e6080(this_00,2,this_00->field_009B,(undefined4 *)&this_00->field_0x1d);
          }
        }
        else if (uVar12 == 0x6215) {
          iVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
          if (iVar7 != 0) {
            uVar12 = local_10->field_006B;
            if (uVar12 < *(uint *)(iVar7 + 0xc)) {
              iVar10 = *(int *)(iVar7 + 8) * uVar12 + *(int *)(iVar7 + 0x1c);
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 != 0) {
              if (uVar12 < *(uint *)(iVar7 + 0xc)) {
                piVar15 = (int *)(*(int *)(iVar7 + 8) * uVar12 + *(int *)(iVar7 + 0x1c));
              }
              else {
                piVar15 = (int *)0x0;
              }
              iVar7 = *piVar15 + 1;
              uVar11 = FUN_006b0140(0x2445,HINSTANCE_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar11,iVar7);
              PaintBut(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((uVar12 == 0x68ff) && (uVar12 = *(uint *)&param_1->field_0014, uVar12 < 3)) {
          local_10->field_006A = (char)uVar12;
          uVar12 = *(uint *)((&local_10->field_0347)[uVar12 & 0xff] + 0xc);
          if (uVar12 <= (uint)local_10->field_006B) {
            local_10->field_006B = uVar12 - 1;
          }
          SetCtrl(local_10);
          this_00->field_002D = 5;
          FUN_006e6080(this_00,2,this_00->field_0097,(undefined4 *)&this_00->field_0x1d);
        }
      }
      else if (uVar12 == 0x693f) {
        thunk_FUN_005c00d0((AnonShape_005C00D0_8BBBA4CC *)local_10);
      }
      else if (uVar12 == 0x6940) {
        thunk_FUN_005c0190((AnonShape_005C0190_99FBAF43 *)local_10);
      }
      goto cf_common_exit_005C22B1;
    }
    if (0xb208 < uVar12) {
      if (uVar12 == 0xb209) {
        PaintTab(local_10,(int)param_1);
      }
      goto cf_common_exit_005C22B1;
    }
    if (uVar12 == 0xb208) {
      cVar1 = **(char **)&param_1->field_0014;
      local_10->field_0068 = 0;
      local_10->field_0069 = cVar1 + -1;
      PaintMReport(local_10,'\0');
      goto cf_common_exit_005C22B1;
    }
    if (uVar12 == 0x6980) {
      iVar7 = (&local_10->field_0347)[(byte)local_10->field_006A];
      if ((iVar7 != 0) && ((uint)(ushort)param_1->field_0014 < *(uint *)(iVar7 + 0xc))) {
        piVar15 = (int *)(*(int *)(iVar7 + 8) * (uint)(ushort)param_1->field_0014 +
                         *(int *)(iVar7 + 0x1c));
      }
      if (piVar15 != (int *)0x0) {
        ccFntTy::SetSurf(local_10->field_0087,(int)param_1->field_0018,0,0,0,0,0);
        iVar7 = *piVar15 + 1;
        uVar11 = FUN_006b0140(0x2445,HINSTANCE_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar11,iVar7);
        ccFntTy::WrStr(this_00->field_0087,&DAT_0080f33a,-1,-1,
                       (uint)(*(short *)&param_1->field_0x16 == 1));
        if (*(short *)&param_1->field_0x16 == 1) {
          piVar15 = param_1->field_0018;
          FUN_006b5ee0((int)piVar15,0,0,0,piVar15[1],piVar15[2],0x18,0xd);
        }
      }
      goto cf_common_exit_005C22B1;
    }
    if (uVar12 != 0x70ff) goto cf_common_exit_005C22B1;
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,local_10->field_005D,0,0);
switchD_005c1b14_caseD_5:
    PaintMReport(this_00,'\0');
    goto cf_common_exit_005C22B1;
  }
  if (uVar12 == 0x6214) {
    if (local_10->field_006A == '\x01') {
      UVar17 = 0x23f0;
    }
    else if (local_10->field_006A == '\x02') {
      UVar17 = 0x23f2;
    }
    else {
      UVar17 = 0x23f1;
    }
    pcVar8 = (char *)FUN_006b0140(UVar17,HINSTANCE_00807618);
    uVar12 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = (char *)&DAT_0080f33a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar9 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
        puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
    PaintBut(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
    goto cf_common_exit_005C22B1;
  }
  if (uVar12 < 0x6201) {
    if (uVar12 != 0x6200) {
      switch(uVar12) {
      case 0:
        NoneMReport(local_10);
        break;
      case 2:
        InitMReport(local_10,*(undefined1 *)(*(int *)&param_1->field_0014 + 0x14));
        break;
      case 3:
        DoneMReport(local_10);
        break;
      case 5:
        goto switchD_005c1b14_caseD_5;
      case 0x60:
        uVar2 = *(ushort *)&param_1->field_0018;
        uVar3 = *(ushort *)((int)&param_1->field_0018 + 2);
        local_8 = (int *)0x0;
        local_18 = CONCAT22(local_18._2_2_,uVar2);
        local_14 = CONCAT22(local_14._2_2_,uVar3);
        if ((local_10->field_0067 != '\0') && (local_10->field_0069 != '\0')) {
          piVar14 = &local_10->field_0357;
          local_c = 9;
          do {
            if (piVar14[5] != 0) {
              if (((((int)(uint)uVar2 < piVar14[-1]) ||
                   (piVar14[1] + piVar14[-1] <= (int)(uint)uVar2)) || ((int)(uint)uVar3 < *piVar14))
                 || (piVar14[2] + *piVar14 <= (int)(uint)uVar3)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar15 = local_8;
              if (bVar5) {
                local_8 = (int *)piVar14[5];
                piVar15 = local_8;
              }
            }
            piVar14 = piVar14 + 7;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar14 = (int *)local_10->field_044F;
        if (piVar14 != piVar15) {
          if (piVar14 != (int *)0x0) {
            local_10->field_002D = 0x4202;
            *(undefined2 *)&local_10->field_0x31 = 0;
            local_10->field_0033 = 3;
            local_10->field_0035 = piVar14;
            (*(code *)**(undefined4 **)PTR_00802a30)(&local_10->field_0x1d);
          }
          this_00->field_044F = piVar15;
          if (piVar15 != (int *)0x0) {
            this_00->field_002D = 0x4201;
            *(undefined2 *)&this_00->field_0x31 = 0;
            this_00->field_0033 = 3;
            this_00->field_0035 = piVar15;
            (*(code *)**(undefined4 **)PTR_00802a30)(&this_00->field_0x1d);
          }
        }
      }
      goto cf_common_exit_005C22B1;
    }
    local_10->field_0049 = 1;
    if (local_10->field_0066 == '\0') {
      local_10->field_004D = 0x6108;
      thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)local_10);
      goto cf_common_exit_005C22B1;
    }
    wsprintfA(&DAT_0080ed16,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    uVar12 = 0xffffffff;
    pcVar8 = (char *)&DAT_0080c52e;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = &DAT_0080ef1e;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar12 = 0xffffffff;
    pcVar8 = &DAT_0080ed16;
    do {
      pcVar16 = pcVar8;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar8 = pcVar16 + -uVar12;
    pcVar16 = (char *)&DAT_0080ee1a;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    DAT_008087a0 = 8;
    iVar7 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar7 != 0) {
      this_00->field_004D = 0x6104;
      this_00->field_0051 = 0;
      this_00->field_0055 = 2;
      thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)this_00);
      goto cf_common_exit_005C22B1;
    }
LAB_005c1d24:
    this_00->field_004D = 0x6102;
    thunk_FUN_005c05f0((AnonShape_005C05F0_AB1ACC3B *)this_00);
  }
  else {
    switch(uVar12) {
    case 0x6201:
      local_10->field_0045 = 0x200;
      local_10->field_0049 = 0;
      goto LAB_005c1d24;
    case 0x6202:
      local_10->field_0307 = (uint)(byte)local_10->field_006A;
      local_10->field_02D7 = 0x68ff;
      local_10->field_02F7 = 0x697f;
      local_10->field_030F = 3;
      local_10->field_032B = 0x50;
      local_10->field_0333 = 200;
      local_10->field_032F = 0x1b3;
      (*local_10->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_10->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                 &local_10->field_0x2c7,0);
      break;
    case 0x6203:
      if ((&local_10->field_0347)[(byte)local_10->field_006A] != 0) {
        local_10->field_02D7 = 0x6900;
        local_10->field_02F7 = 0x6980;
        iVar7 = *(int *)((&local_10->field_0347)[(byte)local_10->field_006A] + 0xc);
        local_10->field_0307 = local_10->field_006B;
        local_10->field_030F = iVar7;
        iVar7 = local_10->field_030B * iVar7;
        iVar10 = iVar7 + 10;
        local_10->field_032B = 0x50;
        local_10->field_0333 = 200;
        iVar7 = 0x1ea - (iVar7 + -0x14) / 2;
        local_10->field_032F = iVar7;
        if (600 < iVar7 + iVar10) {
          local_10->field_032F = 600 - iVar10;
        }
        (*local_10->field_000C->vtable->CreateObject)
                  ((SystemClassTy *)local_10->field_000C,0x100ef,(undefined4 *)0x0,(int *)0x0,
                   &local_10->field_0x2c7,0);
      }
      break;
    case 0x6212:
      if (local_10->field_0066 == '\0') {
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
cf_common_exit_005C22B1:
  g_currentExceptionFrame = local_5c.previous;
  uVar11 = FUN_006e5fd0();
  return uVar11;
}

