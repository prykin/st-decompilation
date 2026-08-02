
void __cdecl FUN_00637c50(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  char *text;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = param_2;
  if (param_2 == 0) {
    text = "mstarB";
  }
  else {
    text = "GrstarB";
  }
  puVar1 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  if ((puVar1 != nullptr) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    if (uVar3 == 0) {
      uVar3 = *(uint *)((int)puVar1 + 0xd);
      uVar2 = *(uint *)((int)puVar1 + 9);
      uVar5 = 0x45;
      uVar4 = 0x5a;
    }
    else {
      uVar3 = *(uint *)((int)puVar1 + 0xd);
      uVar2 = *(uint *)((int)puVar1 + 9);
      uVar5 = 100;
      uVar4 = 0x78;
    }
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)&param_2,1,0,uVar2,uVar3,uVar4,uVar5,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,param_2,0,*(int *)puVar1,*(int *)((int)puVar1 + 0x21),1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,param_2,0,0);
    Library::Ourlib::ST3DSMAP::SprSetSeqAnim(g_sT3DSMAPContext_00807598,param_2,2,param_1,param_3);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,param_2,0);
  }
  return;
}

