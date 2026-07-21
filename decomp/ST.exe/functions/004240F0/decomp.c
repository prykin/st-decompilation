
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SaveGrpData */

int __thiscall STGroupC::SaveGrpData(STGroupC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  STGroupC *pSVar5;
  undefined4 *puVar6;
  void *unaff_EDI;
  undefined4 *puVar7;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STGroupC *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_10;
  if (iVar2 == 0) {
    *param_1 = 0x40;
    if ((uint *)local_10->field_0029 != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020((uint *)local_10->field_0029,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    if ((uint *)pSVar5->field_002D != (uint *)0x0) {
      local_c = (undefined4 *)FUN_006b0020((uint *)pSVar5->field_002D,(int *)&local_8);
      FreeAndNull(&local_c);
      *param_1 = *param_1 + local_8;
    }
    iVar2 = Library::DKW::LIB::FUN_006aac70(*param_1);
    local_8 = 0;
    *(int *)(iVar2 + 4) = (int)pSVar5->field_0024;
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = pSVar5->field_0020;
    *(undefined2 *)(iVar2 + 0x18) = pSVar5->field_0025;
    *(undefined2 *)(iVar2 + 0x1a) = pSVar5->field_0027;
    *(undefined4 *)(iVar2 + 0x2c) = pSVar5->field_0031;
    *(undefined4 *)(iVar2 + 0x30) = pSVar5->field_0035;
    *(undefined4 *)(iVar2 + 0x34) = pSVar5->field_0039;
    local_18 = iVar2;
    if ((uint *)pSVar5->field_0029 == (uint *)0x0) {
      local_8 = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    else {
      local_c = (undefined4 *)FUN_006b0020((uint *)pSVar5->field_0029,(int *)&local_8);
      puVar6 = local_c;
      puVar7 = (undefined4 *)(iVar2 + 0x40);
      for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0x40;
      *(uint *)(iVar2 + 0x20) = local_8;
      FreeAndNull(&local_c);
      pSVar5 = local_10;
    }
    iVar3 = local_8 + 0x40;
    if ((uint *)pSVar5->field_002D == (uint *)0x0) {
      *(undefined4 *)(iVar2 + 0x24) = 0xffffffff;
      *(uint *)(iVar2 + 0x28) = local_8;
    }
    else {
      local_14 = iVar3;
      local_c = (undefined4 *)FUN_006b0020((uint *)pSVar5->field_002D,(int *)&local_8);
      puVar6 = local_c;
      puVar7 = (undefined4 *)(iVar3 + iVar2);
      for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(int *)(iVar2 + 0x24) = local_14;
      *(uint *)(iVar2 + 0x28) = local_8;
      FreeAndNull(&local_c);
    }
    *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    g_currentExceptionFrame = local_5c.previous;
    return iVar2;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1b9,0,iVar2,&DAT_007a4ccc,
                             s_STGroupC__SaveGrpData_007a5168);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1ba);
  return local_18;
}

