
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 659 | 661 | 662 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 12.
   Evidence: 00677290 -> 00676D80 @ 00677314 | 006773B0 -> 00676D80 @ 00677431 | 006774C0 ->
   00676D80 @ 00677544 | 006775E0 -> 00676D80 @ 00677665
   
   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

int __cdecl
_EnumPlObj(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,short param_11,
          undefined *param_12,uint *param_13,undefined *param_14)

{
  byte bVar1;
  STFishC *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  IMAGE_DOS_HEADER *pIVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  byte *pbVar10;
  void *unaff_EDI;
  bool bVar11;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  AnonNested_005F5B80_0169_794156D7 *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;
  
  local_18 = 0;
  if (param_5 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_5 < '\0') || (local_5 = param_5, '\b' < param_5)) {
    local_5 = -1;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar8 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x295,0,iVar3,&DAT_007a4ccc,
                               s__EnumPlObj_007d2df4);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x296);
    return iVar3;
  }
  local_1c = (AnonNested_005F5B80_0169_794156D7 *)thunk_FUN_0042a990((char)param_1);
  if (local_1c == (AnonNested_005F5B80_0169_794156D7 *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x293);
  }
  else {
    local_14 = 0;
    if (local_1c->field_000C != 0) {
      uVar9 = 0;
      if (local_1c->field_000C == 0) {
        puVar4 = (undefined4 *)0x0;
        goto LAB_00676e12;
      }
      do {
        puVar4 = (undefined4 *)(local_1c->field_0008 * uVar9 + local_1c->field_001C);
LAB_00676e12:
        this = (STFishC *)*puVar4;
        if ((this != (STFishC *)0x0) && (iVar3 = (*this->vtable->vfunc_F8)(), iVar3 != 0)) {
          local_10 = 1;
          uVar9 = (*this->vtable->vfunc_2C)();
          if (param_2 != 0) {
            if (uVar9 == 0x78) {
              if ((param_2 & 0x80000000) == 0) {
                if ((param_2 & 0x3fffffff) != 0) {
                  iVar3 = (*this->vtable->vfunc_2C)();
                  if (iVar3 == 0x78) {
                    uVar5 = *(uint *)&this->field_0x259;
                  }
                  else {
                    uVar5 = 0;
                  }
                  if ((param_2 & 0x3fffffff) != uVar5) goto LAB_00676e88;
                }
              }
              else {
LAB_00676e88:
                local_10 = 0;
              }
            }
            else if (((param_2 & 0x40000000) != 0) ||
                    (((param_2 & 0x3fffffff) != 0 && ((param_2 & 0x3fffffff) != uVar9))))
            goto LAB_00676e88;
          }
          if (local_10 == 0) {
LAB_00677024:
            if (param_14 == (undefined *)0x0) goto LAB_00677041;
            iVar3 = (*(code *)param_14)(param_1,local_14,this,param_13);
          }
          else {
            if (param_3 != 0x3fffffff) {
              if (uVar9 == 0x78) {
                if ((param_3 & 0x80000000) == 0) {
                  iVar3 = (*this->vtable->vfunc_2C)();
                  if (iVar3 == 0x78) {
                    iVar3 = *(int *)&this->field_0x259;
                  }
                  else {
                    iVar3 = 0;
                  }
                  pIVar6 = thunk_FUN_00674fb0(iVar3);
joined_r0x00676ef3:
                  if (((uint)pIVar6 & param_3 & 0x3fffffff) != 0) goto LAB_00676efc;
                }
              }
              else if ((param_3 & 0x40000000) == 0) {
                pIVar6 = thunk_FUN_00674fb0(uVar9);
                goto joined_r0x00676ef3;
              }
              local_10 = 0;
            }
LAB_00676efc:
            if (local_10 == 0) goto LAB_00677024;
            if ((param_4 != (byte *)0x0) && (*param_4 != 0)) {
              (*this->vtable->vfunc_74)(local_2c);
              pbVar10 = local_2c;
              pbVar7 = param_4;
              do {
                bVar1 = *pbVar7;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00676f47:
                  iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00676f4c;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00676f47;
                pbVar7 = pbVar7 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00676f4c:
              if (iVar3 != 0) {
                local_10 = 0;
              }
            }
            if ((local_10 == 0) ||
               ((local_5 != -1 && (iVar3 = (*this->vtable->vfunc_6C)(), local_5 != iVar3))))
            goto LAB_00677024;
            if ((0 < param_9) &&
               (((0 < param_10 && (0 < param_11)) &&
                ((STFishC::sub_004162B0(this,&local_8,&local_a,&local_c), local_8 < param_6 ||
                 ((((local_a < param_7 || (local_c < param_8)) ||
                   ((int)param_6 + (int)param_9 <= (int)local_8)) ||
                  (((int)param_7 + (int)param_10 <= (int)local_a ||
                   ((int)param_8 + (int)param_11 <= (int)local_c)))))))))) {
              local_10 = 0;
            }
            if ((local_10 == 0) || (param_12 == (undefined *)0x0)) goto LAB_00677024;
            iVar3 = (*(code *)param_12)(param_1,local_14,this,param_13);
          }
          if (iVar3 != 0) {
            g_currentExceptionFrame = local_70.previous;
            return -1;
          }
        }
LAB_00677041:
        local_14 = local_14 + 1;
        uVar9 = local_14 & 0xffff;
        if ((uint)local_1c->field_000C <= uVar9) {
          g_currentExceptionFrame = local_70.previous;
          return local_18;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return local_18;
}

