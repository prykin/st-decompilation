
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::ChangePlayer
   
   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall FSGSTy::ChangePlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  AnonShape_00413AF0_B6B4EE9A *local_c;
  FSGSTy *local_8;
  
  if (((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) &&
     (this->field_1EA6 != (DArrayTy *)0x0)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar6 = 0;
      local_c = (AnonShape_00413AF0_B6B4EE9A *)local_8->field_1EA6;
      local_10 = ((DArrayTy *)local_c)->count;
      if (local_10 != 0) {
        if (local_10 == 0) {
          pbVar8 = (byte *)0x0;
          goto LAB_005a2aea;
        }
        do {
          pbVar8 = (byte *)(((DArrayTy *)local_c)->elementSize * uVar6 +
                           (int)((DArrayTy *)local_c)->data);
LAB_005a2aea:
          pbVar4 = pbVar8;
          pbVar7 = param_1;
          if (pbVar8 != (byte *)0x0) {
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_005a2b17:
                iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_005a2b1c;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_005a2b17;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_005a2b1c:
            if (iVar3 == 0) {
              *(undefined4 *)(pbVar8 + 0x25) = *(undefined4 *)(param_1 + 0x25);
              break;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_10);
      }
      local_8->field_002D = 5;
      FUN_006e6080(local_8,2,local_8->field_1B20,(undefined4 *)&local_8->field_0x1d);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa50,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__ChangePlayer_007cc4e4);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa50);
  }
  return;
}

