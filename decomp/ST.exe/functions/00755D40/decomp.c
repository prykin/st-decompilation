
void FUN_00755d40(AnonShape_00755D40_9BC6D2DA *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;

  sVar1 = param_1->field_000C->field_0034;
  if (sVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (*(code *)param_1->field_000C->field_0008)(param_2 + 0x18 + param_3);
  }
  else {
    iVar2 = (int)sVar1;
  }
  iVar2 = iVar2 + 8;
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)(param_2 + 0x10 + param_3),
             (undefined4 *)(iVar2 + param_2 + 0x10 + param_3),
             (*(short *)(param_2 + 8) - iVar2) - param_3);
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) - (short)iVar2;
  return;
}

