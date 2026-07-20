
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00673210(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = DAT_00811914;
  iVar5 = DAT_00857558;
  uVar6 = DAT_007d2d24;
  iVar7 = DAT_0085755c;
  do {
    DAT_007d2d18 = 0x84e;
    if (iVar5 < iVar4) {
      if ((uVar6 & 0x10) != 0) {
        thunk_FUN_006736b0();
        DAT_007d2d18 = 0x84e;
        uVar2 = thunk_FUN_00672b30();
        if (CONCAT31(extraout_var,uVar2) == 0) {
          return -0xe;
        }
      }
      DAT_00811940 = 0;
      iVar3 = FUN_006734c0();
      iVar4 = DAT_00811914;
      iVar5 = DAT_00857558;
      iVar7 = DAT_0085755c;
      while (DAT_00811914 = iVar4, DAT_00857558 = iVar5, DAT_0085755c = iVar7, iVar3 != 0) {
        if (iVar3 != -1) {
          DAT_00811914 = iVar4;
          DAT_00857558 = iVar5;
          DAT_0085755c = iVar7;
          return iVar3;
        }
        if ((DAT_007d2d24 & 0x80) == 0) {
          DAT_007d2d24 = DAT_007d2d24 | 0x10;
          if (param_1 != 0) {
            return -1;
          }
          break;
        }
        if ((code *)PTR_0081194c->field_0014 != (code *)0x0) {
          (*(code *)PTR_0081194c->field_0014)(DAT_0085753c,0);
        }
        thunk_FUN_00672f00();
        DAT_007d2d18 = 0x84e;
        DAT_00811940 = 0;
        iVar3 = FUN_006734c0();
        iVar4 = DAT_00811914;
        iVar5 = DAT_00857558;
        iVar7 = DAT_0085755c;
      }
      uVar6 = DAT_007d2d24;
      if (-1 < iVar5) {
        DAT_00857554 = DAT_00857554 + 1;
        DAT_00811914 = 0;
        DAT_0081190c = 0;
        _DAT_00857550 = 1;
        iVar4 = 0;
        if ((0 < iVar5) && (*(char *)(iVar7 + -1 + iVar5) == '\\')) {
          DAT_00857558 = iVar5 + -1;
          DAT_00811940 = 1;
          *(undefined1 *)(iVar7 + DAT_00857558) = 0;
          iVar4 = DAT_00811914;
          iVar5 = DAT_00857558;
          uVar6 = DAT_007d2d24;
          iVar7 = DAT_0085755c;
        }
      }
    }
    if ((uVar6 & 0x10) != 0) {
      DAT_007d2d18 = 0x1c;
      return 0;
    }
    if ((uVar6 & 8) != 0) {
      return 0;
    }
    if (param_1 == 0) {
      uVar1 = *(uint *)(DAT_00811924 + *(char *)(iVar7 + iVar4) * 4);
      while ((uVar1 & 0x401) != 0) {
        if (iVar5 <= iVar4) goto LAB_0067339a;
        iVar4 = iVar4 + 1;
        DAT_00811914 = iVar4;
        uVar1 = *(uint *)(DAT_00811924 + *(char *)(iVar7 + iVar4) * 4);
      }
    }
    if (iVar4 < iVar5) {
      if (param_1 != 0) {
        DAT_00811914 = iVar4 + 1;
        return (int)*(char *)(iVar7 + iVar4);
      }
      if (DAT_007d2d18 != 0x1d) {
        return 0;
      }
    }
    else {
LAB_0067339a:
      iVar4 = iVar4 + 1;
      DAT_007d2d18 = 0x1d;
      DAT_00811914 = iVar4;
      if (param_1 != 0) {
        return 10;
      }
    }
    if ((DAT_00811940 == 0) && ((uVar6 & 1) != 0)) {
      return 0;
    }
  } while( true );
}

