#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewDock

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9AB MOV CX,word ptr
   [EBP + 0xc] | 0062DA04 MOV AX,word ptr [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9B3 MOV CX,word ptr
   [EBP + 0x10] | 0062D9FD MOV CX,word ptr [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9BB MOV CX,word ptr
   [EBP + 0x14] | 0062DA13 MOV AX,word ptr [EBP + 0x14]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9A0 MOV CX,word ptr
   [EBP + 0x1c] | 0062D9F2 MOV CX,word ptr [EBP + 0x1c] */

uint __thiscall
STManRub3C::AddNewDock
          (STManRub3C *this,int param_1,ushort param_2,ushort param_3,ushort param_4,int param_5,
          ushort param_6,int *param_7)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  STManRub3C *pSVar4;
  int iVar5;
  DArrayTy *pDVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_7c;
  int local_38;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  undefined4 local_2c;
  undefined4 local_18;
  uint local_10;
  int local_c;
  STManRub3C *local_8;

  *param_7 = 0;
  local_10 = 0xffffffff;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar4 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x1c8,0,iVar5,"%s",
                               "STManRub3C::AddNewDock");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x1ca);
    return 0xffff;
  }
  if (local_8->field_0030[param_1 + 8] == 0) {
    pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x28,10);
    pSVar4->field_0030[param_1 + 8] = (uint)pDVar6;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(int *)(local_8->field_0030[param_1 + 8] + 0xc);
    uVar8 = 0;
    if (0 < local_c) {
      do {
        uVar1 = local_8->field_0030[param_1 + 8];
        if (uVar8 < *(uint *)(uVar1 + 0xc)) {
          piVar7 = (int *)(*(int *)(uVar1 + 8) * uVar8 + *(int *)(uVar1 + 0x1c));
        }
        else {
          piVar7 = (int *)0x0;
        }
        if ((piVar7 != (int *)0x0) && (*piVar7 == param_5)) {
          piVar7[3] = 0;
          *(ushort *)(piVar7 + 1) = param_6;
          *(ushort *)((int)piVar7 + 6) = param_2;
          *(ushort *)(piVar7 + 2) = param_3;
          *(ushort *)((int)piVar7 + 10) = param_4;
          piVar7[8] = 0;
          *param_7 = 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_c);
    }
  }
  puVar2 = (uint *)pSVar4->field_0030[param_1 + 8];
  if ((puVar2 != (uint *)0x0) && (*param_7 == 0)) {
    memset(&local_38, 0, 0x28); /* compiler bulk-zero initialization */
    local_34 = param_6;
    local_38 = param_5;
    local_30 = param_3;
    local_32 = param_2;
    local_2e = param_4;
    local_2c = 0;
    local_18 = 0;
    uVar8 = Library::DKW::TBL::FUN_006ae1c0(puVar2,&local_38);
    g_currentExceptionFrame = local_7c.previous;
    return uVar8;
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_10;
}

