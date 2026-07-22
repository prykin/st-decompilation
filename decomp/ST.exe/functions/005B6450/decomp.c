
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00593040 -> 005B6450 @ 0059308C | 005A4350 -> 005B6450 @ 005A43A8 | 005B0BA0 ->
   005B6450 @ 005B0BEF | 005B4BB0 -> 005B6450 @ 005B4C07 | 005B9330 -> 005B6450 @ 005B937A |
   005BC5E0 -> 005B6450 @ 005BC638 | 005C8A40 -> 005B6450 @ 005C8A98 | 005D9470 -> 005B6450 @
   005D94BB | 005EA680 -> 005B6450 @ 005EA6CF */

void __thiscall FUN_005b6450(void *this,STMessage *param_1)

{
  if (param_1->id == MESS_ID_CREATE) {
    *(StartSystemTy **)((int)this + 0x1a5b) = g_startSystem_0081176C;
  }
  return;
}

