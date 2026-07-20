
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00533D10 -> 006E8640 @ 00534E78 | 005776D0 -> 006E8640 @ 00577B98 */

void __thiscall FUN_006e8640(void *this,char *text,char *param_2)

{
  *(char **)((int)this + 0x2a0) = text;
  *(char **)((int)this + 0x2a4) = param_2;
  return;
}

