
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::OutHoloProc */

void __thiscall HoloTy::OutHoloProc(HoloTy *this,uint param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  AnonShape_005AA6A0_963F03BF *in_stack_00000020;
  BITMAPINFO *pBVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_005AA6A0_963F03BF *local_8;
  
  local_8 = in_stack_00000020;
  if (((in_stack_00000020 != (AnonShape_005AA6A0_963F03BF *)0x0) &&
      (in_stack_00000020->field_0007 != (BITMAPINFO *)0x0)) && (in_stack_00000020->field_000B != 0))
  {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      uVar6 = 0;
      if (local_8->field_000F != 0) {
        do {
          local_c = *(int *)(local_8->field_000B +
                            (local_8->field_0013 * uVar6 + local_8->field_0017) * 4);
          if (local_c < local_8->field_001F) {
            cVar1 = local_8->field_0001;
            switch(cVar1) {
            case '\x01':
            case '\x03':
              DVar9 = local_8->field_001B;
              DVar10 = local_8->field_002F;
              iVar8 = DVar9 * uVar6;
              pBVar7 = local_8->field_0007;
              iVar5 = 0;
              iVar3 = ((-(uint)(cVar1 != '\x01') & 0xfffffffe) + 1) * local_c + local_8->field_0027;
              iVar4 = local_8->field_0023 + iVar8;
              break;
            case '\x02':
            case '\x04':
              DVar10 = local_8->field_001B;
              iVar5 = DVar10 * uVar6;
              DVar9 = local_8->field_002B;
              pBVar7 = local_8->field_0007;
              iVar8 = 0;
              iVar3 = local_8->field_0027 + iVar5;
              iVar4 = ((-(uint)(cVar1 != '\x02') & 0xfffffffe) + 1) * local_c + local_8->field_0023;
              break;
            default:
              goto switchD_005aa738_default;
            }
            Library::DKW::DDX::FUN_006b42d0
                      (param_1,iVar4,iVar3,pBVar7,(uint *)0x0,iVar8,iVar5,DVar9,DVar10);
          }
switchD_005aa738_default:
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)local_8->field_000F);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_hologram_cpp_007cc674,0x1e,0,iVar3,&DAT_007a4ccc,
                               s_HoloTy__OutHoloProc_007cc69c);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_hologram_cpp_007cc674,0x1e);
  }
  return;
}

