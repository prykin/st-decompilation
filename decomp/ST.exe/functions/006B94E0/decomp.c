
void FUN_006b94e0(AnonShape_006B94E0_A7E74DF0 *param_1,undefined4 param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = *(int *)(param_8 + 0x18 + param_3 * 0x1c);
  puVar1 = (undefined4 *)(param_8 + param_3 * 0x1c);
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (param_6 < 0) {
    param_4 = param_4 + 1 + param_6;
    param_6 = -param_6;
  }
  if (param_7 < 0) {
    param_5 = param_5 + 1 + param_7;
    param_7 = -param_7;
  }
  iVar2 = param_4 + -1 + param_6;
  uVar4 = param_1->field_0498;
  iVar3 = param_5 + -1 + param_7;
  iVar5 = param_1->field_04A0;
  uVar6 = param_1->field_04A4;
  FUN_006bbb00(param_1,0xd);
  FUN_006c6450(param_1,puVar1[1]);
  FUN_006c6410((AnonShape_006C6410_3502CDE7 *)param_1,puVar1[2]);
  param_3 = 0;
  if (0 < iVar8) {
    param_8 = param_5;
    do {
      iVar7 = Library::DKW::DDX::FUN_006c53b0
                        ((int)param_1,param_4,param_8,iVar2 - iVar8,param_8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8 = param_8 + 1;
    } while (param_3 < iVar8);
  }
  FUN_006c6410((AnonShape_006C6410_3502CDE7 *)param_1,puVar1[3]);
  param_3 = 0;
  if (0 < iVar8) {
    param_8 = iVar2;
    do {
      iVar7 = Library::DKW::DDX::FUN_006c53b0
                        ((int)param_1,param_8,param_5,param_8,iVar3 - iVar8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8 = param_8 + -1;
    } while (param_3 < iVar8);
  }
  FUN_006c6410((AnonShape_006C6410_3502CDE7 *)param_1,puVar1[4]);
  param_3 = 0;
  param_8 = iVar3;
  if (0 < iVar8) {
    do {
      iVar7 = Library::DKW::DDX::FUN_006c53b0
                        ((int)param_1,iVar2,param_8,iVar8 + param_4,param_8,*puVar1);
      if (iVar7 != 0) goto cf_common_exit_006B96BA;
      param_3 = param_3 + 1;
      param_8 = param_8 + -1;
    } while (param_3 < iVar8);
  }
  FUN_006c6410((AnonShape_006C6410_3502CDE7 *)param_1,puVar1[5]);
  param_3 = 0;
  if (0 < iVar8) {
    iVar2 = iVar8 + param_5;
    param_5 = param_4;
    do {
      iVar7 = Library::DKW::DDX::FUN_006c53b0((int)param_1,param_5,iVar3,param_5,iVar2,*puVar1);
      if (iVar7 != 0) break;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    } while (param_3 < iVar8);
  }
cf_common_exit_006B96BA:
  FUN_006bbb00(param_1,uVar4);
  FUN_006c6410((AnonShape_006C6410_3502CDE7 *)param_1,iVar5);
  FUN_006c6450(param_1,uVar6);
  return;
}

