
int __thiscall FUN_006d6a10(void *this,int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  tagRECT local_54;
  int *local_44;
  RECT local_40;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  RECT local_20;
  AnonReceiver_006CEC40 *local_10;
  int local_c;
  int local_8;

  piVar2 = *(int **)((int)this + 0x2f8);
  if ((*(uint *)(*(int *)((int)this + 0x288) + 4) & 0x20000000) == 0) {
    return 0;
  }
  iVar9 = 0;
  local_8 = 0;
  local_44 = piVar2;
  local_10 = this;
  DVar6 = timeGetTime();
  *(int *)(*(int *)((int)this + 0x288) + 0xe8) = *(int *)(*(int *)((int)this + 0x288) + 0xe8) + 1;
  iVar3 = *(int *)((int)this + 0x288);
  if (3 < *(uint *)(iVar3 + 0xe8)) {
    uVar8 = DVar6 - *(int *)(iVar3 + 0xec);
    *(int *)(iVar3 + 0xf0) = *(int *)(iVar3 + 0xf0) + uVar8;
    if (uVar8 < *(uint *)(*(int *)((int)this + 0x288) + 0xf4)) {
      *(uint *)(*(int *)((int)this + 0x288) + 0xf4) = uVar8;
    }
    if (*(uint *)(*(int *)((int)this + 0x288) + 0xf8) < uVar8) {
      *(uint *)(*(int *)((int)this + 0x288) + 0xf8) = uVar8;
    }
  }
  *(DWORD *)(*(int *)((int)this + 0x288) + 0xec) = DVar6;
  if (*(int *)((int)this + 0x30c) == 0) {
    local_98.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_98;
    iVar9 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
    this = local_10;
    if (iVar9 == 0) {
      iVar9 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006CEC40::FUN_006d63e0
                        (local_10,param_1);
      local_8 = iVar9;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      Library::DKW::DDX::FUN_006bb370
                (*(int *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x28),0,0);
      g_currentExceptionFrame = local_98.previous;
    }
    else {
      g_currentExceptionFrame = local_98.previous;
      local_8 = iVar9;
    }
  }
  else {
    uVar8 = *(uint *)(*(int *)((int)this + 0x288) + 4);
    if ((uVar8 & 1) == 0) {
      if (*(int *)((int)this + 0x310) == 0) {
        if (*(int *)((int)this + 0x300) != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          *(undefined4 *)((int)this + 0x300) = 0;
          *(undefined4 *)((int)this + 0x2fc) = 0;
        }
        iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
        if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }
        iVar3 = *(int *)((int)this + 0x288);
        local_30 = *(undefined4 *)(iVar3 + 8);
        local_2c = *(undefined4 *)(iVar3 + 0xc);
        local_28 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
        local_24 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0xc);
        local_40.left = 0;
        local_40.top = 0;
        local_40.right = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x18);
        local_40.bottom = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x1c);
        local_20.left = *(int *)(*(int *)(iVar3 + 0x28) + 0x10) + *(int *)(iVar3 + 0x18);
        local_20.top = *(int *)(*(int *)(iVar3 + 0x28) + 0x14) + *(int *)(iVar3 + 0x1c);
        local_20.right = *(int *)(iVar3 + 0x20) + local_20.left;
        local_20.bottom = *(int *)(iVar3 + 0x24) + local_20.top;
        BVar7 = IntersectRect(&local_54,&local_20,&local_40);
        if (BVar7 != 0) {
          iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
          pcVar5 = *(code **)(iVar3 + 0x4e4);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(*(undefined4 *)(iVar3 + 0x4ec),local_54.left,local_54.top,
                      local_54.right - local_54.left,local_54.bottom - local_54.top);
          }
          piVar2 = local_44;
          local_c = 0;
          while( true ) {
            piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x40);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar9 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_54,piVar2,&local_30,0x1000000,0);
            local_8 = iVar9;
            if (iVar9 == 0) break;
            if (iVar9 == -0x7789fe3e) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*piVar2 + 0x6c))(piVar2);
              FUN_006cec40(*(AnonShape_006CEC40_BB23E716 **)(*(int *)((int)this + 0x288) + 0x28));
            }
            else {
              if (((iVar9 != -0x7789ff60) && (iVar9 != -0x7789fe52)) || (local_c != 0)) break;
              Sleep(2);
            }
            local_c = local_c + 1;
            if (1 < local_c) break;
          }
          if ((iVar9 == -0x7789ff60) || (iVar9 == -0x7789fe52)) {
            iVar9 = 0;
            local_8 = 0;
          }
        }
        iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
        if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
        }
        Library::DKW::DDX::FUN_006bb370(*(int *)(*(int *)((int)this + 0x288) + 0x28),0,0);
      }
      else {
        if (*(int *)((int)this + 0x300) != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar2 + 0x80))(piVar2,0);
          iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
          if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
          }
          *(undefined4 *)((int)this + 0x300) = 0;
          *(undefined4 *)((int)this + 0x2fc) = 0;
        }
        local_dc.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_dc;
        iVar9 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
        this = local_10;
        if (iVar9 == 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          Library::DKW::DDX::FUN_006bb370(*(int *)(*(int *)&local_10->field_0x288 + 0x28),0,0);
          g_currentExceptionFrame = local_dc.previous;
          iVar9 = local_8;
        }
        else {
          g_currentExceptionFrame = local_dc.previous;
          local_8 = iVar9;
        }
      }
    }
    else if ((*(int *)((int)this + 0x304) == 0) || ((uVar8 & 0x2000000) != 0)) {
      if (*(int *)((int)this + 0x300) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*piVar2 + 0x80))(piVar2,0);
        *(undefined4 *)((int)this + 0x300) = 0;
        *(undefined4 *)((int)this + 0x2fc) = 0;
      }
      iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
      if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
      iVar3 = *(int *)((int)this + 0x288);
      local_30 = *(undefined4 *)(iVar3 + 8);
      local_2c = *(undefined4 *)(iVar3 + 0xc);
      local_28 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
      local_24 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0xc);
      local_40.left = 0;
      local_40.top = 0;
      local_40.right = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x18);
      local_40.bottom = *(LONG *)(*(int *)(iVar3 + 0x28) + 0x1c);
      local_20.left = *(int *)(*(int *)(iVar3 + 0x28) + 0x10) + *(int *)(iVar3 + 0x18);
      local_20.top = *(int *)(*(int *)(iVar3 + 0x28) + 0x14) + *(int *)(iVar3 + 0x1c);
      ClientToScreen(*(HWND *)(*(int *)(iVar3 + 0x28) + 4),(LPPOINT)&local_20);
      local_c = 0;
      local_20.right = *(int *)(*(int *)((int)this + 0x288) + 0x20) + local_20.left;
      local_20.bottom = *(int *)(*(int *)((int)this + 0x288) + 0x24) + local_20.top;
      do {
        if (*(int *)((int)this + 0x304) == 0) {
          piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x34);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar9 = (**(code **)(*piVar4 + 0x14))(piVar4,&local_20,piVar2,&local_30,0x1000000,0);
        }
        else {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar9 = (**(code **)(*piVar2 + 0x84))
                            (piVar2,&local_30,
                             *(undefined4 *)(*(int *)(*(int *)((int)this + 0x288) + 0x28) + 0x34),
                             &local_20,0x4000,0);
        }
        local_8 = iVar9;
        if (iVar9 == 0) break;
        if (iVar9 == -0x7789fe3e) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*piVar2 + 0x6c))(piVar2);
          FUN_006cec40(*(AnonShape_006CEC40_BB23E716 **)(*(int *)((int)this + 0x288) + 0x28));
        }
        else {
          if (((iVar9 != -0x7789ff60) && (iVar9 != -0x7789fe52)) || (local_c != 0)) break;
          Sleep(2);
        }
        local_c = local_c + 1;
      } while (local_c < 2);
      if ((iVar9 == -0x7789ff60) || (iVar9 == -0x7789fe52)) {
        iVar9 = 0;
        local_8 = 0;
      }
      if (iVar9 == 0) {
        puVar1 = (uint *)(*(int *)((int)this + 0x288) + 4);
        *puVar1 = *puVar1 & 0xfdffffff;
      }
      iVar3 = *(int *)(*(int *)((int)this + 0x288) + 0x28);
      if ((*(uint *)(iVar3 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x4f0));
      }
    }
  }
  DVar6 = timeGetTime();
  iVar3 = *(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288;
  if (3 < *(uint *)(iVar3 + 0xe8)) {
    uVar8 = DVar6 - *(int *)(iVar3 + 0xec);
    *(uint *)(iVar3 + 0xfc) = *(int *)(iVar3 + 0xfc) + uVar8;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (uVar8 < *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x100)) {
      *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x100) = uVar8;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x104) < uVar8) {
      *(uint *)(*(int *)&((AnonReceiver_006CEC40 *)this)->field_0x288 + 0x104) = uVar8;
    }
  }
  return iVar9;
}

