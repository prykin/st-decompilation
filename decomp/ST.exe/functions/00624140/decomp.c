
undefined4 __thiscall
FUN_00624140(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 local_8;

  iVar3 = param_3;
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if (param_3 < 0) goto LAB_00624457;
    if (((param_1 < g_worldGrid.sizeX) && (param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar6 = (short)param_1;
      sVar7 = (short)param_2;
      sVar8 = (short)param_3;
      iVar2 = thunk_FUN_004961b0(sVar6,sVar7,sVar8);
      if (iVar2 != 0) {
        return 0;
      }
      if (((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
           ((-1 < sVar7 && ((sVar7 < g_worldGrid.sizeY && (-1 < sVar8)))))) &&
          (sVar8 < g_worldGrid.sizeZ)) &&
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar8 + (int)g_worldGrid.sizeX * (int)sVar7 +
           (int)sVar6].objects[0] != (STWorldObject *)0x0)) {
        if (param_8 < 1) {
          iVar3 = iVar3 * 0xc9 + 0x32;
          if (iVar3 < param_6) {
            return 0;
          }
          *param_7 = iVar3;
          return 2;
        }
        sVar6 = *(short *)((int)this + 0x34);
        if (sVar6 < 0) {
          iVar2 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar2 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
        }
        if (iVar2 == *(short *)((int)this + 0x47)) {
          sVar6 = *(short *)((int)this + 0x36);
          if (sVar6 < 0) {
            iVar2 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                           (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar2 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                                (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
          }
          if (iVar2 == *(short *)((int)this + 0x49)) {
            sVar6 = *(short *)((int)this + 0x38);
            if (sVar6 < 0) {
              iVar2 = (short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                             (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar2 = (int)(short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                                  (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f));
            }
            if (iVar2 == *(short *)((int)this + 0x4b)) {
              return 0;
            }
          }
        }
        iVar3 = iVar3 * 0xc9 + 0x97;
        if (param_6 < iVar3) {
          return 0;
        }
        *param_7 = iVar3;
        return 2;
      }
      iVar2 = *(int *)((int)*(void **)((int)this + 0x211) + 0x380);
      FUN_006e3310(*(void **)((int)this + 0x211),(iVar2 * param_4) / 0xc9,
                   (int *)((iVar2 * param_5) / 0xc9),iVar3,&param_3);
      lVar5 = Library::MSVCRT::__ftol();
      iVar4 = (int)(short)lVar5;
      iVar2 = iVar3 + 1;
      iVar1 = param_3;
      if (param_3 <= iVar2) {
        iVar1 = iVar2;
      }
      if (param_8 < 0) {
        if (iVar4 < param_6) {
          return 0;
        }
        if (((param_3 <= iVar2) && (iVar2 < 5)) &&
           (iVar3 = thunk_FUN_004961b0(sVar6,sVar7,sVar8 + 1), iVar3 == 0)) {
          return 3;
        }
        if (iVar1 * 200 < iVar4) {
          return 3;
        }
      }
      else {
        if (iVar4 <= param_6) {
          return 0;
        }
        if ((iVar2 < 5) && (iVar2 = thunk_FUN_004961b0(sVar6,sVar7,sVar8 + -1), iVar2 != 0)) {
          *param_7 = iVar3 * 200;
          return 1;
        }
      }
      *param_7 = iVar4;
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

