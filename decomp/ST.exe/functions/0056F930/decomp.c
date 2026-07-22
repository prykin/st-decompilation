
undefined4 __fastcall FUN_0056f930(AnonShape_0056F930_C6277D80 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  UINT resourceId;
  undefined *puVar6;

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
    puVar6 = PTR_DAT_0079b034;
    pcVar2 = LoadResourceString(0x268b,g_module_00807618);
    iVar5 = *(int *)&param_1[4].field_0x8fa + 1;
    pcVar3 = LoadResourceString(resourceId,g_module_00807618);
    pcVar4 = LoadResourceString(0x2687,g_module_00807618);
    wsprintfA(&param_1[6].field_0x10ea,"%s%s%s\\%s%s%s%02d%s%s",&param_1->field_0x60,
              PTR_s_SAVEGAME__0079b02c,&param_1->field_0x7bd,PTR_DAT_0079b050,pcVar4,pcVar3,iVar5,
              pcVar2,puVar6);
    return 1;
  }
  return 0;
}

