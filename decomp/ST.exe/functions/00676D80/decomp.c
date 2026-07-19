
int __cdecl
FUN_00676d80(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,
            undefined *param_12,undefined4 param_13,undefined *param_14)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  byte *pbVar9;
  void *unaff_EDI;
  bool bVar10;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  int local_1c;
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
  iVar3 = __setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar7 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x295,0,iVar3,&DAT_007a4ccc,
                               s__EnumPlObj_007d2df4);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x296);
    return iVar3;
  }
  local_1c = thunk_FUN_0042a990((char)param_1);
  if (local_1c == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x293);
  }
  else {
    local_14 = 0;
    if (*(int *)(local_1c + 0xc) != 0) {
      uVar8 = 0;
      if (*(int *)(local_1c + 0xc) == 0) {
        puVar4 = (undefined4 *)0x0;
        goto LAB_00676e12;
      }
      do {
        puVar4 = (undefined4 *)(*(int *)(local_1c + 8) * uVar8 + *(int *)(local_1c + 0x1c));
LAB_00676e12:
        this = (int *)*puVar4;
        if ((this != (int *)0x0) && (iVar3 = (**(code **)(*this + 0xf8))(), iVar3 != 0)) {
          local_10 = 1;
          uVar8 = (**(code **)(*this + 0x2c))();
          if (param_2 != 0) {
            if (uVar8 == 0x78) {
              if ((param_2 & 0x80000000) == 0) {
                if ((param_2 & 0x3fffffff) != 0) {
                  iVar3 = (**(code **)(*this + 0x2c))();
                  if (iVar3 == 0x78) {
                    uVar5 = *(uint *)((int)this + 0x259);
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
                    (((param_2 & 0x3fffffff) != 0 && ((param_2 & 0x3fffffff) != uVar8))))
            goto LAB_00676e88;
          }
          if (local_10 == 0) {
LAB_00677024:
            if (param_14 == (undefined *)0x0) goto LAB_00677041;
            iVar3 = (*(code *)param_14)(param_1,local_14,this,param_13);
          }
          else {
            if (param_3 != 0x3fffffff) {
              if (uVar8 == 0x78) {
                if ((param_3 & 0x80000000) == 0) {
                  iVar3 = (**(code **)(*this + 0x2c))();
                  if (iVar3 == 0x78) {
                    iVar3 = *(int *)((int)this + 0x259);
                  }
                  else {
                    iVar3 = 0;
                  }
                  uVar8 = thunk_FUN_00674fb0(iVar3);
joined_r0x00676ef3:
                  if ((uVar8 & param_3 & 0x3fffffff) != 0) goto LAB_00676efc;
                }
              }
              else if ((param_3 & 0x40000000) == 0) {
                uVar8 = thunk_FUN_00674fb0(uVar8);
                goto joined_r0x00676ef3;
              }
              local_10 = 0;
            }
LAB_00676efc:
            if (local_10 == 0) goto LAB_00677024;
            if ((param_4 != (byte *)0x0) && (*param_4 != 0)) {
              (**(code **)(*this + 0x74))(local_2c);
              pbVar9 = local_2c;
              pbVar6 = param_4;
              do {
                bVar1 = *pbVar6;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_00676f47:
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_00676f4c;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_00676f47;
                pbVar6 = pbVar6 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00676f4c:
              if (iVar3 != 0) {
                local_10 = 0;
              }
            }
            if ((local_10 == 0) ||
               ((local_5 != -1 && (iVar3 = (**(code **)(*this + 0x6c))(), local_5 != iVar3))))
            goto LAB_00677024;
            if ((0 < param_9) &&
               (((0 < param_10 && (0 < param_11)) &&
                ((thunk_FUN_004162b0(this,&local_8,&local_a,&local_c), local_8 < param_6 ||
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
        uVar8 = local_14 & 0xffff;
        if (*(uint *)(local_1c + 0xc) <= uVar8) {
          g_currentExceptionFrame = local_70.previous;
          return local_18;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return local_18;
}

