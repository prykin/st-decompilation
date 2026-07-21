
int __fastcall FUN_004be380(AnonShape_004BE380_4A62E49E *param_1)

{
  uint uVar1;
  
  uVar1 = GetPlayerRaceId(param_1->field_023D);
  return (param_1->field_0241 * 100) /
         *(int *)(&DAT_007e417c + (((uVar1 & 0xff) - 1) + param_1->field_0235 * 3) * 4);
}

