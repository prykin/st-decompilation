
int __thiscall FUN_004ce060(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_c;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x524)) {
    puVar2 = (undefined4 *)((int)this + 0x4d0);
    do {
      iVar1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar2,
                         (int *)&local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar1 == 0) && (local_c != (int *)0x0)) &&
         (iVar1 = (**(code **)(*local_c + 0x2c))(), iVar1 == param_1)) {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar1 = local_8;
    } while (iVar3 < *(int *)((int)this + 0x524));
  }
  return iVar1;
}

