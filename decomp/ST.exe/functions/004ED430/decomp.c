
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_vqb.cpp
   Diagnostic line evidence: 143 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004ed430(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 0:
  case 1:
  case 4:
    uVar3 = 1;
    break;
  case 2:
    iVar2 = ReportDebugMessage(s_E____titans_Artem_TLO_vqb_cpp_007c1670,0x8f,0,0,&DAT_007a4ccc,
                               s_Please_Fill_this_case___007bf5d8);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

