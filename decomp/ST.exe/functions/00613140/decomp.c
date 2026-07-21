
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00613140(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_10 = (float)param_4 * _DAT_007904f8 * _DAT_007904f0;
  local_c = (float)param_5 * _DAT_007904f8 * _DAT_007904f0;
  local_8 = (float)param_6 * _DAT_007904f8 * _DAT_007904f0;
  FUN_006e25d0(PTR_00807598,&local_3c);
  local_1c = (float)param_1 * _DAT_007904f8 * _DAT_007904f0;
  local_18 = (float)param_2 * _DAT_007904f8 * _DAT_007904f0;
  local_14 = (float)param_3 * _DAT_007904f8 * _DAT_007904f0;
  FUN_006e25d0(PTR_00807598,&local_2c);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  sVar1 = (**(code **)(*(int *)this + 0x14))
                    (local_3c >> 0x10,local_38 >> 0x10,local_34 >> 0x10,local_2c >> 0x10,
                     local_28 >> 0x10,local_24 >> 0x10);
  return *(undefined4 *)(&DAT_007d2138 + sVar1 * 4);
}

