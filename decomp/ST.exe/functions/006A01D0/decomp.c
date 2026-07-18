
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::CreateMap */

undefined4 __thiscall CGenerate::CreateMap(CGenerate *this)

{
  CGenerate CVar1;
  code *pcVar2;
  CGenerate *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  CGenerate *pCVar10;
  void *unaff_EDI;
  CGenerate *pCVar11;
  undefined4 local_64;
  undefined4 local_60 [16];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CGenerate *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_c = 1;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  local_10 = this;
  iVar4 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  pCVar3 = local_10;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    iVar4 = FUN_006ad4d0(s_E____titans_Maps_generate_cpp_007d864c,0x72,0,iVar4,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    return 0;
  }
  *(undefined4 *)(local_10 + 0x53eb) = *(undefined4 *)(local_10 + 0x228);
  *(undefined4 *)(local_10 + 0x53ef) = *(undefined4 *)(local_10 + 0x22c);
  uVar8 = 0xffffffff;
  pCVar10 = local_10 + 0x124;
  do {
    pCVar11 = pCVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pCVar11 = pCVar10 + 1;
    CVar1 = *pCVar10;
    pCVar10 = pCVar11;
  } while (CVar1 != (CGenerate)0x0);
  uVar8 = ~uVar8;
  pCVar10 = pCVar11 + -uVar8;
  pCVar11 = local_10 + 0x53f3;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pCVar11 = *(undefined4 *)pCVar10;
    pCVar10 = pCVar10 + 4;
    pCVar11 = pCVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pCVar11 = *pCVar10;
    pCVar10 = pCVar10 + 1;
    pCVar11 = pCVar11 + 1;
  }
  local_8 = (undefined4 *)0x0;
  FUN_006f1ce0(0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_8,1);
  thunk_FUN_00693710(*local_8);
  cMf32::RecMemFree(*(cMf32 **)(pCVar3 + 0x234),(uint *)&local_8);
  puVar5 = FUN_006f0ec0(0x345,(byte *)(pCVar3 + 0x20),1,0,0);
  *(undefined4 **)(pCVar3 + 0x18) = puVar5;
  thunk_FUN_0069ff90((int)pCVar3);
  puVar5 = FUN_006efc50(*(int *)(pCVar3 + 0x228),*(int *)(pCVar3 + 0x22c),*(int *)(pCVar3 + 0x234),
                        *(int *)(pCVar3 + 0x239),0x20);
  *(undefined4 **)(pCVar3 + 0xc) = puVar5;
  thunk_FUN_0069ff90((int)pCVar3);
  piVar6 = FUN_006f0620(*(short **)(pCVar3 + 0xc));
  *(int **)(pCVar3 + 8) = piVar6;
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_006a2d80(1,*(int **)(pCVar3 + 8));
  thunk_FUN_0069ff90((int)pCVar3);
  iVar4 = FUN_006f0c00(*(short **)(pCVar3 + 0xc),*(int **)(pCVar3 + 8));
  if (iVar4 != 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90((int)pCVar3);
  iVar4 = thunk_FUN_00693ad0(pCVar3 + 0x24e,(undefined2 *)(pCVar3 + 0x53eb));
  if (iVar4 == 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90((int)pCVar3);
  local_20 = *(int *)(pCVar3 + 0x228);
  local_1c = *(undefined4 *)(pCVar3 + 0x22c);
  local_18 = 6;
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_006945c0(pCVar3 + 0x1bef,&local_20);
  thunk_FUN_0069ff90((int)pCVar3);
  thunk_FUN_00691690(pCVar3 + 0x1c03,*(undefined4 *)(pCVar3 + 0x239),0,0,
                     *(undefined **)(pCVar3 + 0x24a));
  thunk_FUN_0069ff90((int)pCVar3);
  DAT_00858df8 = (undefined4 *)local_64;
  return local_c;
}

