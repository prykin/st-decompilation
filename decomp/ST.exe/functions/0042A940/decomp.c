
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079059C (store 0042A955)
   Evidence: final_vptr=0079059C; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STAllPlayersC * __thiscall STAllPlayersC::STAllPlayersC(STAllPlayersC *this)

{
  PackedRecord_A62x8 *pPVar1;
  int iVar2;

  sub_006E60E0(this);
  this->vtable = &STAllPlayersCVTable;
  pPVar1 = g_packedRecords_A62x8;
  for (iVar2 = 0x14d5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pPVar1 = 0;
    pPVar1 = (PackedRecord_A62x8 *)((int)&pPVar1->field1_0x1 + 3);
  }
  pPVar1 = g_packedRecords_A62x8;
  do {
    pPVar1->field0_0x0 = 0;
    pPVar1 = pPVar1 + 1;
  } while ((int)pPVar1 < 0x7fa130);
  return this;
}

