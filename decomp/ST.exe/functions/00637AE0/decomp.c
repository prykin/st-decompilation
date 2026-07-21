
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00637ae0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint local_8;
  
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,s_star_pp_007d1c48,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
    FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                 *(uint *)((int)puVar1 + 0xd),0x5a,0x45,0);
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea960(PTR_00807598,local_8,(float)param_1 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006ea270(PTR_00807598,local_8,0,0);
    FUN_006ea4e0(PTR_00807598,local_8,1,0x5a,0x45);
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
              ((AnonReceiver_006EA050 *)PTR_00807598,local_8,1,0xffffffff,0);
    FUN_006eaaa0(PTR_00807598,local_8,0);
  }
  return;
}

