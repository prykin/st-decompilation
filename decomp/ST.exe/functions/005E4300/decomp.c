
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintBut */

void __thiscall
MTaskTy::PaintBut(MTaskTy *this,int *param_1,UINT param_2,int param_3,int param_4,short param_5)

{
  code *pcVar1;
  MTaskTy *pMVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_5c;
  MTaskTy *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;
  
  if (param_1 != (int *)0x0) {
    local_c = *(undefined4 **)(*param_1 + 4);
    local_14 = *(undefined4 **)(*param_1 + 8);
    puVar3 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar3 = local_c;
    }
    local_10 = (int)puVar3 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (*(char *)((int)param_1 + 10) == '\x01') {
      cVar7 = ((param_5 != 3) - 1U & 0xfe) + 0x2c;
    }
    else {
      cVar7 = ((param_5 != 3) - 1U & 0xfe) + 0x18;
    }
    _local_8 = CONCAT31(uStack_7,cVar7);
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      iVar4 = *param_1;
      uVar9 = *(uint *)(iVar4 + 0x14);
      if (uVar9 == 0) {
        uVar9 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
      iVar4 = local_10;
      puVar3 = local_14;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_006c7610(*param_1,0,0,0,(uint)local_c,(uint)local_14,local_10,0);
      if (param_4 != 0) {
        FUN_006c7570(*param_1,0,2,2,local_c + -1,(int)(puVar3 + -1),iVar4,(byte)_local_8);
      }
      FUN_006c7570(*param_1,0,0,0,local_c,(int)puVar3,iVar4,(byte)_local_8);
      pMVar2 = local_18;
      if (param_2 != 0) {
        ccFntTy::SetSurf(local_18->field_0089,*param_1,0,0,0,0,0);
        if (param_5 == 3) {
          iVar4 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 3;
        }
        else {
          iVar4 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 2;
        }
        iVar11 = -1;
        iVar10 = -1;
        puVar6 = (uint *)FUN_006b0140(param_2,HINSTANCE_00807618);
        ccFntTy::WrStr(pMVar2->field_0089,puVar6,iVar10,iVar11,iVar4);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x4b9,0,iVar4,
                                &DAT_007a4ccc,s_MTaskTy__PaintBut_007cdc8c);
    if (iVar10 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_task_obj_cpp_007cd994,0x4b9);
  }
  return;
}

