
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_004d01f0(void *param_1)

{
  undefined4 *puVar1;
  STT3DSprC *this;
  int exceptionCode;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    puVar1 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(puVar1);
    }
    *(STT3DSprC **)((int)param_1 + 0x5ff) = this;
    exceptionCode = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,DAT_007ed77c,s_E____titans_Artem_TLO_dock_cpp_007bf39c,0x28b);
    }
    thunk_FUN_004ce9e0(param_1,&iStack_10,&iStack_c,&iStack_8);
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)iStack_10 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iStack_c * _DAT_007904f8 * _DAT_007904f0,
                       (float)iStack_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
  }
  return 0;
}

