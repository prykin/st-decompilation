
void __cdecl FUN_00637e60(uint param_1,int param_2)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,"star_em",0xffffffff,0,1,0,(undefined4 *)0x0);
  if ((puVar1 != (ushort *)0x0) && (g_sT3DSMAPContext_00807598 != (ST3DSMAPContext *)0x0)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
               *(uint *)((int)puVar1 + 0xd),0x5a,0x45,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,1,param_1,param_2);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

