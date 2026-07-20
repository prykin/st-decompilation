
int __fastcall FUN_005fa180(AnonShape_005FA180_2D8671A3 *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = param_1->field_02D1;
  if ((uint)PTR_00802a38->field_00E4 % 5 != 0) {
    return iVar3;
  }
  if (param_1->field_02BB == '\x02') {
    puVar1 = &param_1->field_0x1d5;
    thunk_FUN_004ace30(puVar1,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                       (int)*(short *)(DAT_00806724 + 0x2c));
    iVar3 = param_1->field_02D1 + -1;
    param_1->field_02D1 = iVar3;
    if (iVar3 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
      cVar2 = thunk_FUN_004ad610((int)puVar1);
      if (cVar2 != '\0') {
        thunk_FUN_005fa0b0((int)param_1);
        (*(code *)**(undefined4 **)puVar1)();
      }
    }
    iVar3 = param_1->field_02D1;
    if (iVar3 < 0) {
      param_1->field_02D1 = 0;
      thunk_FUN_004ace30(puVar1,0,(int)*(short *)(DAT_00806724 + 0x2c));
    }
    return iVar3;
  }
  puVar1 = &param_1->field_0x1d5;
  thunk_FUN_004ace30(puVar1,*(uint *)(DAT_00806724 + 0x30 + iVar3 * 4),
                     (int)*(short *)(DAT_00806724 + 0x2c));
  iVar3 = param_1->field_02D1;
  iVar6 = iVar3 + 1;
  param_1->field_02D1 = iVar6;
  if (*(short *)(DAT_00806724 + 0x23) <= iVar6) {
    param_1->field_02D1 = iVar3;
    thunk_FUN_00495ff0((short)param_1->field_025D,(short)param_1->field_0261,
                       (short)param_1->field_0265,0,(AnonShape_00495FF0_59081BDD *)param_1);
    thunk_FUN_004ad430((int)puVar1);
    param_1->field_02BB = 0;
    thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
    return iVar6;
  }
  if (iVar6 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
    thunk_FUN_004ad5e0((int)puVar1);
    iVar5 = (int)param_1->field_0045;
    iVar7 = (int)param_1->field_0043;
    iVar3 = (int)param_1->field_0041;
    uVar9 = 0;
    iVar8 = 0;
    uVar4 = thunk_FUN_004ad650((int)puVar1);
    thunk_FUN_006377b0(uVar4,iVar8,iVar3,iVar7,iVar5,uVar9);
  }
  return iVar6;
}

