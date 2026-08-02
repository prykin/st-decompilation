
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __cdecl FUN_00637ae0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,"star_pp",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
               *(uint *)((int)puVar1 + 0xd),0x5a,0x45,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,(float)param_1 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_2 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,0);
    Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand(g_sT3DSMAPContext_00807598,local_8,1,0x5a,0x45);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,1,0xffffffff,0);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

