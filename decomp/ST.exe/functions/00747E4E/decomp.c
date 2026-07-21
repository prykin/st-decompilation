
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=007476A9 @ 007476C3
   -> CMP CMP EAX,0x1 | 00747704 @ 00747731 -> CMP CMP EAX,0x1 | 007477EA @ 007477F1 -> CMP CMP
   EAX,0x1 */

int __fastcall FUN_00747e4e(AnonShape_00747E4E_3F64CF30 *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1->field_000C + 0x14))();
  return (uint)(iVar1 != param_1->field_0010);
}

