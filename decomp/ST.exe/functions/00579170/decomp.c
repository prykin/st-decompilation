
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::Bad
   
   [STPrototypeApplier] Propagated return.
   Evidence: 00579170 returns return of FUN_004961b0 @ 0057927A | 00579170 returns return of
   FUN_004961b0 @ 00579284 */

bool __thiscall STCrabC::Bad(STCrabC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)g_worldGrid.sizeX;
  iVar5 = (int)g_worldGrid.sizeY;
  if ((((iVar6 + -1 < *(int *)&this->field_0x26d) || (*(int *)&this->field_0x26d < 0)) ||
      (iVar5 + -1 < *(int *)&this->field_0x271)) || (*(int *)&this->field_0x271 < 0)) {
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x202,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    *(int *)&this->field_0x26d = iVar6 + -1 >> 1;
    *(int *)&this->field_0x271 = iVar5 + -1 >> 1;
  }
  if (((int)this->field_0275 < 0) || (4 < (int)this->field_0275)) {
    iVar5 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x207,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    this->field_0275 = 0;
  }
  if (0x167 < (int)this->field_027D) {
    iVar5 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x20c,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_coordinates___adjus_007cadb4);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    this->field_027D = 0;
  }
  iVar5 = 0;
  do {
    bVar3 = thunk_FUN_004961b0(*(short *)&this->field_0x26d,*(short *)&this->field_0x271,
                               (short)iVar5);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      this->field_0275 = iVar5;
      return bVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return bVar3;
}

