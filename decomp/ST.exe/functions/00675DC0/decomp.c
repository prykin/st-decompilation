
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00652810 -> 00675DC0 @ 00656B05 | 00652810 -> 00675DC0 @ 00656BF9 | 00652810 ->
   00675DC0 @ 00656CED | 0065E6C0 -> 00675DC0 @ 0065E6DB | 00675EA0 -> 00675DC0 @ 00675F34 */

void __cdecl FUN_00675dc0(uint param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (param_2 != (uint *)0x0)) &&
     (uVar1 = param_2[3], uVar1 != 0)) {
    uVar6 = 0;
    if (uVar1 != 0) {
      uVar5 = 0;
      if (uVar1 == 0) {
        puVar2 = (undefined2 *)0x0;
        goto LAB_00675dfe;
      }
      do {
        puVar2 = (undefined2 *)(param_2[2] * uVar5 + param_2[7]);
LAB_00675dfe:
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,param_1,
                            CONCAT22((short)((uint)puVar2 >> 0x10),*puVar2),CASE_1);
        if (((pSVar3 != (STGameObjC *)0x0) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)
            ) && (iVar4 = (*pSVar3->vtable->vfunc_2C)(), iVar4 == 0x78)) {
          *(undefined4 *)&pSVar3[1].field_0x98 = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < param_2[3]);
    }
    STAllPlayersC::AddObjsToGroup(g_sTAllPlayers_007FA174,param_1,0,param_2,(undefined2 *)0x0);
  }
  return;
}

