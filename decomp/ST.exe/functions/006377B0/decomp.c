
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_006377b0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  ushort *puVar1;
  uint local_8;
  
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,s_bulb_tel_007d1c30,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
    FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                 *(uint *)((int)puVar1 + 0xd),0x5a,0x33,0);
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(PTR_00807598,local_8,0,param_6);
    FUN_006ea960(PTR_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006ea460(PTR_00807598,local_8,param_1);
    if (param_2 == 0) {
      param_1 = 0xffffffff;
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
              ((AnonReceiver_006EA050 *)PTR_00807598,local_8,1,param_1,0);
    FUN_006eaaa0(PTR_00807598,local_8,0);
  }
  return;
}

