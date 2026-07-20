
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_volc.cpp
   STVolcanoC::LoadImagVolcano */

undefined4 __thiscall STVolcanoC::LoadImagVolcano(STVolcanoC *this,int param_1)

{
  code *pcVar1;
  STVolcanoC *pSVar2;
  int errorCode;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  STVolcanoC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (errorCode == 0) {
    if ((param_1 == 0) || (param_1 == 2)) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,s_expl_vol_007d26b0,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660(PTR_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x5a,0x2f,0);
      FUN_006e98e0(PTR_00807598,local_8,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,local_8,0,pSVar2->field_0071);
      FUN_006e92c0(PTR_00807598,local_8,9.950249);
      FUN_006ea960(PTR_00807598,local_8,(float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(PTR_00807598,local_8,0);
      pSVar2->field_0061 = puVar3;
      pSVar2->field_005D = local_8;
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,s_expl_vob_007d26c8,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660(PTR_00807598,(int *)&local_c,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x40,0x6a,0);
      FUN_006e98e0(PTR_00807598,local_c,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,local_c,0,pSVar2->field_008A);
      FUN_006ea960(PTR_00807598,local_c,(float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(PTR_00807598,local_c,0);
      FUN_006ea460(PTR_00807598,local_c,local_8);
      pSVar2->field_0086 = local_c;
    }
    if ((param_1 != 0) && ((int)pSVar2->field_007A < 0)) {
      puVar3 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806764,CASE_1D,s_expl_vop_007d26bc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
      FUN_006e8660(PTR_00807598,(int *)&local_10,1,0,*(uint *)((int)puVar3 + 9),
                   *(uint *)((int)puVar3 + 0xd),0x4b,0x7e,0);
      FUN_006e98e0(PTR_00807598,local_10,0,*(undefined4 *)puVar3,*(int *)((int)puVar3 + 0x21),1);
      FUN_006ea270(PTR_00807598,local_10,0,pSVar2->field_007E);
      FUN_006ea960(PTR_00807598,local_10,(float)pSVar2->field_0065 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_0069 * _DAT_007904f8 * _DAT_007904f0,
                   (float)pSVar2->field_006D * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006eaaa0(PTR_00807598,local_10,0);
      FUN_006ea460(PTR_00807598,local_10,pSVar2->field_005D);
      pSVar2->field_007A = local_10;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_18;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_nick_to_volc_cpp_007d26e4,0x214,0,errorCode,&DAT_007a4ccc
                             ,s_STVolcanoC__LoadImagVolcano_007d2724);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  RaiseInternalException(errorCode,0,s_E____titans_nick_to_volc_cpp_007d26e4,0x216);
  return 0xffff;
}

