
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_boss_d.cpp
   Diagnostic line evidence: 69 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648780 -> 00648530 @ 006487F3 */

undefined4 * __cdecl FUN_00648530(ushort *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  AnonShape_00648530_D39EB612 *pAVar4;
  InternalExceptionFrame local_4c;
  AnonShape_00648530_D39EB612 *local_8;

  local_8 = (AnonShape_00648530_D39EB612 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    local_8 = (AnonShape_00648530_D39EB612 *)Library::DKW::LIB::FUN_006aac10(0x85);
    puVar3 = param_1;
    pAVar4 = local_8;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pAVar4 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 2;
      pAVar4 = (AnonShape_00648530_D39EB612 *)((int)&pAVar4->field_0001 + 3);
    }
    *(char *)pAVar4 = (char)*puVar3;
    local_8->field_0001 = 0x85;
    local_8->field_0005 = 2;
    puVar2 = thunk_FUN_0065cb00((undefined4 *)(local_8->field_0046 + 0x84 + (int)param_1));
    local_8->field_004E = puVar2;
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_006484f0((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x45);
  return (undefined4 *)0x0;
}

