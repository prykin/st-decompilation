
void __fastcall FUN_00585020(AnonShape_00585020_1C9B1418 *param_1)

{
  int iVar1;
  undefined1 *this;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  short sVar7;
  int iVar8;
  int local_14;
  short local_10;
  short local_8;
  
  sVar7 = param_1->field_0041;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar7;
  param_1->field_005B = sVar7;
  sVar7 = param_1->field_0043;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar7;
  param_1->field_005D = sVar7;
  sVar7 = param_1->field_0045;
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar7;
  param_1->field_005F = sVar7;
  iVar4 = thunk_FUN_0041c710((int)param_1);
  this = &param_1->field_0x1d5;
  if (iVar4 == 0) {
    iVar4 = 0;
    uVar5 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar5,iVar4);
    bVar3 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (CONCAT31(extraout_var,bVar3) == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;
    uVar5 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(param_1->field_0211,uVar5,iVar4);
    iVar4 = 1;
  }
  iVar6 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(param_1->field_0211,iVar6,iVar4);
  sVar7 = param_1->field_0041;
  iVar4 = (int)sVar7;
  if (sVar7 < 0) {
    local_10 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    local_10 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0043;
  iVar6 = (int)sVar7;
  if (sVar7 < 0) {
    local_8 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = param_1->field_0045;
  if (sVar7 < 0) {
    local_14 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                      (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                           (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
  }
  iVar8 = param_1->field_0231;
  sVar7 = (short)local_14;
  if (iVar8 == 0) {
    iVar6 = PTR_00802a38->field_00E4 - param_1->field_023D;
    iVar4 = (param_1->field_024D * iVar6 * iVar6) / 22000;
    if ((local_14 < 5) &&
       (bVar3 = thunk_FUN_004961b0(local_10,local_8,sVar7), CONCAT31(extraout_var_01,bVar3) == 0)) {
      if ((((-1 < local_10) &&
           (((local_10 < SHORT_007fb240 && (-1 < local_8)) && (local_8 < SHORT_007fb242)))) &&
          (((-1 < sVar7 && (sVar7 < SHORT_007fb244)) &&
           (puVar2 = *(undefined4 **)
                      (DAT_007fb248 +
                      ((int)SHORT_007fb246 * (int)sVar7 + (int)SHORT_007fb240 * (int)local_8 +
                      (int)local_10) * 8), puVar2 != (undefined4 *)0x0)))) && (puVar2[8] != 0xaa)) {
        thunk_FUN_00584c50(param_1,puVar2);
        thunk_FUN_005860d0(param_1,(int)(short)param_1->field_0041,(int)(short)param_1->field_0043,
                           0x464);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
      return;
    }
    iVar8 = DAT_007cb8e4 >> 1;
    if (iVar8 < iVar6) {
      iVar1 = *(short *)(DAT_00806724 + 0x23) + -1;
      iVar8 = ((iVar6 - iVar8) * iVar1) / iVar8;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (*(short *)(DAT_00806724 + 0x23) <= iVar8) {
        thunk_FUN_004ace30(this,0,0);
        iVar8 = iVar1;
      }
      param_1->field_0241 = iVar8;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar8 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    sVar7 = (short)iVar4;
    if (iVar4 + 0x28 < 0) {
      thunk_FUN_00416240(param_1,*(undefined2 *)&param_1->field_0x278,
                         *(undefined2 *)&param_1->field_0x27c,sVar7 + param_1->field_0045 + 0x28);
      param_1->field_0251 = 0x168;
      param_1->field_0235 = (int)param_1->field_0045;
      *(int *)&param_1->field_0x274 = *(int *)&param_1->field_0x274 + 1;
      param_1->field_023D = PTR_00802a38->field_00E4;
      iVar4 = (int)((ulonglong)((longlong)param_1->field_024D * -0x2aaaaaab) >> 0x20);
      param_1->field_024D = iVar4 - (iVar4 >> 0x1f);
      if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
        sVar7 = param_1->field_0043;
        if (sVar7 < 0) {
          iVar4 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                         (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                              (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
        }
        sVar7 = param_1->field_0041;
        if (sVar7 < 0) {
          iVar6 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                         (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                              (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
        }
        VisibleClassTy::VisHoleCreate
                  (g_visibleClass_00802A88,iVar6,iVar4,(undefined *)0x0,
                   *(uint *)&param_1->field_0x24,(undefined *)0x5,500);
      }
      param_1->field_0231 = 1;
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    uVar5 = (uint)(ushort)(param_1->field_0249 + sVar7 + param_1->field_0045);
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      uVar5 = thunk_FUN_004ac910(this,'\b');
      if ((param_1->field_0255 != '\0') && (uVar5 == param_1->field_0256)) {
        STT3DSprC::StartShow((STT3DSprC *)this,9,PTR_00802a38->field_00E4);
        thunk_FUN_004ad0e0(this,9);
      }
      iVar4 = thunk_FUN_004acd30(this,'\b');
      if (uVar5 == iVar4 - 1U) {
        STT3DSprC::StopShow((STT3DSprC *)this,8);
      }
      iVar4 = thunk_FUN_004acd30(this,'\n');
      if (uVar5 == iVar4 - 1U) {
        STT3DSprC::StopShow((STT3DSprC *)this,10);
      }
      if (param_1->field_0255 != '\0') {
        iVar4 = thunk_FUN_004acd30(this,'\t');
        iVar6 = thunk_FUN_004ac910(this,'\t');
        if (iVar6 == iVar4 + -1) {
          STT3DSprC::StopShow((STT3DSprC *)this,9);
          param_1->field_0255 = 0;
        }
      }
      iVar4 = thunk_FUN_004acd30(this,'\b');
      if ((uVar5 == iVar4 - 1U) && (param_1->field_0255 == '\0')) {
        thunk_FUN_00584ad0((STJellyGunC *)param_1);
        return;
      }
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    iVar8 = PTR_00802a38->field_00E4 - param_1->field_023D;
    if (iVar8 == 1) {
      thunk_FUN_00585890(param_1,iVar4,iVar6,param_1->field_0286);
    }
    iVar4 = *(short *)(DAT_00806724 + 0x23) + -1;
    iVar4 = iVar4 - (iVar4 * iVar8) / (DAT_007cb8e4 >> 1);
    if (iVar4 < 1) {
      param_1->field_0241 = 0;
      thunk_FUN_004ace30(this,0,0);
      thunk_FUN_004aceb0(this,'\x0e');
    }
    else {
      param_1->field_0241 = iVar4;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar4 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    uVar5 = (int)param_1->field_0045 - 5;
    if ((param_1->field_0045 < 0x44c) && (0x1b < (int)(param_1->field_0235 - uVar5))) {
      thunk_FUN_00584d10((AnonShape_00584D10_AA6E9D03 *)param_1);
      param_1->field_0235 = uVar5;
    }
    if ((local_14 < 5) &&
       (bVar3 = thunk_FUN_004961b0(local_10,local_8,sVar7), CONCAT31(extraout_var_00,bVar3) == 0)) {
      if (((-1 < local_10) &&
          ((((local_10 < SHORT_007fb240 && (-1 < local_8)) && (local_8 < SHORT_007fb242)) &&
           ((-1 < sVar7 && (sVar7 < SHORT_007fb244)))))) &&
         ((puVar2 = *(undefined4 **)
                     (DAT_007fb248 +
                     ((int)SHORT_007fb246 * (int)sVar7 + (int)SHORT_007fb240 * (int)local_8 +
                     (int)local_10) * 8), puVar2 != (undefined4 *)0x0 && (puVar2[8] != 0xaa)))) {
        thunk_FUN_00584c50(param_1,puVar2);
      }
      param_1->field_0231 = 2;
      thunk_FUN_00584b10((AnonShape_00584B10_33997544 *)param_1);
    }
  }
  thunk_FUN_00416240(param_1,param_1->field_0041,param_1->field_0043,(short)uVar5);
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

