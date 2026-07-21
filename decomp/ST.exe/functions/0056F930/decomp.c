
undefined4 __fastcall FUN_0056f930(AnonShape_0056F930_C6277D80 *param_1)

{
  char cVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int iVar2;
  UINT resourceId;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if ((((DAT_00807364 == '\0') &&
       (((cVar1 = param_1->field_112E, cVar1 == '\x01' || (cVar1 == '\x02')) || (cVar1 == '\x03'))))
      && ((*(int *)&param_1[4].field_0x8fa + 1U < 100 && (param_1->field_1163 == '\x01')))) &&
     ((param_1->field_1180 == '\b' || (param_1->field_1180 == '\t')))) {
    if (cVar1 == '\x01') {
      resourceId = 0x2688;
    }
    else {
      resourceId = (cVar1 != '\x02') + 0x2689;
    }
    puVar5 = PTR_DAT_0079b034;
    LoadResourceString(0x268b,HINSTANCE_00807618);
    iVar2 = *(int *)&param_1[4].field_0x8fa + 1;
    uVar4 = extraout_EAX;
    LoadResourceString(resourceId,HINSTANCE_00807618);
    uVar3 = extraout_EAX_00;
    LoadResourceString(0x2687,HINSTANCE_00807618);
    wsprintfA(&param_1[6].field_0x10ea,s__s_s_s__s_s_s_02d_s_s_007ca20c,&param_1->field_0x60,
              PTR_s_SAVEGAME__0079b02c,&param_1->field_0x7bd,PTR_DAT_0079b050,extraout_EAX_01,uVar3,
              iVar2,uVar4,puVar5);
    return 1;
  }
  return 0;
}

