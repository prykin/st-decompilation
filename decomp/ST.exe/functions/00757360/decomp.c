
int FUN_00757360(AnonShape_00757360_9C23D284 *param_1,AnonShape_00757360_9B4621C9 *param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_8 = 0;
  if (param_2->field_0036 == '\0') {
    Library::MSVCRT::FUN_00730c40(&param_2->field_0036,0x7f2ce8);
    param_2->field_0014 = 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (param_2->field_0014 != 0) {
      param_1->field_0008->field_0008 = param_1->field_0008->field_0008 | 0x10;
      Library::DKW::FMM::FUN_006d4860
                ((int)param_1->field_0008,param_2->field_0018,(undefined4 *)&param_2->field_0x20,
                 0x20);
    }
    Library::DKW::FMM::FUN_006d4c50
              ((int)param_1->field_0008,param_2->field_0024,(int)param_1->field_0008->field_0016);
    param_2->field_0014 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  return iVar1;
}

