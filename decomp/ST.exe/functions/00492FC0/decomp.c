
void __fastcall FUN_00492fc0(AnonShape_00492FC0_E6F586EF *param_1)

{
  undefined4 in_EAX;
  AnonShape_004CC900_31EE9CAA *pAVar1;
  int iVar2;
  
  if ((param_1->field_045D == 9) && (param_1->field_0611 == 3)) {
    pAVar1 = (AnonShape_004CC900_31EE9CAA *)
             STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,
                        CONCAT31((int3)((uint)param_1 >> 8),param_1->field_05FC),
                        CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_05FD),CASE_1);
    if ((pAVar1 != (AnonShape_004CC900_31EE9CAA *)0x0) &&
       (*(int *)&pAVar1->field_0x18 == param_1->field_05FF)) {
      iVar2 = (**(code **)(*(int *)pAVar1 + 0x108))(param_1->field_0024);
      if (iVar2 != 0) {
        thunk_FUN_004cd450(pAVar1);
      }
    }
  }
  return;
}

