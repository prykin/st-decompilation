
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064E300 -> 0065D940 @ 0064E413 | 00652810 -> 0065D940 @ 006572F6 */

void __thiscall FUN_0065d940(void *this,uint *param_1,int param_2)

{
  undefined2 *puVar1;
  STGameObjC *objPtr;
  uint uVar2;
  bool bVar3;

  if (param_1 != (uint *)0x0) {
    uVar2 = 0;
    if (0 < (int)param_1[3]) {
      bVar3 = param_1[3] != 0;
      do {
        if (bVar3) {
          puVar1 = (undefined2 *)(param_1[2] * uVar2 + param_1[7]);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        objPtr = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,*(char *)((int)this + 0x24),
                            CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        if (objPtr != (STGameObjC *)0x0) {
          AiFltClassTy::_AddObjFlt(this,(uint)objPtr,param_2);
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < param_1[3];
      } while ((int)uVar2 < (int)param_1[3]);
    }
  }
  return;
}

