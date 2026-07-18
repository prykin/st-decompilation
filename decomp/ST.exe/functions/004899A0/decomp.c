
undefined4 __thiscall FUN_004899a0(void *this,undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  void *this_00;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  int iVar9;
  uint uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int local_70;
  short local_6c;
  int local_6a;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  short local_40;
  ushort uStack_3e;
  undefined2 local_3c;
  int local_38;
  int local_34;
  ushort *local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_34 = 0;
  local_20 = (undefined4 *)0x0;
  if ((*(int *)((int)this + 0x79a) == 0) || (0 < *(int *)((int)this + 0x73a))) {
    *(undefined4 *)((int)this + 0x483) = 0;
    *(undefined4 *)((int)this + 0x487) = 0xffffffff;
    *(undefined4 *)((int)this + 0x48b) = 0xffff;
    *(undefined4 *)((int)this + 0x47f) = 0;
LAB_0048a37f:
    local_1c = 1;
  }
  else {
    iVar9 = *(int *)((int)this + 0x47f) + 1;
    *(int *)((int)this + 0x47f) = iVar9;
    if (*(uint *)((int)this + 0x48b) == 0xffff) {
      if (iVar9 % 0x14 != 0) goto LAB_0048a37f;
    }
    else {
      local_8 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)iVar9 >> 8),
                                                   *(undefined1 *)((int)this + 0x487)),
                                          *(uint *)((int)this + 0x48b),
                                          *(undefined4 *)((int)this + 0x483));
      if ((((local_8 != (int *)0x0) && (iVar9 = (**(code **)(*local_8 + 0xf8))(), iVar9 == 1)) &&
          (iVar9 = (**(code **)(*local_8 + 0xf0))(), iVar9 == 1)) &&
         ((iVar9 = (**(code **)(*local_8 + 0xf4))(*(undefined4 *)((int)this + 0x24)), iVar9 == 1 &&
          (*(int *)((int)this + 0x47f) % 0x28 != 0)))) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x483) = 0;
    *(undefined4 *)((int)this + 0x487) = 0xffffffff;
    *(undefined4 *)((int)this + 0x48b) = 0xffff;
    *(undefined4 *)((int)this + 0x47f) = 0;
    local_1c = 1;
    switch(param_1) {
    case 0:
      STBoatC::_CheckDefenceShots(this,0);
      puVar3 = thunk_FUN_0043f7b0(*(byte *)((int)this + 0x24),this,
                                  (int)*(short *)((int)this + 0x475),
                                  (int)*(short *)((int)this + 0x477),2,(int *)0x6,6,2,
                                  (uint)(*(int *)((int)this + 0x736) != 0));
      if (puVar3 != (uint *)0x0) {
        this_00 = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                      *(undefined1 *)((int)this + 0x24)),
                                             CONCAT22((short)((uint)puVar3 >> 0x10),
                                                      *(undefined2 *)((int)this + 0x30)));
        local_20 = thunk_FUN_0040c080(this_00,(uint)*(ushort *)((int)this + 0x32),(int)puVar3);
        local_18 = 0;
        if (0 < (int)puVar3[3]) {
          do {
            iVar9 = local_20[local_18];
            if ((iVar9 != -4) && (iVar9 < 9)) {
              iVar6 = (8 - iVar9) * 0x32;
              FUN_006acc70((int)puVar3,local_18,&local_8);
              iVar9 = (**(code **)(*local_8 + 0xf8))();
              if ((iVar9 != 0) &&
                 ((iVar9 = (**(code **)(*local_8 + 0xf0))(), iVar9 != 0 &&
                  (iVar9 = (**(code **)(*local_8 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
                  iVar9 != 0)))) {
                iVar9 = (**(code **)(*local_8 + 0xfc))();
                if (0 < iVar9) {
                  iVar6 = iVar6 + 300;
                }
                iVar9 = *(int *)((int)local_8 + 0x219);
                iVar1 = *(int *)((int)local_8 + 0x215);
                iVar7 = (**(code **)(*local_8 + 0x7c))();
                local_38 = iVar6 + ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) + iVar1 + iVar7 * 2;
                if ((((uint)*(ushort *)((int)local_8 + 0x32) == *(uint *)((int)this + 0x48b)) &&
                    (local_8[9] == *(int *)((int)this + 0x487))) &&
                   (((*(int *)((int)this + 0x483) == 1 &&
                     (((iVar9 = local_8[8], iVar9 == 0x14 || (iVar9 == 1000)) || (iVar9 == 0x3e9))))
                    || ((*(int *)((int)this + 0x483) == 3 && (local_8[8] == 0x1ae)))))) {
                  local_38 = local_38 + 200;
                }
                iVar9 = local_38;
                thunk_FUN_00416270(local_8,(undefined2 *)&local_14,(undefined2 *)&local_10,
                                   (undefined2 *)&local_c);
                iVar6 = FUN_006acf0d((int)*(short *)((int)this + 0x41),
                                     (int)*(short *)((int)this + 0x43),
                                     (int)*(short *)((int)this + 0x45),(int)(short)local_14,
                                     (int)(short)local_10,(int)(short)local_c);
                if ((iVar6 == 0) ||
                   (uVar4 = (int)(short)local_c - (int)*(short *)((int)this + 0x45),
                   uVar10 = (int)uVar4 >> 0x1f, (int)(((uVar4 ^ uVar10) - uVar10) * 10) / iVar6 < 4)
                   ) {
                  local_24 = (**(code **)(*(int *)this + 0x10))
                                       (*(undefined2 *)((int)this + 0x41),
                                        *(undefined2 *)((int)this + 0x43),
                                        *(undefined2 *)((int)this + 0x45),local_14,local_10,local_c)
                  ;
                  local_2c = 0;
                  if (*(char *)((int)this + 0x2b2) != '\0') {
                    local_30 = (ushort *)((int)this + 0x2a8);
                    do {
                      puVar5 = (undefined4 *)
                               thunk_FUN_0041dc40(local_48,*(undefined4 *)(local_30 + -1),
                                                  local_30[1],(short)local_24);
                      local_40 = (short)*puVar5;
                      uStack_3e = (ushort)((uint)*puVar5 >> 0x10);
                      sVar11 = *(short *)((int)this + 0x43) - uStack_3e;
                      sVar12 = *(short *)((int)this + 0x41) + local_40;
                      local_28 = CONCAT22((short)((uint)puVar5 >> 0x10),
                                          *(short *)((int)this + 0x45) + *(short *)(puVar5 + 1));
                      uStack_3e = *local_30;
                      local_40 = 0;
                      puVar5 = (undefined4 *)
                               thunk_FUN_0041dc40(local_50,(uint)uStack_3e << 0x10,0,(short)local_24
                                                 );
                      local_40 = (short)*puVar5;
                      uStack_3e = (ushort)((uint)*puVar5 >> 0x10);
                      local_3c = *(undefined2 *)(puVar5 + 1);
                      sVar13 = (short)local_14 + local_40;
                      sVar14 = (short)local_10 - uStack_3e;
                      if (*(int *)((int)this + 0x736) == 0) {
                        iVar6 = STSprGameObjC::CheckRay
                                          (this,sVar12,sVar11,(short)local_28,sVar13,sVar14,
                                           (short)local_c,*(int *)((int)this + 0x79a),(int *)0x0,0);
                        iVar9 = local_38;
                      }
                      else {
                        iVar6 = STSprGameObjC::CheckRay
                                          (this,sVar12,sVar11,(short)local_28,sVar13,sVar14,
                                           (short)local_c,*(int *)((int)this + 0x79a),(int *)0x0,1);
                        iVar9 = local_38;
                      }
                      local_38 = iVar9;
                      if (iVar6 == 0) {
                        if (*(int *)((int)this + 0x7e6) != 0) goto LAB_00489eb0;
                        goto LAB_00489dfc;
                      }
                      local_2c = local_2c + 1;
                      local_30 = local_30 + 3;
                    } while (local_2c < (int)(uint)*(byte *)((int)this + 0x2b2));
                  }
                  iVar9 = iVar9 + 200;
                }
LAB_00489dfc:
                if (((local_8[8] != 0x1ae) && (iVar6 = *(int *)((int)this + 0x47b), iVar6 != 0)) &&
                   (uVar4 = 0, 0 < *(int *)(iVar6 + 0xc))) {
                  do {
                    FUN_006acc70(iVar6,uVar4,&local_70);
                    if ((local_6c == *(short *)((int)local_8 + 0x32)) && (local_70 == local_8[9])) {
                      iVar9 = iVar9 + local_6a;
                      break;
                    }
                    iVar6 = *(int *)((int)this + 0x47b);
                    uVar4 = uVar4 + 1;
                  } while ((int)uVar4 < *(int *)(iVar6 + 0xc));
                }
                if ((*(int *)((int)this + 0x6f7) == 0x1c) &&
                   (iVar6 = (**(code **)(*local_8 + 0x120))(), iVar6 == 1)) {
                  iVar9 = iVar9 / 0x14;
                }
                if (local_34 < iVar9) {
                  *(int *)((int)this + 0x487) = local_8[9];
                  *(uint *)((int)this + 0x48b) = (uint)*(ushort *)((int)local_8 + 0x32);
                  *(uint *)((int)this + 0x483) = (-(uint)(local_8[8] != 0x1ae) & 0xfffffffe) + 3;
                  local_34 = iVar9;
                }
              }
            }
LAB_00489eb0:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)puVar3[3]);
        }
        FUN_006ae110((byte *)puVar3);
        if (*(int *)((int)this + 0x48b) != 0xffff) {
          local_1c = 0;
        }
      }
      if (local_20 != (undefined4 *)0x0) {
        FUN_006ab060(&local_20);
        return local_1c;
      }
      break;
    case 1:
    case 2:
    case 3:
      STBoatC::_CheckDefenceShots(this,0);
      if (*(int *)((int)this + 0x736) == 0) {
        puVar3 = thunk_FUN_0043f7b0(*(byte *)((int)this + 0x24),this,
                                    (int)*(short *)((int)this + 0x475),
                                    (int)*(short *)((int)this + 0x477),2,(int *)0x6,6,2,0);
      }
      else {
        puVar3 = thunk_FUN_0043f7b0(*(byte *)((int)this + 0x24),this,
                                    (int)*(short *)((int)this + 0x475),
                                    (int)*(short *)((int)this + 0x477),2,(int *)0x6,6,2,1);
      }
      if (puVar3 != (uint *)0x0) {
        local_18 = 0;
        if (0 < (int)puVar3[3]) {
          do {
            FUN_006acc70((int)puVar3,local_18,&local_8);
            iVar9 = (**(code **)(*local_8 + 0xf8))();
            if (((iVar9 != 0) && (iVar9 = (**(code **)(*local_8 + 0xf0))(), iVar9 != 0)) &&
               (iVar9 = (**(code **)(*local_8 + 0xf4))(*(undefined4 *)((int)this + 0x24)),
               iVar9 != 0)) {
              thunk_FUN_00416270(local_8,(undefined2 *)&local_14,(undefined2 *)&local_10,
                                 (undefined2 *)&local_c);
              iVar9 = FUN_006acf0d((int)*(short *)((int)this + 0x41),
                                   (int)*(short *)((int)this + 0x43),
                                   (int)*(short *)((int)this + 0x45),(int)(short)local_14,
                                   (int)(short)local_10,(int)(short)local_c);
              local_38 = iVar9;
              if ((iVar9 == 0) ||
                 (uVar4 = (int)(short)local_c - (int)*(short *)((int)this + 0x45),
                 uVar10 = (int)uVar4 >> 0x1f, (int)(((uVar4 ^ uVar10) - uVar10) * 10) / iVar9 < 4))
              {
                local_24 = (**(code **)(*(int *)this + 0x10))
                                     (*(undefined2 *)((int)this + 0x41),
                                      *(undefined2 *)((int)this + 0x43),
                                      *(undefined2 *)((int)this + 0x45),local_14,local_10,local_c);
                local_2c = 0;
                if (*(char *)((int)this + 0x2b2) != '\0') {
                  local_30 = (ushort *)((int)this + 0x2a8);
                  do {
                    puVar5 = (undefined4 *)
                             thunk_FUN_0041dc40(local_58,*(undefined4 *)(local_30 + -1),local_30[1],
                                                (short)local_24);
                    local_40 = (short)*puVar5;
                    uStack_3e = (ushort)((uint)*puVar5 >> 0x10);
                    sVar11 = *(short *)((int)this + 0x43) - uStack_3e;
                    sVar12 = *(short *)((int)this + 0x41) + local_40;
                    local_28 = CONCAT22((short)((uint)puVar5 >> 0x10),
                                        *(short *)((int)this + 0x45) + *(short *)(puVar5 + 1));
                    uStack_3e = *local_30;
                    local_40 = 0;
                    puVar5 = (undefined4 *)
                             thunk_FUN_0041dc40(local_60,(uint)uStack_3e << 0x10,0,(short)local_24);
                    local_40 = (short)*puVar5;
                    uStack_3e = (ushort)((uint)*puVar5 >> 0x10);
                    local_3c = *(undefined2 *)(puVar5 + 1);
                    sVar13 = (short)local_14 + local_40;
                    sVar14 = (short)local_10 - uStack_3e;
                    if (*(int *)((int)this + 0x736) == 0) {
                      iVar6 = STSprGameObjC::CheckRay
                                        (this,sVar12,sVar11,(short)local_28,sVar13,sVar14,
                                         (short)local_c,*(int *)((int)this + 0x79a),(int *)0x0,0);
                      iVar9 = local_38;
                    }
                    else {
                      iVar6 = STSprGameObjC::CheckRay
                                        (this,sVar12,sVar11,(short)local_28,sVar13,sVar14,
                                         (short)local_c,*(int *)((int)this + 0x79a),(int *)0x0,1);
                      iVar9 = local_38;
                    }
                    local_38 = iVar9;
                    if (iVar6 == 0) goto LAB_0048a2dd;
                    local_2c = local_2c + 1;
                    local_30 = local_30 + 3;
                  } while (local_2c < (int)(uint)*(byte *)((int)this + 0x2b2));
                }
                iVar6 = ((int)*(short *)((int)this + 0x816) - iVar9 / 0xc9) * 0x32;
                iVar9 = (**(code **)(*local_8 + 0xfc))();
                if (0 < iVar9) {
                  iVar6 = iVar6 + 300;
                }
                iVar9 = *(int *)((int)local_8 + 0x219);
                iVar1 = *(int *)((int)local_8 + 0x215);
                iVar7 = (**(code **)(*local_8 + 0x7c))();
                iVar9 = iVar6 + ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) + iVar1 + iVar7 * 2;
                if (((uint)*(ushort *)((int)local_8 + 0x32) == *(uint *)((int)this + 0x48b)) &&
                   (local_8[9] == *(int *)((int)this + 0x487))) {
                  if ((*(int *)((int)this + 0x483) == 1) &&
                     (((iVar6 = local_8[8], iVar6 == 0x14 || (iVar6 == 1000)) || (iVar6 == 0x3e9))))
                  {
LAB_0048a226:
                    iVar9 = iVar9 + 200;
                    goto LAB_0048a22c;
                  }
                  if (*(int *)((int)this + 0x483) != 3) goto LAB_0048a22c;
                  if (local_8[8] == 0x1ae) goto LAB_0048a226;
LAB_0048a235:
                  iVar6 = *(int *)((int)this + 0x47b);
                  if ((iVar6 != 0) && (uVar4 = 0, 0 < *(int *)(iVar6 + 0xc))) {
                    do {
                      FUN_006acc70(iVar6,uVar4,&local_70);
                      if ((local_6c == *(short *)((int)local_8 + 0x32)) && (local_70 == local_8[9]))
                      {
                        iVar9 = iVar9 + local_6a;
                        break;
                      }
                      iVar6 = *(int *)((int)this + 0x47b);
                      uVar4 = uVar4 + 1;
                    } while ((int)uVar4 < *(int *)(iVar6 + 0xc));
                  }
                }
                else {
LAB_0048a22c:
                  if (local_8[8] != 0x1ae) goto LAB_0048a235;
                }
                if ((*(int *)((int)this + 0x6f7) == 0x1c) &&
                   (iVar6 = (**(code **)(*local_8 + 0x120))(), iVar6 == 1)) {
                  iVar9 = iVar9 / 0x14;
                }
                if (local_34 < iVar9) {
                  *(int *)((int)this + 0x487) = local_8[9];
                  *(uint *)((int)this + 0x48b) = (uint)*(ushort *)((int)local_8 + 0x32);
                  *(uint *)((int)this + 0x483) = (-(uint)(local_8[8] != 0x1ae) & 0xfffffffe) + 3;
                  local_34 = iVar9;
                }
              }
            }
LAB_0048a2dd:
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)puVar3[3]);
        }
        FUN_006ae110((byte *)puVar3);
        if (*(int *)((int)this + 0x48b) != 0xffff) {
          return 0;
        }
      }
      break;
    case 0xffffffff:
      return 1;
    default:
      iVar9 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4677,0,0,&DAT_007a4ccc);
      if (iVar9 != 0) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      FUN_006a5e40(0,DAT_007ed77c,0x7a9d3c,0x4678);
      return 0xffffffff;
    }
  }
  return local_1c;
}

