
int __thiscall FUN_00462180(void *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  STFishC *pSVar12;
  undefined3 extraout_var;
  undefined4 *puVar13;
  STGroupBoatC *pSVar14;
  STWorldCell *pSVar15;
  STPlaySystemC *pSVar16;
  int iVar17;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  STWorldCell *pSVar18;
  STWorldCell *extraout_ECX;
  undefined2 extraout_var_02;
  STPlaySystemC *pSVar19;
  STPlaySystemC *extraout_ECX_00;
  STPlaySystemC *extraout_ECX_01;
  undefined2 extraout_var_03;
  undefined2 uVar20;
  undefined4 extraout_EDX;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  STFishC *pSVar21;
  undefined4 extraout_EDX_00;
  uint uVar22;
  STFishCVTable *pSVar23;
  ushort *puVar24;
  STWorldObject *pSVar25;
  bool bVar26;
  AnonShape_00645880_0D5933D4 local_9c;
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
  STFishC *local_14;
  STFishC *local_10;
  STFishC *local_c;
  undefined2 local_8 [2];
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar13 = (undefined4 *)((int)this + 0x2cc);
    for (iVar17 = 0x17; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar11;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar11 >> 0x10) % 0x1f) + 0x1e;
    pSVar12 = (STFishC *)
              STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,(uint)*(byte *)((int)this + 0x33a),
                         (uint)*(ushort *)((int)this + 0x33f),
                         *(STAllPlayersC_GetObjPtr_param_3Enum *)((int)this + 0x33b));
    if (((pSVar12 != (STFishC *)0x0) && (pSVar12 != this)) &&
       ((*(int *)((int)this + 0x6f7) != 9 ||
        ((iVar17 = (*pSVar12->vtable->vfunc_2C)(), iVar17 == 0x3b ||
         (iVar17 = (*pSVar12->vtable->vfunc_2C)(), iVar17 == 0x60)))))) {
      *(undefined4 *)((int)this + 0x7f4) = pSVar12->field_0018;
      *(undefined4 *)((int)this + 0x7f8) = *(undefined4 *)&pSVar12->field_0x2c;
      *(undefined4 *)((int)this + 0x7fc) = *(undefined4 *)((int)this + 0x33b);
      STFishC::sub_004162B0
                (pSVar12,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802),
                 (undefined2 *)((int)this + 0x804));
      *(undefined2 *)((int)this + 0x7f2) = *(undefined2 *)((int)this + 0x341);
      *(undefined4 *)((int)this + 0x7de) = *(undefined4 *)((int)this + 0x336);
      *(undefined4 *)((int)this + 0x82e) = 0;
      *(undefined4 *)((int)this + 0x832) = 0;
      *(undefined4 *)((int)this + 0x836) = 0xffffffff;
      *(undefined4 *)((int)this + 0x83a) = 0;
      uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar11;
      *(uint *)((int)this + 0x818) = (uVar11 >> 0x10) % 0xb + 10;
      *(undefined2 *)((int)this + 0x80a) = 0xffff;
      *(undefined2 *)((int)this + 0x808) = 0xffff;
      *(undefined2 *)((int)this + 0x806) = 0xffff;
      iVar17 = (*pSVar12->vtable->vfunc_2C)();
      if (iVar17 == 0x4d) {
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
      iVar17 = *(int *)((int)this + 0x836) + 1;
      *(int *)((int)this + 0x836) = iVar17;
      if ((iVar17 % 5 == 0) && (*(int *)((int)this + 0x82e) == 0)) {
        bVar9 = thunk_FUN_00482db0(this,0);
        switch(CONCAT31(extraout_var,bVar9)) {
        case 0:
          sVar10 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          sVar7 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
                ((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)))) || (g_worldGrid.sizeZ <= sVar10)) {
LAB_004625fd:
              pSVar25 = (STWorldObject *)0x0;
            }
            else {
              pSVar25 = g_worldGrid.cells
                        [(int)sVar10 * (int)g_worldGrid.planeStride +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
            }
          }
          else {
            if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
                ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)))))) ||
               (g_worldGrid.sizeZ <= sVar10)) goto LAB_004625fd;
            pSVar25 = g_worldGrid.cells
                      [(int)sVar10 * (int)g_worldGrid.planeStride +
                       (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
          }
          local_9c._8_2_ = *(undefined2 *)((int)this + 0x41);
          local_9c.field_000A = *(undefined2 *)((int)this + 0x43);
          local_9c._12_2_ = *(undefined2 *)((int)this + 0x45);
          local_10 = (STFishC *)0x0;
          if (*(char *)((int)this + 0x2b2) != '\0') {
            puVar24 = (ushort *)((int)this + 0x2a8);
            do {
              puVar13 = (undefined4 *)
                        thunk_FUN_0041dc40(local_74,*(undefined4 *)(puVar24 + -1),puVar24[1],
                                           *(short *)((int)this + 0x6c));
              local_9c.field_000E = *(short *)((int)this + 0x41) + (short)*puVar13;
              local_9c._16_2_ = *(short *)((int)this + 0x43) - (short)((uint)*puVar13 >> 0x10);
              local_9c.field_0012 = *(short *)(puVar13 + 1) + *(short *)((int)this + 0x45);
              local_30 = (uint)*puVar24 << 0x10;
              puVar13 = (undefined4 *)
                        thunk_FUN_0041dc40(&local_c,local_30,0,*(short *)((int)this + 0x6c));
              uVar8 = *puVar13;
              local_2c = *(undefined2 *)(puVar13 + 1);
              local_9c._20_2_ = (short)uVar8 + *(short *)&pSVar25[1].field_0x1d;
              local_30._2_2_ = (short)((uint)uVar8 >> 0x10);
              local_9c.field_0016 = *(short *)&pSVar25[1].field_0x1f - local_30._2_2_;
              local_9c._24_2_ = *(undefined2 *)((int)&pSVar25[1].value_20 + 1);
              local_9c._0_4_ = *(undefined4 *)((int)this + 0x24);
              local_9c.field_0022 = (-(uint)(*(int *)((int)this + 0x6f7) != 10) & 0xfffffffe) + 1;
              if (*(int *)((int)this + 0x7de) == 0) {
                local_9c._4_4_ = *(undefined4 *)((int)this + 0x79a);
              }
              else {
                local_9c._4_4_ = 0xa1;
              }
              local_9c.field_001A = *(undefined2 *)((int)this + 0x6c);
              local_9c._28_4_ = *(undefined4 *)((int)this + 0x18);
              local_9c._32_2_ = *(undefined2 *)((int)this + 0x32);
              local_30 = uVar8;
              thunk_FUN_00645880(&local_9c);
              *(undefined4 *)((int)this + 0x83a) = 0;
              iVar17 = *(int *)((int)this + 0x7a2) + -1;
              *(int *)((int)this + 0x7a2) = iVar17;
              *(undefined4 *)((int)this + 0x7aa) = 0;
              if ((*(int *)((int)this + 0x7de) == 0) && (iVar17 < 1)) break;
              local_10 = (STFishC *)((int)&local_10->vtable + 1);
              puVar24 = puVar24 + 3;
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
            iVar17 = STBoatC::sub_00460260(this,0);
            if (iVar17 == -1) {
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
          iVar17 = *(int *)((int)this + 0x83a) + 1;
          *(int *)((int)this + 0x83a) = iVar17;
          if (*(int *)((int)this + 0x818) < iVar17) {
            *(undefined4 *)((int)this + 0x83a) = 0;
            iVar17 = thunk_FUN_00484020(this,CONCAT31(extraout_var,bVar9),(short *)&local_24,
                                        (short *)&local_1c,(short *)&local_20);
            if (iVar17 != 0) {
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
          uVar11 = thunk_FUN_004836c0(this);
          thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),(short)uVar11);
        }
      }
      iVar17 = *(int *)((int)this + 0x82e);
      if (iVar17 == 0) {
        (**(code **)(*(int *)this + 0xd8))();
        return 2;
      }
      if (iVar17 == 1) {
        iVar17 = thunk_FUN_00417830(this);
        (**(code **)(*(int *)this + 0xd8))();
        if (iVar17 == 0) {
cf_common_exit_00462823:
          *(undefined4 *)((int)this + 0x836) = 0xffffffff;
          *(undefined4 *)((int)this + 0x82e) = 0;
        }
switchD_004627fb_default:
        return 2;
      }
      if (iVar17 != 2) {
        if (iVar17 != 3) {
cf_common_exit_0046401F:
          return -1;
        }
        iVar17 = STBoatC::sub_00460260(this,2);
        switch(iVar17) {
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
      iVar17 = STBoatC::sub_00460260(this,2);
      switch(iVar17) {
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
    iVar17 = *(int *)((int)this + 0x82e);
    if (iVar17 == 0) {
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
    if (iVar17 != 1) {
      if (iVar17 == 2) {
        iVar17 = STBoatC::sub_00460260(this,2);
        switch(iVar17) {
        case 0:
          break;
        case 1:
          sVar10 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          sVar7 = *(short *)((int)this + 0x800);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
               ((-1 < sVar6 &&
                (((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)) && (sVar10 < g_worldGrid.sizeZ))))))
            {
              pSVar25 = g_worldGrid.cells
                        [(int)sVar10 * (int)g_worldGrid.planeStride +
                         (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
LAB_004644dc:
              if (((pSVar25 != (STWorldObject *)0x0) &&
                  (*(int *)&pSVar25->field_0x18 == *(int *)((int)this + 0x7f4))) &&
                 ((iVar17 = (*pSVar25->vtable[5].slots_00_28[2])(), iVar17 != 0 &&
                  ((pSVar25->value_20 != 0x1ae ||
                   (iVar17 = (*pSVar25->vtable[5].slots_00_28[1])(*(undefined4 *)((int)this + 0x24))
                   , iVar17 != 0)))))) {
cf_common_exit_00464526:
                return 2;
              }
            }
          }
          else if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
                  (((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)) && (sVar10 < g_worldGrid.sizeZ))))
          {
            pSVar25 = g_worldGrid.cells
                      [(int)sVar10 * (int)g_worldGrid.planeStride +
                       (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            goto LAB_004644dc;
          }
          break;
        default:
          goto cf_common_exit_00464526;
        case 3:
          sVar10 = *(short *)((int)this + 0x804);
          sVar6 = *(short *)((int)this + 0x802);
          psVar1 = (short *)((int)this + 0x804);
          psVar2 = (short *)((int)this + 0x802);
          local_c = (STFishC *)((int)this + 0x800);
          sVar7 = *(short *)&local_c->vtable;
          local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
          if (*(int *)((int)this + 0x7fc) == 3) {
            if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                ((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)))))) &&
               (sVar10 < g_worldGrid.sizeZ)) {
              local_14 = (STFishC *)
                         g_worldGrid.cells
                         [(int)sVar10 * (int)g_worldGrid.planeStride +
                          (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
LAB_00464147:
              if ((((local_14 != (STFishC *)0x0) &&
                   (local_14->field_0018 == *(int *)((int)this + 0x7f4))) &&
                  (iVar17 = (*local_14->vtable->vfunc_F8)(), iVar17 != 0)) &&
                 ((*(int *)&local_14->field_0x20 != 0x1ae ||
                  (iVar17 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)),
                  iVar17 != 0)))) {
                sVar10 = *(short *)((int)this + 0xdf);
                sVar6 = *(short *)((int)this + 0xdb);
                sVar7 = *(short *)((int)this + 0xd7);
                local_10 = (STFishC *)
                           CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
                if (*(int *)((int)this + 0x7fc) == 3) {
                  if ((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                      ((-1 < sVar6 && ((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)))))) &&
                     (sVar10 < g_worldGrid.sizeZ)) {
                    pSVar12 = (STFishC *)
                              g_worldGrid.cells
                              [(int)sVar10 * (int)g_worldGrid.planeStride +
                               (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
                    goto cf_common_exit_00464282;
                  }
                }
                else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                        ((-1 < sVar6 &&
                         (((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)) &&
                          (sVar10 < g_worldGrid.sizeZ)))))) {
                  pSVar12 = (STFishC *)
                            g_worldGrid.cells
                            [(int)sVar10 * (int)g_worldGrid.planeStride +
                             (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
                  goto cf_common_exit_00464282;
                }
                pSVar12 = (STFishC *)0x0;
cf_common_exit_00464282:
                if (local_14 != pSVar12) {
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
          else if (((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                  ((-1 < sVar6 &&
                   (((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)) && (sVar10 < g_worldGrid.sizeZ))))
                  )) {
            local_14 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar10 * (int)g_worldGrid.planeStride +
                        (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0];
            goto LAB_00464147;
          }
          break;
        case -1:
          goto cf_common_exit_0046401F;
        }
        goto cf_common_exit_0046351A;
      }
      if (iVar17 != 3) {
        return -1;
      }
      sVar10 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)))))) {
LAB_0046461c:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar10 * (int)g_worldGrid.planeStride +
                     (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
        }
      }
      else {
        if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
           (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10))))
        goto LAB_0046461c;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar10 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar17 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        pSVar12 = this;
        if (((iVar17 == -4) || (iVar17 = (*local_c->vtable->vfunc_F8)(), iVar17 == 0)) ||
           ((*(int *)&local_c->field_0x20 == 0x1ae &&
            (iVar17 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar17 == 0))
           )) {
          pSVar23 = *(STFishCVTable **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
        else {
          STFishC::sub_004162B0
                    (local_c,(undefined2 *)&local_10,(undefined2 *)&local_28,(undefined2 *)&local_14
                    );
          uVar11 = (int)*(short *)((int)this + 0x800) - (int)(short)local_10;
          uVar22 = (int)uVar11 >> 0x1f;
          if ((((int)((uVar11 ^ uVar22) - uVar22) < 2) &&
              (uVar11 = (int)*(short *)((int)this + 0x802) - (int)(short)local_28,
              uVar22 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar22) - uVar22) < 2)) &&
             (uVar11 = (int)*(short *)((int)this + 0x804) - (int)(short)local_14,
             uVar22 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar22) - uVar22) < 2)) {
            *(short *)((int)this + 0x804) = (short)local_14;
            *(short *)((int)this + 0x800) = (short)local_10;
            *(short *)((int)this + 0x802) = (short)local_28;
            goto LAB_0046470b;
          }
          pSVar23 = *(STFishCVTable **)this;
          local_58 = &local_4c;
          local_4c = 10000;
          local_44 = 0xff;
          local_5c = 0x110;
        }
      }
      else {
LAB_0046470b:
        thunk_FUN_00416270(local_c,(undefined2 *)&local_10,&local_28,(int *)&local_14);
        sVar10 = (**(code **)(*(int *)this + 0x10))
                           (*(undefined2 *)((int)this + 0x41),*(undefined2 *)((int)this + 0x43),
                            *(undefined2 *)((int)this + 0x45),local_10,local_28,local_14);
        uVar11 = STBoatC::sub_004176C0(this,sVar10);
        STBoatC::sub_00417910(this,(short)uVar11);
        STJellyGunC::sub_00415B30
                  (this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                   *(short *)((int)this + 0x45),(short)local_10,(short)local_28,(short)local_14,
                   *(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x7a) = 0;
        iVar17 = STJellyGunC::sub_00415ED0(this,&local_30,local_74);
        if (iVar17 == -1) {
          return -1;
        }
        if (iVar17 == 0) {
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
          if ((iVar17 != 1) ||
             (iVar17 = (*local_c->vtable->vfunc_DC)
                                 (*(undefined2 *)((int)this + 0x41),
                                  *(undefined2 *)((int)this + 0x43),
                                  *(undefined2 *)((int)this + 0x45),
                                  *(undefined2 *)((int)this + 0x34),
                                  *(undefined2 *)((int)this + 0x36),
                                  *(undefined2 *)((int)this + 0x38)), iVar17 < 0))
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
        pSVar23 = local_c->vtable;
        pSVar12 = local_c;
      }
      local_38 = 1;
      (*pSVar23->GetMessage)(pSVar12,(int)local_6c);
cf_common_exit_00464889:
      iVar17 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar17 != 0) & 0xfffffffd) + 2;
    }
    iVar17 = STBoatC::sub_00460260(this,2);
    switch(iVar17) {
    case 0:
      sVar10 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      psVar2 = (short *)((int)this + 0x802);
      local_c = (STFishC *)((int)this + 0x800);
      sVar7 = *(short *)&local_c->vtable;
      local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)))))) {
LAB_00463d56:
          local_14 = (STFishC *)0x0;
        }
        else {
          local_14 = (STFishC *)
                     g_worldGrid.cells
                     [(int)sVar10 * (int)g_worldGrid.planeStride +
                      (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
        }
      }
      else {
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
            ((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)))) || (g_worldGrid.sizeZ <= sVar10))
        goto LAB_00463d56;
        local_14 = (STFishC *)
                   g_worldGrid.cells
                   [(int)sVar10 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                    + (int)sVar7].objects[0];
      }
      if ((local_14 == (STFishC *)0x0) || (local_14->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar17 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_14);
        if (((iVar17 != -4) && (iVar17 = (*local_14->vtable->vfunc_F8)(), iVar17 != 0)) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar17 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar17 != 0)
            ))) {
          STFishC::sub_004162B0(local_14,(undefined2 *)local_c,psVar2,psVar1);
          sVar10 = *psVar1;
          sVar6 = *psVar2;
          iVar17 = (int)*(short *)&local_c->vtable;
          goto cf_common_exit_00463FD6;
        }
      }
      else {
        iVar17 = (*local_14->vtable->vfunc_F8)();
        if ((iVar17 != 0) &&
           ((*(int *)&local_14->field_0x20 != 0x1ae ||
            (iVar17 = (*local_14->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar17 != 0)
            ))) {
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
          iVar17 = (int)*(short *)&local_c->vtable;
          uVar11 = *(short *)((int)this + 0x47) - iVar17;
          uVar22 = (int)uVar11 >> 0x1f;
          if ((((int)((uVar11 ^ uVar22) - uVar22) < 2) &&
              (uVar11 = (int)*(short *)((int)this + 0x49) - (int)*psVar2,
              uVar22 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar22) - uVar22) < 2)) &&
             (uVar11 = (int)*(short *)((int)this + 0x4b) - (int)*psVar1,
             uVar22 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar22) - uVar22) < 2)) {
            *(undefined4 *)((int)this + 0x82e) = 3;
            return 2;
          }
          sVar10 = *psVar1;
          sVar6 = *psVar2;
cf_common_exit_00463FD6:
          STBoatC::sub_00481520(this,iVar17,(int)sVar6,(int)sVar10);
          STBoatC::sub_00460260(this,0);
          *(undefined2 *)((int)this + 0xf8) = 0;
switchD_004638e6_caseD_2:
          return 2;
        }
      }
      break;
    case 1:
      sVar10 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)))))) {
LAB_00463b9d:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar10 * (int)g_worldGrid.planeStride +
                     (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
        }
      }
      else {
        if ((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
           (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10))))
        goto LAB_00463b9d;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar10 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if ((local_c != (STFishC *)0x0) && (local_c->field_0018 == *(int *)((int)this + 0x7f4))) {
        iVar17 = (*local_c->vtable->vfunc_F8)();
        if (iVar17 != 0) {
          if (*(int *)&local_c->field_0x20 != 0x1ae) {
            return 2;
          }
          iVar17 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
          if (iVar17 != 0) {
            return 2;
          }
        }
        STBoatC::sub_004602B0(this);
        return 0;
      }
      STBoatC::sub_004602B0(this);
      iVar17 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
      if ((iVar17 != -4) && (iVar17 = (*local_c->vtable->vfunc_F8)(), iVar17 != 0)) {
        if (*(int *)&local_c->field_0x20 == 0x1ae) {
          iVar17 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
joined_r0x00463a7a:
          if (iVar17 == 0) break;
        }
LAB_00463a83:
        STFishC::sub_004162B0
                  (local_c,(undefined2 *)((int)this + 0x800),(undefined2 *)((int)this + 0x802),
                   (undefined2 *)((int)this + 0x804));
LAB_00463a91:
        sVar10 = *(short *)((int)this + 0x804);
        sVar6 = *(short *)((int)this + 0x802);
        iVar17 = (int)*(short *)((int)this + 0x800);
        goto cf_common_exit_00463FD6;
      }
      break;
    default:
      goto switchD_004638e6_caseD_2;
    case 3:
      sVar10 = *(short *)((int)this + 0x804);
      sVar6 = *(short *)((int)this + 0x802);
      sVar7 = *(short *)((int)this + 0x800);
      local_10 = (STFishC *)CONCAT22((short)((uint)*(int *)((int)this + 0x7fc) >> 0x10),sVar7);
      if (*(int *)((int)this + 0x7fc) == 3) {
        if (((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
           ((sVar6 < 0 ||
            (((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)) || (g_worldGrid.sizeZ <= sVar10)))))) {
LAB_004639e6:
          local_c = (STFishC *)0x0;
        }
        else {
          local_c = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar10 * (int)g_worldGrid.planeStride +
                     (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[1];
        }
      }
      else {
        if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) || (sVar6 < 0)) ||
            ((g_worldGrid.sizeY <= sVar6 || (sVar10 < 0)))) || (g_worldGrid.sizeZ <= sVar10))
        goto LAB_004639e6;
        local_c = (STFishC *)
                  g_worldGrid.cells
                  [(int)sVar10 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX
                   + (int)sVar7].objects[0];
      }
      if ((local_c == (STFishC *)0x0) || (local_c->field_0018 != *(int *)((int)this + 0x7f4))) {
        iVar17 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&local_c);
        if ((iVar17 != -4) && (iVar17 = (*local_c->vtable->vfunc_F8)(), iVar17 != 0)) {
          if (*(int *)&local_c->field_0x20 == 0x1ae) {
            iVar17 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24));
            goto joined_r0x00463a7a;
          }
          goto LAB_00463a83;
        }
      }
      else {
        iVar17 = (*local_c->vtable->vfunc_F8)();
        if ((iVar17 != 0) &&
           ((*(int *)&local_c->field_0x20 != 0x1ae ||
            (iVar17 = (*local_c->vtable->vfunc_F4)(*(undefined4 *)((int)this + 0x24)), iVar17 != 0))
           )) goto LAB_00463a91;
      }
      break;
    case -1:
      goto cf_common_exit_0046401F;
    }
    goto cf_common_exit_0046351A;
  }
  iVar17 = *(int *)((int)this + 0x82e);
  if (iVar17 == 0) {
    *(undefined4 *)((int)this + 0x82e) = 1;
    *(undefined4 *)((int)this + 0xb7) = 3;
    STBoatC::sub_00481520
              (this,(int)*(short *)((int)this + 0x800),(int)*(short *)((int)this + 0x802),
               (int)*(short *)((int)this + 0x804));
    STBoatC::sub_00460260(this,0);
    goto cf_common_exit_00464889;
  }
  if (iVar17 != 1) {
    if (iVar17 != 2) {
      if (iVar17 != 3) {
        return -1;
      }
      iVar17 = STJellyGunC::sub_00415ED0(this,local_74,(int *)&local_10);
      if (iVar17 == -1) {
        return -1;
      }
      if (iVar17 == 0) {
        local_58 = &local_4c;
        local_4c = 10000;
        local_44 = 0xff;
        local_38 = 1;
        local_5c = 0x110;
        (*(code *)**(undefined4 **)this)(local_6c);
        (**(code **)(*(int *)this + 0x90))(3,0x101);
      }
      else if (iVar17 == 1) {
        sVar10 = *(short *)((int)this + 0x800);
        sVar6 = *(short *)((int)this + 0x804);
        sVar7 = *(short *)((int)this + 0x802);
        if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
            ((-1 < sVar7 && ((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)))))) &&
           (sVar6 < g_worldGrid.sizeZ)) {
          iVar17 = (int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX +
                   (int)sVar10;
          pSVar25 = g_worldGrid.cells[iVar17].objects[0];
          if (pSVar25 != (STWorldObject *)0x0) {
            sVar10 = sVar10 >> 0xf;
            uVar20 = (undefined2)((uint)iVar17 >> 0x10);
            iVar17 = (*pSVar25->vtable[4].slots_00_28[7])
                               (CONCAT22(uVar20,*(undefined2 *)((int)this + 0x41)),
                                CONCAT22(sVar10,*(undefined2 *)((int)this + 0x43)),
                                CONCAT22(uVar20,*(undefined2 *)((int)this + 0x45)),
                                CONCAT22(sVar10,*(undefined2 *)((int)this + 0x34)),
                                CONCAT22(uVar20,*(undefined2 *)((int)this + 0x36)),
                                CONCAT22(sVar10,*(undefined2 *)((int)this + 0x38)));
            if (-1 < iVar17) {
              iVar17 = thunk_FUN_004d8870(*(char *)&pSVar25[1].vtable);
              if (200 < iVar17) {
                iVar17 = 200;
              }
              thunk_FUN_004d8800(*(char *)&pSVar25[1].vtable,iVar17);
              thunk_FUN_004d87b0(*(char *)((int)this + 0x24),iVar17);
              iVar17 = thunk_FUN_004d89b0(*(char *)&pSVar25[1].vtable);
              if (100 < iVar17) {
                iVar17 = 100;
              }
              thunk_FUN_004d8940(*(char *)&pSVar25[1].vtable,iVar17);
              thunk_FUN_004d88f0(*(char *)((int)this + 0x24),iVar17);
              iVar17 = thunk_FUN_004d8af0(*(char *)&pSVar25[1].vtable);
              if (0x5dc < iVar17) {
                iVar17 = 0x5dc;
              }
              thunk_FUN_004d8a80(*(char *)&pSVar25[1].vtable,iVar17);
              thunk_FUN_004d8a30(*(char *)((int)this + 0x24),iVar17);
              thunk_FUN_004d78e0(*(char *)&pSVar25[1].vtable);
              thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
              if (((STWorldObjectVTable *)(uint)DAT_0080874d == pSVar25[1].vtable) ||
                 ((STWorldObjectVTable *)(uint)DAT_0080874d ==
                  *(STWorldObjectVTable **)((int)this + 0x24))) {
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
                thunk_FUN_004162f0(pSVar25,(undefined2 *)((int)&local_14 + 2),
                                   (undefined2 *)((int)&local_28 + 2),local_8);
                (*pSVar25->vtable->GetObjectTypeId)(pSVar25);
                thunk_FUN_00620a00(DAT_00811798,(int)local_14._2_2_,(int)local_28._2_2_,
                                   (uint)pSVar25[1].vtable);
                iVar17 = (**(code **)(*(int *)this + 0xd8))();
                return (-(uint)(iVar17 != 0) & 0xfffffffd) + 2;
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
        iVar17 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar17 != 0) & 0xfffffffd) + 2;
      }
LAB_00463844:
      iVar17 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar17 != 0) & 0xfffffffd) + 2;
    }
    iVar17 = STBoatC::sub_00460260(this,2);
    switch(iVar17 + 1) {
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
      sVar10 = *(short *)((int)this + 0x800);
      uVar11 = CONCAT22((short)((uint)(iVar17 + 1) >> 0x10),sVar10);
      sVar6 = *(short *)((int)this + 0x804);
      pSVar19 = (STPlaySystemC *)CONCAT22(extraout_var_02,sVar6);
      sVar7 = *(short *)((int)this + 0x802);
      psVar1 = (short *)((int)this + 0x804);
      if (((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
          ((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)))) && (sVar6 < g_worldGrid.sizeZ)) {
        pSVar19 = (STPlaySystemC *)
                  ((int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX +
                  (int)sVar10);
        pSVar12 = (STFishC *)g_worldGrid.cells[(int)pSVar19].objects[0];
        uVar11 = (int)sVar10;
        local_14 = pSVar12;
        if (((pSVar12 != (STFishC *)0x0) &&
            (uVar22 = *(uint *)&pSVar12->field_0x24, uVar11 = uVar22, uVar22 < 8)) &&
           ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
            (uVar11 = uVar22 * 9, pSVar19 = PTR_00802a38, (byte)(&DAT_008087e9)[uVar22 * 0x51] < 8))
           )) {
          bVar9 = pSVar12->field_0x24;
          bVar3 = *(byte *)((int)this + 0x24);
          local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar9);
          local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
          if (DAT_00808a8f == '\0') {
            if (bVar9 == bVar3) {
LAB_00462fde:
              iVar17 = 0;
            }
            else {
              bVar4 = g_playerRelationMatrix[bVar9][bVar3];
              if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
                iVar17 = -2;
              }
              else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
                iVar17 = -1;
              }
              else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 1)) {
                iVar17 = 1;
              }
              else {
                if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][bVar9] != 1)) goto LAB_00462fde;
                iVar17 = 2;
              }
            }
            pSVar16 = (STPlaySystemC *)(uint)(iVar17 < 0);
            pSVar19 = pSVar16;
          }
          else {
            pSVar16 = (STPlaySystemC *)
                      (uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] !=
                            (&DAT_008087ea)[(uint)bVar9 * 0x51]);
            pSVar19 = (STPlaySystemC *)
                      CONCAT31((int3)((uint)bVar3 * 9 >> 8),(&DAT_008087ea)[(uint)bVar3 * 0x51]);
          }
          uVar11 = 0;
          if ((pSVar16 != (STPlaySystemC *)0x0) &&
             ((uVar11 = (*pSVar12->vtable->vfunc_2C)((STWorldObject *)pSVar12),
              pSVar19 = extraout_ECX_00, uVar20 = extraout_var_04, uVar11 == 0x3b ||
              (uVar11 = (*pSVar12->vtable->vfunc_2C)((STWorldObject *)pSVar12),
              pSVar19 = extraout_ECX_01, uVar20 = extraout_var_05, uVar11 == 0x60)))) {
            sVar10 = *(short *)((int)this + 0xd7);
            local_24 = CONCAT22((short)(uVar11 >> 0x10),sVar10);
            sVar6 = *(short *)((int)this + 0xdb);
            local_1c = CONCAT22((short)((uint)pSVar19 >> 0x10),sVar6);
            sVar7 = *(short *)((int)this + 0xdf);
            local_20 = CONCAT22(uVar20,sVar7);
            if ((sVar10 < 0) ||
               ((((g_worldGrid.sizeX <= sVar10 || (sVar6 < 0)) || (g_worldGrid.sizeY <= sVar6)) ||
                ((sVar7 < 0 || (g_worldGrid.sizeZ <= sVar7)))))) {
              pSVar21 = (STFishC *)0x0;
            }
            else {
              pSVar21 = (STFishC *)
                        g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar7 +
                         (int)g_worldGrid.sizeX * (int)sVar6 + (int)sVar10].objects[0];
              pSVar12 = local_14;
            }
            if (pSVar12 != pSVar21) {
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
                       sVar6 * 0xc9 + 100,sVar7 * 200 + 100,*(byte *)((int)this + 0x61));
            *(undefined4 *)((int)this + 0x7a) = 0;
            return 2;
          }
        }
      }
      pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar19 >> 8),
                                            *(undefined1 *)((int)this + 0x24)),
                                   CONCAT22((short)(uVar11 >> 0x10),
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
  iVar17 = STBoatC::sub_00460260(this,2);
  switch(iVar17) {
  case 0:
    sVar10 = *(short *)((int)this + 0x804);
    pSVar18 = (STWorldCell *)CONCAT22(extraout_var_00,sVar10);
    sVar6 = *(short *)((int)this + 0x802);
    local_c = (STFishC *)((int)this + 0x800);
    psVar1 = (short *)((int)this + 0x804);
    psVar2 = (short *)((int)this + 0x802);
    sVar7 = *(short *)&local_c->vtable;
    local_10 = (STFishC *)CONCAT22((short)((uint)local_c >> 0x10),sVar7);
    pSVar12 = local_10;
    if (((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
        (((sVar6 < g_worldGrid.sizeY && (-1 < sVar10)) &&
         ((sVar10 < g_worldGrid.sizeZ &&
          ((local_14 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar10 * (int)g_worldGrid.planeStride +
                        (int)sVar6 * (int)g_worldGrid.sizeX + (int)sVar7].objects[0],
           pSVar12 = local_14, pSVar18 = g_worldGrid.cells, local_14 != (STFishC *)0x0 &&
           (pSVar15 = *(STWorldCell **)&local_14->field_0x24, pSVar18 = pSVar15,
           pSVar15 < (STWorldCell *)0x8)))))))) &&
       ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
        (pSVar18 = (STWorldCell *)((int)pSVar15 * 9), (byte)(&DAT_008087e9)[(int)pSVar15 * 0x51] < 8
        )))) {
      bVar9 = local_14->field_0x24;
      bVar3 = *(byte *)((int)this + 0x24);
      pSVar18 = (STWorldCell *)CONCAT31((int3)((uint)pSVar18 >> 8),bVar3);
      local_10._1_3_ = (undefined3)((uint)local_10 >> 8);
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar9);
      local_28 = CONCAT31(local_28._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar9 == bVar3) {
LAB_00462c49:
          iVar17 = 0;
        }
        else {
          pSVar18 = (STWorldCell *)(uint)bVar3;
          cVar5 = *(char *)((int)pSVar18[bVar9 + 0x101149].objects + 7);
          if ((cVar5 == '\0') && (g_playerRelationMatrix[(int)pSVar18][bVar9] == 0)) {
            iVar17 = -2;
          }
          else if ((cVar5 == '\x01') && (g_playerRelationMatrix[(int)pSVar18][bVar9] == 0)) {
            iVar17 = -1;
          }
          else if ((cVar5 == '\0') && (g_playerRelationMatrix[(int)pSVar18][bVar9] == 1)) {
            iVar17 = 1;
          }
          else {
            if ((cVar5 != '\x01') || (g_playerRelationMatrix[(int)pSVar18][bVar9] != 1))
            goto LAB_00462c49;
            iVar17 = 2;
          }
        }
        pSVar15 = (STWorldCell *)(uint)(iVar17 < 0);
      }
      else {
        pSVar15 = (STWorldCell *)
                  (uint)((&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar9 * 0x51])
        ;
        pSVar18 = pSVar15;
      }
      pSVar12 = (STFishC *)0x0;
      if ((pSVar15 != (STWorldCell *)0x0) &&
         ((iVar17 = (*local_14->vtable->vfunc_2C)((STWorldObject *)local_14), iVar17 == 0x3b ||
          (pSVar12 = (STFishC *)(*local_14->vtable->vfunc_2C)(), pSVar18 = extraout_ECX,
          pSVar12 == (STFishC *)0x60)))) {
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
    pSVar14 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar18 >> 8),
                                          *(undefined1 *)((int)this + 0x24)),
                                 CONCAT22((short)((uint)pSVar12 >> 0x10),
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
    sVar10 = *(short *)((int)this + 0x800);
    sVar6 = *(short *)((int)this + 0x804);
    sVar7 = *(short *)((int)this + 0x802);
    if ((((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
         ((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)))) && (sVar6 < g_worldGrid.sizeZ)) &&
       (((pSVar25 = g_worldGrid.cells
                    [(int)sVar6 * (int)g_worldGrid.planeStride + (int)sVar7 * (int)g_worldGrid.sizeX
                     + (int)sVar10].objects[0], pSVar25 != (STWorldObject *)0x0 &&
         (pSVar25[1].vtable < (STWorldObjectVTable *)0x8)) &&
        ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
         ((byte)(&DAT_008087e9)[(int)pSVar25[1].vtable * 0x51] < 8)))))) {
      bVar9 = *(byte *)&pSVar25[1].vtable;
      bVar3 = *(byte *)((int)this + 0x24);
      local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar9);
      local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
      if (DAT_00808a8f == '\0') {
        if (bVar9 == bVar3) {
LAB_00462a36:
          iVar17 = 0;
        }
        else {
          bVar4 = g_playerRelationMatrix[bVar9][bVar3];
          if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
            iVar17 = -2;
          }
          else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
            iVar17 = -1;
          }
          else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 1)) {
            iVar17 = 1;
          }
          else {
            if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][bVar9] != 1)) goto LAB_00462a36;
            iVar17 = 2;
          }
        }
        bVar26 = iVar17 < 0;
      }
      else {
        bVar26 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar9 * 0x51];
      }
      if (bVar26) {
        iVar17 = (*pSVar25->vtable->GetObjectTypeId)(pSVar25);
        if (iVar17 == 0x3b) {
          return 2;
        }
        iVar17 = (*pSVar25->vtable->GetObjectTypeId)(pSVar25);
        if (iVar17 == 0x60) {
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
  sVar10 = *(short *)((int)this + 0x800);
  sVar6 = *(short *)((int)this + 0x804);
  sVar7 = *(short *)((int)this + 0x802);
  if ((((-1 < sVar10) && (sVar10 < g_worldGrid.sizeX)) &&
      ((-1 < sVar7 && (((sVar7 < g_worldGrid.sizeY && (-1 < sVar6)) && (sVar6 < g_worldGrid.sizeZ)))
       ))) && (((pSVar25 = g_worldGrid.cells
                           [(int)sVar6 * (int)g_worldGrid.planeStride +
                            (int)sVar7 * (int)g_worldGrid.sizeX + (int)sVar10].objects[0],
                pSVar25 != (STWorldObject *)0x0 && (pSVar25[1].vtable < (STWorldObjectVTable *)0x8))
               && ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                   ((byte)(&DAT_008087e9)[(int)pSVar25[1].vtable * 0x51] < 8)))))) {
    bVar9 = *(byte *)&pSVar25[1].vtable;
    bVar3 = *(byte *)((int)this + 0x24);
    local_10 = (STFishC *)CONCAT31(local_10._1_3_,bVar9);
    local_c = (STFishC *)CONCAT31(local_c._1_3_,bVar3);
    if (DAT_00808a8f == '\0') {
      if (bVar9 == bVar3) {
LAB_00463442:
        iVar17 = 0;
      }
      else {
        bVar4 = g_playerRelationMatrix[bVar9][bVar3];
        if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
          iVar17 = -2;
        }
        else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][bVar9] == 0)) {
          iVar17 = -1;
        }
        else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][bVar9] == 1)) {
          iVar17 = 1;
        }
        else {
          if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][bVar9] != 1)) goto LAB_00463442;
          iVar17 = 2;
        }
      }
      bVar26 = iVar17 < 0;
    }
    else {
      bVar26 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)bVar9 * 0x51];
    }
    if (bVar26) {
      iVar17 = (*pSVar25->vtable->GetObjectTypeId)(pSVar25);
      if (iVar17 == 0x3b) {
        return 2;
      }
      iVar17 = (*pSVar25->vtable->GetObjectTypeId)(pSVar25);
      if (iVar17 == 0x60) {
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
  iVar17 = 0;
cf_common_exit_0046351C:
  return iVar17;
}

