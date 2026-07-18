
int __thiscall FUN_00462180(void *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  int *piVar11;
  undefined3 extraout_var;
  undefined4 *puVar12;
  int iVar13;
  void *pvVar14;
  int iVar15;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint extraout_ECX;
  undefined2 extraout_var_02;
  void *pvVar16;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined2 extraout_var_03;
  undefined2 uVar17;
  undefined4 extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  int *piVar18;
  undefined4 extraout_EDX_00;
  uint uVar19;
  ushort *puVar20;
  bool bVar21;
  int local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined4 local_80;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_74 [2];
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  short local_16;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  undefined2 local_8 [2];
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar12 = (undefined4 *)((int)this + 0x2cc);
    for (iVar15 = 0x17; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar10 >> 0x10) % 0x1f) + 0x1e;
    piVar11 = (int *)thunk_FUN_0042b620((uint)*(byte *)((int)this + 0x33a),
                                        (uint)*(ushort *)((int)this + 0x33f),
                                        *(undefined4 *)((int)this + 0x33b));
    if (((piVar11 != (int *)0x0) && (piVar11 != this)) &&
       ((*(int *)((int)this + 0x6f7) != 9 ||
        ((iVar15 = (**(code **)(*piVar11 + 0x2c))(), iVar15 == 0x3b ||
         (iVar15 = (**(code **)(*piVar11 + 0x2c))(), iVar15 == 0x60)))))) {
      *(int *)((int)this + 0x7f4) = piVar11[6];
      *(int *)((int)this + 0x7f8) = piVar11[0xb];
      *(undefined4 *)((int)this + 0x7fc) = *(undefined4 *)((int)this + 0x33b);
      thunk_FUN_004162b0(piVar11,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802)
                         ,(undefined2 *)((int)this + 0x804));
      *(undefined2 *)((int)this + 0x7f2) = *(undefined2 *)((int)this + 0x341);
      *(undefined4 *)((int)this + 0x7de) = *(undefined4 *)((int)this + 0x336);
      *(undefined4 *)((int)this + 0x82e) = 0;
      *(undefined4 *)((int)this + 0x832) = 0;
      *(undefined4 *)((int)this + 0x836) = 0xffffffff;
      *(undefined4 *)((int)this + 0x83a) = 0;
      uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar10;
      *(uint *)((int)this + 0x818) = (uVar10 >> 0x10) % 0xb + 10;
      *(undefined2 *)((int)this + 0x80a) = 0xffff;
      *(undefined2 *)((int)this + 0x808) = 0xffff;
      *(undefined2 *)((int)this + 0x806) = 0xffff;
      iVar15 = (**(code **)(*piVar11 + 0x2c))();
      if (iVar15 == 0x4d) {
        *(undefined2 *)((int)this + 0x816) = 9;
      }
      else {
        *(undefined2 *)((int)this + 0x816) = 5;
      }
      *(short *)((int)this + 0x814) = *(short *)((int)this + 0x816) * 0xc9;
      goto LAB_00462320;
    }
    goto switchD_00462373_caseD_4;
  }
LAB_00462320:
  if (*(int *)((int)this + 0x6f7) != 9) {
    if (*(int *)((int)this + 0x6f7) != 0x15) {
      iVar15 = *(int *)((int)this + 0x836) + 1;
      *(int *)((int)this + 0x836) = iVar15;
      if ((iVar15 % 5 == 0) && (*(int *)((int)this + 0x82e) == 0)) {
        bVar8 = thunk_FUN_00482db0(this,0);
        switch(CONCAT31(extraout_var,bVar8)) {
        case 0:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          sVar6 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
                ((DAT_007fb242 <= sVar5 || (sVar9 < 0)))) || (DAT_007fb244 <= sVar9)) {
LAB_004625fd:
              iVar15 = 0;
            }
            else {
              iVar15 = *(int *)(DAT_007fb248 + 4 +
                               ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                               (int)sVar6) * 8);
            }
          }
          else {
            if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
                ((sVar5 < 0 || ((DAT_007fb242 <= sVar5 || (sVar9 < 0)))))) ||
               (DAT_007fb244 <= sVar9)) goto LAB_004625fd;
            iVar15 = *(int *)(DAT_007fb248 +
                             ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                             (int)sVar6) * 8);
          }
          local_94 = *(undefined2 *)((int)this + 0x41);
          local_92 = *(undefined2 *)((int)this + 0x43);
          local_90 = *(undefined2 *)((int)this + 0x45);
          local_10 = (int *)0x0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar20 = (ushort *)((int)this + 0x2a8);
            do {
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(local_74,*(undefined4 *)(puVar20 + -1),puVar20[1],
                                           *(short *)((int)this + 0x6c));
              local_8e = *(short *)((int)this + 0x41) + (short)*puVar12;
              local_8c = *(short *)((int)this + 0x43) - (short)((uint)*puVar12 >> 0x10);
              local_8a = *(short *)(puVar12 + 1) + *(short *)((int)this + 0x45);
              local_30 = (uint)*puVar20 << 0x10;
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(&local_c,local_30,0,*(short *)((int)this + 0x6c));
              uVar7 = *puVar12;
              local_2c = *(undefined2 *)(puVar12 + 1);
              local_88 = (short)uVar7 + *(short *)(iVar15 + 0x41);
              local_30._2_2_ = (short)((uint)uVar7 >> 0x10);
              local_86 = *(short *)(iVar15 + 0x43) - local_30._2_2_;
              local_84 = *(undefined2 *)(iVar15 + 0x45);
              local_9c = *(int *)((int)this + 0x24);
              local_7a = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
              if (*(int *)((int)this + 0x7de) == 0) {
                local_98 = *(undefined4 *)((int)this + 0x79a);
              }
              else {
                local_98 = 0xa1;
              }
              local_82 = *(undefined2 *)((int)this + 0x6c);
              local_80 = *(undefined4 *)((int)this + 0x18);
              local_7c = *(undefined2 *)((int)this + 0x32);
              local_30 = uVar7;
              thunk_FUN_00645880(&local_9c);
              *(undefined4 *)((int)this + 0x83a) = 0;
              iVar13 = *(int *)((int)this + 0x7a2) + -1;
              *(int *)((int)this + 0x7a2) = iVar13;
              *(undefined4 *)((int)this + 0x7aa) = 0;
              if ((*(int *)((int)this + 0x7de) == 0) && (iVar13 < 1)) break;
              local_10 = (int *)((int)local_10 + 1);
              puVar20 = puVar20 + 3;
            } while ((int)local_10 < (int)(uint)*(byte *)((int)this + 0x2b2));
          }
          if (*(int *)((int)this + 0x7de) == 1) {
            *(undefined4 *)((int)this + 0x72a) = 0;
          }
          break;
        case 1:
        case 5:
          *(undefined4 *)((int)this + 0x82e) = 2;
          if (((*(short *)((int)this + 0x800) != *(short *)((int)this + 0x806)) ||
              (*(short *)((int)this + 0x802) != *(short *)((int)this + 0x808))) ||
             (*(short *)((int)this + 0x804) != *(short *)((int)this + 0x80a))) {
            thunk_FUN_004602b0(this);
            thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x800),
                               (int)*(short *)((int)this + 0x802),(int)*(short *)((int)this + 0x804)
                              );
            *(undefined2 *)((int)this + 0x806) = *(undefined2 *)((int)this + 0x800);
            *(undefined2 *)((int)this + 0x808) = *(undefined2 *)((int)this + 0x802);
            *(undefined2 *)((int)this + 0x80a) = *(undefined2 *)((int)this + 0x804);
LAB_004624c3:
            iVar15 = thunk_FUN_00460260(this,0);
            if (iVar15 == -1) {
              return -1;
            }
          }
          break;
        case 2:
          return 4;
        case 3:
          *(undefined4 *)((int)this + 0x82e) = 0;
          (**(code **)(*(int *)this + 0x20))();
          break;
        case 4:
          goto switchD_00462373_caseD_4;
        case 6:
        case 7:
        case 8:
          if (*(int *)((int)this + 0x832) == 0) {
            *(undefined4 *)((int)this + 0x832) = 1;
            *(undefined4 *)((int)this + 0x83a) = *(undefined4 *)((int)this + 0x818);
          }
          iVar15 = *(int *)((int)this + 0x83a) + 1;
          *(int *)((int)this + 0x83a) = iVar15;
          if (*(int *)((int)this + 0x818) < iVar15) {
            *(undefined4 *)((int)this + 0x83a) = 0;
            iVar15 = thunk_FUN_00484020(this,CONCAT31(extraout_var,bVar8),(short *)&local_24,
                                        (short *)&local_1c,(short *)&local_20);
            if (iVar15 != 0) {
              *(undefined4 *)((int)this + 0x82e) = 3;
              thunk_FUN_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20
                                );
              goto LAB_004624c3;
            }
            *(short *)((int)this + 0x814) = *(short *)((int)this + 0x814) + -0xc9;
            if (*(short *)((int)this + 0x814) < 100) {
              return 8;
            }
          }
          *(undefined4 *)((int)this + 0x82e) = 0;
          break;
        case 9:
          *(undefined4 *)((int)this + 0x82e) = 1;
          (**(code **)(*(int *)this + 0x20))();
          uVar10 = thunk_FUN_004836c0(this);
          thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),(short)uVar10);
        }
      }
      iVar15 = *(int *)((int)this + 0x82e);
      if (iVar15 == 0) {
        (**(code **)(*(int *)this + 0xd8))();
        return 2;
      }
      if (iVar15 == 1) {
        iVar15 = thunk_FUN_00417830((int)this);
        (**(code **)(*(int *)this + 0xd8))();
        if (iVar15 == 0) {
switchD_004627fb_caseD_0:
          *(undefined4 *)((int)this + 0x836) = 0xffffffff;
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
switchD_004627fb_default:
        return 2;
      }
      if (iVar15 != 2) {
        if (iVar15 != 3) {
switchD_004628af_caseD_ffffffff:
          return -1;
        }
        iVar15 = thunk_FUN_00460260(this,2);
        switch(iVar15) {
        case 0:
        case 1:
          goto switchD_004627fb_caseD_0;
        case -1:
        case 2:
        case 3:
          goto switchD_004627fb_caseD_ffffffff;
        default:
          goto switchD_004627fb_default;
        }
      }
      iVar15 = thunk_FUN_00460260(this,2);
      switch(iVar15) {
      case 0:
      case 1:
        goto switchD_004627fb_caseD_0;
      case -1:
      case 2:
      case 3:
        goto switchD_004627fb_caseD_ffffffff;
      default:
        goto switchD_004627fb_default;
      }
    }
    iVar15 = *(int *)((int)this + 0x82e);
    if (iVar15 == 0) {
      *(undefined4 *)((int)this + 0x82e) = 1;
      if (*(int *)((int)this + 0x7f8) == 1) {
        *(undefined4 *)((int)this + 0xb7) = 3;
      }
      else {
        *(undefined4 *)((int)this + 0xb7) = 1;
      }
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                         (int)*(short *)((int)this + 0x804));
      thunk_FUN_00460260(this,0);
      *(undefined2 *)((int)this + 0xf8) = 0;
      goto LAB_00464889;
    }
    if (iVar15 != 1) {
      if (iVar15 == 2) {
        iVar15 = thunk_FUN_00460260(this,2);
        switch(iVar15) {
        case 0:
          break;
        case 1:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          sVar6 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
               ((-1 < sVar5 && (((sVar5 < DAT_007fb242 && (-1 < sVar9)) && (sVar9 < DAT_007fb244))))
               )) {
              piVar11 = *(int **)(DAT_007fb248 + 4 +
                                 ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                                 (int)sVar6) * 8);
LAB_004644dc:
              if (((piVar11 != (int *)0x0) && (piVar11[6] == *(int *)((int)this + 0x7f4))) &&
                 ((iVar15 = (**(code **)(*piVar11 + 0xf8))(), iVar15 != 0 &&
                  ((piVar11[8] != 0x1ae ||
                   (iVar15 = (**(code **)(*piVar11 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
                   iVar15 != 0)))))) {
switchD_004628af_caseD_2:
                return 2;
              }
            }
          }
          else if ((((-1 < sVar6) && (sVar6 < DAT_007fb240)) && (-1 < sVar5)) &&
                  (((sVar5 < DAT_007fb242 && (-1 < sVar9)) && (sVar9 < DAT_007fb244)))) {
            piVar11 = *(int **)(DAT_007fb248 +
                               ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                               (int)sVar6) * 8);
            goto LAB_004644dc;
          }
          break;
        default:
          goto switchD_004628af_caseD_2;
        case 3:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          psVar1 = (short *)((int)this + 0x804);
          psVar2 = (short *)((int)this + 0x802);
          local_c = (int *)((int)this + 0x800);
          sVar6 = *(short *)local_c;
          local_10 = (int *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if ((((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
                ((-1 < sVar5 && ((sVar5 < DAT_007fb242 && (-1 < sVar9)))))) &&
               (sVar9 < DAT_007fb244)) {
              local_14 = *(int **)(DAT_007fb248 + 4 +
                                  ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                                  (int)sVar6) * 8);
LAB_00464147:
              if ((((local_14 != (int *)0x0) && (local_14[6] == *(int *)((int)this + 0x7f4))) &&
                  (iVar15 = (**(code **)(*local_14 + 0xf8))(), iVar15 != 0)) &&
                 ((local_14[8] != 0x1ae ||
                  (iVar15 = (**(code **)(*local_14 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
                  iVar15 != 0)))) {
                sVar9 = *(short *)((int)this + 0xdf);
                sVar5 = *(short *)((int)this + 0xdb);
                sVar6 = *(short *)((int)this + 0xd7);
                local_10 = (int *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6)
                ;
                if (*(int *)((int)this + 0x7fc) == 3) {
                  if ((((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
                      ((-1 < sVar5 && ((sVar5 < DAT_007fb242 && (-1 < sVar9)))))) &&
                     (sVar9 < DAT_007fb244)) {
                    piVar11 = *(int **)(DAT_007fb248 + 4 +
                                       ((int)sVar9 * (int)DAT_007fb246 +
                                        (int)sVar5 * (int)DAT_007fb240 + (int)sVar6) * 8);
                    goto LAB_00464282;
                  }
                }
                else if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
                        ((-1 < sVar5 &&
                         (((sVar5 < DAT_007fb242 && (-1 < sVar9)) && (sVar9 < DAT_007fb244)))))) {
                  piVar11 = *(int **)(DAT_007fb248 +
                                     ((int)sVar9 * (int)DAT_007fb246 +
                                      (int)sVar5 * (int)DAT_007fb240 + (int)sVar6) * 8);
                  goto LAB_00464282;
                }
                piVar11 = (int *)0x0;
LAB_00464282:
                if (local_14 != piVar11) {
                  thunk_FUN_004162b0(local_14,(undefined2 *)local_c,psVar2,psVar1);
                  thunk_FUN_00481520(this,(int)(short)*local_c,(int)*psVar2,(int)*psVar1);
                  thunk_FUN_00496140((short)*local_c,*psVar2,*psVar1);
                  thunk_FUN_00496140((short)*local_c + 1,*psVar2,*psVar1);
                  thunk_FUN_00496140((short)*local_c,*psVar2 + 1,*psVar1);
                  thunk_FUN_00496140((short)*local_c + 1,*psVar2 + 1,*psVar1);
                  thunk_FUN_00460260(this,0);
                  *(undefined2 *)((int)this + 0xf8) = 0;
                  thunk_FUN_004960d0((short)*local_c,*psVar2,*psVar1);
                  thunk_FUN_004960d0((short)*local_c + 1,*psVar2,*psVar1);
                  thunk_FUN_004960d0((short)*local_c,*psVar2 + 1,*psVar1);
                  thunk_FUN_004960d0((short)*local_c + 1,*psVar2 + 1,*psVar1);
                  return 2;
                }
                *(undefined4 *)((int)this + 0x82e) = 3;
                return 2;
              }
            }
          }
          else if (((-1 < sVar6) && (sVar6 < DAT_007fb240)) &&
                  ((-1 < sVar5 &&
                   (((sVar5 < DAT_007fb242 && (-1 < sVar9)) && (sVar9 < DAT_007fb244)))))) {
            local_14 = *(int **)(DAT_007fb248 +
                                ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                                (int)sVar6) * 8);
            goto LAB_00464147;
          }
          break;
        case -1:
          goto switchD_004628af_caseD_ffffffff;
        }
        goto switchD_00462373_caseD_4;
      }
      if (iVar15 != 3) {
        return -1;
      }
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      sVar6 = *(short *)((int)this + 0x800);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))))) {
LAB_0046461c:
          local_c = (int *)0x0;
        }
        else {
          local_c = *(int **)(DAT_007fb248 + 4 +
                             ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                             (int)sVar6) * 8);
        }
      }
      else {
        if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
           (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))) goto LAB_0046461c;
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                           (int)sVar6) * 8);
      }
      if ((local_c == (int *)0x0) || (local_c[6] != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        if (((iVar15 == -4) || (iVar15 = (**(code **)(*local_c + 0xf8))(), iVar15 == 0)) ||
           ((local_c[8] == 0x1ae &&
            (iVar15 = (**(code **)(*local_c + 0xf4))(*(undefined4 *)((int)this + 0x24)), iVar15 == 0
            )))) {
          puVar12 = *(undefined4 **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
        else {
          thunk_FUN_004162b0(local_c,(undefined2 *)&local_10,(undefined2 *)&local_28,
                             (undefined2 *)&local_14);
          uVar10 = (int)*(short *)((int)this + 0x800) - (int)(short)local_10;
          uVar19 = (int)uVar10 >> 0x1f;
          if ((((int)((uVar10 ^ uVar19) - uVar19) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x802) - (int)(short)local_28,
              uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x804) - (int)(short)local_14,
             uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) {
            *(short *)((int)this + 0x804) = (short)local_14;
            *(short *)((int)this + 0x800) = (short)local_10;
            *(short *)((int)this + 0x802) = (short)local_28;
            goto LAB_0046470b;
          }
          puVar12 = *(undefined4 **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
      }
      else {
LAB_0046470b:
        thunk_FUN_00416270(local_c,(undefined2 *)&local_10,(undefined2 *)&local_28,
                           (undefined2 *)&local_14);
        sVar9 = (**(code **)(*(int *)this + 0x10))
                          (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                           *(undefined2 *)((int)this + 0x45),local_10,local_28,local_14);
        uVar10 = thunk_FUN_004176c0(this,sVar9);
        thunk_FUN_00417910(this,(short)uVar10);
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),(short)local_10,(short)local_28,
                           (short)local_14,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x7a) = 0;
        iVar15 = thunk_FUN_00415ed0(this,&local_30,local_74);
        if (iVar15 == -1) {
          return -1;
        }
        if (iVar15 == 0) {
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
          (*(code *)**(undefined4 **)this)(local_6c);
          local_48 = *(undefined4 *)((int)this + 0x6f7);
          local_44 = *(undefined4 *)((int)this + 0x24);
          local_40 = *(undefined2 *)((int)this + 0x32);
          local_3e = *(undefined2 *)((int)this + 0x18);
        }
        else {
          if ((iVar15 != 1) ||
             (iVar15 = (**(code **)(*local_c + 0xdc))
                                 (*(undefined2 *)((int)this + 0x41),
                                  *(undefined2 *)((int)this + 0x43),
                                  *(undefined2 *)((int)this + 0x45),
                                  *(undefined2 *)((int)this + 0x34),
                                  *(undefined2 *)((int)this + 0x36),
                                  *(undefined2 *)((int)this + 0x38)), iVar15 < 0))
          goto LAB_00464889;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
          (*(code *)**(undefined4 **)this)(local_6c);
          local_48 = *(undefined4 *)((int)this + 0x6f7);
          local_44 = *(undefined4 *)((int)this + 0x24);
          local_40 = *(undefined2 *)((int)this + 0x32);
          local_3e = *(undefined2 *)((int)this + 0x18);
        }
        local_4c = 600;
        puVar12 = (undefined4 *)*local_c;
      }
      local_38 = 1;
      (*(code *)*puVar12)(local_6c);
LAB_00464889:
      iVar15 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
    }
    iVar15 = thunk_FUN_00460260(this,2);
    switch(iVar15) {
    case 0:
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      psVar2 = (short *)((int)this + 0x802);
      local_c = (int *)((int)this + 0x800);
      sVar6 = *(short *)local_c;
      local_10 = (int *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))))) {
LAB_00463d56:
          local_14 = (int *)0x0;
        }
        else {
          local_14 = *(int **)(DAT_007fb248 + 4 +
                              ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                              (int)sVar6) * 8);
        }
      }
      else {
        if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
            ((DAT_007fb242 <= sVar5 || (sVar9 < 0)))) || (DAT_007fb244 <= sVar9)) goto LAB_00463d56;
        local_14 = *(int **)(DAT_007fb248 +
                            ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                            (int)sVar6) * 8);
      }
      if ((local_14 == (int *)0x0) || (local_14[6] != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),&local_14);
        if (((iVar15 != -4) && (iVar15 = (**(code **)(*local_14 + 0xf8))(), iVar15 != 0)) &&
           ((local_14[8] != 0x1ae ||
            (iVar15 = (**(code **)(*local_14 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
            iVar15 != 0)))) {
          thunk_FUN_004162b0(local_14,(undefined2 *)local_c,psVar2,psVar1);
          sVar9 = *psVar1;
          sVar5 = *psVar2;
          iVar15 = (int)(short)*local_c;
          goto LAB_00463fd6;
        }
      }
      else {
        iVar15 = (**(code **)(*local_14 + 0xf8))();
        if ((iVar15 != 0) &&
           ((local_14[8] != 0x1ae ||
            (iVar15 = (**(code **)(*local_14 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
            iVar15 != 0)))) {
          if (*(int *)((int)this + 0x7f8) != 0) {
            *(undefined4 *)((int)this + 0x82e) = 2;
            *(undefined4 *)((int)this + 0xb7) = 0;
            thunk_FUN_004162b0(local_14,(undefined2 *)local_c,psVar2,psVar1);
            thunk_FUN_00481520(this,(int)(short)*local_c,(int)*psVar2,(int)*psVar1);
            thunk_FUN_00496140((short)*local_c,*psVar2,*psVar1);
            thunk_FUN_00496140((short)*local_c + 1,*psVar2,*psVar1);
            thunk_FUN_00496140((short)*local_c,*psVar2 + 1,*psVar1);
            thunk_FUN_00496140((short)*local_c + 1,*psVar2 + 1,*psVar1);
            thunk_FUN_00460260(this,0);
            *(undefined2 *)((int)this + 0xf8) = 0;
            thunk_FUN_004960d0((short)*local_c,*psVar2,*psVar1);
            thunk_FUN_004960d0((short)*local_c + 1,*psVar2,*psVar1);
            thunk_FUN_004960d0((short)*local_c,*psVar2 + 1,*psVar1);
            thunk_FUN_004960d0((short)*local_c + 1,*psVar2 + 1,*psVar1);
            return 2;
          }
          iVar15 = (int)(short)*local_c;
          uVar10 = *(short *)((int)this + 0x47) - iVar15;
          uVar19 = (int)uVar10 >> 0x1f;
          if ((((int)((uVar10 ^ uVar19) - uVar19) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x49) - (int)*psVar2,
              uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x4b) - (int)*psVar1,
             uVar19 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar19) - uVar19) < 2)) {
            *(undefined4 *)((int)this + 0x82e) = 3;
            return 2;
          }
          sVar9 = *psVar1;
          sVar5 = *psVar2;
LAB_00463fd6:
          thunk_FUN_00481520(this,iVar15,(int)sVar5,(int)sVar9);
          thunk_FUN_00460260(this,0);
          *(undefined2 *)((int)this + 0xf8) = 0;
switchD_004638e6_caseD_2:
          return 2;
        }
      }
      break;
    case 1:
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      sVar6 = *(short *)((int)this + 0x800);
      local_10 = (int *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))))) {
LAB_00463b9d:
          local_c = (int *)0x0;
        }
        else {
          local_c = *(int **)(DAT_007fb248 + 4 +
                             ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                             (int)sVar6) * 8);
        }
      }
      else {
        if ((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
           (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))) goto LAB_00463b9d;
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                           (int)sVar6) * 8);
      }
      if ((local_c != (int *)0x0) && (local_c[6] == *(int *)((int)this + 0x7f4))) {
        iVar15 = (**(code **)(*local_c + 0xf8))();
        if (iVar15 != 0) {
          if (local_c[8] != 0x1ae) {
            return 2;
          }
          iVar15 = (**(code **)(*local_c + 0xf4))(*(undefined4 *)((int)this + 0x24));
          if (iVar15 != 0) {
            return 2;
          }
        }
        thunk_FUN_004602b0(this);
        return 0;
      }
      thunk_FUN_004602b0(this);
      iVar15 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
      if ((iVar15 != -4) && (iVar15 = (**(code **)(*local_c + 0xf8))(), iVar15 != 0)) {
        if (local_c[8] == 0x1ae) {
          iVar15 = (**(code **)(*local_c + 0xf4))(*(undefined4 *)((int)this + 0x24));
joined_r0x00463a7a:
          if (iVar15 == 0) break;
        }
LAB_00463a83:
        thunk_FUN_004162b0(local_c,(undefined2 *)((int)this + 0x800),
                           (undefined2 *)((int)this + 0x802),(undefined2 *)((int)this + 0x804));
LAB_00463a91:
        sVar9 = *(short *)((int)this + 0x804);
        sVar5 = *(short *)((int)this + 0x802);
        iVar15 = (int)*(short *)((int)this + 0x800);
        goto LAB_00463fd6;
      }
      break;
    default:
      goto switchD_004638e6_caseD_2;
    case 3:
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      sVar6 = *(short *)((int)this + 0x800);
      local_10 = (int *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((DAT_007fb242 <= sVar5 || (sVar9 < 0)) || (DAT_007fb244 <= sVar9)))))) {
LAB_004639e6:
          local_c = (int *)0x0;
        }
        else {
          local_c = *(int **)(DAT_007fb248 + 4 +
                             ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                             (int)sVar6) * 8);
        }
      }
      else {
        if (((((sVar6 < 0) || (DAT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
            ((DAT_007fb242 <= sVar5 || (sVar9 < 0)))) || (DAT_007fb244 <= sVar9)) goto LAB_004639e6;
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                           (int)sVar6) * 8);
      }
      if ((local_c == (int *)0x0) || (local_c[6] != *(int *)((int)this + 0x7f4))) {
        iVar15 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        if ((iVar15 != -4) && (iVar15 = (**(code **)(*local_c + 0xf8))(), iVar15 != 0)) {
          if (local_c[8] == 0x1ae) {
            iVar15 = (**(code **)(*local_c + 0xf4))(*(undefined4 *)((int)this + 0x24));
            goto joined_r0x00463a7a;
          }
          goto LAB_00463a83;
        }
      }
      else {
        iVar15 = (**(code **)(*local_c + 0xf8))();
        if ((iVar15 != 0) &&
           ((local_c[8] != 0x1ae ||
            (iVar15 = (**(code **)(*local_c + 0xf4))(*(undefined4 *)((int)this + 0x24)), iVar15 != 0
            )))) goto LAB_00463a91;
      }
      break;
    case -1:
      goto switchD_004628af_caseD_ffffffff;
    }
    goto switchD_00462373_caseD_4;
  }
  iVar15 = *(int *)((int)this + 0x82e);
  if (iVar15 == 0) {
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                       (int)*(short *)((int)this + 0x804));
    thunk_FUN_00460260(this,0);
    goto LAB_00464889;
  }
  if (iVar15 != 1) {
    if (iVar15 != 2) {
      if (iVar15 != 3) {
        return -1;
      }
      iVar15 = thunk_FUN_00415ed0(this,local_74,&local_10);
      if (iVar15 == -1) {
        return -1;
      }
      if (iVar15 == 0) {
        local_58 = &local_4c;
        local_4c = 10000;
        local_44 = 0xff;
        local_38 = 1;
        local_5c = 0x110;
        (*(code *)**(undefined4 **)this)(local_6c);
        (**(code **)(*(int *)this + 0x90))(3,0x101);
      }
      else if (iVar15 == 1) {
        sVar9 = *(short *)((int)this + 0x800);
        sVar5 = *(short *)((int)this + 0x804);
        sVar6 = *(short *)((int)this + 0x802);
        if ((((-1 < sVar9) && (sVar9 < DAT_007fb240)) &&
            ((-1 < sVar6 && ((sVar6 < DAT_007fb242 && (-1 < sVar5)))))) && (sVar5 < DAT_007fb244)) {
          iVar15 = (int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 + (int)sVar9;
          piVar11 = *(int **)(DAT_007fb248 + iVar15 * 8);
          if (piVar11 != (int *)0x0) {
            sVar9 = sVar9 >> 0xf;
            uVar17 = (undefined2)((uint)iVar15 >> 0x10);
            iVar15 = (**(code **)(*piVar11 + 0xdc))
                               (CONCAT22(uVar17,*(undefined2 *)((int)this + 0x41)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x43)),
                                CONCAT22(uVar17,*(undefined2 *)((int)this + 0x45)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x34)),
                                CONCAT22(uVar17,*(undefined2 *)((int)this + 0x36)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x38)));
            if (-1 < iVar15) {
              iVar15 = thunk_FUN_004d8870((char)piVar11[9]);
              if (200 < iVar15) {
                iVar15 = 200;
              }
              thunk_FUN_004d8800((char)piVar11[9],iVar15);
              thunk_FUN_004d87b0(*(char *)((int)this + 0x24),iVar15);
              iVar15 = thunk_FUN_004d89b0((char)piVar11[9]);
              if (100 < iVar15) {
                iVar15 = 100;
              }
              thunk_FUN_004d8940((char)piVar11[9],iVar15);
              thunk_FUN_004d88f0(*(char *)((int)this + 0x24),iVar15);
              iVar15 = thunk_FUN_004d8af0((char)piVar11[9]);
              if (0x5dc < iVar15) {
                iVar15 = 0x5dc;
              }
              thunk_FUN_004d8a80((char)piVar11[9],iVar15);
              thunk_FUN_004d8a30(*(char *)((int)this + 0x24),iVar15);
              thunk_FUN_004d78e0((char)piVar11[9]);
              thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
              if (((uint)DAT_0080874d == piVar11[9]) ||
                 ((uint)DAT_0080874d == *(uint *)((int)this + 0x24))) {
                thunk_FUN_004d8b70(DAT_0080874d);
              }
              local_58 = &local_4c;
              local_4c = 10000;
              local_44 = 0xff;
              local_38 = 1;
              local_5c = 0x110;
              (*(code *)**(undefined4 **)this)(local_6c);
              thunk_FUN_004ab880(8,DAT_00806774,(byte *)s_expdstrwd_007aa144,0x1d);
              if (DAT_00811798 != (void *)0x0) {
                thunk_FUN_004162f0(piVar11,(undefined2 *)((int)&local_14 + 2),
                                   (undefined2 *)((int)&local_28 + 2),local_8);
                (**(code **)(*piVar11 + 0x2c))();
                thunk_FUN_00620a00(DAT_00811798,(int)local_14._2_2_,(int)local_28._2_2_,piVar11[9]);
                iVar15 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
              }
            }
            goto LAB_00463844;
          }
        }
        local_58 = &local_4c;
        local_4c = 10000;
        local_44 = 0xff;
        local_38 = 1;
        local_5c = 0x110;
        (*(code *)**(undefined4 **)this)(local_6c);
        iVar15 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
      }
LAB_00463844:
      iVar15 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar15 != 0) & 0xfffffffd) + 2;
    }
    iVar15 = thunk_FUN_00460260(this,2);
    switch(iVar15 + 1) {
    case 0:
      goto switchD_004628af_caseD_ffffffff;
    case 1:
      local_58 = &local_4c;
      local_4c = 10000;
      local_44 = 0xff;
      local_38 = 1;
      local_5c = 0x110;
      (*(code *)**(undefined4 **)this)(local_6c);
      return 2;
    case 2:
      goto switchD_00462e6c_caseD_2;
    default:
      return 2;
    case 4:
      sVar9 = *(short *)((int)this + 0x800);
      uVar10 = CONCAT22((short)((uint)(iVar15 + 1) >> 0x10),sVar9);
      sVar5 = *(short *)((int)this + 0x804);
      pvVar16 = (void *)CONCAT22(extraout_var_02,sVar5);
      sVar6 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      if (((((-1 < sVar9) && (sVar9 < DAT_007fb240)) && (-1 < sVar6)) &&
          ((sVar6 < DAT_007fb242 && (-1 < sVar5)))) && (sVar5 < DAT_007fb244)) {
        pvVar16 = (void *)((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                          (int)sVar9);
        piVar11 = *(int **)(DAT_007fb248 + (int)pvVar16 * 8);
        uVar10 = (int)sVar9;
        local_14 = piVar11;
        if (((piVar11 != (int *)0x0) && (uVar19 = piVar11[9], uVar10 = uVar19, uVar19 < 8)) &&
           ((DAT_00802a38 == (void *)0x0 ||
            (uVar10 = uVar19 * 9, pvVar16 = DAT_00802a38, (byte)(&DAT_008087e9)[uVar19 * 0x51] < 8))
           )) {
          bVar8 = *(byte *)(piVar11 + 9);
          bVar3 = *(byte *)((int)this + 0x24);
          local_10 = (int *)CONCAT31(local_10._1_3_,bVar8);
          local_c = (int *)CONCAT31(local_c._1_3_,bVar3);
          if (DAT_00808a8f == '\0') {
            if (bVar8 == bVar3) {
LAB_00462fde:
              iVar15 = 0;
            }
            else {
              uVar10 = (uint)bVar8;
              uVar19 = (uint)bVar3;
              cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19);
              if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0'))
              {
                iVar15 = -2;
              }
              else if ((cVar4 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0')) {
                iVar15 = -1;
              }
              else if ((cVar4 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\x01')) {
                iVar15 = 1;
              }
              else {
                if ((cVar4 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) != '\x01'))
                goto LAB_00462fde;
                iVar15 = 2;
              }
            }
            pvVar14 = (void *)(uint)(iVar15 < 0);
            pvVar16 = pvVar14;
          }
          else {
            pvVar14 = (void *)(uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] !=
                                    (&DAT_008087ea)[(uint)bVar8 * 0x51]);
            pvVar16 = (void *)CONCAT31((int3)((uint)bVar3 * 9 >> 8),
                                       (&DAT_008087ea)[(uint)bVar3 * 0x51]);
          }
          uVar10 = 0;
          if ((pvVar14 != (void *)0x0) &&
             ((uVar10 = (**(code **)(*piVar11 + 0x2c))(), pvVar16 = extraout_ECX_00,
              uVar17 = extraout_var_04, uVar10 == 0x3b ||
              (uVar10 = (**(code **)(*piVar11 + 0x2c))(), pvVar16 = extraout_ECX_01,
              uVar17 = extraout_var_05, uVar10 == 0x60)))) {
            sVar9 = *(short *)((int)this + 0xd7);
            local_24 = CONCAT22((short)(uVar10 >> 0x10),sVar9);
            sVar5 = *(short *)((int)this + 0xdb);
            local_1c = CONCAT22((short)((uint)pvVar16 >> 0x10),sVar5);
            sVar6 = *(short *)((int)this + 0xdf);
            local_20 = CONCAT22(uVar17,sVar6);
            if ((sVar9 < 0) ||
               ((((DAT_007fb240 <= sVar9 || (sVar5 < 0)) || (DAT_007fb242 <= sVar5)) ||
                ((sVar6 < 0 || (DAT_007fb244 <= sVar6)))))) {
              piVar18 = (int *)0x0;
            }
            else {
              piVar18 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar5 +
                                 (int)sVar9) * 8);
              piVar11 = local_14;
            }
            if (piVar11 != piVar18) {
              psVar2 = (short *)((int)this + 0x802);
              local_c = (int *)((int)this + 0x800);
              thunk_FUN_004162b0(local_14,(undefined2 *)local_c,psVar2,psVar1);
              thunk_FUN_00481520(this,(int)(short)*local_c,(int)*psVar2,(int)*psVar1);
              thunk_FUN_00496140((short)*local_c,*psVar2,*psVar1);
              thunk_FUN_00496140((short)*local_c + 1,*psVar2,*psVar1);
              thunk_FUN_00496140((short)*local_c,*psVar2 + 1,*psVar1);
              thunk_FUN_00496140((short)*local_c + 1,*psVar2 + 1,*psVar1);
              thunk_FUN_00460260(this,0);
              *(undefined2 *)((int)this + 0xf8) = 0;
              thunk_FUN_004960d0((short)*local_c,*psVar2,*psVar1);
              thunk_FUN_004960d0((short)*local_c + 1,*psVar2,*psVar1);
              thunk_FUN_004960d0((short)*local_c,*psVar2 + 1,*psVar1);
              thunk_FUN_004960d0((short)*local_c + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
            *(undefined4 *)((int)this + 0x82e) = 3;
            thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                               *(short *)((int)this + 0x45),(short)(local_24 * 0xc9 + 100),
                               sVar5 * 0xc9 + 100,sVar6 * 200 + 100,*(byte *)((int)this + 0x61));
            *(undefined4 *)((int)this + 0x7a) = 0;
            return 2;
          }
        }
      }
      thunk_FUN_0042b760(CONCAT31((int3)((uint)pvVar16 >> 8),*(undefined1 *)((int)this + 0x24)),
                         CONCAT22((short)(uVar10 >> 0x10),*(undefined2 *)((int)this + 0x30)));
      thunk_FUN_004a8340(CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)
                                 ),(undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                         (short *)&local_1c,(short *)&local_20);
      if (local_16 != -1) {
        *psVar1 = (short)local_20;
        *(short *)((int)this + 0x802) = (short)local_1c;
        *(undefined4 *)((int)this + 0x82e) = 1;
        *(undefined4 *)((int)this + 0xb7) = 3;
        *(short *)((int)this + 0x800) = (short)local_24;
        thunk_FUN_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
        thunk_FUN_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        return 2;
      }
      goto switchD_00462373_caseD_4;
    }
  }
  iVar15 = thunk_FUN_00460260(this,2);
  switch(iVar15) {
  case 0:
    sVar9 = *(short *)((int)this + 0x804);
    uVar10 = CONCAT22(extraout_var_00,sVar9);
    sVar5 = *(short *)((int)this + 0x802);
    local_c = (int *)((int)this + 0x800);
    psVar1 = (short *)((int)this + 0x804);
    psVar2 = (short *)((int)this + 0x802);
    sVar6 = *(short *)local_c;
    local_10 = (int *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
    piVar11 = local_10;
    if (((((-1 < sVar6) && (sVar6 < DAT_007fb240)) && (-1 < sVar5)) &&
        (((sVar5 < DAT_007fb242 && (-1 < sVar9)) &&
         ((sVar9 < DAT_007fb244 &&
          ((local_14 = *(int **)(DAT_007fb248 +
                                ((int)sVar9 * (int)DAT_007fb246 + (int)sVar5 * (int)DAT_007fb240 +
                                (int)sVar6) * 8), piVar11 = local_14, uVar10 = DAT_007fb248,
           local_14 != (int *)0x0 && (uVar19 = local_14[9], uVar10 = uVar19, uVar19 < 8)))))))) &&
       ((DAT_00802a38 == (void *)0x0 ||
        (uVar10 = uVar19 * 9, (byte)(&DAT_008087e9)[uVar19 * 0x51] < 8)))) {
      bVar8 = *(byte *)(local_14 + 9);
      bVar3 = *(byte *)((int)this + 0x24);
      uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar3);
      local_10._1_3_ = (undefined3)((uint)local_10 >> 8);
      local_10 = (int *)CONCAT31(local_10._1_3_,bVar8);
      local_28 = CONCAT31(local_28._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar8 == bVar3) {
LAB_00462c49:
          iVar15 = 0;
        }
        else {
          uVar19 = (uint)bVar8;
          uVar10 = (uint)bVar3;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19) == '\0')) {
            iVar15 = -2;
          }
          else if ((cVar4 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19) == '\0')) {
            iVar15 = -1;
          }
          else if ((cVar4 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19) == '\x01')) {
            iVar15 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19) != '\x01')
               ) goto LAB_00462c49;
            iVar15 = 2;
          }
        }
        uVar19 = (uint)(iVar15 < 0);
      }
      else {
        uVar19 = (uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51]);
        uVar10 = uVar19;
      }
      piVar11 = (int *)0x0;
      if ((uVar19 != 0) &&
         ((iVar15 = (**(code **)(*local_14 + 0x2c))(), iVar15 == 0x3b ||
          (piVar11 = (int *)(**(code **)(*local_14 + 0x2c))(), uVar10 = extraout_ECX,
          piVar11 == (int *)0x60)))) {
        *(undefined4 *)((int)this + 0x82e) = 2;
        *(undefined4 *)((int)this + 0xb7) = 0;
        thunk_FUN_004162b0(local_14,(undefined2 *)local_c,psVar2,psVar1);
        thunk_FUN_00481520(this,(int)(short)*local_c,(int)*psVar2,(int)*psVar1);
        thunk_FUN_00496140((short)*local_c,*psVar2,*psVar1);
        thunk_FUN_00496140((short)*local_c + 1,*psVar2,*psVar1);
        thunk_FUN_00496140((short)*local_c,*psVar2 + 1,*psVar1);
        thunk_FUN_00496140((short)*local_c + 1,*psVar2 + 1,*psVar1);
        thunk_FUN_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        thunk_FUN_004960d0((short)*local_c,*psVar2,*psVar1);
        thunk_FUN_004960d0((short)*local_c + 1,*psVar2,*psVar1);
        thunk_FUN_004960d0((short)*local_c,*psVar2 + 1,*psVar1);
        thunk_FUN_004960d0((short)*local_c + 1,*psVar2 + 1,*psVar1);
        return 2;
      }
    }
    thunk_FUN_0042b760(CONCAT31((int3)(uVar10 >> 8),*(undefined1 *)((int)this + 0x24)),
                       CONCAT22((short)((uint)piVar11 >> 0x10),*(undefined2 *)((int)this + 0x30)));
    thunk_FUN_004a8340(CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
                       (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                       (short *)&local_1c,(short *)&local_20);
    if (local_16 != -1) {
      *(short *)local_c = (short)local_24;
      *psVar2 = (short)local_1c;
      *psVar1 = (short)local_20;
LAB_00462e32:
      thunk_FUN_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
      thunk_FUN_00460260(this,0);
      return 2;
    }
    break;
  case 1:
    sVar9 = *(short *)((int)this + 0x800);
    sVar5 = *(short *)((int)this + 0x804);
    sVar6 = *(short *)((int)this + 0x802);
    if ((((((-1 < sVar9) && (sVar9 < DAT_007fb240)) && (-1 < sVar6)) &&
         ((sVar6 < DAT_007fb242 && (-1 < sVar5)))) && (sVar5 < DAT_007fb244)) &&
       (((piVar11 = *(int **)(DAT_007fb248 +
                             ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                             (int)sVar9) * 8), piVar11 != (int *)0x0 && ((uint)piVar11[9] < 8)) &&
        ((DAT_00802a38 == (void *)0x0 || ((byte)(&DAT_008087e9)[piVar11[9] * 0x51] < 8)))))) {
      bVar8 = *(byte *)(piVar11 + 9);
      bVar3 = *(byte *)((int)this + 0x24);
      local_10 = (int *)CONCAT31(local_10._1_3_,bVar8);
      local_c = (int *)CONCAT31(local_c._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar8 == bVar3) {
LAB_00462a36:
          iVar15 = 0;
        }
        else {
          uVar10 = (uint)bVar8;
          uVar19 = (uint)bVar3;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0')) {
            iVar15 = -2;
          }
          else if ((cVar4 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0')) {
            iVar15 = -1;
          }
          else if ((cVar4 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\x01')) {
            iVar15 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) != '\x01')
               ) goto LAB_00462a36;
            iVar15 = 2;
          }
        }
        bVar21 = iVar15 < 0;
      }
      else {
        bVar21 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51];
      }
      if (bVar21) {
        iVar15 = (**(code **)(*piVar11 + 0x2c))();
        if (iVar15 == 0x3b) {
          return 2;
        }
        iVar15 = (**(code **)(*piVar11 + 0x2c))();
        if (iVar15 == 0x60) {
          return 2;
        }
      }
    }
    thunk_FUN_004602b0(this);
    thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)this + 0x24)),
                       CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x30)));
    thunk_FUN_004a8340(CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
                       (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                       (short *)&local_1c,(short *)&local_20);
    if (local_16 != -1) {
      *(short *)((int)this + 0x800) = (short)local_24;
      *(short *)((int)this + 0x802) = (short)local_1c;
      *(short *)((int)this + 0x804) = (short)local_20;
      goto LAB_00462e32;
    }
    break;
  default:
    goto switchD_004628af_caseD_2;
  case 3:
    local_20._0_2_ = *(short *)((int)this + 0x804);
    local_1c._0_2_ = *(short *)((int)this + 0x802);
    local_24._0_2_ = *(short *)((int)this + 0x800);
    goto LAB_00462e32;
  case -1:
    goto switchD_004628af_caseD_ffffffff;
  }
  goto LAB_00463510;
switchD_00462e6c_caseD_2:
  sVar9 = *(short *)((int)this + 0x800);
  sVar5 = *(short *)((int)this + 0x804);
  sVar6 = *(short *)((int)this + 0x802);
  if ((((-1 < sVar9) && (sVar9 < DAT_007fb240)) &&
      ((-1 < sVar6 && (((sVar6 < DAT_007fb242 && (-1 < sVar5)) && (sVar5 < DAT_007fb244)))))) &&
     (((piVar11 = *(int **)(DAT_007fb248 +
                           ((int)sVar5 * (int)DAT_007fb246 + (int)sVar6 * (int)DAT_007fb240 +
                           (int)sVar9) * 8), piVar11 != (int *)0x0 && ((uint)piVar11[9] < 8)) &&
      ((DAT_00802a38 == (void *)0x0 || ((byte)(&DAT_008087e9)[piVar11[9] * 0x51] < 8)))))) {
    bVar8 = *(byte *)(piVar11 + 9);
    bVar3 = *(byte *)((int)this + 0x24);
    local_10 = (int *)CONCAT31(local_10._1_3_,bVar8);
    local_c = (int *)CONCAT31(local_c._1_3_,bVar3);
    if (DAT_00808a8f == '\0') {
      if (bVar8 == bVar3) {
LAB_00463442:
        iVar15 = 0;
      }
      else {
        uVar10 = (uint)bVar8;
        uVar19 = (uint)bVar3;
        cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar19);
        if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0')) {
          iVar15 = -2;
        }
        else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\0'))
        {
          iVar15 = -1;
        }
        else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) == '\x01'))
        {
          iVar15 = 1;
        }
        else {
          if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar19 * 8 + uVar10) != '\x01'))
          goto LAB_00463442;
          iVar15 = 2;
        }
      }
      bVar21 = iVar15 < 0;
    }
    else {
      bVar21 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51];
    }
    if (bVar21) {
      iVar15 = (**(code **)(*piVar11 + 0x2c))();
      if (iVar15 == 0x3b) {
        return 2;
      }
      iVar15 = (**(code **)(*piVar11 + 0x2c))();
      if (iVar15 == 0x60) {
        return 2;
      }
    }
  }
  thunk_FUN_004602b0(this);
  thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),*(undefined1 *)((int)this + 0x24)),
                     CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x30)));
  thunk_FUN_004a8340(CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
                     (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                     (short *)&local_1c,(short *)&local_20);
  if (local_16 != -1) {
    *(short *)((int)this + 0x804) = (short)local_20;
    *(short *)((int)this + 0x802) = (short)local_1c;
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    *(short *)((int)this + 0x800) = (short)local_24;
    thunk_FUN_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
    thunk_FUN_00460260(this,0);
    return 2;
  }
LAB_00463510:
  *(undefined4 *)((int)this + 0xb7) = 0;
switchD_00462373_caseD_4:
  iVar15 = 0;
switchD_004627fb_caseD_ffffffff:
  return iVar15;
}

