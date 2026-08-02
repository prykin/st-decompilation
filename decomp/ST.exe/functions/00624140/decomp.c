
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00624140 -> 006E3310 @ 00624383 | 006255B0 -> 00624140 @ 00625685; FUN_006255b0
   parameter param_5 */

undefined4 __thiscall
FUN_00624140(void *this,int param_1,int param_2,Global_sub_0061BDB0_param_1Enum *param_3,int param_4
            ,int param_5,int param_6,int *param_7,int param_8)

{
  Global_sub_0061BDB0_param_1Enum *pGVar1;
  Global_sub_0061BDB0_param_1Enum *pGVar2;
  Global_sub_0061BDB0_param_1Enum *pGVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 local_8;

  pGVar3 = param_3;
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if ((int)param_3 < 0) goto LAB_00624457;
    if (((param_1 < g_worldGrid.sizeX) && (param_2 < g_worldGrid.sizeY)) && ((int)param_3 < 5)) {
      sVar7 = (short)param_1;
      sVar8 = (short)param_2;
      sVar9 = (short)param_3;
      iVar4 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
      if (iVar4 != 0) {
        return 0;
      }
      if (((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
           ((-1 < sVar8 && ((sVar8 < g_worldGrid.sizeY && (-1 < sVar9)))))) &&
          (sVar9 < g_worldGrid.sizeZ)) &&
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar9 + (int)g_worldGrid.sizeX * (int)sVar8 +
           (int)sVar7].objects[0] != nullptr)) {
        if (param_8 < 1) {
          iVar4 = (int)pGVar3 * 0xc9 + 0x32;
          if (iVar4 < param_6) {
            return 0;
          }
          *param_7 = iVar4;
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
        iVar4 = (int)pGVar3 * 0xc9 + 0x97;
        if (param_6 < iVar4) {
          return 0;
        }
        *param_7 = iVar4;
        return 2;
      }
      iVar4 = (*(ST3DSMAPContext **)((int)this + 0x211))->field_0380;
      ST3DSMAPContext::sub_006E3310
                (*(ST3DSMAPContext **)((int)this + 0x211),(iVar4 * param_4) / 0xc9,
                 (int *)((iVar4 * param_5) / 0xc9),(int)pGVar3,(int *)&param_3);
      lVar6 = Library::MSVCRT::__ftol();
      iVar4 = (int)(short)lVar6;
      pGVar1 = (Global_sub_0061BDB0_param_1Enum *)((int)pGVar3 + 1);
      pGVar2 = param_3;
      if ((int)param_3 <= (int)pGVar1) {
        pGVar2 = pGVar1;
      }
      if (param_8 < 0) {
        if (iVar4 < param_6) {
          return 0;
        }
        if ((((int)param_3 <= (int)pGVar1) && ((int)pGVar1 < 5)) &&
           (iVar5 = thunk_FUN_004961b0(sVar7,sVar8,sVar9 + 1), iVar5 == 0)) {
          return 3;
        }
        if ((int)pGVar2 * 200 < iVar4) {
          return 3;
        }
      }
      else {
        if (iVar4 <= param_6) {
          return 0;
        }
        if (((int)pGVar1 < 5) && (iVar5 = thunk_FUN_004961b0(sVar7,sVar8,sVar9 + -1), iVar5 != 0)) {
          *param_7 = (int)pGVar3 * 200;
          return 1;
        }
      }
      *param_7 = iVar4;
      return 2;
    }
  }
  if (-1 < (int)param_3) {
    if ((int)param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_00624457:
  *param_7 = 0;
  return 2;
}

