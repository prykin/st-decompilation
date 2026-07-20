
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
  STFishC *pSVar11;
  undefined3 extraout_var;
  undefined4 *puVar12;
  int iVar13;
  STGroupBoatC *pSVar14;
  void *pvVar15;
  int iVar16;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint extraout_ECX;
  undefined2 extraout_var_02;
  void *pvVar17;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined2 extraout_var_03;
  undefined2 uVar18;
  undefined4 extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  STFishC *pSVar19;
  undefined4 extraout_EDX_00;
  uint uVar20;
  STFishCVTable *pSVar21;
  ushort *puVar22;
  int *piVar23;
  bool bVar24;
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
  int local_74 [2];
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
  STFishC *local_10;
  STFishC *local_c;
  undefined2 local_8 [2];
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar12 = (undefined4 *)((int)this + 0x2cc);
    for (iVar16 = 0x17; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar10 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar10;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar10 >> 0x10) % 0x1f) + 0x1e;
    pSVar11 = (STFishC *)
              STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,(uint)*(byte *)((int)this + 0x33a),
                         (uint)*(ushort *)((int)this + 0x33f),
                         *(STAllPlayersC_GetObjPtr_param_3Enum *)((int)this + 0x33b));
    if (((pSVar11 != (STFishC *)0x0) && (pSVar11 != this)) &&
       ((*(int *)((int)this + 0x6f7) != 9 ||
        ((iVar16 = (*pSVar11->vtable->slot_2C)(), iVar16 == 0x3b ||
         (iVar16 = (*pSVar11->vtable->slot_2C)(), iVar16 == 0x60)))))) {
      *(undefined4 *)((int)this + 0x7f4) = pSVar11->field_0018;
      *(undefined4 *)((int)this + 0x7f8) = *(undefined4 *)&pSVar11->field_0x2c;
      *(undefined4 *)((int)this + 0x7fc) = *(undefined4 *)((int)this + 0x33b);
      STFishC::sub_004162B0
                (pSVar11,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802),
                 (undefined2 *)((int)this + 0x804));
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
      iVar16 = (*pSVar11->vtable->slot_2C)();
      if (iVar16 == 0x4d) {
        *(undefined2 *)((int)this + 0x816) = 9;
      }
      else {
        *(undefined2 *)((int)this + 0x816) = 5;
      }
      *(short *)((int)this + 0x814) = *(short *)((int)this + 0x816) * 0xc9;
      goto LAB_00462320;
    }
    goto cf_common_exit_0046351A;
  }
LAB_00462320:
  if (*(int *)((int)this + 0x6f7) != 9) {
    if (*(int *)((int)this + 0x6f7) != 0x15) {
      iVar16 = *(int *)((int)this + 0x836) + 1;
      *(int *)((int)this + 0x836) = iVar16;
      if ((iVar16 % 5 == 0) && (*(int *)((int)this + 0x82e) == 0)) {
        bVar8 = thunk_FUN_00482db0(this,0);
        switch(CONCAT31(extraout_var,bVar8)) {
        case 0:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          sVar6 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
                ((SHORT_007fb242 <= sVar5 || (sVar9 < 0)))) || (SHORT_007fb244 <= sVar9)) {
LAB_004625fd:
              iVar16 = 0;
            }
            else {
              iVar16 = *(int *)(DAT_007fb248 + 4 +
                               ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240
                               + (int)sVar6) * 8);
            }
          }
          else {
            if ((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) ||
                ((sVar5 < 0 || ((SHORT_007fb242 <= sVar5 || (sVar9 < 0)))))) ||
               (SHORT_007fb244 <= sVar9)) goto LAB_004625fd;
            iVar16 = *(int *)(DAT_007fb248 +
                             ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                             (int)sVar6) * 8);
          }
          local_94 = *(undefined2 *)((int)this + 0x41);
          local_92 = *(undefined2 *)((int)this + 0x43);
          local_90 = *(undefined2 *)((int)this + 0x45);
          local_10 = (STFishC *)0x0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar22 = (ushort *)((int)this + 0x2a8);
            do {
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(local_74,*(undefined4 *)(puVar22 + -1),puVar22[1],
                                           *(short *)((int)this + 0x6c));
              local_8e = *(short *)((int)this + 0x41) + (short)*puVar12;
              local_8c = *(short *)((int)this + 0x43) - (short)((uint)*puVar12 >> 0x10);
              local_8a = *(short *)(puVar12 + 1) + *(short *)((int)this + 0x45);
              local_30 = (uint)*puVar22 << 0x10;
              puVar12 = (undefined4 *)
                        thunk_FUN_0041dc40(&local_c,local_30,0,*(short *)((int)this + 0x6c));
              uVar7 = *puVar12;
              local_2c = *(undefined2 *)(puVar12 + 1);
              local_88 = (short)uVar7 + *(short *)(iVar16 + 0x41);
              local_30._2_2_ = (short)((uint)uVar7 >> 0x10);
              local_86 = *(short *)(iVar16 + 0x43) - local_30._2_2_;
              local_84 = *(undefined2 *)(iVar16 + 0x45);
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
              local_10 = (STFishC *)((int)&local_10->vtable + 1);
              puVar22 = puVar22 + 3;
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
            STBoatC::sub_004602B0(this);
            STBoatC::sub_00481520
                      (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                       (int)*(short *)((int)this + 0x804));
            *(undefined2 *)((int)this + 0x806) = *(undefined2 *)((int)this + 0x800);
            *(undefined2 *)((int)this + 0x808) = *(undefined2 *)((int)this + 0x802);
            *(undefined2 *)((int)this + 0x80a) = *(undefined2 *)((int)this + 0x804);
LAB_004624c3:
            iVar16 = STBoatC::sub_00460260(this,0);
            if (iVar16 == -1) {
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
          goto cf_common_exit_0046351A;
        case 6:
        case 7:
        case 8:
          if (*(int *)((int)this + 0x832) == 0) {
            *(undefined4 *)((int)this + 0x832) = 1;
            *(undefined4 *)((int)this + 0x83a) = *(undefined4 *)((int)this + 0x818);
          }
          iVar16 = *(int *)((int)this + 0x83a) + 1;
          *(int *)((int)this + 0x83a) = iVar16;
          if (*(int *)((int)this + 0x818) < iVar16) {
            *(undefined4 *)((int)this + 0x83a) = 0;
            iVar16 = thunk_FUN_00484020(this,CONCAT31(extraout_var,bVar8),(short *)&local_24,
                                        (short *)&local_1c,(short *)&local_20);
            if (iVar16 != 0) {
              *(undefined4 *)((int)this + 0x82e) = 3;
              STBoatC::sub_00481520
                        (this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
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
      iVar16 = *(int *)((int)this + 0x82e);
      if (iVar16 == 0) {
        (**(code **)(*(int *)this + 0xd8))();
        return 2;
      }
      if (iVar16 == 1) {
        iVar16 = thunk_FUN_00417830((int)this);
        (**(code **)(*(int *)this + 0xd8))();
        if (iVar16 == 0) {
cf_common_exit_00462823:
          *(undefined4 *)((int)this + 0x836) = 0xffffffff;
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
switchD_004627fb_default:
        return 2;
      }
      if (iVar16 != 2) {
        if (iVar16 != 3) {
cf_common_exit_0046401F:
          return -1;
        }
        iVar16 = STBoatC::sub_00460260(this,2);
        switch(iVar16) {
        case 0:
        case 1:
          goto cf_common_exit_00462823;
        case -1:
        case 2:
        case 3:
          goto cf_common_exit_0046351C;
        default:
          goto switchD_004627fb_default;
        }
      }
      iVar16 = STBoatC::sub_00460260(this,2);
      switch(iVar16) {
      case 0:
      case 1:
        goto cf_common_exit_00462823;
      case -1:
      case 2:
      case 3:
        goto cf_common_exit_0046351C;
      default:
        goto switchD_004627fb_default;
      }
    }
    iVar16 = *(int *)((int)this + 0x82e);
    if (iVar16 == 0) {
      *(undefined4 *)((int)this + 0x82e) = 1;
      if (*(int *)((int)this + 0x7f8) == 1) {
        *(undefined4 *)((int)this + 0xb7) = 3;
      }
      else {
        *(undefined4 *)((int)this + 0xb7) = 1;
      }
      STBoatC::sub_00481520
                (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
                 (int)*(short *)((int)this + 0x804));
      STBoatC::sub_00460260(this,0);
      *(undefined2 *)((int)this + 0xf8) = 0;
      goto cf_common_exit_00464889;
    }
    if (iVar16 != 1) {
      if (iVar16 == 2) {
        iVar16 = STBoatC::sub_00460260(this,2);
        switch(iVar16) {
        case 0:
          break;
        case 1:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          sVar6 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((-1 < sVar6) && (sVar6 < SHORT_007fb240)) &&
               ((-1 < sVar5 &&
                (((sVar5 < SHORT_007fb242 && (-1 < sVar9)) && (sVar9 < SHORT_007fb244)))))) {
              piVar23 = *(int **)(DAT_007fb248 + 4 +
                                 ((int)sVar9 * (int)SHORT_007fb246 +
                                  (int)sVar5 * (int)SHORT_007fb240 + (int)sVar6) * 8);
LAB_004644dc:
              if (((piVar23 != (int *)0x0) && (piVar23[6] == *(int *)((int)this + 0x7f4))) &&
                 ((iVar16 = (**(code **)(*piVar23 + 0xf8))(), iVar16 != 0 &&
                  ((piVar23[8] != 0x1ae ||
                   (iVar16 = (**(code **)(*piVar23 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
                   iVar16 != 0)))))) {
cf_common_exit_00464526:
                return 2;
              }
            }
          }
          else if ((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) && (-1 < sVar5)) &&
                  (((sVar5 < SHORT_007fb242 && (-1 < sVar9)) && (sVar9 < SHORT_007fb244)))) {
            piVar23 = *(int **)(DAT_007fb248 +
                               ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240
                               + (int)sVar6) * 8);
            goto LAB_004644dc;
          }
          break;
        default:
          goto cf_common_exit_00464526;
        case 3:
          sVar9 = *(short *)((int)this + 0x804);
          sVar5 = *(short *)((int)this + 0x802);
          psVar1 = (short *)((int)this + 0x804);
          psVar2 = (short *)((int)this + 0x802);
          local_c = (STFishC *)((int)this + 0x800);
          sVar6 = *(short *)&local_c->vtable;
          local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if ((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) &&
                ((-1 < sVar5 && ((sVar5 < SHORT_007fb242 && (-1 < sVar9)))))) &&
               (sVar9 < SHORT_007fb244)) {
              local_14 = *(STFishC **)
                          (DAT_007fb248 + 4 +
                          ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                          (int)sVar6) * 8);
LAB_00464147:
              if ((((local_14 != (STFishC *)0x0) &&
                   (local_14->field_0018 == *(int *)((int)this + 0x7f4))) &&
                  (iVar16 = (*local_14->vtable->slot_F8)(), iVar16 != 0)) &&
                 ((*(int *)&local_14->field_0x20 != 0x1ae ||
                  (iVar16 = (*local_14->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24)),
                  iVar16 != 0)))) {
                sVar9 = *(short *)((int)this + 0xdf);
                sVar5 = *(short *)((int)this + 0xdb);
                sVar6 = *(short *)((int)this + 0xd7);
                local_10 = (STFishC *)
                           CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6);
                if (*(int *)((int)this + 0x7fc) == 3) {
                  if ((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) &&
                      ((-1 < sVar5 && ((sVar5 < SHORT_007fb242 && (-1 < sVar9)))))) &&
                     (sVar9 < SHORT_007fb244)) {
                    pSVar11 = *(STFishC **)
                               (DAT_007fb248 + 4 +
                               ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240
                               + (int)sVar6) * 8);
                    goto cf_common_exit_00464282;
                  }
                }
                else if (((-1 < sVar6) && (sVar6 < SHORT_007fb240)) &&
                        ((-1 < sVar5 &&
                         (((sVar5 < SHORT_007fb242 && (-1 < sVar9)) && (sVar9 < SHORT_007fb244))))))
                {
                  pSVar11 = *(STFishC **)
                             (DAT_007fb248 +
                             ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                             (int)sVar6) * 8);
                  goto cf_common_exit_00464282;
                }
                pSVar11 = (STFishC *)0x0;
cf_common_exit_00464282:
                if (local_14 != pSVar11) {
                  STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
                  STBoatC::sub_00481520
                            (this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                  thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                  STBoatC::sub_00460260(this,0);
                  *(undefined2 *)((int)this + 0xf8) = 0;
                  thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
                  thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
                  return 2;
                }
                *(undefined4 *)((int)this + 0x82e) = 3;
                return 2;
              }
            }
          }
          else if (((-1 < sVar6) && (sVar6 < SHORT_007fb240)) &&
                  ((-1 < sVar5 &&
                   (((sVar5 < SHORT_007fb242 && (-1 < sVar9)) && (sVar9 < SHORT_007fb244)))))) {
            local_14 = *(STFishC **)
                        (DAT_007fb248 +
                        ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                        (int)sVar6) * 8);
            goto LAB_00464147;
          }
          break;
        case -1:
          goto cf_common_exit_0046401F;
        }
        goto cf_common_exit_0046351A;
      }
      if (iVar16 != 3) {
        return -1;
      }
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      sVar6 = *(short *)((int)this + 0x800);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
           )) {
LAB_0046461c:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = *(STFishC **)
                     (DAT_007fb248 + 4 +
                     ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                     (int)sVar6) * 8);
        }
      }
      else {
        if ((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
           (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
        goto LAB_0046461c;
        local_c = *(STFishC **)
                   (DAT_007fb248 +
                   ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 + (int)sVar6
                   ) * 8);
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        pSVar11 = this;
        if (((iVar16 == -4) || (iVar16 = (*local_c->vtable->slot_F8)(), iVar16 == 0)) ||
           ((*(int *)&local_c->field_0x20 == 0x1ae &&
            (iVar16 = (*local_c->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24)), iVar16 == 0)))
           ) {
          pSVar21 = *(STFishCVTable **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
        else {
          STFishC::sub_004162B0
                    (local_c,(undefined2 *)&local_10,(undefined2 *)&local_28,(undefined2 *)&local_14
                    );
          uVar10 = (int)*(short *)((int)this + 0x800) - (int)(short)local_10;
          uVar20 = (int)uVar10 >> 0x1f;
          if ((((int)((uVar10 ^ uVar20) - uVar20) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x802) - (int)(short)local_28,
              uVar20 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar20) - uVar20) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x804) - (int)(short)local_14,
             uVar20 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar20) - uVar20) < 2)) {
            *(short *)((int)this + 0x804) = (short)local_14;
            *(short *)((int)this + 0x800) = (short)local_10;
            *(short *)((int)this + 0x802) = (short)local_28;
            goto LAB_0046470b;
          }
          pSVar21 = *(STFishCVTable **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
      }
      else {
LAB_0046470b:
        thunk_FUN_00416270(local_c,(undefined2 *)&local_10,&local_28,&local_14);
        sVar9 = (**(code **)(*(int *)this + 0x10))
                          (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                           *(undefined2 *)((int)this + 0x45),local_10,local_28,local_14);
        uVar10 = STBoatC::sub_004176C0(this,sVar9);
        STBoatC::sub_00417910(this,(short)uVar10);
        STJellyGunC::sub_00415B30
                  (this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                   *(short *)((int)this + 0x45),(short)local_10,(short)local_28,(short)local_14,
                   *(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x7a) = 0;
        iVar16 = STJellyGunC::sub_00415ED0(this,&local_30,local_74);
        if (iVar16 == -1) {
          return -1;
        }
        if (iVar16 == 0) {
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
          if ((iVar16 != 1) ||
             (iVar16 = (*local_c->vtable->slot_DC)
                                 (*(undefined2 *)((int)this + 0x41),
                                  *(undefined2 *)((int)this + 0x43),
                                  *(undefined2 *)((int)this + 0x45),
                                  *(undefined2 *)((int)this + 0x34),
                                  *(undefined2 *)((int)this + 0x36),
                                  *(undefined2 *)((int)this + 0x38)), iVar16 < 0))
          goto cf_common_exit_00464889;
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
        pSVar21 = local_c->vtable;
        pSVar11 = local_c;
      }
      local_38 = 1;
      (*pSVar21->GetMessage)(pSVar11,(int)local_6c);
cf_common_exit_00464889:
      iVar16 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
    }
    iVar16 = STBoatC::sub_00460260(this,2);
    switch(iVar16) {
    case 0:
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      psVar2 = (short *)((int)this + 0x802);
      local_c = (STFishC *)((int)this + 0x800);
      sVar6 = *(short *)&local_c->vtable;
      local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
           )) {
LAB_00463d56:
          local_14 = (STFishC *)0x0;
        }
        else {
          local_14 = *(STFishC **)
                      (DAT_007fb248 + 4 +
                      ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                      (int)sVar6) * 8);
        }
      }
      else {
        if (((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
            ((SHORT_007fb242 <= sVar5 || (sVar9 < 0)))) || (SHORT_007fb244 <= sVar9))
        goto LAB_00463d56;
        local_14 = *(STFishC **)
                    (DAT_007fb248 +
                    ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                    (int)sVar6) * 8);
      }
      if ((local_14 == (STFishC *)0x0) || (local_14->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),&local_14);
        if (((iVar16 != -4) && (iVar16 = (*local_14->vtable->slot_F8)(), iVar16 != 0)) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar16 = (*local_14->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24)), iVar16 != 0))
           )) {
          STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
          sVar9 = *psVar1;
          sVar5 = *psVar2;
          iVar16 = (int)*(short *)&local_c->vtable;
          goto cf_common_exit_00463FD6;
        }
      }
      else {
        iVar16 = (*local_14->vtable->slot_F8)();
        if ((iVar16 != 0) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar16 = (*local_14->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24)), iVar16 != 0))
           )) {
          if (*(int *)((int)this + 0x7f8) != 0) {
            *(undefined4 *)((int)this + 0x82e) = 2;
            *(undefined4 *)((int)this + 0xb7) = 0;
            STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
            STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
            thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
            STBoatC::sub_00460260(this,0);
            *(undefined2 *)((int)this + 0xf8) = 0;
            thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
            thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
            return 2;
          }
          iVar16 = (int)*(short *)&local_c->vtable;
          uVar10 = *(short *)((int)this + 0x47) - iVar16;
          uVar20 = (int)uVar10 >> 0x1f;
          if ((((int)((uVar10 ^ uVar20) - uVar20) < 2) &&
              (uVar10 = (int)*(short *)((int)this + 0x49) - (int)*psVar2,
              uVar20 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar20) - uVar20) < 2)) &&
             (uVar10 = (int)*(short *)((int)this + 0x4b) - (int)*psVar1,
             uVar20 = (int)uVar10 >> 0x1f, (int)((uVar10 ^ uVar20) - uVar20) < 2)) {
            *(undefined4 *)((int)this + 0x82e) = 3;
            return 2;
          }
          sVar9 = *psVar1;
          sVar5 = *psVar2;
cf_common_exit_00463FD6:
          STBoatC::sub_00481520(this,iVar16,(int)sVar5,(int)sVar9);
          STBoatC::sub_00460260(this,0);
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
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
           )) {
LAB_00463b9d:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = *(STFishC **)
                     (DAT_007fb248 + 4 +
                     ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                     (int)sVar6) * 8);
        }
      }
      else {
        if ((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
           (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
        goto LAB_00463b9d;
        local_c = *(STFishC **)
                   (DAT_007fb248 +
                   ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 + (int)sVar6
                   ) * 8);
      }
      if ((local_c != (STFishC *)0x0) && (local_c->field_0018 == *(int *)((int)this + 0x7f4))) {
        iVar16 = (*local_c->vtable->slot_F8)();
        if (iVar16 != 0) {
          if (*(int *)&local_c->field_0x20 != 0x1ae) {
            return 2;
          }
          iVar16 = (*local_c->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24));
          if (iVar16 != 0) {
            return 2;
          }
        }
        STBoatC::sub_004602B0(this);
        return 0;
      }
      STBoatC::sub_004602B0(this);
      iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
      if ((iVar16 != -4) && (iVar16 = (*local_c->vtable->slot_F8)(), iVar16 != 0)) {
        if (*(int *)&local_c->field_0x20 == 0x1ae) {
          iVar16 = (*local_c->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24));
joined_r0x00463a7a:
          if (iVar16 == 0) break;
        }
LAB_00463a83:
        STFishC::sub_004162B0
                  (local_c,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802),
                   (undefined2 *)((int)this + 0x804));
LAB_00463a91:
        sVar9 = *(short *)((int)this + 0x804);
        sVar5 = *(short *)((int)this + 0x802);
        iVar16 = (int)*(short *)((int)this + 0x800);
        goto cf_common_exit_00463FD6;
      }
      break;
    default:
      goto switchD_004638e6_caseD_2;
    case 3:
      sVar9 = *(short *)((int)this + 0x804);
      sVar5 = *(short *)((int)this + 0x802);
      sVar6 = *(short *)((int)this + 0x800);
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar6);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) ||
           ((sVar5 < 0 || (((SHORT_007fb242 <= sVar5 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9))))
           )) {
LAB_004639e6:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = *(STFishC **)
                     (DAT_007fb248 + 4 +
                     ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                     (int)sVar6) * 8);
        }
      }
      else {
        if (((((sVar6 < 0) || (SHORT_007fb240 <= sVar6)) || (sVar5 < 0)) ||
            ((SHORT_007fb242 <= sVar5 || (sVar9 < 0)))) || (SHORT_007fb244 <= sVar9))
        goto LAB_004639e6;
        local_c = *(STFishC **)
                   (DAT_007fb248 +
                   ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 + (int)sVar6
                   ) * 8);
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar16 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        if ((iVar16 != -4) && (iVar16 = (*local_c->vtable->slot_F8)(), iVar16 != 0)) {
          if (*(int *)&local_c->field_0x20 == 0x1ae) {
            iVar16 = (*local_c->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24));
            goto joined_r0x00463a7a;
          }
          goto LAB_00463a83;
        }
      }
      else {
        iVar16 = (*local_c->vtable->slot_F8)();
        if ((iVar16 != 0) &&
           ((*(int *)&local_c->field_0x20 != 0x1ae ||
            (iVar16 = (*local_c->vtable->slot_F4)(*(undefined4 *)((int)this + 0x24)), iVar16 != 0)))
           ) goto LAB_00463a91;
      }
      break;
    case -1:
      goto cf_common_exit_0046401F;
    }
    goto cf_common_exit_0046351A;
  }
  iVar16 = *(int *)((int)this + 0x82e);
  if (iVar16 == 0) {
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    STBoatC::sub_00481520
              (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
               (int)*(short *)((int)this + 0x804));
    STBoatC::sub_00460260(this,0);
    goto cf_common_exit_00464889;
  }
  if (iVar16 != 1) {
    if (iVar16 != 2) {
      if (iVar16 != 3) {
        return -1;
      }
      iVar16 = STJellyGunC::sub_00415ED0(this,local_74,(int *)&local_10);
      if (iVar16 == -1) {
        return -1;
      }
      if (iVar16 == 0) {
        local_58 = &local_4c;
        local_4c = 10000;
        local_44 = 0xff;
        local_38 = 1;
        local_5c = 0x110;
        (*(code *)**(undefined4 **)this)(local_6c);
        (**(code **)(*(int *)this + 0x90))(3,0x101);
      }
      else if (iVar16 == 1) {
        sVar9 = *(short *)((int)this + 0x800);
        sVar5 = *(short *)((int)this + 0x804);
        sVar6 = *(short *)((int)this + 0x802);
        if ((((-1 < sVar9) && (sVar9 < SHORT_007fb240)) &&
            ((-1 < sVar6 && ((sVar6 < SHORT_007fb242 && (-1 < sVar5)))))) &&
           (sVar5 < SHORT_007fb244)) {
          iVar16 = (int)sVar5 * (int)SHORT_007fb246 + (int)sVar6 * (int)SHORT_007fb240 + (int)sVar9;
          piVar23 = *(int **)(DAT_007fb248 + iVar16 * 8);
          if (piVar23 != (int *)0x0) {
            sVar9 = sVar9 >> 0xf;
            uVar18 = (undefined2)((uint)iVar16 >> 0x10);
            iVar16 = (**(code **)(*piVar23 + 0xdc))
                               (CONCAT22(uVar18,*(undefined2 *)((int)this + 0x41)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x43)),
                                CONCAT22(uVar18,*(undefined2 *)((int)this + 0x45)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x34)),
                                CONCAT22(uVar18,*(undefined2 *)((int)this + 0x36)),
                                CONCAT22(sVar9,*(undefined2 *)((int)this + 0x38)));
            if (-1 < iVar16) {
              iVar16 = thunk_FUN_004d8870((char)piVar23[9]);
              if (200 < iVar16) {
                iVar16 = 200;
              }
              thunk_FUN_004d8800((char)piVar23[9],iVar16);
              thunk_FUN_004d87b0(*(char *)((int)this + 0x24),iVar16);
              iVar16 = thunk_FUN_004d89b0((char)piVar23[9]);
              if (100 < iVar16) {
                iVar16 = 100;
              }
              thunk_FUN_004d8940((char)piVar23[9],iVar16);
              thunk_FUN_004d88f0(*(char *)((int)this + 0x24),iVar16);
              iVar16 = thunk_FUN_004d8af0((char)piVar23[9]);
              if (0x5dc < iVar16) {
                iVar16 = 0x5dc;
              }
              thunk_FUN_004d8a80((char)piVar23[9],iVar16);
              thunk_FUN_004d8a30(*(char *)((int)this + 0x24),iVar16);
              thunk_FUN_004d78e0((char)piVar23[9]);
              thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
              if (((uint)DAT_0080874d == piVar23[9]) ||
                 ((uint)DAT_0080874d == *(uint *)((int)this + 0x24))) {
                thunk_FUN_004d8b70(DAT_0080874d);
              }
              local_58 = &local_4c;
              local_4c = 10000;
              local_44 = 0xff;
              local_38 = 1;
              local_5c = 0x110;
              (*(code *)**(undefined4 **)this)(local_6c);
              STT3DSprC::LoadSequence
                        ((STT3DSprC *)((int)this + 0x1d5),8,DAT_00806774,s_expdstrwd_007aa144,0x1d);
              if (DAT_00811798 != (void *)0x0) {
                thunk_FUN_004162f0(piVar23,(undefined2 *)((int)&local_14 + 2),
                                   (undefined2 *)((int)&local_28 + 2),local_8);
                (**(code **)(*piVar23 + 0x2c))();
                thunk_FUN_00620a00(DAT_00811798,(int)local_14._2_2_,(int)local_28._2_2_,piVar23[9]);
                iVar16 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
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
        iVar16 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
      }
LAB_00463844:
      iVar16 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar16 != 0) & 0xfffffffd) + 2;
    }
    iVar16 = STBoatC::sub_00460260(this,2);
    switch(iVar16 + 1) {
    case 0:
      goto cf_common_exit_0046401F;
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
      uVar10 = CONCAT22((short)((uint)(iVar16 + 1) >> 0x10),sVar9);
      sVar5 = *(short *)((int)this + 0x804);
      pvVar17 = (void *)CONCAT22(extraout_var_02,sVar5);
      sVar6 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      if (((((-1 < sVar9) && (sVar9 < SHORT_007fb240)) && (-1 < sVar6)) &&
          ((sVar6 < SHORT_007fb242 && (-1 < sVar5)))) && (sVar5 < SHORT_007fb244)) {
        pvVar17 = (void *)((int)sVar5 * (int)SHORT_007fb246 + (int)sVar6 * (int)SHORT_007fb240 +
                          (int)sVar9);
        pSVar11 = *(STFishC **)(DAT_007fb248 + (int)pvVar17 * 8);
        uVar10 = (int)sVar9;
        local_14 = pSVar11;
        if (((pSVar11 != (STFishC *)0x0) &&
            (uVar20 = *(uint *)&pSVar11->field_0x24, uVar10 = uVar20, uVar20 < 8)) &&
           ((DAT_00802a38 == (void *)0x0 ||
            (uVar10 = uVar20 * 9, pvVar17 = DAT_00802a38, (byte)(&DAT_008087e9)[uVar20 * 0x51] < 8))
           )) {
          bVar8 = pSVar11->field_0x24;
          bVar3 = *(byte *)((int)this + 0x24);
          local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar8);
          local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
          if (DAT_00808a8f == '\0') {
            if (bVar8 == bVar3) {
LAB_00462fde:
              iVar16 = 0;
            }
            else {
              uVar10 = (uint)bVar8;
              uVar20 = (uint)bVar3;
              cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20);
              if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0'))
              {
                iVar16 = -2;
              }
              else if ((cVar4 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0')) {
                iVar16 = -1;
              }
              else if ((cVar4 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\x01')) {
                iVar16 = 1;
              }
              else {
                if ((cVar4 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) != '\x01'))
                goto LAB_00462fde;
                iVar16 = 2;
              }
            }
            pvVar15 = (void *)(uint)(iVar16 < 0);
            pvVar17 = pvVar15;
          }
          else {
            pvVar15 = (void *)(uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] !=
                                    (&DAT_008087ea)[(uint)bVar8 * 0x51]);
            pvVar17 = (void *)CONCAT31((int3)((uint)bVar3 * 9 >> 8),
                                       (&DAT_008087ea)[(uint)bVar3 * 0x51]);
          }
          uVar10 = 0;
          if ((pvVar15 != (void *)0x0) &&
             ((uVar10 = (*pSVar11->vtable->slot_2C)(), pvVar17 = extraout_ECX_00,
              uVar18 = extraout_var_04, uVar10 == 0x3b ||
              (uVar10 = (*pSVar11->vtable->slot_2C)(), pvVar17 = extraout_ECX_01,
              uVar18 = extraout_var_05, uVar10 == 0x60)))) {
            sVar9 = *(short *)((int)this + 0xd7);
            local_24 = CONCAT22((short)(uVar10 >> 0x10),sVar9);
            sVar5 = *(short *)((int)this + 0xdb);
            local_1c = CONCAT22((short)((uint)pvVar17 >> 0x10),sVar5);
            sVar6 = *(short *)((int)this + 0xdf);
            local_20 = CONCAT22(uVar18,sVar6);
            if ((sVar9 < 0) ||
               ((((SHORT_007fb240 <= sVar9 || (sVar5 < 0)) || (SHORT_007fb242 <= sVar5)) ||
                ((sVar6 < 0 || (SHORT_007fb244 <= sVar6)))))) {
              pSVar19 = (STFishC *)0x0;
            }
            else {
              pSVar19 = *(STFishC **)
                         (DAT_007fb248 +
                         ((int)SHORT_007fb246 * (int)sVar6 + (int)SHORT_007fb240 * (int)sVar5 +
                         (int)sVar9) * 8);
              pSVar11 = local_14;
            }
            if (pSVar11 != pSVar19) {
              psVar2 = (short *)((int)this + 0x802);
              local_c = (STFishC *)((int)this + 0x800);
              STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
              STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              STBoatC::sub_00460260(this,0);
              *(undefined2 *)((int)this + 0xf8) = 0;
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
              thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
              return 2;
            }
            *(undefined4 *)((int)this + 0x82e) = 3;
            STJellyGunC::sub_00415B30
                      (this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                       *(short *)((int)this + 0x45),(short)(local_24 * 0xc9 + 100),
                       sVar5 * 0xc9 + 100,sVar6 * 200 + 100,*(byte *)((int)this + 0x61));
            *(undefined4 *)((int)this + 0x7a) = 0;
            return 2;
          }
        }
      }
      pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pvVar17 >> 8),
                                            *(undefined1 *)((int)this + 0x24)),
                                   CONCAT22((short)(uVar10 >> 0x10),
                                            *(undefined2 *)((int)this + 0x30)));
      STGroupBoatC::GetDepotForAttack
                (pSVar14,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)
                                 ),(undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,
                 (short *)&local_1c,(short *)&local_20);
      if (local_16 != -1) {
        *psVar1 = (short)local_20;
        *(short *)((int)this + 0x802) = (short)local_1c;
        *(undefined4 *)((int)this + 0x82e) = 1;
        *(undefined4 *)((int)this + 0xb7) = 3;
        *(short *)((int)this + 0x800) = (short)local_24;
        STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
        STBoatC::sub_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        return 2;
      }
      goto cf_common_exit_0046351A;
    }
  }
  iVar16 = STBoatC::sub_00460260(this,2);
  switch(iVar16) {
  case 0:
    sVar9 = *(short *)((int)this + 0x804);
    uVar10 = CONCAT22(extraout_var_00,sVar9);
    sVar5 = *(short *)((int)this + 0x802);
    local_c = (STFishC *)((int)this + 0x800);
    psVar1 = (short *)((int)this + 0x804);
    psVar2 = (short *)((int)this + 0x802);
    sVar6 = *(short *)&local_c->vtable;
    local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar6);
    pSVar11 = local_10;
    if (((((-1 < sVar6) && (sVar6 < SHORT_007fb240)) && (-1 < sVar5)) &&
        (((sVar5 < SHORT_007fb242 && (-1 < sVar9)) &&
         ((sVar9 < SHORT_007fb244 &&
          ((local_14 = *(STFishC **)
                        (DAT_007fb248 +
                        ((int)sVar9 * (int)SHORT_007fb246 + (int)sVar5 * (int)SHORT_007fb240 +
                        (int)sVar6) * 8), pSVar11 = local_14, uVar10 = DAT_007fb248,
           local_14 != (STFishC *)0x0 &&
           (uVar20 = *(uint *)&local_14->field_0x24, uVar10 = uVar20, uVar20 < 8)))))))) &&
       ((DAT_00802a38 == (void *)0x0 ||
        (uVar10 = uVar20 * 9, (byte)(&DAT_008087e9)[uVar20 * 0x51] < 8)))) {
      bVar8 = local_14->field_0x24;
      bVar3 = *(byte *)((int)this + 0x24);
      uVar10 = CONCAT31((int3)(uVar10 >> 8),bVar3);
      local_10._1_3_ = (undefined3)((uint)local_10 >> 8);
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar8);
      local_28 = CONCAT31(local_28._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar8 == bVar3) {
LAB_00462c49:
          iVar16 = 0;
        }
        else {
          uVar20 = (uint)bVar8;
          uVar10 = (uint)bVar3;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20) == '\0')) {
            iVar16 = -2;
          }
          else if ((cVar4 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20) == '\0')) {
            iVar16 = -1;
          }
          else if ((cVar4 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20) == '\x01')) {
            iVar16 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20) != '\x01')
               ) goto LAB_00462c49;
            iVar16 = 2;
          }
        }
        uVar20 = (uint)(iVar16 < 0);
      }
      else {
        uVar20 = (uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51]);
        uVar10 = uVar20;
      }
      pSVar11 = (STFishC *)0x0;
      if ((uVar20 != 0) &&
         ((iVar16 = (*local_14->vtable->slot_2C)(), iVar16 == 0x3b ||
          (pSVar11 = (STFishC *)(*local_14->vtable->slot_2C)(), uVar10 = extraout_ECX,
          pSVar11 == (STFishC *)0x60)))) {
        *(undefined4 *)((int)this + 0x82e) = 2;
        *(undefined4 *)((int)this + 0xb7) = 0;
        STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
        STBoatC::sub_00481520(this,(int)*(short *)&local_c->vtable,(int)*psVar2,(int)*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
        thunk_FUN_00496140(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
        STBoatC::sub_00460260(this,0);
        *(undefined2 *)((int)this + 0xf8) = 0;
        thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable,*psVar2 + 1,*psVar1);
        thunk_FUN_004960d0(*(short *)&local_c->vtable + 1,*psVar2 + 1,*psVar1);
        return 2;
      }
    }
    pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)(uVar10 >> 8),*(undefined1 *)((int)this + 0x24)),
                                 CONCAT22((short)((uint)pSVar11 >> 0x10),
                                          *(undefined2 *)((int)this + 0x30)));
    STGroupBoatC::GetDepotForAttack
              (pSVar14,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
               (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
               (short *)&local_20);
    if (local_16 != -1) {
      *(short *)&local_c->vtable = (short)local_24;
      *psVar2 = (short)local_1c;
      *psVar1 = (short)local_20;
cf_common_exit_00462E32:
      STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
      STBoatC::sub_00460260(this,0);
      return 2;
    }
    break;
  case 1:
    sVar9 = *(short *)((int)this + 0x800);
    sVar5 = *(short *)((int)this + 0x804);
    sVar6 = *(short *)((int)this + 0x802);
    if ((((((-1 < sVar9) && (sVar9 < SHORT_007fb240)) && (-1 < sVar6)) &&
         ((sVar6 < SHORT_007fb242 && (-1 < sVar5)))) && (sVar5 < SHORT_007fb244)) &&
       (((piVar23 = *(int **)(DAT_007fb248 +
                             ((int)sVar5 * (int)SHORT_007fb246 + (int)sVar6 * (int)SHORT_007fb240 +
                             (int)sVar9) * 8), piVar23 != (int *)0x0 && ((uint)piVar23[9] < 8)) &&
        ((DAT_00802a38 == (void *)0x0 || ((byte)(&DAT_008087e9)[piVar23[9] * 0x51] < 8)))))) {
      bVar8 = *(byte *)(piVar23 + 9);
      bVar3 = *(byte *)((int)this + 0x24);
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar8);
      local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar8 == bVar3) {
LAB_00462a36:
          iVar16 = 0;
        }
        else {
          uVar10 = (uint)bVar8;
          uVar20 = (uint)bVar3;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0')) {
            iVar16 = -2;
          }
          else if ((cVar4 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0')) {
            iVar16 = -1;
          }
          else if ((cVar4 == '\0') &&
                  (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\x01')) {
            iVar16 = 1;
          }
          else {
            if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) != '\x01')
               ) goto LAB_00462a36;
            iVar16 = 2;
          }
        }
        bVar24 = iVar16 < 0;
      }
      else {
        bVar24 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51];
      }
      if (bVar24) {
        iVar16 = (**(code **)(*piVar23 + 0x2c))();
        if (iVar16 == 0x3b) {
          return 2;
        }
        iVar16 = (**(code **)(*piVar23 + 0x2c))();
        if (iVar16 == 0x60) {
          return 2;
        }
      }
    }
    STBoatC::sub_004602B0(this);
    pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                          *(undefined1 *)((int)this + 0x24)),
                                 CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x30)));
    STGroupBoatC::GetDepotForAttack
              (pSVar14,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
               (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
               (short *)&local_20);
    if (local_16 != -1) {
      *(short *)((int)this + 0x800) = (short)local_24;
      *(short *)((int)this + 0x802) = (short)local_1c;
      *(short *)((int)this + 0x804) = (short)local_20;
      goto cf_common_exit_00462E32;
    }
    break;
  default:
    goto cf_common_exit_00464526;
  case 3:
    local_20._0_2_ = *(short *)((int)this + 0x804);
    local_1c._0_2_ = *(short *)((int)this + 0x802);
    local_24._0_2_ = *(short *)((int)this + 0x800);
    goto cf_common_exit_00462E32;
  case -1:
    goto cf_common_exit_0046401F;
  }
  goto LAB_00463510;
switchD_00462e6c_caseD_2:
  sVar9 = *(short *)((int)this + 0x800);
  sVar5 = *(short *)((int)this + 0x804);
  sVar6 = *(short *)((int)this + 0x802);
  if ((((-1 < sVar9) && (sVar9 < SHORT_007fb240)) &&
      ((-1 < sVar6 && (((sVar6 < SHORT_007fb242 && (-1 < sVar5)) && (sVar5 < SHORT_007fb244)))))) &&
     (((piVar23 = *(int **)(DAT_007fb248 +
                           ((int)sVar5 * (int)SHORT_007fb246 + (int)sVar6 * (int)SHORT_007fb240 +
                           (int)sVar9) * 8), piVar23 != (int *)0x0 && ((uint)piVar23[9] < 8)) &&
      ((DAT_00802a38 == (void *)0x0 || ((byte)(&DAT_008087e9)[piVar23[9] * 0x51] < 8)))))) {
    bVar8 = *(byte *)(piVar23 + 9);
    bVar3 = *(byte *)((int)this + 0x24);
    local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar8);
    local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
    if (DAT_00808a8f == '\0') {
      if (bVar8 == bVar3) {
LAB_00463442:
        iVar16 = 0;
      }
      else {
        uVar10 = (uint)bVar8;
        uVar20 = (uint)bVar3;
        cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar20);
        if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0')) {
          iVar16 = -2;
        }
        else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\0'))
        {
          iVar16 = -1;
        }
        else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) == '\x01'))
        {
          iVar16 = 1;
        }
        else {
          if ((cVar4 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar10) != '\x01'))
          goto LAB_00463442;
          iVar16 = 2;
        }
      }
      bVar24 = iVar16 < 0;
    }
    else {
      bVar24 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar8 * 0x51];
    }
    if (bVar24) {
      iVar16 = (**(code **)(*piVar23 + 0x2c))();
      if (iVar16 == 0x3b) {
        return 2;
      }
      iVar16 = (**(code **)(*piVar23 + 0x2c))();
      if (iVar16 == 0x60) {
        return 2;
      }
    }
  }
  STBoatC::sub_004602B0(this);
  pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),
                                        *(undefined1 *)((int)this + 0x24)),
                               CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x30)));
  STGroupBoatC::GetDepotForAttack
            (pSVar14,CONCAT22((short)((uint)&local_16 >> 0x10),*(undefined2 *)((int)this + 0x32)),
             (undefined1 *)((int)&param_1 + 3),&local_16,(short *)&local_24,(short *)&local_1c,
             (short *)&local_20);
  if (local_16 != -1) {
    *(short *)((int)this + 0x804) = (short)local_20;
    *(short *)((int)this + 0x802) = (short)local_1c;
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    *(short *)((int)this + 0x800) = (short)local_24;
    STBoatC::sub_00481520(this,(int)(short)local_24,(int)(short)local_1c,(int)(short)local_20);
    STBoatC::sub_00460260(this,0);
    return 2;
  }
LAB_00463510:
  *(undefined4 *)((int)this + 0xb7) = 0;
cf_common_exit_0046351A:
  iVar16 = 0;
cf_common_exit_0046351C:
  return iVar16;
}

