
/* [STPrototypeApplier] Propagated return.
   Evidence: 004952E0 returns return of FUN_004b7d50 @ 004953DE
   
   [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0 */

bool __thiscall STBoatC::sub_004952E0(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  STWorldObject *pSVar5;
  bool bVar6;
  uint uVar7;
  
  sVar1 = this->field_066F;
  sVar2 = this->field_0673;
  sVar3 = this->field_0671;
  if (((((-1 < sVar1) && (sVar1 < SHORT_007fb240)) && (-1 < sVar3)) &&
      ((sVar3 < SHORT_007fb242 && (-1 < sVar2)))) &&
     ((sVar2 < SHORT_007fb244 &&
      ((pSVar5 = g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1].
                 objects[0], pSVar5 != (STWorldObject *)0x0 && (pSVar5->value_20 == 1000)))))) {
    thunk_FUN_004b7d50(pSVar5,this);
  }
  uVar4 = this->field_0423;
  uVar7 = (uint)uVar4;
  sVar1 = this->field_0427;
  sVar2 = this->field_0425;
  if ((((-1 < (short)uVar4) && ((short)uVar4 < SHORT_007fb240)) && (-1 < sVar2)) &&
     (((sVar2 < SHORT_007fb242 && (-1 < sVar1)) && (sVar1 < SHORT_007fb244)))) {
    uVar7 = (uint)(short)uVar4;
    pSVar5 = g_worldCells
             [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + uVar7].objects
             [0];
    if ((pSVar5 != (STWorldObject *)0x0) && (pSVar5->value_20 == 1000)) {
      bVar6 = thunk_FUN_004b7d50(pSVar5,this);
      uVar7 = (uint)bVar6;
    }
  }
  return SUB41(uVar7,0);
}

