
void __fastcall FUN_0056ef50(AnonShape_0056EF50_CAB83E9D *param_1)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint local_8;
  
  if (param_1->field_1195 != '\0') {
    bVar2 = 0;
    local_8 = 0;
    do {
      if (((&param_1[1].field_0x31)[local_8 * 0x51] == param_1->field_112D) &&
         ((&param_1[1].field_0xf)[local_8 * 0x51] == '\0')) {
        param_1->field_112E = (&param_1[1].field_0x30)[local_8 * 0x51];
        return;
      }
      bVar2 = bVar2 + 1;
      local_8 = (uint)bVar2;
    } while (bVar2 < 8);
  }
  param_1->field_112D = 0xff;
  param_1->field_112E = 0;
  pcVar1 = &param_1[1].field_0x31;
  iVar3 = 8;
  do {
    if (((*pcVar1 != -1) && (pcVar1[-1] != '\0')) && (pcVar1[-0x22] == '\0')) {
      param_1->field_112D = *pcVar1;
      param_1->field_112E = pcVar1[-1];
      param_1->field_112F = 0;
    }
    pcVar1 = pcVar1 + 0x51;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  thunk_FUN_0056ee90((AnonShape_0056EE90_04DD57E6 *)param_1);
  return;
}

