#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout

   [STPrototypeApplier] Propagated return.
   Evidence: 004A0590 returns return of STGroupBoatC::Way3DGrpGetDistrPoint @ 004A0681 */

uint * __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  undefined1 *puVar1;
  short *psVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  DArrayTy *array;
  STBoatC *pSVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  DArrayTy *local_1c;
  STGroupBoatC *local_18;
  uint *local_14;
  DArrayTy *local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(uint *)(this->field_0029 + 0xc);
  local_14 = (uint *)0x2;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pSVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar1 = &local_18->field_0x300;
      puVar10 = (undefined4 *)&local_18->field_0x89;
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      local_18->field_0065 = 0;
      psVar2 = &local_18->field_0302;
      local_18->field_02FA = local_18->field_01C1;
      *(undefined2 *)&local_18->field_0x2fc = local_18->field_01C3;
      *(undefined2 *)&local_18->field_0x2f8 = *(undefined2 *)&local_18->field_0x1bf;
      thunk_FUN_0049a500(local_18,&local_18->field_02FE,(undefined2 *)puVar1,psVar2);
      local_10 = (DArrayTy *)
                 Way3DGrpGetDistrPoint
                           (pSVar4,(AnonShape_00413AF0_B6B4EE9A *)pSVar4->field_0029,
                            (int)pSVar4->field_02FE,(int)*(short *)puVar1,(int)*psVar2,
                            (int)*(short *)&pSVar4->field_0x2f8,(int)pSVar4->field_02FA,
                            (int)*(short *)&pSVar4->field_0x2fc);
      if (local_10 == (DArrayTy *)0x0) {
        return (uint *)0x0;
      }
      array = (DArrayTy *)
              Way3DGrpGetDistrPoint
                        (pSVar4,(AnonShape_00413AF0_B6B4EE9A *)pSVar4->field_0029,
                         (int)*(short *)&pSVar4->field_0x2f8,(int)pSVar4->field_02FA,
                         (int)*(short *)&pSVar4->field_0x2fc,(int)pSVar4->field_02FE,
                         (int)*(short *)puVar1,(int)*psVar2);
      local_1c = array;
      if (array == (DArrayTy *)0x0) {
        DArrayDestroy(local_10);
        return (uint *)0x0;
      }
      uVar11 = 0;
      local_3c = PTR_00802a38->field_00E4;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement(local_10,uVar11,&local_24);
          DArrayGetElement(array,uVar11,&local_2c);
          DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar4->field_0024,local_c,CASE_1);
            if (pSVar6 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            STBoatC::CmdToObj(pSVar6,CASE_8,&local_3c);
            array = local_1c;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      DArrayDestroy(local_10);
      DArrayDestroy(array);
    }
    if ((uint)PTR_00802a38->field_00E4 % 0x19 == 3) {
      uVar11 = 0;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar4->field_0024,local_c,CASE_1);
            if (pSVar6 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd3d);
            }
            iVar5 = thunk_FUN_0045ff10((int)pSVar6);
            if (iVar5 == 8) break;
            uVar7 = STBoatC::CheckPBoxCmd(pSVar6,CASE_8);
            if (uVar7 == 1) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      if (uVar11 == local_8) {
        local_14 = (uint *)0x0;
      }
    }
    g_currentExceptionFrame = local_80.previous;
  }
  else {
    g_currentExceptionFrame = local_80.previous;
    if (iVar5 != -0x5001fff7) {
      iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar5,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Scout_007ac178);
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd47);
      return (uint *)0xffffffff;
    }
  }
  return local_14;
}

