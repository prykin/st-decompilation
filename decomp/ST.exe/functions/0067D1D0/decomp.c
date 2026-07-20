
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 119 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067D880 -> 0067D1D0 @ 0067D8F6 */

undefined4 * __cdecl FUN_0067d1d0(ushort *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ushort *puVar7;
  uint uVar8;
  bool bVar9;
  InternalExceptionFrame local_4c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    local_8 = (ushort *)Library::DKW::LIB::FUN_006aac10(299);
    puVar6 = param_1;
    puVar7 = local_8;
    for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    }
    *puVar7 = *puVar6;
    *(char *)(puVar7 + 1) = (char)puVar6[1];
    local_8[10] = 299;
    local_8[0xb] = 0;
    *(undefined1 *)(local_8 + 0xc) = 2;
    puVar2 = thunk_FUN_0065cb00((undefined4 *)(*(int *)(local_8 + 0x7f) + 0x12a + (int)param_1));
    iVar1 = 0;
    *(undefined4 **)(local_8 + 0x83) = puVar2;
    puVar6 = local_8;
    do {
      if (*(int *)(iVar1 + 0xc2 + (int)puVar6) != 0) {
        uVar3 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(iVar1 + 0xc6 + (int)puVar6) + 0x12a + (int)param_1));
        *(undefined4 *)(iVar1 + 0xc2 + (int)local_8) = uVar3;
        puVar6 = local_8;
      }
      iVar1 = iVar1 + 0xc;
    } while (iVar1 < 0x3c);
    if (*(int *)(puVar6 + 0x61) == 0) {
      puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x10,5);
      *(uint **)(local_8 + 0x61) = puVar4;
      puVar6 = local_8;
    }
    iVar1 = *(int *)(puVar6 + 0x61);
    uVar8 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar9 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar9) {
          puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar8 + *(int *)(iVar1 + 0x1c));
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        if (puVar2[1] == 0) {
          puVar5 = thunk_FUN_00690fc0((undefined4 *)(puVar2[2] + 0x12a + (int)param_1));
          *puVar2 = puVar5;
          puVar6 = local_8;
        }
        iVar1 = *(int *)(puVar6 + 0x61);
        uVar8 = uVar8 + 1;
        bVar9 = uVar8 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar8 < (int)*(uint *)(iVar1 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)puVar6;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar1,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x77);
  return (undefined4 *)0x0;
}

