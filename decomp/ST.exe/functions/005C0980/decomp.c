
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::CreateBut */

undefined4 __thiscall
MReportTy::CreateBut
          (MReportTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 local_1cc [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_50;
  undefined4 local_4c [16];
  MReportTy *local_c;
  undefined4 local_8;
  
  puVar5 = local_1cc;
  local_c = this;
  for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_8 = 0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    local_1ac = *(undefined4 *)(local_c + 8);
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    (**(code **)(**(int **)(local_c + 0xc) + 8))(2,&local_8,0,local_1cc,0);
    DAT_00858df8 = (undefined4 *)local_50;
    return local_8;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar2 = FUN_006ad4d0(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x29f,0,iVar4,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_006a5e40(iVar4,0,0x7ccec8,0x29f);
  return 0;
}

