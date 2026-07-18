
undefined4 __fastcall thunk_FUN_005ee6e0(int *param_1)

{
  uint uVar1;
  void *this;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 uVar6;
  undefined4 auStack_38 [2];
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  switch(*(undefined4 *)((int)param_1 + 0x23a)) {
  case 0:
    if (*(uint *)((int)param_1 + 0x28f) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      *(uint *)((int)param_1 + 0x28f) = *(uint *)(DAT_00802a38 + 0xe4);
      uVar1 = param_1[7] * 0x41c64e6d + 0x3039;
      param_1[7] = uVar1;
      thunk_FUN_005ecd70(param_1,*(int *)((int)param_1 + 0x277),*(int *)((int)param_1 + 0x27b),
                         *(int *)((int)param_1 + 0x27f) + -0x1e,*(int *)((int)param_1 + 0x2ba),'\0',
                         0x1e - (uVar1 >> 0x10) % 0xb);
      *(undefined4 *)((int)param_1 + 0x23a) = 1;
      param_1[199] = param_1[199] | 1;
      return 1;
    }
    break;
  case 1:
    iVar3 = thunk_FUN_005ede30(param_1,&iStack_c,&iStack_10,&iStack_14);
    if (iVar3 != 0) {
      *(int *)((int)param_1 + 0x27f) = iStack_14;
      *(int *)((int)param_1 + 0x277) = iStack_c;
      *(int *)((int)param_1 + 0x27b) = iStack_10;
      if ((((*(char *)((int)param_1 + 0x317) != '\0') && ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0)
           ) && ((char)param_1[0x94] == '\0')) && (*(char *)((int)param_1 + 0x24f) == '\0')) {
        iVar3 = thunk_FUN_005eda50(param_1);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_005f07a0(param_1);
          if (iVar3 != 0) {
            *(undefined1 *)(param_1 + 0x94) = 1;
            *(undefined1 *)((int)param_1 + 0x24f) = 1;
            *(undefined4 *)((int)param_1 + 0x23a) = 3;
            *(int *)((int)param_1 + 0x28f) = *(int *)(DAT_00802a38 + 0xe4) + 10;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x94) = 1;
          *(undefined1 *)((int)param_1 + 0x24f) = 1;
          *(undefined4 *)((int)param_1 + 0x23a) = 3;
          *(int *)((int)param_1 + 0x28f) = *(int *)(DAT_00802a38 + 0xe4) + 10;
        }
      }
      uStack_8 = 1;
    }
    if ((*(int *)((int)param_1 + 0x23a) != 1) && (*(int *)((int)param_1 + 0x23a) != 3)) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      return uStack_8;
    }
    break;
  case 2:
    if (*(uint *)(DAT_00802a38 + 0xe4) < *(uint *)((int)param_1 + 0x28f)) {
      if (((*(uint *)(DAT_00802a38 + 0xe4) == *(uint *)((int)param_1 + 0x28f) + 1) &&
          (*(void **)((int)param_1 + 0x211) != (void *)0x0)) &&
         (-1 < (int)*(uint *)((int)param_1 + 0x1ed))) {
        FUN_006ea2f0(*(void **)((int)param_1 + 0x211),*(uint *)((int)param_1 + 0x1ed));
        return uStack_8;
      }
    }
    else {
      iVar3 = thunk_FUN_005ed1c0(param_1,&iStack_c,&iStack_10,&iStack_14,&iStack_18);
      if (iVar3 != 0) {
        *(int *)((int)param_1 + 0x277) = iStack_c;
        *(int *)((int)param_1 + 0x27b) = iStack_10;
        *(int *)((int)param_1 + 0x2ba) = iStack_18;
        *(int *)((int)param_1 + 0x27f) = iStack_14;
        if (*(int *)((int)param_1 + 0x283) == 0) {
          if (*(char *)((int)param_1 + 0x24f) != '\0') {
            thunk_FUN_005ef6c0(param_1,1);
            *(undefined4 *)((int)param_1 + 0x23a) = 7;
            return 1;
          }
          iVar3 = *(int *)(DAT_00802a38 + 0xe4);
          *(undefined4 *)((int)param_1 + 0x23a) = 0;
          *(int *)((int)param_1 + 0x28f) = iVar3 + 10;
        }
        return 1;
      }
    }
    break;
  case 3:
    if (*(uint *)((int)param_1 + 0x28f) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      if ((char)param_1[0x94] == '\x02') {
        iVar3 = thunk_FUN_005edc20(param_1);
        if (iVar3 < 0) {
LAB_005ee9db:
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(undefined1 *)((int)param_1 + 0x24f) = 0;
        }
        else if (0 < iVar3) {
          if (iVar3 < 2) {
            *(undefined4 *)((int)param_1 + 0x23a) = 6;
            *(undefined1 *)(param_1 + 0x94) = 3;
          }
          else {
            *(undefined4 *)((int)param_1 + 0x23a) = 8;
            *(int *)((int)param_1 + 0x28f) = *(int *)(DAT_00802a38 + 0xe4) + 0x15;
          }
        }
      }
      else {
        iVar3 = thunk_FUN_005ed1c0(param_1,&iStack_c,&iStack_10,&iStack_14,&iStack_18);
        if (iVar3 == 0) {
          bVar2 = thunk_FUN_005ef4b0(param_1,*(int *)((int)param_1 + 0x273));
          if (CONCAT31(extraout_var,bVar2) == 0) {
            thunk_FUN_005ee670(param_1);
          }
          else {
            *(undefined4 *)((int)param_1 + 0x23a) = 2;
          }
          goto LAB_005ee9db;
        }
        *(int *)((int)param_1 + 0x27b) = iStack_10;
        *(int *)((int)param_1 + 0x277) = iStack_c;
        *(int *)((int)param_1 + 0x27f) = iStack_14;
        *(int *)((int)param_1 + 0x2ba) = iStack_18;
        if (((*(int *)((int)param_1 + 0x283) == 0) && (*(char *)((int)param_1 + 0x24f) != '\0')) &&
           ((char)param_1[0x94] != '\0')) {
          *(undefined1 *)(param_1 + 0x94) = 2;
        }
        uStack_8 = 1;
      }
    }
    if (((char)param_1[0x94] == '\0') && (*(int *)((int)param_1 + 0x23a) != 6)) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(undefined1 *)((int)param_1 + 0x24f) = 0;
      return uStack_8;
    }
    break;
  case 4:
    iStack_30 = param_1[2];
    uStack_28 = 0x129;
    uStack_2c = 2;
    FUN_006e5810(auStack_38);
    return uStack_8;
  case 5:
    if (*(char *)((int)param_1 + 0x315) == '\x03') {
      if (*(int *)(DAT_00802a38 + 0xe4) == param_1[0xb8]) {
LAB_005eeddf:
        *(undefined4 *)((int)param_1 + 0x23a) = 6;
      }
    }
    else if (*(char *)((int)param_1 + 0x315) == '\x05') {
      if (*(int *)((int)param_1 + 0x2d2) < 0) goto LAB_005eeddf;
    }
    else {
      this = (void *)((int)param_1 + 0x1d5);
      iVar3 = thunk_FUN_004ac910(this,'\b');
      if (iVar3 == 1) {
        thunk_FUN_004ac410(0xf);
        thunk_FUN_004ac410(0);
        thunk_FUN_004ac410(1);
      }
      if (iVar3 == *(int *)(&DAT_007cdf52 + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        iVar4 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x242),(short)param_1[0x91],
                                   *(short *)((int)param_1 + 0x246),0,(int)param_1);
        if (iVar4 == 0) {
          *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + -1;
        }
        thunk_FUN_004ac410(0xe);
        if ((*(char *)((int)param_1 + 0x315) == '\x04') ||
           (*(char *)((int)param_1 + 0x315) == '\x02')) {
          uVar6 = 0xffffffff;
          uVar5 = thunk_FUN_004ad650((int)this);
          thunk_FUN_0062b770((int)*(short *)((int)param_1 + 0x41),
                             (int)*(short *)((int)param_1 + 0x43),
                             (int)*(short *)((int)param_1 + 0x45),
                             *(undefined4 *)((int)param_1 + 0x231),(int)param_1,
                             (int)(short)param_1[0x1b],uVar5,uVar6);
        }
        if (*(int *)((int)param_1 + 0x231) == 0xfd) {
          if (DAT_007fa174 != 0) {
            thunk_FUN_005f0d00((int)param_1);
            iVar4 = thunk_FUN_00449e60(CONCAT22(extraout_var_01,*(undefined2 *)((int)param_1 + 0x32)
                                               ),(uint)param_1);
            goto joined_r0x005eed0b;
          }
        }
        else if ((*(int *)((int)param_1 + 0x231) == 0xfe) && (DAT_007fa174 != 0)) {
          thunk_FUN_005f0d90((int)param_1);
          iVar4 = thunk_FUN_0044a730(CONCAT22(extraout_var_00,*(undefined2 *)((int)param_1 + 0x32)),
                                     (uint)param_1);
joined_r0x005eed0b:
          if (iVar4 != 0) {
            *(undefined4 *)((int)param_1 + 0x23a) = 6;
          }
        }
        if (*(int *)((int)param_1 + 0x23a) != 6) {
          *(undefined1 *)(param_1 + 0xb9) = 0;
        }
      }
      if (iVar3 == *(int *)(&DAT_007cdf56 + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        thunk_FUN_004ad5e0((int)this);
      }
      if (iVar3 == *(int *)(&DAT_007cdf5a + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32)) {
        thunk_FUN_004ac1a0(9,*(undefined4 *)(DAT_00802a38 + 0xe4));
      }
      iVar4 = (uint)*(byte *)((int)param_1 + 0x2df) * 0x32;
      if ((*(int *)(&DAT_007cdf5a + iVar4) < iVar3) &&
         (iVar3 == *(int *)(&DAT_007cdf4e + iVar4) + -1)) {
        thunk_FUN_004ac410(8);
      }
      iVar3 = thunk_FUN_004ac910(this,'\t');
      if (iVar3 == *(int *)(&DAT_007cdf5e + (uint)*(byte *)((int)param_1 + 0x2df) * 0x32))
      goto LAB_005eeddf;
    }
    thunk_FUN_005eeff0(param_1,1);
    break;
  case 6:
    iVar3 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x242),(short)param_1[0x91],
                               *(short *)((int)param_1 + 0x246),0,(int)param_1);
    if (iVar3 == 0) {
      *(char *)((int)param_1 + 0x252) = *(char *)((int)param_1 + 0x252) + -1;
      return uStack_8;
    }
    break;
  case 7:
    uStack_8 = 1;
    if (*(char *)((int)param_1 + 0x24f) == '\0') {
      iVar3 = *(int *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)param_1 + 0x23a) = 0;
      *(int *)((int)param_1 + 0x28f) = iVar3 + 10;
      return 1;
    }
    break;
  case 8:
    if (*(uint *)((int)param_1 + 0x28f) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      thunk_FUN_005f0a30(param_1);
      *(undefined4 *)((int)param_1 + 0x23a) = 6;
      return uStack_8;
    }
  }
  return uStack_8;
}

