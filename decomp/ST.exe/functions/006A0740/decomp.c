
/* Recovered from embedded debug metadata:
   E:\__titans\Maps\generate.cpp
   CGenerate::SaveMap */

int __thiscall CGenerate::SaveMap(CGenerate *this)

{
  code *pcVar1;
  CGenerate *this_00;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  CGenerate *pCVar6;
  void *unaff_EDI;
  char *pcVar7;
  CGenerate *pCVar8;
  undefined4 *puVar9;
  char cVar10;
  uint *puVar11;
  InternalExceptionFrame local_54;
  CGenerate *local_10;
  byte *local_c;
  int local_8;
  
  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Maps_generate_cpp_007d864c,0xcd,0,iVar2,&DAT_007a4ccc,
                               s_CGenerate__SaveMap_007d868c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    return 0;
  }
  *(undefined4 *)(local_10 + 0x570b) = 0x32;
  iVar2 = thunk_FUN_00693d00(local_10 + 0x24e,*(undefined4 *)(local_10 + 0x18),DAT_00853de0);
  if (iVar2 == 0) {
    local_8 = 0;
  }
  pcVar3 = (char *)FUN_006b0140(0x232b,DAT_00807618);
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar10 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar10 != '\0');
  uVar4 = ~uVar4;
  pCVar6 = (CGenerate *)(pcVar7 + -uVar4);
  pCVar8 = this_00 + 0x55fb;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar8 = pCVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar8 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar8 = pCVar8 + 1;
  }
  FUN_006f13f0(0,PTR_s_TITLE_MISSION_0079d838,(byte *)(this_00 + 0x55fb),0x104,(undefined4 *)0x0,
               '\0',(uint *)0x0);
  FUN_006f13f0(0,PTR_s_TEXTURE_0079d83c,(byte *)(this_00 + 0x53f3),0x104,(undefined4 *)0x0,'\0',
               (uint *)0x0);
  iVar2 = FUN_006f0c00(*(short **)(this_00 + 0xc),*(int **)(this_00 + 8));
  if (iVar2 != 0) {
    local_8 = 0;
  }
  *(undefined1 *)(*(int *)(this_00 + 0xc) + 4) = 0x20;
  iVar2 = FUN_006efdb0(*(undefined2 **)(this_00 + 0xc),*(int *)(this_00 + 0x18),s_3D_MAP_007ca1e4,
                       '\0');
  if (iVar2 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    iVar2 = _saveObj(this_00);
    if (iVar2 == 0) {
      local_8 = 0;
    }
  }
  local_c = (byte *)thunk_FUN_006a2ed0(*(short **)(this_00 + 0xc));
  puVar11 = (uint *)0x0;
  cVar10 = '\0';
  puVar9 = (undefined4 *)0x0;
  uVar4 = FUN_006b5050((int)local_c);
  FUN_006f13f0(0xc,PTR_s_SMALL_MAP_0079d840,local_c,uVar4,puVar9,cVar10,puVar11);
  if (local_c != (byte *)0x0) {
    FUN_006ab060(&local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return local_8;
}

