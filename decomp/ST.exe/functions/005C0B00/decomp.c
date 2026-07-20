
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintBut */

void __thiscall
MReportTy::PaintBut(MReportTy *this,AnonShape_005C0B00_CBE14AB4 *param_1,UINT param_2,int param_3,
                   char param_4,uint *param_5)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_64;
  int *local_20;
  byte *local_1c;
  uint *local_18;
  int local_14;
  char local_10;
  undefined3 uStack_f;
  MReportTy *local_c;
  undefined4 *local_8;
  
  if (param_1->field_0014 == 3) {
    cVar8 = (-(param_4 != '\0') & 0xedU) + 0x2a;
  }
  else {
    cVar8 = (-(param_4 != '\0') & 0xecU) + 0x2c;
  }
  local_20 = param_1->field_0018;
  _local_10 = CONCAT31(uStack_f,cVar8);
  if (param_4 == '\0') {
    local_14 = this->field_0077;
  }
  else {
    local_14 = this->field_007B;
  }
  local_1c = *(byte **)(local_14 + 8);
  local_8 = *(undefined4 **)(local_14 + 4);
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar7 = local_14;
  if (iVar5 == 0) {
    uVar10 = *(uint *)(local_14 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(local_14 + 0xe) * *(int *)(local_14 + 4) + 0x1f >> 3 & 0x1ffffffc)
               * *(int *)(local_14 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(local_14);
    pbVar4 = local_1c;
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_006c7610(iVar7,0,0,0,(uint)local_8,(uint)local_1c,param_3,0x4c);
    FUN_006c7570(iVar7,0,2,2,local_8 + -1,(int)(pbVar4 + -4),param_3,(byte)_local_10);
    FUN_006c7570(iVar7,0,0,0,local_8,(int)pbVar4,param_3,(byte)_local_10);
    if (((param_4 == '\0') && (param_2 != 0)) || ((param_4 != '\0' && (param_5 != (uint *)0x0)))) {
      if (param_4 == '\0') {
        param_5 = (uint *)FUN_006b0140(param_2,HINSTANCE_00807618);
      }
      local_18 = param_5;
      ccFntTy::SetSurf(local_c->field_0083,iVar7,0,0,0,0,0);
      sVar1 = param_1->field_0014;
      if ((sVar1 == 1) || (sVar1 == 2)) {
        iVar5 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 2;
      }
      else if (sVar1 == 3) {
        iVar5 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 3;
      }
      else {
        iVar5 = 4;
      }
      ccFntTy::WrStr(local_c->field_0083,local_18,-1,-1,iVar5);
    }
    piVar3 = local_20;
    FUN_006b5f80(DAT_008075a8,*local_20,local_20[1],(int)local_8,(int)pbVar4);
    PutDDXClip(*piVar3,piVar3[1],*piVar3,piVar3[1],(uint)local_8,pbVar4,'\x01',
               (BITMAPINFO *)local_c->field_005D);
    Library::DKW::DDX::FUN_006b48e0
              (DAT_0080759c,*piVar3,piVar3[1],iVar7,0,0,0,(uint)local_8,(int)pbVar4,
               (int)&local_c->field_0xa3,0x4c,0x10000ff);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x2c1,0,iVar5,&DAT_007a4ccc,
                             s_MReportTy__PaintBut_007cd044);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x2c1);
  return;
}

