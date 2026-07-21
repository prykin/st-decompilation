
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 651 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d01f0(void *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int exceptionCode;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar1 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(pAVar1);
    }
    *(STT3DSprC **)((int)param_1 + 0x5ff) = this;
    exceptionCode = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_dock_cpp_007bf39c
                 ,0x28b);
    }
    thunk_FUN_004ce9e0(param_1,&local_10,&local_c,&local_8);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)local_10 * _DAT_007904f8 * _DAT_007904f0,
                       (float)local_c * _DAT_007904f8 * _DAT_007904f0,
                       (float)local_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
  }
  return 0;
}

