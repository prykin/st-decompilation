
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_glsat.cpp
   Diagnostic line evidence: 188 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d9620(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 2:
    iVar2 = ReportDebugMessage(s_E____titans_Artem_TLO_glsat_cpp_007bf5b0,0xbc,0,0,&DAT_007a4ccc,
                               s_Please_Fill_thid_case___007bf5f4);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x4d4) < DAT_00798de0) {
      return 0;
    }
  case 0:
  case 1:
    uVar3 = 1;
  }
  return uVar3;
}

