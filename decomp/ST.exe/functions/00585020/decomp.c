
void __fastcall FUN_00585020(AnonShape_00585020_1C9B1418 *param_1)

{
  int iVar1;
  undefined1 *this;
  STWorldObject *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int local_14;
  short local_10;
  short local_8;

  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar3 = thunk_FUN_0041c710((int)param_1);
  this = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    iVar3 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar3 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(param_1->field_0211,iVar5,iVar3);
  sVar6 = param_1->field_0041;
  iVar3 = (int)sVar6;
  if (sVar6 < 0) {
    local_10 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    local_10 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0043;
  iVar5 = (int)sVar6;
  if (sVar6 < 0) {
    local_8 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    local_14 = (short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                      (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                           (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f));
  }
  iVar7 = param_1->field_0231;
  sVar6 = (short)local_14;
  if (iVar7 == 0) {
    iVar5 = PTR_00802a38->field_00E4 - param_1->field_023D;
    iVar3 = (param_1->field_024D * iVar5 * iVar5) / 22000;
    if ((local_14 < 5) && (iVar7 = thunk_FUN_004961b0(local_10,local_8,sVar6), iVar7 == 0)) {
      if ((((-1 < local_10) &&
           (((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)))) &&
          (((-1 < sVar6 && (sVar6 < g_worldGrid.sizeZ)) &&
           (pSVar2 = g_worldGrid.cells
                     [(int)g_worldGrid.planeStride * (int)sVar6 +
                      (int)g_worldGrid.sizeX * (int)local_8 + (int)local_10].objects[0],
           pSVar2 != (STWorldObject *)0x0)))) && (pSVar2->value_20 != 0xaa)) {
        thunk_FUN_00584c50(param_1,&pSVar2->vtable);
        thunk_FUN_005860d0(param_1,(int)(short)param_1->field_0041,(int)(short)param_1->field_0043,
                           0x464);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
      return;
    }
    iVar7 = DAT_007cb8e4 >> 1;
    if (iVar7 < iVar5) {
      iVar1 = *(short *)(DAT_00806724 + 0x23) + -1;
      iVar7 = ((iVar5 - iVar7) * iVar1) / iVar7;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (*(short *)(DAT_00806724 + 0x23) <= iVar7) {
        thunk_FUN_004ace30(this,0,0);
        iVar7 = iVar1;
      }
      param_1->field_0241 = iVar7;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar7 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    sVar6 = (short)iVar3;
    if (iVar3 + 0x28 < 0) {
      thunk_FUN_00416240(param_1,*(undefined2 *)&param_1->field_0x278,
                         *(undefined2 *)&param_1->field_0x27c,sVar6 + param_1->field_0045 + 0x28);
      param_1->field_0251 = 0x168;
      param_1->field_0235 = (int)param_1->field_0045;
      *(int *)&param_1->field_0x274 = *(int *)&param_1->field_0x274 + 1;
      param_1->field_023D = PTR_00802a38->field_00E4;
      iVar3 = (int)((ulonglong)((longlong)param_1->field_024D * -0x2aaaaaab) >> 0x20);
      param_1->field_024D = iVar3 - (iVar3 >> 0x1f);
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        sVar6 = param_1->field_0043;
        if (sVar6 < 0) {
          iVar3 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
        }
        sVar6 = param_1->field_0041;
        if (sVar6 < 0) {
          iVar5 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
        }
        VisibleClassTy::VisHoleCreate
                  (g_visibleClass_00802A88,iVar5,iVar3,(undefined *)0x0,
                   *(uint *)&param_1->field_0x24,(undefined *)0x5,500);
      }
      param_1->field_0231 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    uVar4 = (uint)(ushort)(param_1->field_0249 + sVar6 + param_1->field_0045);
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        return;
      }
      uVar4 = thunk_FUN_004ac910(this,'\b');
      if ((param_1->field_0255 != '\0') && (uVar4 == param_1->field_0256)) {
        STT3DSprC::StartShow((STT3DSprC *)this,9,PTR_00802a38->field_00E4);
        thunk_FUN_004ad0e0(this,9);
      }
      iVar3 = thunk_FUN_004acd30(this,'\b');
      if (uVar4 == iVar3 - 1U) {
        STT3DSprC::StopShow((STT3DSprC *)this,8);
      }
      iVar3 = thunk_FUN_004acd30(this,'\n');
      if (uVar4 == iVar3 - 1U) {
        STT3DSprC::StopShow((STT3DSprC *)this,10);
      }
      if (param_1->field_0255 != '\0') {
        iVar3 = thunk_FUN_004acd30(this,'\t');
        iVar5 = thunk_FUN_004ac910(this,'\t');
        if (iVar5 == iVar3 + -1) {
          STT3DSprC::StopShow((STT3DSprC *)this,9);
          param_1->field_0255 = 0;
        }
      }
      iVar3 = thunk_FUN_004acd30(this,'\b');
      if ((uVar4 == iVar3 - 1U) && (param_1->field_0255 == '\0')) {
        thunk_FUN_00584ad0((STJellyGunC *)param_1);
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    iVar7 = PTR_00802a38->field_00E4 - param_1->field_023D;
    if (iVar7 == 1) {
      thunk_FUN_00585890(param_1,iVar3,iVar5,param_1->field_0286);
    }
    iVar3 = *(short *)(DAT_00806724 + 0x23) + -1;
    iVar3 = iVar3 - (iVar3 * iVar7) / (DAT_007cb8e4 >> 1);
    if (iVar3 < 1) {
      param_1->field_0241 = 0;
      thunk_FUN_004ace30(this,0,0);
      thunk_FUN_004aceb0(this,'\x0e');
    }
    else {
      param_1->field_0241 = iVar3;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    uVar4 = (int)param_1->field_0045 - 5;
    if ((param_1->field_0045 < 0x44c) && (0x1b < (int)(param_1->field_0235 - uVar4))) {
      thunk_FUN_00584d10((AnonShape_00584D10_AA6E9D03 *)param_1);
      param_1->field_0235 = uVar4;
    }
    if ((local_14 < 5) && (iVar3 = thunk_FUN_004961b0(local_10,local_8,sVar6), iVar3 == 0)) {
      if (((-1 < local_10) &&
          ((((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)) &&
           ((-1 < sVar6 && (sVar6 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar6 +
                     (int)g_worldGrid.sizeX * (int)local_8 + (int)local_10].objects[0],
          pSVar2 != (STWorldObject *)0x0 && (pSVar2->value_20 != 0xaa)))) {
        thunk_FUN_00584c50(param_1,&pSVar2->vtable);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
    }
  }
  thunk_FUN_00416240(param_1,param_1->field_0041,param_1->field_0043,(short)uVar4);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

