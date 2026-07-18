
DWORD FUN_006b9b40(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8,byte param_9,int param_10)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  DWORD DVar6;
  LPBITMAPINFO ptVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  LOGPALETTE local_7fc [128];
  undefined4 local_3f8 [95];
  undefined4 local_27c;
  uint local_278;
  uint local_274;
  uint local_238;
  uint local_234;
  int local_1f4;
  int local_1f0;
  byte local_1d0;
  undefined4 local_100;
  undefined4 local_fc [16];
  uint local_bc [4];
  int local_ac [5];
  undefined4 local_98;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  uint local_44;
  undefined4 local_30 [3];
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_10;
  undefined4 local_c;
  DWORD local_8;
  
  bVar1 = param_9;
  _param_9 = (UINT)param_9;
  uVar14 = param_1[1];
  local_10 = uVar14;
  if ((param_1[2] & 1) != 0) {
    if ((param_1[2] & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    (**(code **)(*(int *)param_1[0xc] + 0x4c))((int *)param_1[0xc]);
    if ((param_1[2] & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
  }
  if ((param_2 & 0x40) != 0) {
    param_2 = param_2 | 0x2000001;
  }
  if (((((param_2 & 1) == 0) || (param_3 == 0)) || (param_4 == 0)) || (param_5 == 0)) {
    if ((param_2 & 0x10) == 0) {
      uVar11 = param_2 & 0xfdffffbe | 8;
    }
    else {
      uVar11 = param_2 & 0xddffffbe;
    }
  }
  else {
    uVar11 = param_2 & 0xdffffff7 | 0x10;
  }
  if ((uVar11 & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  }
  piVar13 = (int *)param_1[0xc];
  local_8 = (**(code **)(*piVar13 + 0x50))(piVar13,uVar14,uVar11 & 0xc0ffffff);
  if (local_8 == 0) {
    param_1[2] = uVar11;
    param_1[3] = 0;
    if ((((uVar11 & 0x8000001) == 0) || (param_3 == 0)) ||
       ((param_4 == 0 ||
        ((param_5 == 0 ||
         (local_8 = (**(code **)(*(int *)param_1[0xc] + 0x54))
                              ((int *)param_1[0xc],param_3,param_4,param_5,0,0), local_8 == 0))))))
    {
      local_8 = 0;
      if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)*param_1);
        *param_1 = 0;
      }
      if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0x12d]);
        param_1[0x12d] = 0;
      }
      if ((HGDIOBJ)param_1[0x125] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0x125]);
        param_1[0x125] = 0;
      }
      piVar5 = (int *)param_1[0x10];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        param_1[0x10] = 0;
      }
      piVar5 = (int *)param_1[0x11];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        param_1[0x11] = 0;
      }
      piVar5 = (int *)param_1[0x12];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        param_1[0x12] = 0;
      }
      piVar5 = (int *)param_1[0xf];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        param_1[0xf] = 0;
      }
      piVar5 = (int *)param_1[0xe];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        param_1[0xe] = 0;
      }
      piVar5 = (int *)param_1[0xd];
      puVar10 = param_1 + 0xd;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *puVar10 = 0;
      }
      FUN_006ab060(param_1 + 0x130);
      FUN_006ab060(param_1 + 0x137);
      if ((HGDIOBJ)param_1[0x138] != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)param_1[0x138]);
      }
      local_27c = 0x17c;
      local_3f8[0] = 0x17c;
      (**(code **)(*(int *)param_1[0xc] + 0x2c))((int *)param_1[0xc],&local_27c,local_3f8);
      if ((local_274 & 0x20000) != 0) {
        param_1[3] = param_1[3] | 0x400;
      }
      param_1[7] = param_7;
      piVar5 = local_ac;
      for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      param_1[6] = param_6;
      local_ac[0] = 0x7c;
      local_ac[1] = 1;
      local_44 = 0x200;
      if ((uVar11 & 0x2000000) == 0) {
        if ((uVar11 & 0x20000000) == 0) {
          local_8 = (**(code **)(*(int *)param_1[0xc] + 0x18))
                              ((int *)param_1[0xc],local_ac,puVar10,0);
          if (local_8 == 0) {
            local_30[0] = 0x20;
            local_8 = (**(code **)(*(int *)*puVar10 + 0x54))((int *)*puVar10,local_30);
            if (local_8 == 0) {
              param_1[9] = local_24;
              local_8 = 0;
              if (local_24 == 0x10) {
                param_1[0x131] = local_20;
                param_1[0x132] = local_1c;
                param_1[0x133] = local_18;
                iVar9 = 0;
                for (uVar3 = local_20; (uVar3 & 0x8000) == 0; uVar3 = uVar3 << 1) {
                  iVar9 = iVar9 + 1;
                }
                iVar12 = 0;
                for (uVar3 = local_1c; (uVar3 & 0x8000) == 0; uVar3 = uVar3 << 1) {
                  iVar12 = iVar12 + 1;
                }
                iVar4 = 0;
                for (uVar3 = local_18; (uVar3 & 0x8000) == 0; uVar3 = uVar3 << 1) {
                  iVar4 = iVar4 + 1;
                }
              }
              else {
                if (local_24 < 0x11) goto LAB_006b9fe8;
                iVar9 = 0;
                param_1[0x131] = local_20;
                param_1[0x132] = local_1c;
                param_1[0x133] = local_18;
                for (uVar3 = local_20; (uVar3 & 0x800000) == 0; uVar3 = uVar3 << 1) {
                  iVar9 = iVar9 + 1;
                }
                iVar12 = 0;
                for (uVar3 = local_1c; (uVar3 & 0x800000) == 0; uVar3 = uVar3 << 1) {
                  iVar12 = iVar12 + 1;
                }
                iVar4 = 0;
                for (uVar3 = local_18; (uVar3 & 0x800000) == 0; uVar3 = uVar3 << 1) {
                  iVar4 = iVar4 + 1;
                }
              }
              param_1[0x134] = iVar9;
              param_1[0x135] = iVar12;
              param_1[0x136] = iVar4;
              goto LAB_006b9fe8;
            }
          }
        }
        else {
          param_1[9] = 0;
LAB_006b9fe8:
          piVar5 = local_ac;
          for (iVar9 = 0x1f; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar5 = 0;
            piVar5 = piVar5 + 1;
          }
          local_ac[0] = 0x7c;
          local_ac[1] = 7;
          local_44 = 0x40;
          if (((uVar11 & 0x1000000) != 0) && ((local_278 & 0x200) == 0)) {
            local_44 = 0x840;
          }
          if (param_5 == 8) {
            if (param_1[9] != 8) {
              local_44 = local_44 | 0x800;
              param_1[3] = param_1[3] | 0x800;
            }
            local_ac[1] = 0x1007;
            local_64 = 0x20;
            local_60 = 0x60;
            local_58 = 8;
          }
          local_ac[3] = param_6;
          local_ac[2] = param_7;
          local_8 = (**(code **)(*(int *)param_1[0xc] + 0x18))
                              ((int *)param_1[0xc],local_ac,param_1 + 0x10,0);
          if (((local_8 == 0) &&
              (local_8 = (**(code **)(*(int *)param_1[0xc] + 0x10))
                                   ((int *)param_1[0xc],0,param_1 + 0xe,0), local_8 == 0)) &&
             (local_8 = (**(code **)(*(int *)param_1[0xe] + 0x20))((int *)param_1[0xe],0,local_10),
             local_8 == 0)) {
            piVar5 = (int *)param_1[0xd];
            DVar6 = 0;
            if ((piVar5 == (int *)0x0) ||
               (local_8 = (**(code **)(*piVar5 + 0x70))(piVar5,param_1[0xe]), DVar6 = local_8,
               local_8 == 0)) {
LAB_006ba0f9:
              local_8 = DVar6;
              param_1[0x123] = param_6;
              param_1[0x124] = param_7;
              if ((param_5 == 0) || (param_5 == 0x10)) {
                local_30[0] = 0x20;
                local_8 = (**(code **)(*(int *)param_1[0x10] + 0x54))((int *)param_1[0x10],local_30)
                ;
                if (local_8 != 0) goto LAB_006ba490;
                param_1[8] = local_24;
                local_8 = 0;
                if (local_24 == 0x10) {
                  param_1[0x131] = local_20;
                  param_1[0x132] = local_1c;
                  param_1[0x133] = local_18;
                  iVar9 = 0;
                  for (; (local_20 & 0x8000) == 0; local_20 = local_20 << 1) {
                    iVar9 = iVar9 + 1;
                  }
                  iVar12 = 0;
                  for (; (local_1c & 0x8000) == 0; local_1c = local_1c << 1) {
                    iVar12 = iVar12 + 1;
                  }
                  iVar4 = 0;
                  for (; (local_18 & 0x8000) == 0; local_18 = local_18 << 1) {
                    iVar4 = iVar4 + 1;
                  }
                  param_1[0x134] = iVar9;
                  param_1[0x135] = iVar12;
                  param_1[0x136] = iVar4;
                }
              }
              else {
                param_1[8] = param_5;
              }
              iVar9 = 0;
              param_1[10] = (int)(param_1[8] + 7 + (param_1[8] + 7 >> 0x1f & 7U)) >> 3;
              if (((param_1[2] & 0x20000001) == 0) && ((int)param_1[9] < 9)) {
                if (bVar1 < 10) {
                  _param_9 = 10;
                  iVar9 = 10 - (uint)bVar1;
                  param_10 = param_10 - iVar9;
                }
                if (0xf6 < (int)(_param_9 + param_10)) {
                  param_10 = 0xf6 - _param_9;
                }
              }
              if (param_8 == 0) {
                param_10 = 0;
              }
              bVar2 = FUN_006b06a0(param_1,local_7fc,param_8 + iVar9 * 4,_param_9,param_10);
              if (CONCAT31(extraout_var,bVar2) == 0) {
                local_8 = 0xffffff03;
              }
              else {
                local_8 = (**(code **)(*(int *)param_1[0xc] + 0x14))
                                    ((int *)param_1[0xc],4,local_7fc[0].palPalEntry,param_1 + 0xf,0)
                ;
                if (local_8 == 0) {
                  piVar5 = (int *)param_1[0xd];
                  if ((piVar5 == (int *)0x0) || (8 < (int)param_1[9])) {
                    if (param_5 == 8) {
                      piVar5 = (int *)param_1[0x10];
                      goto LAB_006ba27d;
                    }
                  }
                  else {
LAB_006ba27d:
                    (**(code **)(*piVar5 + 0x7c))(piVar5,param_1[0xf]);
                  }
                  param_1[0x14] = param_6;
                  param_1[0x15] = -param_7;
                  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)(param_1 + 8);
                  param_1[0x13] = 0x28;
                  *(undefined2 *)(param_1 + 0x16) = 1;
                  iVar9 = 0;
                  puVar10 = param_1 + 0x1d;
                  do {
                    *(short *)puVar10 = (short)iVar9;
                    iVar9 = iVar9 + 1;
                    puVar10 = (undefined4 *)((int)puVar10 + 2);
                  } while (iVar9 < 0x100);
                  (**(code **)(*(int *)param_1[0x10] + 0x38))((int *)param_1[0x10],local_bc);
                  if ((((local_bc[0] & 0x4000) != 0) && ((local_278 & 0x40) != 0)) ||
                     (((local_bc[0] & 0x800) != 0 && ((local_1d0 & 0x40) != 0)))) {
                    param_1[3] = param_1[3] | 2;
                  }
                  uVar3 = param_1[3];
                  param_1[3] = uVar3 | 1;
                  if ((local_278 & 0x4000000) != 0) {
                    param_1[3] = uVar3 | 5;
                  }
                  if ((local_278 & 0x200) != 0) {
                    param_1[3] = param_1[3] | 8;
                  }
                  if (((local_278 & 0x800) != 0) && (local_234 < local_238)) {
                    uVar3 = param_1[3];
                    param_1[3] = uVar3 | 0x20;
                    if (((local_278 & 0x4000) != 0) && ((local_1f4 == 0 && (local_1f0 == 0)))) {
                      param_1[3] = uVar3 | 0x60;
                    }
                    if ((local_278 & 0x1e) == 0) {
                      param_1[3] = param_1[3] | 0x80;
                    }
                  }
                  local_100 = DAT_00858df8;
                  DAT_00858df8 = &local_100;
                  DVar6 = __setjmp3(local_fc,0,piVar13,uVar14);
                  if (DVar6 == 0) {
                    if ((0xe < param_6) && (0xe < param_7)) {
                      FUN_006ba9e0((int)param_1,0,0,10,10,0);
                      FUN_006ba9e0((int)param_1,5,5,10,10,1);
                      FUN_006d3730((int)param_1,5,5,0,0,10,10);
                      ptVar7 = FUN_006c4880((int)param_1,5,0xe,10,1,param_1[8]);
                      psVar8 = (short *)FUN_006b4fa0((int)ptVar7);
                      if (param_1[8] == 8) {
                        if ((((char)*psVar8 != '\0') || (*(char *)((int)psVar8 + 5) != '\x01')) ||
                           (*(char *)((int)psVar8 + 9) != '\x01')) {
LAB_006ba432:
                          param_1[3] = param_1[3] | 0x10;
                        }
                      }
                      else if ((param_1[8] == 0x10) &&
                              (((*psVar8 != 0 || (psVar8[5] != 1)) || (psVar8[9] != 1))))
                      goto LAB_006ba432;
                      FUN_006a5e90((undefined4 *)ptVar7);
                    }
                    FUN_006bab60((int)param_1,0);
                    DVar6 = local_8;
                  }
                  local_8 = DVar6;
                  DAT_00858df8 = (undefined4 *)local_100;
                  param_1[0x12a] = 0xffffff;
                  param_1[0x128] = 0xffffffff;
                  param_1[0x129] = 0xffffffff;
                  param_1[299] = 0;
                }
              }
            }
          }
        }
      }
      else {
        param_1[9] = param_5;
        local_ac[1] = 0x21;
        local_98 = 1;
        local_44 = 0x218;
        local_8 = (**(code **)(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],local_ac,puVar10,0)
        ;
        if (local_8 == 0) {
          local_bc[0] = 4;
          local_8 = (**(code **)(*(int *)*puVar10 + 0x30))((int *)*puVar10,local_bc,&local_c);
          if (local_8 == 0) {
            if ((uVar11 & 0x1000000) == 0) {
              param_1[0x10] = local_c;
              local_ac[1] = 6;
              local_8 = (**(code **)(*(int *)*puVar10 + 0x58))((int *)*puVar10,local_ac);
              if (local_8 == 0) {
                param_6 = local_ac[3];
                param_1[6] = local_ac[3];
                param_7 = local_ac[2];
                param_1[7] = local_ac[2];
                DVar6 = 0;
                goto LAB_006ba0f9;
              }
            }
            else {
              param_1[0x12] = local_c;
              local_ac[0] = 0x7c;
              local_ac[1] = 7;
              local_44 = 0x40;
              if ((local_278 & 0x200) == 0) {
                local_44 = 0x840;
              }
              local_ac[2] = param_7;
              local_ac[3] = param_6;
              local_8 = (**(code **)(*(int *)param_1[0xc] + 0x18))
                                  ((int *)param_1[0xc],local_ac,param_1 + 0x10,0);
              if (local_8 == 0) {
                DVar6 = 0;
                goto LAB_006ba0f9;
              }
            }
          }
        }
      }
    }
    else {
      param_5 = 0;
    }
  }
LAB_006ba490:
  if (local_8 == 0xffffff03) {
    local_8 = GetLastError();
    if (local_8 == 0) {
      local_8 = 0xffffff03;
      goto LAB_006ba4af;
    }
  }
  else {
LAB_006ba4af:
    DVar6 = local_8;
    if (local_8 == 0) goto LAB_006ba4e0;
  }
  DVar6 = local_8;
  if (((param_1 != (undefined4 *)0x0) && ((*(byte *)(param_1 + 2) & 1) != 0)) &&
     (piVar13 = (int *)param_1[0xc], piVar13 != (int *)0x0)) {
    if (param_5 != 0) {
      (**(code **)(*piVar13 + 0x4c))(piVar13);
    }
    (**(code **)(*(int *)param_1[0xc] + 0x50))((int *)param_1[0xc],local_10,8);
  }
LAB_006ba4e0:
  if ((uVar11 & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
  }
  if (DVar6 == 0) {
    return 0;
  }
  FUN_006a5e40(DVar6,DAT_007ed77c,0x7edc48,0x21b);
  return DVar6;
}

