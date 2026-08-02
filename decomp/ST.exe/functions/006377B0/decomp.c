
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_006377b0(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  ushort *puVar1;
  uint local_8;

  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,"bulb_tel",0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar1 + 9),
               *(uint *)((int)puVar1 + 0xd),0x5a,0x33,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,param_6);
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,local_8,(float)param_3 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_4 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_5 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,local_8,param_1);
    if (param_2 == 0) {
      param_1 = 0xffffffff;
    }
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,local_8,1,param_1,0);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
  }
  return;
}

