
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 119 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0067D880 -> 0067D1D0 @ 0067D8F6 */

undefined4 * __cdecl FUN_0067d1d0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  AnonShape_0067D1D0_21940C5B *pAVar7;
  undefined4 unaff_ESI;
  ushort *puVar8;
  void *unaff_EDI;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_4c;
  AnonShape_0067D1D0_21940C5B *local_8;
  
  local_8 = (AnonShape_0067D1D0_21940C5B *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_8 = (AnonShape_0067D1D0_21940C5B *)Library::DKW::LIB::FUN_006aac10(299);
    puVar8 = param_1;
    pAVar7 = local_8;
    for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = puVar8[1];
      *(ushort *)&pAVar7->field_0x0 = puVar8[0];
      *(ushort *)&pAVar7->field_0x2 = uVar1;
      puVar8 = puVar8 + 2;
      pAVar7 = (AnonShape_0067D1D0_21940C5B *)&pAVar7->field_0x4;
    }
    *(ushort *)pAVar7 = *puVar8;
    pAVar7->field_0x2 = (char)puVar8[1];
    *(undefined4 *)&local_8->field_0x14 = 299;
    local_8->field_0x18 = 2;
    puVar3 = thunk_FUN_0065cb00((undefined4 *)
                                (*(int *)&local_8[1].field_0x76 + 0x12a + (int)param_1));
    iVar2 = 0;
    *(undefined4 **)&local_8[1].field_0x7e = puVar3;
    pAVar7 = local_8;
    do {
      if (*(int *)(&pAVar7[1].field_0x3a + iVar2) != 0) {
        uVar4 = FUN_006b0060((uint *)0x0,
                             (uint *)(*(int *)(&pAVar7[1].field_0x3e + iVar2) + 0x12a + (int)param_1
                                     ));
        *(undefined4 *)(&local_8[1].field_0x3a + iVar2) = uVar4;
        pAVar7 = local_8;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 < 0x3c);
    if (*(int *)&pAVar7[1].field_0x3a == 0) {
      puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x10,5);
      *(uint **)&local_8[1].field_0x3a = puVar5;
      pAVar7 = local_8;
    }
    iVar2 = *(int *)&pAVar7[1].field_0x3a;
    uVar9 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar10 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar10) {
          puVar3 = (undefined4 *)(*(int *)(iVar2 + 8) * uVar9 + *(int *)(iVar2 + 0x1c));
        }
        else {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3[1] == 0) {
          puVar6 = thunk_FUN_00690fc0((undefined4 *)(puVar3[2] + 0x12a + (int)param_1));
          *puVar3 = puVar6;
          pAVar7 = local_8;
        }
        iVar2 = *(int *)&pAVar7[1].field_0x3a;
        uVar9 = uVar9 + 1;
        bVar10 = uVar9 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar9 < (int)*(uint *)(iVar2 + 0xc));
    }
    g_currentExceptionFrame = local_4c.previous;
    return (undefined4 *)pAVar7;
  }
  g_currentExceptionFrame = local_4c.previous;
  thunk_FUN_0067d160((int *)&local_8);
  RaiseInternalException(iVar2,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x77);
  return (undefined4 *)0x0;
}

