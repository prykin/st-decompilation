
void FUN_0075a800(AnonShape_0075A800_65F17FFC *param_1)

{
  AnonNested_0075A800_019A_8DF3E337 *pAVar1;
  int iVar2;

  pAVar1 = param_1->field_019A;
  if (pAVar1->field_0010 != 0) {
    if (*(int *)&param_1->field_0x48 != 0) {
      iVar2 = FUN_0075ae60((undefined4 *)param_1);
      if (iVar2 != 0) {
        pAVar1->field_000C = FUN_0075af80;
        *(undefined4 *)&param_1->field_0x94 = 0;
        return;
      }
    }
    pAVar1->field_000C = FUN_0075acb0;
  }
  *(undefined4 *)&param_1->field_0x94 = 0;
  return;
}

