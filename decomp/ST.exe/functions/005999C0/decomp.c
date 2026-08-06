#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PrepBkgMess */

void __thiscall FSGSTy::PrepBkgMess(FSGSTy *this,char param_1)

{
  ushort **slotStorage;
  FSGSTy *pFVar2;
  int iVar3;
  int uVar4;
  ushort *puVar3;
  int iVar6;
  uint uVar5;
  int iVar7;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pFVar2 = local_10;
  if (iVar3 == 0) {
    slotStorage = &local_10->field_1AC0;
    if (local_10->field_1AC0 != nullptr) {
      FreeAndNull(slotStorage);
    }
    if (param_1 == '\0') {
      local_8 = 0x106;
      local_c = 0x1b8;
    }
    else {
      local_8 = (-(uint)(param_1 != '\x01') & 0xfffffffb) + 0x17a;
      local_c = (-(uint)(param_1 != '\x01') & 0x129) + 0x1b8;
    }
    iVar7 = 1;
    puVar3 = pFVar2->field_005D + 0x14;
    uVar4 = FUN_006b4fe0((int)pFVar2->field_005D);
    puVar3 = (ushort *)
             FUN_006b50c0(local_c,local_8,(uint)pFVar2->field_005D[7],uVar4,(undefined4 *)puVar3,
                          iVar7);
    uVar5 = pFVar2->field_1ABC;
    *slotStorage = puVar3;
    FUN_006b2410(g_ddxContext_008075A8,uVar5,(uint)puVar3);
    FUN_006b2800(g_ddxContext_008075A8,pFVar2->field_1ABC,*(uint *)(*slotStorage + 2),
                 *(uint *)(*slotStorage + 4));
    if (param_1 == '\0') {
      uVar5 = 0xb4;
    }
    else {
      uVar5 = (-(uint)(param_1 != '\x01') & 0xffffff6e) + 0xb4;
    }
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,pFVar2->field_1ABC,0xffffffff,uVar5,
               (-(uint)(param_1 != '\0') & 0xffffffb4) + 0xaa);
    FUN_006b3af0((int *)g_ddxContext_008075A8,pFVar2->field_1ABC);
    pFVar2->field_1ABB = param_1;
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x3a8,0,iVar3,"%s",
                             "FSGSTy::PrepBkgMess");
  if (iVar6 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x3a8);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

