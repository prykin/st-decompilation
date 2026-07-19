
undefined4 __thiscall
FUN_00624140(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 local_8;
  
  iVar1 = param_3;
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if (param_3 < 0) goto LAB_00624457;
    if (((param_1 < DAT_007fb240) && (param_2 < DAT_007fb242)) && (param_3 < 5)) {
      sVar7 = (short)param_1;
      sVar8 = (short)param_2;
      sVar9 = (short)param_3;
      bVar3 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        return 0;
      }
      if (((((-1 < sVar7) && (sVar7 < DAT_007fb240)) &&
           ((-1 < sVar8 && ((sVar8 < DAT_007fb242 && (-1 < sVar9)))))) && (sVar9 < DAT_007fb244)) &&
         (*(int *)(DAT_007fb248 +
                  ((int)DAT_007fb246 * (int)sVar9 + (int)DAT_007fb240 * (int)sVar8 + (int)sVar7) * 8
                  ) != 0)) {
        if (param_8 < 1) {
          iVar1 = iVar1 * 0xc9 + 0x32;
          if (iVar1 < param_6) {
            return 0;
          }
          *param_7 = iVar1;
          return 2;
        }
        sVar7 = *(short *)((int)this + 0x34);
        if (sVar7 < 0) {
          iVar4 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                         (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                              (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
        }
        if (iVar4 == *(short *)((int)this + 0x47)) {
          sVar7 = *(short *)((int)this + 0x36);
          if (sVar7 < 0) {
            iVar4 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                           (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar4 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                                (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
          }
          if (iVar4 == *(short *)((int)this + 0x49)) {
            sVar7 = *(short *)((int)this + 0x38);
            if (sVar7 < 0) {
              iVar4 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                             (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar4 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                                  (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
            }
            if (iVar4 == *(short *)((int)this + 0x4b)) {
              return 0;
            }
          }
        }
        iVar1 = iVar1 * 0xc9 + 0x97;
        if (param_6 < iVar1) {
          return 0;
        }
        *param_7 = iVar1;
        return 2;
      }
      iVar4 = *(int *)((int)*(void **)((int)this + 0x211) + 0x380);
      FUN_006e3310(*(void **)((int)this + 0x211),(iVar4 * param_4) / 0xc9,
                   (int *)((iVar4 * param_5) / 0xc9),iVar1,&param_3);
      lVar6 = Library::MSVCRT::__ftol();
      iVar5 = (int)(short)lVar6;
      iVar4 = iVar1 + 1;
      iVar2 = param_3;
      if (param_3 <= iVar4) {
        iVar2 = iVar4;
      }
      if (param_8 < 0) {
        if (iVar5 < param_6) {
          return 0;
        }
        if (((param_3 <= iVar4) && (iVar4 < 5)) &&
           (bVar3 = thunk_FUN_004961b0(sVar7,sVar8,sVar9 + 1), CONCAT31(extraout_var_00,bVar3) == 0)
           ) {
          return 3;
        }
        if (iVar2 * 200 < iVar5) {
          return 3;
        }
      }
      else {
        if (iVar5 <= param_6) {
          return 0;
        }
        if ((iVar4 < 5) &&
           (bVar3 = thunk_FUN_004961b0(sVar7,sVar8,sVar9 + -1), CONCAT31(extraout_var_01,bVar3) != 0
           )) {
          *param_7 = iVar1 * 200;
          return 1;
        }
      }
      *param_7 = iVar5;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_00624457:
  *param_7 = 0;
  return 2;
}

