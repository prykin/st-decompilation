#include "../../pseudocode_runtime.h"


int __thiscall FUN_006d6a10(void *this,int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  AnonPointee_SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_006CEC40_0288 *pAVar6;
  DWORD DVar7;
  BOOL BVar8;
  uint uVar9;
  int iVar10;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  tagRECT local_54;
  int *local_44;
  RECT local_40;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  RECT local_20;
  RecoveredReceiver_006CEC40 *local_10;
  int local_c;
  int local_8;

  piVar2 = STField<int *>(this,0x2f8);
  if ((*(uint *)(STField<int>(this,0x288) + 4) & 0x20000000) == 0) {
    return 0;
  }
  iVar10 = 0;
  local_8 = 0;
  local_44 = piVar2;
  local_10 = this;
  /* ST_CALLSITE[006D6A49]: CALL dword ptr [0x0085bedc] */
  DVar7 = timeGetTime();
  *(int *)(STField<int>(this,0x288) + 0xe8) = *(int *)(STField<int>(this,0x288) + 0xe8) + 1;
  iVar3 = STField<int>(this,0x288);
  if (3 < STField<uint>(iVar3,0xE8)) {
    uVar9 = DVar7 - STField<int>(iVar3,0xEC);
    STField<int>(iVar3,0xF0) = STField<int>(iVar3,0xF0) + uVar9;
    if (uVar9 < *(uint *)(STField<int>(this,0x288) + 0xf4)) {
      *(uint *)(STField<int>(this,0x288) + 0xf4) = uVar9;
    }
    if (*(uint *)(STField<int>(this,0x288) + 0xf8) < uVar9) {
      *(uint *)(STField<int>(this,0x288) + 0xf8) = uVar9;
    }
  }
  *(DWORD *)(STField<int>(this,0x288) + 0xec) = DVar7;
  if (STField<int>(this,0x30c) == 0) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;

    iVar10 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
    this = local_10;
    if (iVar10 == 0) {

      iVar10 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_006CEC40::FUN_006d63e0
                         (local_10,param_1);
      local_8 = iVar10;

      Library::DKW::DDX::FUN_006bb370
                ((DDXContext *)((RecoveredReceiver_006CEC40 *)this)->field_0288->field_0028,0,0);
      g_currentExceptionFrame = local_98.previous;
    }
    else {
      g_currentExceptionFrame = local_98.previous;
      local_8 = iVar10;
    }
  }
  else {
    uVar9 = *(uint *)(STField<int>(this,0x288) + 4);
    if ((uVar9 & 1) == 0) {
      if (STField<int>(this,0x310) == 0) {
        if (STField<int>(this,0x300) != 0) {
          /* ST_CALLSITE[006D6DEA]: CALL dword ptr [EAX + 0x80] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          STField<undefined4>(this,0x300) = 0;
          STField<undefined4>(this,0x2fc) = 0;
        }
        iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
        if ((STField<uint>(iVar3,0x8) & 0x4000000) != 0) {
          /* ST_CALLSITE[006D6E16]: CALL dword ptr [0x0085bb8c] */
          EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }
        iVar3 = STField<int>(this,0x288);
        local_30 = STField<undefined4>(iVar3,0x8);
        local_2c = STField<undefined4>(iVar3,0xC);
        local_28 = STField<int>(iVar3,0x10) + STField<int>(iVar3,0x8);
        local_24 = STField<int>(iVar3,0x14) + STField<int>(iVar3,0xC);
        local_40.left = 0;
        local_40.top = 0;
        local_40.right = *(LONG *)(STField<int>(iVar3,0x28) + 0x18);
        local_40.bottom = *(LONG *)(STField<int>(iVar3,0x28) + 0x1c);
        local_20.left = *(int *)(STField<int>(iVar3,0x28) + 0x10) + STField<int>(iVar3,0x18);
        local_20.top = *(int *)(STField<int>(iVar3,0x28) + 0x14) + STField<int>(iVar3,0x1C);
        local_20.right = STField<int>(iVar3,0x20) + local_20.left;
        local_20.bottom = STField<int>(iVar3,0x24) + local_20.top;
        /* ST_CALLSITE[006D6E92]: CALL dword ptr [0x0085be50] */
        BVar8 = IntersectRect(&local_54,&local_20,&local_40);
        if (BVar8 != 0) {
          iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
          pcVar5 = *(code **)(iVar3 + 0x4e4);
          if (pcVar5 != nullptr) {
            /* ST_CALLSITE[006D6ECE]: CALL ECX */
            (*pcVar5)(STField<undefined4>(iVar3,0x4EC),local_54.left,local_54.top,
                      local_54.right - local_54.left,local_54.bottom - local_54.top);
          }
          piVar2 = local_44;
          local_c = 0;
          while( true ) {
            piVar4 = *(int **)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x40);
            /* ST_CALLSITE[006D6EF9]: CALL dword ptr [EDX + 0x14] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar10 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_54,piVar2,&local_30,0x1000000,0);
            local_8 = iVar10;
            if (iVar10 == 0) break;
            if (iVar10 == -0x7789fe3e) {
              /* ST_CALLSITE[006D6F10]: CALL dword ptr [EDX + 0x6c] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar2 + 0x6c))(piVar2);
              FUN_006cec40(*(AnonShape_006CEC40_BB23E716 **)(STField<int>(this,0x288) + 0x28));
            }
            else {
              if (((iVar10 != -0x7789ff60) && (iVar10 != -0x7789fe52)) || (local_c != 0)) break;
              /* ST_CALLSITE[006D6F3D]: CALL dword ptr [0x0085bc6c] */
              Sleep(2);
            }
            local_c = local_c + 1;
            if (1 < local_c) break;
          }
          if ((iVar10 == -0x7789ff60) || (iVar10 == -0x7789fe52)) {
            iVar10 = 0;
            local_8 = 0;
          }
        }
        iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
        if ((STField<uint>(iVar3,0x8) & 0x4000000) != 0) {
          /* ST_CALLSITE[006D6F7C]: CALL dword ptr [0x0085bb90] */
          LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }

        Library::DKW::DDX::FUN_006bb370(*(DDXContext **)(STField<int>(this,0x288) + 0x28),0,0);
      }
      else {
        if (STField<int>(this,0x300) != 0) {
          /* ST_CALLSITE[006D6D42]: CALL dword ptr [EAX + 0x80] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
          if ((STField<uint>(iVar3,0x8) & 0x4000000) != 0) {
            /* ST_CALLSITE[006D6D60]: CALL dword ptr [0x0085bb90] */
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
          }
          STField<undefined4>(this,0x300) = 0;
          STField<undefined4>(this,0x2fc) = 0;
        }
        local_dc.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_dc;

        iVar10 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
        this = local_10;
        if (iVar10 == 0) {

          Library::DKW::DDX::FUN_006bb370((DDXContext *)local_10->field_0288->field_0028,0,0);
          g_currentExceptionFrame = local_dc.previous;
          iVar10 = local_8;
        }
        else {
          g_currentExceptionFrame = local_dc.previous;
          local_8 = iVar10;
        }
      }
    }
    else if ((STField<int>(this,0x304) == 0) || ((uVar9 & 0x2000000) != 0)) {
      if (STField<int>(this,0x300) != 0) {
        /* ST_CALLSITE[006D6B6E]: CALL dword ptr [EAX + 0x80] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar2 + 0x80))(piVar2,0);
        STField<undefined4>(this,0x300) = 0;
        STField<undefined4>(this,0x2fc) = 0;
      }
      iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
      if ((STField<uint>(iVar3,0x8) & 0x4000000) != 0) {
        /* ST_CALLSITE[006D6B9A]: CALL dword ptr [0x0085bb8c] */
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
      iVar3 = STField<int>(this,0x288);
      local_30 = STField<undefined4>(iVar3,0x8);
      local_2c = STField<undefined4>(iVar3,0xC);
      local_28 = STField<int>(iVar3,0x10) + STField<int>(iVar3,0x8);
      local_24 = STField<int>(iVar3,0x14) + STField<int>(iVar3,0xC);
      local_40.left = 0;
      local_40.top = 0;
      local_40.right = *(LONG *)(STField<int>(iVar3,0x28) + 0x18);
      local_40.bottom = *(LONG *)(STField<int>(iVar3,0x28) + 0x1c);
      local_20.left = *(int *)(STField<int>(iVar3,0x28) + 0x10) + STField<int>(iVar3,0x18);
      local_20.top = *(int *)(STField<int>(iVar3,0x28) + 0x14) + STField<int>(iVar3,0x1C);
      /* ST_CALLSITE[006D6C05]: CALL dword ptr [0x0085be54] */
      ClientToScreen(*(HWND *)(STField<int>(iVar3,0x28) + 4),(LPPOINT)&local_20);
      local_c = 0;
      local_20.right = *(int *)(STField<int>(this,0x288) + 0x20) + local_20.left;
      local_20.bottom = *(int *)(STField<int>(this,0x288) + 0x24) + local_20.top;
      do {
        if (STField<int>(this,0x304) == 0) {
          piVar4 = *(int **)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x34);
          /* ST_CALLSITE[006D6C7E]: CALL dword ptr [EDX + 0x14] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar10 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_20,piVar2,&local_30,0x1000000,0);
        }
        else {
          /* ST_CALLSITE[006D6C57]: CALL dword ptr [ECX + 0x84] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar10 = (**(code **)(*piVar2 + 0x84))
                             (piVar2,&local_30,
                              *(undefined4 *)(*(int *)(STField<int>(this,0x288) + 0x28) + 0x34),
                              &local_20,0x4000,0);
        }
        local_8 = iVar10;
        if (iVar10 == 0) break;
        if (iVar10 == -0x7789fe3e) {
          /* ST_CALLSITE[006D6C95]: CALL dword ptr [EDX + 0x6c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar2 + 0x6c))(piVar2);
          FUN_006cec40(*(AnonShape_006CEC40_BB23E716 **)(STField<int>(this,0x288) + 0x28));
        }
        else {
          if (((iVar10 != -0x7789ff60) && (iVar10 != -0x7789fe52)) || (local_c != 0)) break;
          /* ST_CALLSITE[006D6CC2]: CALL dword ptr [0x0085bc6c] */
          Sleep(2);
        }
        local_c = local_c + 1;
      } while (local_c < 2);
      if ((iVar10 == -0x7789ff60) || (iVar10 == -0x7789fe52)) {
        iVar10 = 0;
        local_8 = 0;
      }
      if (iVar10 == 0) {
        puVar1 = (uint *)(STField<int>(this,0x288) + 4);
        *puVar1 = *puVar1 & 0xfdffffff;
      }
      iVar3 = *(int *)(STField<int>(this,0x288) + 0x28);
      if ((STField<uint>(iVar3,0x8) & 0x4000000) != 0) {
        /* ST_CALLSITE[006D6D1A]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
    }
  }
  /* ST_CALLSITE[006D6F95]: CALL dword ptr [0x0085bedc] */
  DVar7 = timeGetTime();
  pAVar6 = ((RecoveredReceiver_006CEC40 *)this)->field_0288;
  if (3 < (uint)pAVar6[5].field_000C) {
    uVar9 = DVar7 - pAVar6[5].field_0010;
    pAVar6[5].field_0020 = pAVar6[5].field_0020 + uVar9;
    if (uVar9 < (uint)((RecoveredReceiver_006CEC40 *)this)->field_0288[5].field_0024) {
      ((RecoveredReceiver_006CEC40 *)this)->field_0288[5].field_0024 = uVar9;
    }
    if ((uint)((RecoveredReceiver_006CEC40 *)this)->field_0288[5].field_0028 < uVar9) {
      ((RecoveredReceiver_006CEC40 *)this)->field_0288[5].field_0028 = uVar9;
    }
  }
  return iVar10;
}

