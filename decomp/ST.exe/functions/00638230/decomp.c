
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00638230(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  uint local_8;
  
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,s_rippleM_007d1c98,0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (DAT_00807598 != (void *)0x0)) {
    FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
                 *(uint *)((int)puVar1 + 0xd),(int)*(uint *)((int)puVar1 + 9) / 2,
                 (int)*(uint *)((int)puVar1 + 0xd) / 2 - 0x17,0);
    FUN_006e98e0(DAT_00807598,local_8,0,*(undefined4 *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    FUN_006ea270(DAT_00807598,local_8,0,0);
    FUN_006ea8a0(DAT_00807598,local_8,0,2,0);
    FUN_006ea960(DAT_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006ea4e0(DAT_00807598,local_8,1,*(int *)((int)puVar1 + 9) / 2,
                 *(int *)((int)puVar1 + 0xd) / 2 + -0x17);
    FUN_006ea050(DAT_00807598,local_8,1,0xffffffff,param_2);
    FUN_006eaaa0(DAT_00807598,local_8,0);
  }
  return;
}

