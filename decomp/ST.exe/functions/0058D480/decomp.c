
int __cdecl FUN_0058d480(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;

  local_8 = 0;
  iVar4 = param_1 - param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar6 = param_2 - param_3;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar5 = param_1 + param_3;
  if (g_worldGrid.sizeX <= iVar5) {
    iVar5 = g_worldGrid.sizeX + -1;
  }
  iVar3 = param_3 + param_2;
  if (g_worldGrid.sizeY <= iVar3) {
    iVar3 = g_worldGrid.sizeY + -1;
  }
  iVar2 = DAT_00811720;
  while( true ) {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return local_8;
      }
      iVar1 = *(int *)(DAT_0081171c + iVar2 * 4);
    } while (((((int)*(short *)(iVar1 + 0x41) < iVar4 * 0xc9) ||
              (iVar5 * 0xc9 < (int)*(short *)(iVar1 + 0x41))) ||
             ((int)*(short *)(iVar1 + 0x43) < iVar6 * 0xc9)) ||
            (iVar3 * 0xc9 < (int)*(short *)(iVar1 + 0x43)));
    if (param_5 == 1) break;
    if (param_5 != 0) goto LAB_0058d54d;
    if ((*(int *)(iVar1 + 0x20) == 0x32) || (*(int *)(iVar1 + 0x20) == 0x8c)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)PTR_00802a38->vtable->field_0018)(param_4);
LAB_0058d559:
      local_8 = local_8 + 1;
    }
  }
  if ((*(int *)(iVar1 + 0x20) == 0x10e) || (*(int *)(iVar1 + 0x20) == 0x118)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)PTR_00802a38->vtable->field_0018)(param_4);
    local_8 = local_8 + 1;
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0058d54d:
  (*(code *)PTR_00802a38->vtable->field_0018)(param_4);
  goto LAB_0058d559;
}

