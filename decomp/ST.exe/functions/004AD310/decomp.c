
void __fastcall FUN_004ad310(STT3DSprC *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)param_1->field_0014) {
    do {
      STT3DSprC::UnLoadSequence(param_1,(byte)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1->field_0014);
  }
  FUN_006e8ba0((void *)param_1->field_003C,param_1->field_0018);
  if (param_1->field_0020 != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_0020);
  }
  return;
}

