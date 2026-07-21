
short FUN_0043e460(char param_1)

{
  DArrayTy *pDVar1;
  dword dVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;

  iVar7 = 0;
  sVar5 = 0;
  pDVar1 = g_playerRuntime[param_1].objects;
  dVar2 = pDVar1->count;
  sVar4 = 0;
  if (0 < (int)dVar2) {
    do {
      sVar5 = sVar4;
      piVar3 = *(int **)((int)pDVar1->data + iVar7 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 == 1)) {
        sVar5 = sVar5 + 1;
      }
      iVar7 = iVar7 + 1;
      sVar4 = sVar5;
    } while (iVar7 < (int)dVar2);
  }
  return sVar5;
}

