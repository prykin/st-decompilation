
undefined4 __thiscall FUN_005c1a90(void *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  void *this_00;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar14;
  char *pcVar15;
  UINT UVar16;
  undefined4 *local_5c;
  undefined4 local_58 [16];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  int local_c;
  int *local_8;
  
  local_10 = this;
  uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
  piVar14 = (int *)0x0;
  *(undefined4 *)((int)this + 0x61) = uVar6;
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar7 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    DAT_00858df8 = local_5c;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x42b,0,iVar7,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar7,0,0x7ccec8,0x42b);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  if (0x6214 < uVar11) {
    if (uVar11 < 0x6980) {
      if (uVar11 == 0x697f) {
        if (*(ushort *)(param_1 + 0x14) < 3) {
          FUN_00710a90(*(int *)(param_1 + 0x18),0,0,0,0,0);
          if (*(short *)(param_1 + 0x14) == 1) {
            UVar16 = 0x23f0;
          }
          else if (*(short *)(param_1 + 0x14) == 2) {
            UVar16 = 0x23f2;
          }
          else {
            UVar16 = 0x23f1;
          }
          pcVar8 = (char *)FUN_006b0140(UVar16,DAT_00807618);
          uVar11 = 0xffffffff;
          do {
            pcVar15 = pcVar8;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar15 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar15;
          } while (cVar1 != '\0');
          uVar11 = ~uVar11;
          pcVar8 = pcVar15 + -uVar11;
          pcVar15 = (char *)&DAT_0080f33a;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar15 = pcVar15 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar15 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar15 = pcVar15 + 1;
          }
          for (puVar9 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
              puVar9 = FUN_0072e560(puVar9,'\n')) {
            *(undefined1 *)puVar9 = 0x20;
          }
          FUN_007119c0(&DAT_0080f33a,-1,-1,(uint)(*(short *)(param_1 + 0x16) == 1));
          if (*(short *)(param_1 + 0x16) == 1) {
            iVar7 = *(int *)(param_1 + 0x18);
            FUN_006b5ee0(iVar7,0,0,0,*(int *)(iVar7 + 4),*(int *)(iVar7 + 8),0x18,0xd);
          }
        }
      }
      else if (uVar11 < 0x6901) {
        if (uVar11 == 0x6900) {
          if (*(int *)(param_1 + 0x14) != -1) {
            *(int *)((int)local_10 + 0x6b) = *(int *)(param_1 + 0x14);
            thunk_FUN_005c0e00();
            *(undefined4 *)((int)this_00 + 0x2d) = 5;
            FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x9b),
                         (undefined4 *)((int)this_00 + 0x1d));
          }
        }
        else if (uVar11 == 0x6215) {
          iVar7 = *(int *)((int)local_10 + (uint)*(byte *)((int)local_10 + 0x6a) * 4 + 0x347);
          if (iVar7 != 0) {
            uVar11 = *(uint *)((int)local_10 + 0x6b);
            if (uVar11 < *(uint *)(iVar7 + 0xc)) {
              iVar10 = *(int *)(iVar7 + 8) * uVar11 + *(int *)(iVar7 + 0x1c);
            }
            else {
              iVar10 = 0;
            }
            if (iVar10 != 0) {
              if (uVar11 < *(uint *)(iVar7 + 0xc)) {
                piVar14 = (int *)(*(int *)(iVar7 + 8) * uVar11 + *(int *)(iVar7 + 0x1c));
              }
              else {
                piVar14 = (int *)0x0;
              }
              iVar7 = *piVar14 + 1;
              uVar6 = FUN_006b0140(0x2445,DAT_00807618);
              wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar6,iVar7);
              thunk_FUN_005c0b00(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
            }
          }
        }
        else if ((uVar11 == 0x68ff) && (uVar11 = *(uint *)(param_1 + 0x14), uVar11 < 3)) {
          *(char *)((int)local_10 + 0x6a) = (char)uVar11;
          uVar11 = *(uint *)(*(int *)((int)local_10 + (uVar11 & 0xff) * 4 + 0x347) + 0xc);
          if (uVar11 <= *(uint *)((int)local_10 + 0x6b)) {
            *(uint *)((int)local_10 + 0x6b) = uVar11 - 1;
          }
          thunk_FUN_005c0e00();
          *(undefined4 *)((int)this_00 + 0x2d) = 5;
          FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + 0x97),
                       (undefined4 *)((int)this_00 + 0x1d));
        }
      }
      else if (uVar11 == 0x693f) {
        thunk_FUN_005c00d0((int)local_10);
      }
      else if (uVar11 == 0x6940) {
        thunk_FUN_005c0190((int)local_10);
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (0xb208 < uVar11) {
      if (uVar11 == 0xb209) {
        thunk_FUN_005c1610(param_1);
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar11 == 0xb208) {
      cVar1 = **(char **)(param_1 + 0x14);
      *(undefined1 *)((int)local_10 + 0x68) = 0;
      *(char *)((int)local_10 + 0x69) = cVar1 + -1;
      thunk_FUN_005be5b0('\0');
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar11 == 0x6980) {
      iVar7 = *(int *)((int)local_10 + (uint)*(byte *)((int)local_10 + 0x6a) * 4 + 0x347);
      if ((iVar7 != 0) && ((uint)*(ushort *)(param_1 + 0x14) < *(uint *)(iVar7 + 0xc))) {
        piVar14 = (int *)(*(int *)(iVar7 + 8) * (uint)*(ushort *)(param_1 + 0x14) +
                         *(int *)(iVar7 + 0x1c));
      }
      if (piVar14 != (int *)0x0) {
        FUN_00710a90(*(int *)(param_1 + 0x18),0,0,0,0,0);
        iVar7 = *piVar14 + 1;
        uVar6 = FUN_006b0140(0x2445,DAT_00807618);
        wsprintfA((LPSTR)&DAT_0080f33a,s__s__d_007cd0b8,uVar6,iVar7);
        FUN_007119c0(&DAT_0080f33a,-1,-1,(uint)(*(short *)(param_1 + 0x16) == 1));
        if (*(short *)(param_1 + 0x16) == 1) {
          iVar7 = *(int *)(param_1 + 0x18);
          FUN_006b5ee0(iVar7,0,0,0,*(int *)(iVar7 + 4),*(int *)(iVar7 + 8),0x18,0xd);
        }
      }
      goto switchD_005c1b14_caseD_1;
    }
    if (uVar11 != 0x70ff) goto switchD_005c1b14_caseD_1;
    thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)((int)local_10 + 0x5d),0,0);
switchD_005c1b14_caseD_5:
    thunk_FUN_005be5b0('\0');
    goto switchD_005c1b14_caseD_1;
  }
  if (uVar11 == 0x6214) {
    if (*(char *)((int)local_10 + 0x6a) == '\x01') {
      UVar16 = 0x23f0;
    }
    else if (*(char *)((int)local_10 + 0x6a) == '\x02') {
      UVar16 = 0x23f2;
    }
    else {
      UVar16 = 0x23f1;
    }
    pcVar8 = (char *)FUN_006b0140(UVar16,DAT_00807618);
    uVar11 = 0xffffffff;
    do {
      pcVar15 = pcVar8;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar8 = pcVar15 + -uVar11;
    pcVar15 = (char *)&DAT_0080f33a;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar15 = pcVar15 + 1;
    }
    for (puVar9 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != (uint *)0x0;
        puVar9 = FUN_0072e560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
    thunk_FUN_005c0b00(this_00,param_1,0,2,'\x01',&DAT_0080f33a);
    goto switchD_005c1b14_caseD_1;
  }
  if (uVar11 < 0x6201) {
    if (uVar11 != 0x6200) {
      switch(uVar11) {
      case 0:
        thunk_FUN_005bf860();
        break;
      case 2:
        thunk_FUN_005bd7a0(*(undefined1 *)(*(int *)(param_1 + 0x14) + 0x14));
        break;
      case 3:
        thunk_FUN_005be310();
        break;
      case 5:
        goto switchD_005c1b14_caseD_5;
      case 0x60:
        uVar2 = *(ushort *)(param_1 + 0x18);
        uVar3 = *(ushort *)(param_1 + 0x1a);
        local_8 = (int *)0x0;
        local_18 = CONCAT22(local_18._2_2_,uVar2);
        local_14 = CONCAT22(local_14._2_2_,uVar3);
        if ((*(char *)((int)local_10 + 0x67) != '\0') && (*(char *)((int)local_10 + 0x69) != '\0'))
        {
          piVar13 = (int *)((int)local_10 + 0x357);
          local_c = 9;
          do {
            if (piVar13[5] != 0) {
              if (((((int)(uint)uVar2 < piVar13[-1]) ||
                   (piVar13[1] + piVar13[-1] <= (int)(uint)uVar2)) || ((int)(uint)uVar3 < *piVar13))
                 || (piVar13[2] + *piVar13 <= (int)(uint)uVar3)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar14 = local_8;
              if (bVar5) {
                local_8 = (int *)piVar13[5];
                piVar14 = local_8;
              }
            }
            piVar13 = piVar13 + 7;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        piVar13 = *(int **)((int)local_10 + 0x44f);
        if (piVar13 != piVar14) {
          if (piVar13 != (int *)0x0) {
            *(undefined4 *)((int)local_10 + 0x2d) = 0x4202;
            *(undefined2 *)((int)local_10 + 0x31) = 0;
            *(undefined2 *)((int)local_10 + 0x33) = 3;
            *(int **)((int)local_10 + 0x35) = piVar13;
            (**(code **)*DAT_00802a30)((int)local_10 + 0x1d);
          }
          *(int **)((int)this_00 + 0x44f) = piVar14;
          if (piVar14 != (int *)0x0) {
            *(undefined4 *)((int)this_00 + 0x2d) = 0x4201;
            *(undefined2 *)((int)this_00 + 0x31) = 0;
            *(undefined2 *)((int)this_00 + 0x33) = 3;
            *(int **)((int)this_00 + 0x35) = piVar14;
            (**(code **)*DAT_00802a30)((int)this_00 + 0x1d);
          }
        }
      }
      goto switchD_005c1b14_caseD_1;
    }
    *(undefined4 *)((int)local_10 + 0x49) = 1;
    if (*(char *)((int)local_10 + 0x66) == '\0') {
      *(undefined4 *)((int)local_10 + 0x4d) = 0x6108;
      thunk_FUN_005c05f0((int)local_10);
      goto switchD_005c1b14_caseD_1;
    }
    wsprintfA(&DAT_0080ed16,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    uVar11 = 0xffffffff;
    pcVar8 = (char *)&DAT_0080c52e;
    do {
      pcVar15 = pcVar8;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar8 = pcVar15 + -uVar11;
    pcVar15 = &DAT_0080ef1e;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar8 = &DAT_0080ed16;
    do {
      pcVar15 = pcVar8;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    pcVar8 = pcVar15 + -uVar11;
    pcVar15 = (char *)&DAT_0080ee1a;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar15 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar15 = pcVar15 + 1;
    }
    DAT_008087a0 = 8;
    iVar7 = thunk_FUN_0056e9e0(&DAT_00807620,1);
    if (iVar7 != 0) {
      *(undefined4 *)((int)this_00 + 0x4d) = 0x6104;
      *(undefined4 *)((int)this_00 + 0x51) = 0;
      *(undefined4 *)((int)this_00 + 0x55) = 2;
      thunk_FUN_005c05f0((int)this_00);
      goto switchD_005c1b14_caseD_1;
    }
LAB_005c1d24:
    *(undefined4 *)((int)this_00 + 0x4d) = 0x6102;
    thunk_FUN_005c05f0((int)this_00);
  }
  else {
    switch(uVar11) {
    case 0x6201:
      *(undefined4 *)((int)local_10 + 0x45) = 0x200;
      *(undefined4 *)((int)local_10 + 0x49) = 0;
      goto LAB_005c1d24;
    case 0x6202:
      *(uint *)((int)local_10 + 0x307) = (uint)*(byte *)((int)local_10 + 0x6a);
      *(undefined4 *)((int)local_10 + 0x2d7) = 0x68ff;
      *(undefined4 *)((int)local_10 + 0x2f7) = 0x697f;
      *(undefined4 *)((int)local_10 + 0x30f) = 3;
      *(undefined4 *)((int)local_10 + 0x32b) = 0x50;
      *(undefined4 *)((int)local_10 + 0x333) = 200;
      *(undefined4 *)((int)local_10 + 0x32f) = 0x1b3;
      (**(code **)(**(int **)((int)local_10 + 0xc) + 8))(0x100ef,0,0,(int)local_10 + 0x2c7,0);
      break;
    case 0x6203:
      if (*(int *)((int)local_10 + (uint)*(byte *)((int)local_10 + 0x6a) * 4 + 0x347) != 0) {
        *(undefined4 *)((int)local_10 + 0x2d7) = 0x6900;
        *(undefined4 *)((int)local_10 + 0x2f7) = 0x6980;
        iVar7 = *(int *)(*(int *)((int)local_10 + (uint)*(byte *)((int)local_10 + 0x6a) * 4 + 0x347)
                        + 0xc);
        *(undefined4 *)((int)local_10 + 0x307) = *(undefined4 *)((int)local_10 + 0x6b);
        *(int *)((int)local_10 + 0x30f) = iVar7;
        iVar7 = *(int *)((int)local_10 + 0x30b) * iVar7;
        iVar10 = iVar7 + 10;
        *(undefined4 *)((int)local_10 + 0x32b) = 0x50;
        *(undefined4 *)((int)local_10 + 0x333) = 200;
        iVar7 = 0x1ea - (iVar7 + -0x14) / 2;
        *(int *)((int)local_10 + 0x32f) = iVar7;
        if (600 < iVar7 + iVar10) {
          *(int *)((int)local_10 + 0x32f) = 600 - iVar10;
        }
        (**(code **)(**(int **)((int)local_10 + 0xc) + 8))(0x100ef,0,0,(int)local_10 + 0x2c7,0);
      }
      break;
    case 0x6212:
      if (*(char *)((int)local_10 + 0x66) == '\0') {
        thunk_FUN_005c0b00(local_10,param_1,(-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c,4,'\0',
                           (uint *)0x0);
      }
      else {
        thunk_FUN_005c0b00(local_10,param_1,0x2358,4,'\0',(uint *)0x0);
      }
      break;
    case 0x6213:
      thunk_FUN_005c0b00(local_10,param_1,0x24bc,4,'\0',(uint *)0x0);
    }
  }
switchD_005c1b14_caseD_1:
  DAT_00858df8 = local_5c;
  uVar6 = FUN_006e5fd0();
  return uVar6;
}

