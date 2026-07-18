
undefined4 __fastcall FUN_005ce0e0(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int *this;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  byte *pbVar11;
  void *unaff_EDI;
  byte *pbVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  bool bVar16;
  char cVar17;
  char *pcVar18;
  undefined4 *local_148;
  undefined4 local_144 [16];
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  int local_e6;
  undefined4 local_e2;
  int local_dc [8];
  int local_bc [8];
  uint local_9c [2];
  int local_94;
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
  int *local_60;
  int *local_5c;
  int local_58 [8];
  uint *local_38;
  uint *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  char local_11;
  uint *local_10;
  uint *local_c;
  char local_5;
  
  local_1d = *(char *)((int)param_1 + 0x65);
  local_c = (uint *)0x0;
  local_24 = 0xffffffff;
  local_148 = DAT_00858df8;
  DAT_00858df8 = &local_148;
  local_5c = param_1;
  iVar3 = __setjmp3(local_144,0,unaff_EDI,unaff_ESI);
  this = local_5c;
  if (iVar3 != 0) {
    DAT_00858df8 = local_148;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x4a9,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x4a9);
    return 0;
  }
  iVar3 = thunk_FUN_005c5130(local_5c);
  if (((iVar3 != 0) && (local_1d == '\x03')) && (*(char *)((int)this + 0x65) == '\x01')) {
    FUN_006b3430(DAT_008075a8,this[0x880]);
    FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
    if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
    }
    if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
    }
  }
  FUN_006b7510(DAT_00811764,-1,&local_30,-1,0);
  if (DAT_0080877e == '\0') {
    iVar3 = *(int *)((int)this + 0x61);
    if (799 < (uint)(iVar3 - *(int *)((int)this + 0x220d))) {
      local_f2 = *(undefined4 *)((int)this + 0x2221);
      local_e2 = *(undefined4 *)((int)this + 0x2211);
      local_102 = 4;
      local_e6 = iVar3;
      FUN_006b6500((int)DAT_00811764,0);
      FUN_00715360(DAT_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
      *(int *)((int)this + 0x2221) = *(int *)((int)this + 0x2221) + 1;
      iVar3 = *(int *)((int)this + 0x61);
      *(int *)((int)this + 0x220d) = iVar3;
    }
    if (((local_30 == 0) && (60000 < (uint)(iVar3 - *(int *)((int)this + 0x2209)))) &&
       (*(char *)((int)this + 0x2225) == '\0')) {
      *(undefined1 *)((int)this + 0x2225) = 1;
      piVar8 = local_dc;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_dc[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
      if (*(int *)(*(int *)((int)this + 0x1a5b) + 0x2e6) == 0) {
        (**(code **)*this)(local_dc);
      }
      else {
        local_dc[2] = this[2];
        local_dc[3] = 2;
        thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),0x2522,'\0',local_dc,
                           (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
    }
  }
  else if ((*(char *)((int)this + 0x222e) != '\0') &&
          (29999 < (uint)(*(int *)((int)this + 0x61) - *(int *)((int)this + 0x2233)))) {
    *(undefined1 *)((int)this + 0x222e) = 0;
    thunk_FUN_005d4850();
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar3 = FUN_00715630(DAT_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar3 == 1) && (local_28 == 0x1b)) {
        thunk_FUN_005dd850((int)local_c);
      }
      puVar4 = local_c;
      if (DAT_0080877e == '\0') {
        piVar8 = local_58;
        for (iVar7 = 8; puVar4 = local_c, iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        if (iVar3 == -0x4d) {
          *(undefined1 *)((int)this + 0x2225) = 1;
          local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
          iVar3 = *(int *)((int)this + 0x1a5b);
          if (*(int *)(iVar3 + 0x2e6) == 0) {
            puVar5 = (undefined4 *)*this;
            piVar8 = local_58;
            goto LAB_005cf387;
          }
          local_58[2] = this[2];
          local_58[3] = 2;
          piVar8 = local_58;
LAB_005ce9b2:
          thunk_FUN_005b7ef0(*(void **)(iVar3 + 0x2e6),0x2522,'\0',piVar8,(undefined4 *)0x0,
                             (undefined4 *)0x0,0,0);
        }
        else {
          if (iVar3 != 1) goto LAB_005cf38c;
          iVar3 = *(int *)((int)this + 0x61);
          *(int *)((int)this + 0x2209) = iVar3;
          switch(local_28) {
          case 0x10:
            if (*(char *)((int)this + 0x65) == '\x01') {
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)((int)this + 0x1a5b) + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = this[2];
              local_58[3] = 2;
              thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),0x2524,'\0',
                                 local_58,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
            break;
          case 0x12:
            if (*(char *)((int)this + 0x65) == '\x01') {
              local_58[4] = 0x694f;
LAB_005cee1a:
              (**(code **)*this)(local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pcVar18 = (char *)((int)local_c + 2);
            if ((*(char *)((int)local_c + 2) == '\x03') && (*(char *)((int)this + 0x65) == '\x01'))
            {
              local_58[4] = 0x694f;
              (**(code **)*this)(local_58);
            }
            else {
              if (*(char *)((int)local_c + 2) == '\x01') {
                bVar1 = *(byte *)((int)local_c + 0xb);
                if (bVar1 == 1) {
                  if (*(char *)((int)this + 0x65) == '\x01') {
                    if ((*(uint *)((int)local_c + 3) == DAT_00809958) ||
                       ((uint)(iVar3 - *(int *)((int)this + 0x2215)) < 3000)) {
                      if ((*(uint *)((int)local_c + 0x16) != DAT_00808aab) &&
                         (2999 < (uint)(iVar3 - *(int *)((int)this + 0x2219)))) {
                        FUN_006b6500((int)DAT_00811764,1);
                        FUN_00715360(DAT_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                        iVar3 = *(int *)((int)this + 0x61);
                        *(int *)((int)this + 0x2219) = iVar3;
                      }
                      if (((this[0x7e1] != 0) &&
                          (*(int *)((int)puVar4 + 0x1a) != *(int *)((int)this + 0x2121))) &&
                         (1999 < (uint)(iVar3 - *(int *)((int)this + 0x221d)))) {
                        FUN_006b6500((int)DAT_00811764,1);
                        FUN_00715360(DAT_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                        *(undefined4 *)((int)this + 0x221d) = *(undefined4 *)((int)this + 0x61);
                      }
                    }
                    else {
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'!',(char *)0x0,0,0,0xffffffff);
                      FUN_00715360(DAT_00811764,1,'\x1f',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                      *(undefined4 *)((int)this + 0x2215) = *(undefined4 *)((int)this + 0x61);
                    }
                  }
                }
                else if ((1 < bVar1) && (bVar1 < 6)) {
                  if ((*(uint *)((int)local_c + 0x16) != DAT_00808aab) &&
                     (2999 < (uint)(iVar3 - *(int *)((int)this + 0x2219)))) {
                    FUN_006b6500((int)DAT_00811764,1);
                    FUN_00715360(DAT_00811764,1,'\x1d',(char *)0x0,0,0,0xffffffff);
                    FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                    iVar3 = *(int *)((int)this + 0x61);
                    *(int *)((int)this + 0x2219) = iVar3;
                  }
                  if (this[0x7e1] != 0) {
                    if ((*(int *)((int)puVar4 + 0x1a) != *(int *)((int)this + 0x2121)) &&
                       (1999 < (uint)(iVar3 - *(int *)((int)this + 0x221d)))) {
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'#',(char *)0x0,0,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                      iVar3 = *(int *)((int)this + 0x61);
                      *(int *)((int)this + 0x221d) = iVar3;
                    }
                    if ((this[0x7e1] != 0) && (1999 < (uint)(iVar3 - *(int *)((int)this + 0x221d))))
                    {
                      thunk_FUN_005cdb20((uint)(*(char *)((int)this + 0x1e26) == '\x10'));
                    }
                  }
                }
              }
              iVar3 = *(int *)((int)this + 0x61) - *(int *)((int)puVar4 + 0x1e);
              *(int *)((int)this + 0x2211) = iVar3;
              thunk_FUN_005cfcd0(this,DAT_0080877f,iVar3);
              if ((((((*pcVar18 == '\x02') && (*(char *)((int)this + 0x65) == '\x01')) &&
                    (*(uint *)((int)puVar4 + 3) == DAT_008087be)) &&
                   ((*(char *)((int)this + 0x1e26) != '\x0e' ||
                    (*(uint *)((int)puVar4 + 3) == DAT_00809958)))) &&
                  (*(uint *)((int)puVar4 + 0x16) == DAT_00808aab)) &&
                 (*(int *)((int)puVar4 + 0x1a) == *(int *)((int)this + 0x2121))) {
                local_5 = '\0';
                *(undefined4 *)((int)this + 0x2d) = 0x10003;
                FUN_006e6080(this,3,0x100ef,(undefined4 *)((int)this + 0x1d));
                DAT_0080733b = (undefined1)puVar4[3];
                DAT_00808754 = *(undefined4 *)((int)puVar4 + 0xe);
                iVar3 = this[0x7e1];
                uVar9 = 0;
                uVar10 = *(uint *)(iVar3 + 0xc);
                local_1c = 0;
                if (0 < (int)uVar10) {
                  bVar16 = uVar10 != 0;
                  do {
                    if (bVar16) {
                      iVar7 = *(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c);
                    }
                    else {
                      iVar7 = 0;
                    }
                    if (((iVar7 != 0) &&
                        ((*(char *)(iVar7 + 4) == '\x02' || (*(char *)(iVar7 + 4) == '\x03')))) &&
                       (*(int *)(iVar7 + 6) == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar9;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                    bVar16 = uVar9 < uVar10;
                    local_1c = uVar9;
                  } while ((int)uVar9 < (int)uVar10);
                }
                if (local_5 == '\0') {
                  *(uint *)((int)this + 0x2d) = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  (**(code **)*this)((int)this + 0x1d);
                }
                else {
                  *(undefined4 *)((int)this + 0x2d) = 0x694a;
                  *(undefined4 *)((int)this + 0x31) = 1;
                  (**(code **)*this)((int)this + 0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != local_c[0x1b]) {
              local_5 = DAT_00808a8f != (char)local_c[0x14];
              iVar3 = 0x10;
              bVar16 = true;
              puVar4 = &DAT_00808a4f;
              puVar13 = local_c + 4;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar16 = *puVar4 == *puVar13;
                puVar4 = puVar4 + 1;
                puVar13 = puVar13 + 1;
              } while (bVar16);
              local_11 = !bVar16;
              thunk_FUN_00571a30(&DAT_008087b6,local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = *(uint **)(DAT_0080c502 + 0xc);
              local_10 = (uint *)0x0;
              if (0 < (int)local_34) {
                bVar16 = local_34 != (uint *)0x0;
                do {
                  if (bVar16) {
                    iVar3 = *(int *)(DAT_0080c502 + 8) * (int)local_10 +
                            *(int *)(DAT_0080c502 + 0x1c);
                  }
                  else {
                    iVar3 = 0;
                  }
                  if ((iVar3 != 0) && (*(uint *)(iVar3 + 0x90) == DAT_0080995c)) {
                    pbVar12 = (byte *)&DAT_00809960;
                    pbVar11 = (byte *)(iVar3 + 0x4c);
                    do {
                      bVar1 = *pbVar11;
                      bVar16 = bVar1 < *pbVar12;
                      if (bVar1 != *pbVar12) {
LAB_005cef58:
                        iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar11[1];
                      bVar16 = bVar1 < pbVar12[1];
                      if (bVar1 != pbVar12[1]) goto LAB_005cef58;
                      pbVar11 = pbVar11 + 2;
                      pbVar12 = pbVar12 + 2;
                    } while (bVar1 != 0);
                    iVar7 = 0;
LAB_005cef5d:
                    if (iVar7 == 0) {
                      *(uint **)((int)this + 0x1c5f) = local_10;
                      thunk_FUN_005dc730(*(int *)((int)this + 0x1f43),(char *)(iVar3 + 0x70),
                                         *(int *)((int)this + 0x1c63));
                      break;
                    }
                  }
                  local_10 = (uint *)((int)local_10 + 1);
                  bVar16 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              piVar8 = (int *)((int)this + 0x2125);
              iVar3 = 0xe;
              do {
                if (*piVar8 != 0) {
                  *(undefined4 *)((int)this + 0x2d) = 5;
                  FUN_006e6080(this,2,*piVar8,(undefined4 *)((int)this + 0x1d));
                }
                piVar8 = piVar8 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              if (((local_5 == '\0') || ((**(code **)(*this + 0x2c))(), local_5 == '\0')) &&
                 (local_11 != '\0')) {
                piVar8 = this + 0x7e3;
                local_10 = (uint *)0xa;
                do {
                  iVar3 = 8;
                  do {
                    if (*piVar8 != 0) {
                      *(undefined4 *)((int)this + 0x2d) = 5;
                      FUN_006e6080(this,2,*piVar8,(undefined4 *)((int)this + 0x1d));
                    }
                    piVar8 = piVar8 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  local_10 = (uint *)((int)local_10 + -1);
                } while (local_10 != (uint *)0x0);
              }
              thunk_FUN_005c87c0();
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *local_c) && (*(char *)((int)this + 0x65) == '\x01')) {
              puVar13 = &DAT_00853de0;
              for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar13 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar13 = puVar13 + 1;
              }
              *(short *)puVar13 = (short)*puVar4;
              thunk_FUN_005c7800();
            }
            break;
          case 0x20:
            iVar3 = 0xd;
            bVar16 = true;
            puVar4 = (uint *)((int)this + 0x1f53);
            puVar13 = local_c;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar16 = (char)*puVar4 == (char)*puVar13;
              puVar4 = (uint *)((int)puVar4 + 1);
              puVar13 = (uint *)((int)puVar13 + 1);
            } while (bVar16);
            if (!bVar16) {
              iVar3 = 6;
              *(uint *)((int)this + 0x1f53) = *local_c;
              *(uint *)((int)this + 0x1f57) = local_c[1];
              *(uint *)((int)this + 0x1f5b) = local_c[2];
              *(char *)((int)this + 0x1f5f) = (char)local_c[3];
              piVar8 = this + 0x7d8;
              do {
                if (*piVar8 != 0) {
                  *(undefined4 *)((int)this + 0x2d) = 5;
                  FUN_006e6080(this,2,*piVar8,(undefined4 *)((int)this + 0x1d));
                }
                piVar8 = piVar8 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              FUN_006b35d0(DAT_008075a8,this[0x7e0]);
            }
            break;
          case 0x22:
            if (((this[0x7e1] != 0) && (*(uint *)((int)this + 0x2121) != *local_c)) &&
               (DAT_00808aab == local_c[1])) {
              local_10 = (uint *)(local_2c - 9);
              if (-1 < (int)local_10) {
                *(undefined4 *)((int)this + 0x2d) = 0x10003;
                FUN_006e6080(this,3,0x100ef,(undefined4 *)((int)this + 0x1d));
                uVar10 = 0;
                *(uint *)((int)this + 0x2121) = *local_c;
                local_11 = (char)puVar4[2];
                iVar3 = this[0x7e1];
                if (0 < *(int *)(iVar3 + 0xc)) {
                  bVar16 = *(int *)(iVar3 + 0xc) != 0;
                  do {
                    if (bVar16) {
                      iVar3 = *(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c);
                    }
                    else {
                      iVar3 = 0;
                    }
                    if ((iVar3 != 0) && (*(byte **)(iVar3 + 0x50) != (byte *)0x0)) {
                      FUN_006ae110(*(byte **)(iVar3 + 0x50));
                    }
                    iVar3 = this[0x7e1];
                    uVar10 = uVar10 + 1;
                    bVar16 = uVar10 < *(uint *)(iVar3 + 0xc);
                  } while ((int)uVar10 < (int)*(uint *)(iVar3 + 0xc));
                }
                iVar3 = this[0x7e1];
                puVar13 = (uint *)(local_2c / 0x60);
                local_34 = puVar13;
                if (*(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 8) < (int)local_10) {
                  iVar3 = FUN_006acf50(*(undefined4 **)(iVar3 + 0x1c),(uint)local_10);
                  *(int *)(this[0x7e1] + 0x1c) = iVar3;
                  *(uint **)(this[0x7e1] + 0x10) = puVar13;
                }
                puVar5 = (undefined4 *)((int)puVar4 + 9);
                puVar14 = *(undefined4 **)(this[0x7e1] + 0x1c);
                for (uVar10 = (uint)local_10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar14 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar14 = puVar14 + 1;
                }
                for (uVar10 = (uint)local_10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined1 *)puVar14 = *(undefined1 *)puVar5;
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                  puVar14 = (undefined4 *)((int)puVar14 + 1);
                }
                uVar10 = 0;
                *(uint **)(this[0x7e1] + 0xc) = local_34;
                iVar3 = this[0x7e1];
                if (0 < *(int *)(iVar3 + 0xc)) {
                  bVar16 = *(int *)(iVar3 + 0xc) != 0;
                  do {
                    if (bVar16) {
                      iVar3 = *(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c);
                    }
                    else {
                      iVar3 = 0;
                    }
                    if (iVar3 != 0) {
                      if ((local_11 == '\x05') || (*(char *)((int)this + 0x1e26) == '\x0f')) {
                        puVar4 = thunk_FUN_0067e0e0(*(int *)((int)this + 7999),
                                                    (uint)*(byte *)(iVar3 + 2),0xffffffff);
                      }
                      else if ((local_11 == '\f') || (*(char *)((int)this + 0x1e26) == '\x10')) {
                        puVar4 = thunk_FUN_0067e200(*(int *)((int)this + 7999),
                                                    (uint)*(byte *)(iVar3 + 2),0xffffffff);
                      }
                      else {
                        puVar4 = thunk_FUN_0067dfd0(*(int *)((int)this + 0x1f43),
                                                    (uint)*(byte *)(iVar3 + 3),DAT_0080995c);
                      }
                      *(uint **)(iVar3 + 0x50) = puVar4;
                    }
                    iVar3 = this[0x7e1];
                    uVar10 = uVar10 + 1;
                    bVar16 = uVar10 < *(uint *)(iVar3 + 0xc);
                  } while ((int)uVar10 < (int)*(uint *)(iVar3 + 0xc));
                }
              }
              if (*(char *)((int)this + 0x1e26) != '\x10') {
                thunk_FUN_005d1380((int)this);
              }
              (**(code **)(*this + 0x2c))();
              thunk_FUN_005c87c0();
            }
            thunk_FUN_005cdb20((uint)(*(char *)((int)this + 0x1e26) == '\x10'));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (*(char *)((int)this + 0x2225) == '\0') {
              *(undefined1 *)((int)this + 0x2225) = 1;
              local_58[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)((int)this + 0x1a5b) + 0x2e6) == 0) goto LAB_005cee1a;
              local_58[2] = this[2];
              local_58[3] = 2;
              thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),0x2522,'\0',
                                 local_58,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          if (local_c != (uint *)0x0) {
            FUN_006ab060(&local_c);
          }
        }
        goto LAB_005cf38c;
      }
      if (iVar3 == -0x4d) {
        *(undefined1 *)((int)this + 0x2225) = 1;
        piVar8 = local_bc;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        iVar3 = *(int *)((int)this + 0x1a5b);
        if (*(int *)(iVar3 + 0x2e6) != 0) {
          local_bc[2] = this[2];
          local_bc[3] = 2;
          local_bc[4] = 0x6947;
          piVar8 = local_bc;
          goto LAB_005ce9b2;
        }
        puVar5 = (undefined4 *)*this;
        local_bc[4] = 0x6947;
        piVar8 = local_bc;
LAB_005cf387:
        (*(code *)*puVar5)(piVar8);
        goto LAB_005cf38c;
      }
      if (iVar3 != 1) goto LAB_005cf38c;
      switch(local_28) {
      case 0x11:
        thunk_FUN_005cff40(this,local_18);
        thunk_FUN_005d0150(this);
        (**(code **)(*this + 0x2c))();
        thunk_FUN_005c87c0();
        local_24 = 0;
        *(int *)((int)this + 0x2121) = *(int *)((int)this + 0x2121) + 1;
        break;
      case 0x1a:
        if (*(char *)((int)local_c + 2) == '\x04') {
          local_90 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
          local_84 = DAT_0080733b;
          local_8e = (*(char *)((int)this + 0x222e) != '\0') + '\x01';
          local_83 = DAT_00807361;
          local_82 = DAT_00808754;
          local_7e = *(undefined4 *)((int)local_c + 0x12);
          local_8d = DAT_008087be;
          local_89 = (*(char *)((int)this + 0x1e26) != '\f') - 1 & DAT_00808750;
          local_76 = *(undefined4 *)((int)this + 0x2121);
          local_7a = DAT_00808aab;
          switch(*(char *)((int)this + 0x1e26)) {
          case '\x04':
            local_85 = 2;
            break;
          case '\x05':
            local_85 = 3;
            break;
          case '\a':
            local_85 = 1;
            break;
          case '\f':
            local_85 = 5;
            break;
          case '\x13':
            if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
              local_85 = 4;
            }
          }
          local_6e = *(undefined4 *)((int)local_c + 0x22);
          puVar5 = (undefined4 *)((int)local_c + 0x22);
          local_72 = *(undefined4 *)((int)local_c + 0x1e);
          FUN_006b6500((int)DAT_00811764,0);
          FUN_00715360(DAT_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          FUN_006b6500((int)DAT_00811764,DAT_0080733c);
          thunk_FUN_005cfcd0(this,local_18,*puVar5);
        }
        break;
      case 0x1d:
        thunk_FUN_005cfe50(local_18);
        break;
      case 0x1f:
        uVar10 = 0x232;
        pcVar18 = (char *)&DAT_00853de0;
        cVar17 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pcVar18 = (char *)((int)this + 0x1f53);
        uVar10 = 0xd;
        cVar17 = ' ';
LAB_005ce59f:
        FUN_00715360(DAT_00811764,local_18,cVar17,pcVar18,uVar10,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != (uint *)0x0) {
          iVar3 = this[0x7e1];
          if ((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= *local_c)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8) * *local_c + *(int *)(iVar3 + 0x1c);
          }
          if (iVar3 != 0) {
            local_10 = local_c + 1;
            uVar10 = *local_10;
            if ((-1 < (int)uVar10) && (((int)uVar10 < 4 || (uVar10 == 7)))) {
              local_24 = 0;
            }
            *(undefined4 *)((int)this + 0x2d) = 0x10003;
            FUN_006e6080(this,3,0x100ef,(undefined4 *)((int)this + 0x1d));
            switch(*local_10) {
            case 0:
              thunk_FUN_005d0a20(this,*puVar4);
              break;
            case 1:
              thunk_FUN_005d0850(this,*puVar4,(char)puVar4[2]);
              break;
            case 2:
              thunk_FUN_005d06c0(this,*puVar4,(char)puVar4[2]);
              break;
            case 3:
              thunk_FUN_005d0ed0(this,local_18,*puVar4,puVar4[2],(char)puVar4[3],
                                 (char *)(puVar4 + 4));
              break;
            case 5:
              thunk_FUN_005d0bb0(this,*puVar4,puVar4[2],puVar4[3]);
              thunk_FUN_005cfe50(0);
              break;
            case 7:
              piVar8 = this + 0x7e3;
              *(char *)(iVar3 + 0x4f) = (char)puVar4[2];
              local_10 = (uint *)0xa;
              *(int *)((int)this + 0x2121) = *(int *)((int)this + 0x2121) + 1;
              do {
                iVar3 = 8;
                do {
                  if (*piVar8 != 0) {
                    *(undefined4 *)((int)this + 0x2d) = 5;
                    FUN_006e6080(this,2,*piVar8,(undefined4 *)((int)this + 0x1d));
                  }
                  piVar8 = piVar8 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                local_10 = (uint *)((int)local_10 + -1);
              } while (local_10 != (uint *)0x0);
              local_10 = (uint *)0x0;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == (uint *)0x0) goto LAB_005cf38c;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (*(char *)((int)this + 0x2243) != '\0')) {
          if ((*(int *)(*(int *)((int)this + 0x1a5b) + 0x69a) == 0) &&
             (thunk_FUN_005de670(*(int *)((int)this + 0x1a5b)),
             *(int *)(*(int *)((int)this + 0x1a5b) + 0x69a) == 0)) {
            *(undefined1 *)((int)this + 0x2243) = 0;
          }
          else {
            iVar3 = *(int *)((int)this + 0x2237);
            bVar16 = false;
            uVar9 = 0;
            local_10 = (uint *)0x0;
            uVar10 = *(uint *)(iVar3 + 0xc);
            if (uVar10 != 0) {
              if (uVar10 == 0) {
                puVar4 = (uint *)0x0;
                goto LAB_005ce8db;
              }
              do {
                puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
LAB_005ce8db:
                if ((puVar4 != (uint *)0x0) && (*puVar4 == local_18)) {
                  thunk_FUN_005d4990((int)puVar4,local_c);
                  bVar16 = true;
                  goto LAB_005ce8fe;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
              bVar16 = false;
            }
LAB_005ce8fe:
            if (!bVar16) {
              local_9c[0] = local_18;
              local_94 = FUN_006aac70(*(int *)(*(int *)((int)this + 0x1a5b) + 0x6a6));
              thunk_FUN_005d4990((int)local_9c,local_c);
              FUN_006ae1c0(*(uint **)((int)this + 0x2237),local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != (uint *)0x0) {
          iVar3 = this[0x7e1];
          if ((iVar3 == 0) || (*(uint *)(iVar3 + 0xc) <= *local_c)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8) * *local_c + *(int *)(iVar3 + 0x1c);
          }
          if ((iVar3 != 0) && (local_c[1] == 3)) {
            local_24 = 0;
            *(undefined4 *)((int)this + 0x2d) = 0x10003;
            FUN_006e6080(this,3,0x100ef,(undefined4 *)((int)this + 0x1d));
            thunk_FUN_005d1100(this,local_18,*puVar4,puVar4[2],(char *)(puVar4 + 4));
          }
        }
        break;
      case 0x2e:
        if ((*(char *)((int)this + 0x222e) != '\0') &&
           (iVar3 = *(int *)((int)this + 0x222f), iVar3 != 0)) {
          uVar10 = *(uint *)(iVar3 + 0xc);
          uVar9 = 0;
          local_1c = 0;
          if (0 < (int)uVar10) {
            bVar16 = uVar10 != 0;
            do {
              if (bVar16) {
                puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
              }
              else {
                puVar4 = (uint *)0x0;
              }
              if ((puVar4 != (uint *)0x0) && (*puVar4 == local_18)) {
                local_1c = uVar9;
                FUN_006b0c70(iVar3,uVar9);
                break;
              }
              uVar9 = uVar9 + 1;
              bVar16 = uVar9 < uVar10;
              local_1c = uVar9;
            } while ((int)uVar9 < (int)uVar10);
          }
          if (*(int *)(*(int *)((int)this + 0x222f) + 0xc) == 0) {
            *(undefined1 *)((int)this + 0x222e) = 0;
            thunk_FUN_005d4850();
            if (DAT_008067a0 != '\0') {
              CFsgsConnection::UpdateGame
                        ((CFsgsConnection *)&DAT_00802a90,6,(char *)((int)this + 0x1a5f));
              CFsgsConnection::StartGame((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != (uint *)0x0) {
        FUN_006ab060(&local_c);
      }
LAB_005cf38c:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      thunk_FUN_005cdf60(local_24);
    }
    if ((*(uint *)((int)this + 0x223b) < *(uint *)(*(int *)((int)this + 0x2237) + 0xc)) &&
       (*(int *)(*(int *)((int)this + 0x1a5b) + 0x69a) != 0)) {
      if (*(int *)((int)this + 0x223f) == 0) {
        *(undefined4 *)((int)this + 0x223f) = *(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x6aa);
      }
      else {
        *(int *)((int)this + 0x223f) = *(int *)((int)this + 0x223f) + -1;
      }
      iVar3 = (**(code **)(*(int *)*DAT_00811764 + 200))
                        ((int *)*DAT_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar3 == 0) && (local_64 < 0x400)) && (*(int *)((int)this + 0x223f) == 0)) {
        iVar3 = *(int *)((int)this + 0x2237);
        if (*(uint *)((int)this + 0x223b) < *(uint *)(iVar3 + 0xc)) {
          local_10 = (uint *)(*(int *)(iVar3 + 8) * *(uint *)((int)this + 0x223b) +
                             *(int *)(iVar3 + 0x1c));
        }
        else {
          local_10 = (uint *)0x0;
        }
        if (local_10 != (uint *)0x0) {
          iVar3 = *(int *)((int)this + 0x1a5b);
          local_68 = local_10[2];
          local_60 = (int *)(local_10 + 2);
          local_1c = 0;
          if (*(uint *)(iVar3 + 0x6a6) != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == *(int *)(iVar3 + 0x6a6) - 1U) {
              uVar10 = *(uint *)(iVar3 + 0x69e) % *(uint *)(iVar3 + 0x6a2);
            }
            else {
              uVar10 = *(uint *)(iVar3 + 0x6a2);
            }
            local_34 = (uint *)(uVar10 + 0x1c);
            local_38 = (uint *)FUN_006aac70((int)local_34);
            puVar4 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = *(uint *)(*(int *)((int)this + 0x1a5b) + 0x6a6);
            local_38[3] = *(uint *)(*(int *)((int)this + 0x1a5b) + 0x69e);
            local_38[4] = *(uint *)(*(int *)((int)this + 0x1a5b) + 0x6ae);
            local_38[5] = *(uint *)(*(int *)((int)this + 0x1a5b) + 0x6b2);
            local_38[6] = *(uint *)(*(int *)((int)this + 0x1a5b) + 0x6a2);
            puVar13 = (uint *)(*(int *)(*(int *)((int)this + 0x1a5b) + 0x6a2) * local_1c +
                              *(int *)(*(int *)((int)this + 0x1a5b) + 0x69a));
            puVar15 = local_38 + 7;
            for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(char *)puVar15 = (char)*puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            FUN_00715360(DAT_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            FUN_006ab060(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar3 = puVar4[1] + -1;
            puVar4[1] = iVar3;
            if (iVar3 == 0) {
              FUN_006ab060(local_60);
              FUN_006b0c70(*(int *)((int)this + 0x2237),*(uint *)((int)this + 0x223b));
            }
          }
LAB_005cf5bf:
          uVar10 = *(int *)((int)this + 0x223b) + 1;
          *(uint *)((int)this + 0x223b) = uVar10;
          if (*(uint *)(*(int *)((int)this + 0x2237) + 0xc) <= uVar10) {
            *(undefined4 *)((int)this + 0x223b) = 0;
          }
        }
      }
    }
  }
  DAT_00858df8 = local_148;
  return 1;
code_r0x005cf49c:
  local_1c = local_1c + 1;
  if (*(uint *)(iVar3 + 0x6a6) <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

