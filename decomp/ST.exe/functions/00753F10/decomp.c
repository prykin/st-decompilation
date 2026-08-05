
int __cdecl
FUN_00753f10(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  AnonShape_00754185_34BF31BE *context;
  int _Value;
  undefined1 *puVar1;

  puVar1 = &stack0xfffffffc;
  context = (AnonShape_00754185_34BF31BE *)thunk_FUN_006a3be0(0xc1d2);
  if (context == nullptr) {
    _Value = -2;
  }
  else {
    *(undefined4 *)context = param_1;
    *(undefined4 *)&context->field_0xc = param_4;
    *(int *)&context->field_0x4 = param_2;
    context->field_0018 = param_2;
    *(undefined4 *)&context->field_0x10 = param_5;
    *(undefined4 *)&context->field_0x1c = param_5;
    *(int *)&context->field_0x8 = param_3;
    *(int *)&context->field_0x20 = param_3 + 1;
    *(undefined4 *)&context->field_0x14 = param_6;
    *(undefined4 *)&context->field_0x24 = param_6;
    *(undefined4 *)&context->field_0x3c = 0;
    FUN_00754185(context);
    _Value = *(int *)&context->field_0x3c;
    Library::MSVCRT::thunk_FUN_006a4950(*(int **)(puVar1 + -4));
  }
  if ((_Value < 0) && (g_currentExceptionFrame != nullptr)) {
                    /* WARNING: Subroutine does not return */
    Library::MSVCRT::_longjmp(g_currentExceptionFrame->jumpBuffer,_Value);
  }
  return _Value;
}

