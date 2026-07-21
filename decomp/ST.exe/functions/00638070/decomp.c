
void __cdecl FUN_00638070(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;
  
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,s_iso_frnt_007d1c80,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
    FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                 *(uint *)((int)puVar1 + 0xd),0x5a,0x45,0);
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(PTR_00807598,local_8,0,0);
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
              ((AnonReceiver_006EA050 *)PTR_00807598,local_8,2,param_1,param_2);
    FUN_006eaaa0(PTR_00807598,local_8,0);
  }
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,s_iso_back_007d1c8c,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
    FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                 *(uint *)((int)puVar1 + 0xd),0x5a,0x45,0);
    FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(PTR_00807598,local_8,0,0);
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
              ((AnonReceiver_006EA050 *)PTR_00807598,local_8,2,param_1,param_2);
    FUN_006ea460(PTR_00807598,param_1,local_8);
    FUN_006eaaa0(PTR_00807598,local_8,0);
  }
  return;
}

