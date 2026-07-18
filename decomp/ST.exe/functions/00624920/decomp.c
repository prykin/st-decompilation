
undefined4 __thiscall
FUN_00624920(void *this,undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  short sVar13;
  undefined4 local_8;
  
  local_8 = 0;
  switch(param_1) {
  case 0:
    *param_2 = *(int *)((int)this + 0x2c2);
    *param_3 = *(int *)((int)this + 0x2c6);
    *param_4 = *(int *)((int)this + 0x2ca);
    if (*(uint *)(DAT_00802a38 + 0xe4) < *(uint *)((int)this + 0x30f)) {
      return 1;
    }
    bVar1 = *(byte *)((int)this + 0x2ad);
    if (bVar1 < 4) {
      *(undefined4 *)((int)this + 0x2ae) = 0;
      if ((bVar1 == 3) || (bVar1 == 2)) {
        *(undefined1 *)((int)this + 0x30e) = 1;
      }
      *(undefined4 *)((int)this + 0x30a) = 0;
      return 0;
    }
    *(int *)((int)this + 0x2f2) = *(int *)((int)this + 0x2ca);
    *(undefined4 *)((int)this + 0x302) = 1;
    iVar7 = thunk_FUN_00624570(this,1,*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                               *(int *)((int)this + 0x2ca));
    if (iVar7 != 0) {
      *(undefined2 *)((int)this + 0x36) = *(undefined2 *)((int)this + 0x2ca);
      *(undefined2 *)((int)this + 0x38) = *(undefined2 *)((int)this + 0x2ca);
      *(undefined4 *)((int)this + 0x2ee) = 1;
      *(undefined4 *)((int)this + 0x2ae) = 1;
      *(undefined2 *)((int)this + 0x34) = *(undefined2 *)((int)this + 0x2c2);
      return 1;
    }
    break;
  case 1:
    if (*(byte *)((int)this + 0x62) == 0) {
      *param_2 = *(int *)((int)this + 0x2c2);
      *param_3 = *(int *)((int)this + 0x2c6);
      iVar7 = *(int *)((int)this + 0x2ca);
    }
    else {
      iVar10 = *(int *)((int)this + 0x2f2);
      iVar7 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x30f)) *
              (uint)*(byte *)((int)this + 0x62) * *(int *)((int)this + 0x302);
      iVar7 = ((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4) + (int)*(short *)((int)this + 0x38);
      if (*(int *)((int)this + 0x302) < 1) {
        if (iVar7 < iVar10 - *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
          *param_2 = *(int *)((int)this + 0x2c2);
          *param_3 = *(int *)((int)this + 0x2c6);
          *param_4 = (iVar10 - *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4)) + 1
          ;
          thunk_FUN_00624570(this,1,*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                             *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) +
                             iVar10);
          *(undefined4 *)((int)this + 0x2ae) = 1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) + iVar10 < iVar7) {
        *param_2 = *(int *)((int)this + 0x2c2);
        *param_3 = *(int *)((int)this + 0x2c6);
        *param_4 = *(int *)(&DAT_007d0398 + (uint)*(byte *)((int)this + 0x2ad) * 4) + -1 + iVar10;
        iVar7 = thunk_FUN_00624570(this,1,*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   iVar10 - *(int *)(&DAT_007d0398 +
                                                    (uint)*(byte *)((int)this + 0x2ad) * 4));
        if (iVar7 != 0) {
          *(undefined4 *)((int)this + 0x2ee) = 1;
          *(undefined4 *)((int)this + 0x2ae) = 1;
        }
        return 1;
      }
      *param_2 = *(int *)((int)this + 0x2c2);
      *param_3 = *(int *)((int)this + 0x2c6);
    }
    *param_4 = iVar7;
    return 1;
  case 2:
    iVar9 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x30f);
    iVar11 = *(int *)((int)this + 0x306) * iVar9;
    iVar10 = (*(int *)((int)this + 0x2fa) * iVar11) / 10000 + (int)*(short *)((int)this + 0x34);
    iVar6 = (*(int *)((int)this + 0x2fe) * iVar11) / 10000 + (int)*(short *)((int)this + 0x36);
    iVar8 = (*(int *)((int)this + 0x302) * iVar11) / 10000 + (int)*(short *)((int)this + 0x38);
    iVar7 = thunk_FUN_00627670((int)this);
    if ((1 < iVar9) &&
       (uVar5 = thunk_FUN_00601500((void *)((int)this + 0x231),iVar10,iVar6,iVar8,
                                   (int)*(short *)((int)this + 0x54),
                                   (int)*(short *)((int)this + 0x56),
                                   (int)*(short *)((int)this + 0x58),*(int *)((int)this + 0x262),
                                   iVar7,*(int *)((int)this + 0x18),0xffff,
                                   *(int *)(&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                   0,1), 0 < (int)uVar5)) {
      thunk_FUN_00627390((int)this);
      return 0;
    }
    *param_2 = iVar10;
    *param_3 = iVar6;
    local_8 = 1;
    *param_4 = iVar8;
    if (*(int *)((int)this + 0x2f6) <= iVar11) {
      sVar13 = *(short *)((int)this + 0x3a);
      sVar2 = *(short *)((int)this + 0x3c);
      sVar3 = *(short *)((int)this + 0x3e);
      *param_2 = (int)sVar13;
      *param_3 = (int)sVar2;
      *param_4 = (int)sVar3;
      iVar7 = thunk_FUN_00624570(this,0,(int)sVar13,(int)sVar2,(int)sVar3);
      if (iVar7 != 0) {
        *(undefined4 *)((int)this + 0x2ee) = 0;
        *(undefined4 *)((int)this + 0x2ae) = 1;
        *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        return 1;
      }
    }
    break;
  case 3:
    iVar7 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x30f)) *
            *(int *)((int)this + 0x306);
    iVar10 = *(int *)((int)this + 0x302) * iVar7 + (int)*(short *)((int)this + 0x38);
    sVar13 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      puVar12 = (undefined *)
                ((short)(((short)(iVar10 / 200) + sVar13) -
                        (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar12 = (undefined *)
                (int)(short)(((short)(iVar10 / 200) + sVar13) -
                            (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    if (puVar12 != (undefined *)(int)*(short *)((int)this + 0x4b)) {
      sVar13 = (short)puVar12;
      bVar4 = thunk_FUN_004961b0(*(short *)((int)this + 0x47),*(short *)((int)this + 0x49),sVar13);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        sVar2 = *(short *)((int)this + 0x47);
        sVar3 = *(short *)((int)this + 0x49);
        if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
            ((DAT_007fb242 <= sVar3 || (sVar13 < 0)))) ||
           ((DAT_007fb244 <= sVar13 ||
            (*(int *)(DAT_007fb248 +
                     ((uint)*(byte *)((int)this + 0x8e) +
                     ((int)DAT_007fb240 * (int)sVar3 + (int)DAT_007fb246 * (int)sVar13 + (int)sVar2)
                     * 2) * 4) == 0)))) {
          iVar6 = thunk_FUN_00495ff0(sVar2,sVar3,*(short *)((int)this + 0x4b),
                                     (uint)*(byte *)((int)this + 0x8e),(int)this);
          if (iVar6 == 0) {
            *(char *)((int)this + 0x314) = *(char *)((int)this + 0x314) + -1;
          }
          sVar2 = *(short *)((int)this + 0x47);
          sVar3 = *(short *)((int)this + 0x49);
          if (((((sVar2 < 0) || (DAT_007fb240 <= sVar2)) ||
               ((sVar3 < 0 ||
                (((DAT_007fb242 <= sVar3 || (sVar13 < 0)) || (DAT_007fb244 <= sVar13)))))) ||
              (*(int *)(DAT_007fb248 +
                       ((uint)*(byte *)((int)this + 0x8e) +
                       ((int)sVar3 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar13 +
                       (int)sVar2) * 2) * 4) == 0)) &&
             (iVar6 = thunk_FUN_00495ec0(sVar2,sVar3,sVar13,(uint)*(byte *)((int)this + 0x8e),
                                         (int)this), iVar6 == 0)) {
            bVar1 = *(byte *)((int)this + 0x2ad);
            *(char *)((int)this + 0x314) = *(char *)((int)this + 0x314) + '\x01';
            if (bVar1 < 3) {
              if (DAT_00802a88 != (void *)0x0) {
                thunk_FUN_00559110(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                   (undefined *)(int)*(short *)((int)this + 0x49),
                                   (int)*(short *)((int)this + 0x4b),*(uint *)((int)this + 0x24),
                                   *(int *)(&DAT_007d02b4 + (uint)bVar1 * 4),
                                   *(int *)((int)this + 0x18),0xffffffff);
                thunk_FUN_00558dc0(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                   (int)*(short *)((int)this + 0x49),puVar12,
                                   *(uint *)((int)this + 0x24),
                                   *(undefined **)
                                    (&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                   *(int *)((int)this + 0x18),0xffffffff);
              }
            }
            else if ((bVar1 == 3) && (DAT_00802a88 != (void *)0x0)) {
              thunk_FUN_00559110(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                 (undefined *)(int)*(short *)((int)this + 0x49),
                                 (int)*(short *)((int)this + 0x4b),*(uint *)((int)this + 0x24),
                                 DAT_007d02c0,*(int *)((int)this + 0x18),0xffffffff);
              thunk_FUN_00559d60(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                 (int)*(short *)((int)this + 0x49),
                                 (char)*(undefined2 *)((int)this + 0x4b),*(uint *)((int)this + 0x24)
                                 ,*(undefined **)
                                   (&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                 *(undefined4 *)((int)this + 0x18));
              thunk_FUN_00558dc0(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                 (int)*(short *)((int)this + 0x49),puVar12,
                                 *(uint *)((int)this + 0x24),
                                 *(undefined **)
                                  (&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                 *(int *)((int)this + 0x18),0xffffffff);
              thunk_FUN_00559b30(DAT_00802a88,(int)*(short *)((int)this + 0x47),
                                 (int)*(short *)((int)this + 0x49),(char)puVar12,
                                 *(uint *)((int)this + 0x24),
                                 *(int *)(&DAT_007d02b4 + (uint)*(byte *)((int)this + 0x2ad) * 4),
                                 *(undefined4 *)((int)this + 0x18),0xffffffff);
            }
            *(short *)((int)this + 0x4b) = sVar13;
            goto LAB_00625067;
          }
        }
      }
      iVar6 = thunk_FUN_00624570(this,2,(int)*(short *)((int)this + 0x3a),
                                 (int)*(short *)((int)this + 0x3c),
                                 (short)(*(short *)((int)this + 0x4b) * 200 + 100) + -0x32);
      if (iVar6 != 0) {
        *(undefined4 *)((int)this + 0x2ee) = 2;
        *(undefined4 *)((int)this + 0x2ae) = 1;
        *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        *param_2 = (int)*(short *)((int)this + 0x3a);
        *param_3 = (int)*(short *)((int)this + 0x3c);
        *param_4 = iVar10;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)*(short *)((int)this + 0x3a);
    *param_3 = (int)*(short *)((int)this + 0x3c);
    *param_4 = iVar10;
    if ((*(int *)((int)this + 0x2f6) <= iVar7) &&
       (iVar7 = thunk_FUN_00624570(this,0,(int)*(short *)((int)this + 0x3a),
                                   (int)*(short *)((int)this + 0x3c),iVar10), iVar7 != 0)) {
      *(undefined4 *)((int)this + 0x2ee) = 0;
      *(undefined4 *)((int)this + 0x2ae) = 1;
      *(undefined4 *)((int)this + 0x30f) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
  }
  return local_8;
}

