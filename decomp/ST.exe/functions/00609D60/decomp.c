
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_field.cpp
   STFieldC::LoadImagSpr */

undefined4 __thiscall STFieldC::LoadImagSpr(STFieldC *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar8;
  byte *pbVar9;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  uint *local_c;
  uint local_8;
  
  iVar4 = this->field_0234;
  local_10 = 0;
  if (iVar4 == 0) {
    return 0;
  }
  if (param_1 < *(uint *)(iVar4 + 0xc)) {
    local_c = (uint *)(*(int *)(iVar4 + 8) * param_1 + *(int *)(iVar4 + 0x1c));
  }
  else {
    local_c = (uint *)0x0;
  }
  if ((local_c != (uint *)0x0) && (local_c[1] != 0xffffffff)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar3 = local_c;
    if (iVar4 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage(s_E____titans_nick_to_field_cpp_007cf850,0x248,0,iVar4,
                                 &DAT_007a4ccc,s_STFieldC__LoadImagSpr_007cf898);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      RaiseInternalException(iVar4,0,s_E____titans_nick_to_field_cpp_007cf850,0x24a);
      return 0xffff;
    }
    uVar1 = *local_c;
    if (uVar1 < 4) {
      pbVar9 = (&PTR_s_pics_g_007cf6d0)[uVar1];
      piVar8 = DAT_00806764;
    }
    else {
      pbVar9 = (&PTR_s_pics_g_007cf6d0)[uVar1];
      piVar8 = DAT_00806774;
    }
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (piVar8,CASE_1D,pbVar9,0xffffffff,0,1,0,(undefined4 *)0x0);
    FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,*(uint *)((int)puVar5 + 9),
                 *(uint *)((int)puVar5 + 0xd),*(int *)(&DAT_007cf6f0 + *puVar3 * 8) / 2,
                 *(int *)(&DAT_007cf6f4 + *puVar3 * 8) / 2 - 0xe,0);
    FUN_006e98e0(DAT_00807598,local_8,0,*(undefined4 *)puVar5,*(int *)((int)puVar5 + 0x21),1);
    FUN_006ea270(DAT_00807598,local_8,0,0);
    FUN_006ea5e0(DAT_00807598,local_8,0,0);
    FUN_006ea960(DAT_00807598,local_8,(float)(int)puVar3[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar3[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)puVar3[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    FUN_006eaaa0(DAT_00807598,local_8,0);
    puVar3[1] = 1;
    puVar3[0xf] = local_8;
    g_currentExceptionFrame = local_54.previous;
  }
  return local_10;
}

