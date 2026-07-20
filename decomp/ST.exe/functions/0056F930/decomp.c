
undefined4 __fastcall FUN_0056f930(AnonShape_0056F930_C6277D80 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  UINT uID;
  undefined *puVar6;
  
  if ((((DAT_00807364 == '\0') &&
       (((cVar1 = param_1->field_112E, cVar1 == '\x01' || (cVar1 == '\x02')) || (cVar1 == '\x03'))))
      && ((*(int *)&param_1[4].field_0x8fa + 1U < 100 && (param_1->field_1163 == '\x01')))) &&
     ((param_1->field_1180 == '\b' || (param_1->field_1180 == '\t')))) {
    if (cVar1 == '\x01') {
      uID = 0x2688;
    }
    else {
      uID = (cVar1 != '\x02') + 0x2689;
    }
    puVar6 = PTR_DAT_0079b034;
    uVar2 = FUN_006b0140(0x268b,HINSTANCE_00807618);
    iVar5 = *(int *)&param_1[4].field_0x8fa + 1;
    uVar3 = FUN_006b0140(uID,HINSTANCE_00807618);
    uVar4 = FUN_006b0140(0x2687,HINSTANCE_00807618);
    wsprintfA(&param_1[6].field_0x10ea,s__s_s_s__s_s_s_02d_s_s_007ca20c,&param_1->field_0x60,
              PTR_s_SAVEGAME__0079b02c,&param_1->field_0x7bd,PTR_DAT_0079b050,uVar4,uVar3,iVar5,
              uVar2,puVar6);
    return 1;
  }
  return 0;
}

