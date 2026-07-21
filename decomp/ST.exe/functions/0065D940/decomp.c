
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0064E300 -> 0065D940 @ 0064E413 | 00652810 -> 0065D940 @ 006572F6 */

void __thiscall FUN_0065d940(void *this,uint *param_1,int param_2)

{
  undefined2 *puVar1;
  STGameObjC *objPtr;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1 != (uint *)0x0) {
    uVar3 = 0;
    if (0 < (int)param_1[3]) {
      bVar4 = param_1[3] != 0;
      pvVar2 = this;
      do {
        if (bVar4) {
          pvVar2 = (void *)param_1[7];
          puVar1 = (undefined2 *)(param_1[2] * uVar3 + (int)pvVar2);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        objPtr = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)((uint)pvVar2 >> 8),*(undefined1 *)((int)this + 0x24)),
                            CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        pvVar2 = extraout_ECX;
        if (objPtr != (STGameObjC *)0x0) {
          AiFltClassTy::_AddObjFlt(this,(uint)objPtr,param_2);
          pvVar2 = extraout_ECX_00;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < param_1[3];
      } while ((int)uVar3 < (int)param_1[3]);
    }
  }
  return;
}

